// Fill out your copyright notice in the Description page of Project Settings.


#include "HealKit.h"
#include "Components/MeshComponent.h"
#include "Engine.h"
#include "final_sampleCharacter.h"
#include "Kismet/GameplayStatics.h" //added to play sounds
#include "Kismet/KismetTextLibrary.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AHealKit::AHealKit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = MeshComponent;

	//BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	//BoxComponent->SetupAttachment(RootComponent);
	//BoxComponent->SetBoxExtent(FVector(60, 60, 60));
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

	if (isHealing)
	{
		if (GetWorld()->TimeSeconds >= endTime)
		{
			Destroy();
		}
		Player->HP += HealAmount * DeltaTime;
		if (Player->HP >= 1.0f)
		{
			Player->HP = 1.0f;
		}
	}
}


void AHealKit::NotifyHit(UPrimitiveComponent * MyComp, AActor * Other, UPrimitiveComponent * OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult & Hit)
{
	Player = Cast<Afinal_sampleCharacter>(Other);
	if (Player != nullptr)
	{
		HealAmount = ((1.0f - Player->HP) / Duration);
		isHealing = true;
		//startTime = GetWorld()->TimeSeconds;
		endTime = GetWorld()->TimeSeconds + Duration;
		
		UGameplayStatics::PlaySound2D(this, HealSoundCue);
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Healing..."));
		//hide the kit
		MeshComponent->SetVisibility(false);
		MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}



//void AHealKit::NotifyActorBeginOverlap(AActor * OtherActor)
//{
//	auto player = Cast<Afinal_sampleCharacter>(OtherActor);
//	
//	if (player != nullptr)
//	{
//		isHealing = true;
//		MeshComponent->SetVisibility(false);
//		MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
//		BoxComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
//		GetWorld()->GetTimerManager().SetTimer(timerHandle, this, &AHealKit::Heal, 0.1f, true);
//
//		if (HealSoundCue != nullptr)
//		{
//			UGameplayStatics::PlaySound2D(this, HealSoundCue);
//		}
//
//		if (isHealing && Player->HP > 1.0f)
//		{
//			isHealing = false;
//			GetWorld()->GetTimerManager().ClearTimer(timerHandle);
//			Destroy();
//		}
//	}
//}

//void AHealKit::Heal()
//{
//	Player->HP += HealAmount;
//}

