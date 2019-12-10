// Fill out your copyright notice in the Description page of Project Settings.


#include "HealKit.h"
#include "Components/MeshComponent.h"
#include "UnrealEngine.h"
#include "final_sampleCharacter.h"
#include "Kismet/GameplayStatics.h" //added to play sounds
#include "Kismet/KismetTextLibrary.h"

// Sets default values
AHealKit::AHealKit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = MeshComponent;

	isHealing = false;
}

// Called when the game starts or when spawned
void AHealKit::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AHealKit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//Rotator
	this->AddActorLocalRotation(FRotator(0, 1, 0));

	//Heal Player
	if (isHealing)
	{
		if (Player != nullptr && Player->HP < 1.0f)
		{
			Player->HP += HealAmount * (DeltaTime * Duration);
			
			if (Player->HP > 1.0f)
			{
				isHealing = false;
			}
		}
	}
}

void AHealKit::NotifyHit(UPrimitiveComponent * MyComp, AActor * Other, UPrimitiveComponent * OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult & Hit)
{
	if (Other != nullptr)
	{
		Player = Cast<Afinal_sampleCharacter>(Other);
		HealAmount = ((1.0f - Player->HP) / Duration);
		isHealing = true;
		UGameplayStatics::PlaySound2D(this, HealSoundCue);
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Healing..."));
		this->Destroy();
	}
}

void AHealKit::Heal(AActor * Character)
{
	if (Character != nullptr)
	{
		auto player = Cast<Afinal_sampleCharacter>(Character);
		if (player->HP < 1.0f && Character != nullptr)
		{
			Player->HP += HealAmount;
		}
	}
}

