// Fill out your copyright notice in the Description page of Project Settings.


#include "RarestCandy.h"
#include "Kismet/GameplayStatics.h"
#include "Engine.h"
#include "G1213ANGECharacter.h"

// Sets default values
ARarestCandy::ARarestCandy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;
}

// Called when the game starts or when spawned
void ARarestCandy::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ARarestCandy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	this->AddActorLocalRotation(FRotator(0, 1, 0));
}

void ARarestCandy::NotifyHit(UPrimitiveComponent * MyComp, AActor * Other, UPrimitiveComponent * OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult & Hit)
{
	Player = Cast<AG1213ANGECharacter>(Other);
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::FromInt(Player->PlayerLevel));
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::FromInt(Player->CandyCollected));
	if (SoundCue != nullptr)
	{
		UGameplayStatics::PlaySound2D(this, SoundCue);
	}
	if (Player != nullptr)
	{
		Player->PlayerLevel += (1 + Player->CandyCollected);
		Player->CandyCollected++;
		
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::FromInt(Player->PlayerLevel));
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::FromInt(Player->CandyCollected));
		Destroy();
	}
	
}

