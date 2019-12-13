// Fill out your copyright notice in the Description page of Project Settings.


#include "UnluckyTrap.h"
#include "Components/StaticMeshComponent.h"
#include "G1213ANGECharacter.h"
#include "Engine.h"

// Sets default values
AUnluckyTrap::AUnluckyTrap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent2"));
	RootComponent = MeshComponent1;
	MeshComponent2->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AUnluckyTrap::BeginPlay()
{
	Super::BeginPlay();
	MeshComponent1->CanEditSimulatePhysics();
	MeshComponent2->CanEditSimulatePhysics();
}

// Called every frame
void AUnluckyTrap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AUnluckyTrap::NotifyHit(UPrimitiveComponent * MyComp, AActor * Other, UPrimitiveComponent * OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult & Hit)
{
	Player = Cast<AG1213ANGECharacter>(Other);
	if (Player != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, FString::FromInt(Player->PlayerLevel));
		if (Player->PlayerLevel % UnluckyValue == 0)
		{
			Player->PlayerLevel -= 2;
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, FString::FromInt(Player->PlayerLevel));
		}
		else
		{
			Player->PlayerLevel--;
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, FString::FromInt(Player->PlayerLevel));
		}
		Destroy();
	}
}

