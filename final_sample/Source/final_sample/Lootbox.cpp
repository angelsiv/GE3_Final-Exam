// Fill out your copyright notice in the Description page of Project Settings.


#include "Lootbox.h"
#include "Engine.h"

// Sets default values
ALootbox::ALootbox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALootbox::BeginPlay()
{
	Super::BeginPlay();
	if (Player != nullptr)
	{
		Player->InputComponent->BindAction("Loot", IE_Pressed, this, &ALootbox::ReceiveItem);
	}
}

// Called every frame
void ALootbox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALootbox::ReceiveItem()
{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, TEXT("Looting..."));
	FMath random;

	auto randomVariable = random.FRandRange(0.0f, 1.0f);
	if (randomVariable <= commonPercentage)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, TEXT("Common item received!"));
	}
	else if (randomVariable >= commonPercentage && randomVariable <= rarePercentage)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, TEXT("Rare item received!"));
	}
}

