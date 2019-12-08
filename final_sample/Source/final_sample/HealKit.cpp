// Fill out your copyright notice in the Description page of Project Settings.


#include "HealKit.h"
#include "Components/MeshComponent.h"
#include "UnrealEngine.h"
#include "final_sampleCharacter.h"
#include "Kismet/GameplayStatics.h" //added to play sounds

// Sets default values
bool isActivated = false;
AHealKit::AHealKit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = MeshComponent;
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
	this->AddActorLocalRotation(FRotator(0, 1, 0));
	
	/*if (isActivated)
	{
		Heal(Player);
	}
	if (Player->HP >= 1.0f)
	{
		isActivated = false;
	}*/
}

void AHealKit::NotifyHit(UPrimitiveComponent * MyComp, AActor * Other, UPrimitiveComponent * OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult & Hit)
{
	Player = Cast<Afinal_sampleCharacter>(Other);
	UGameplayStatics::PlaySound2D(this, HealSoundCue);
	//isActivated = true;
	Heal(Player);
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Healing..."));
	this->Destroy();
}

void AHealKit::Heal(AActor * Character)
{
	HealAmount = ((1.0f - Player->HP) / Duration);
	Player->HP += HealAmount;
}

