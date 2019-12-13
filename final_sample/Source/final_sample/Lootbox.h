// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "final_sampleCharacter.h"
#include "Lootbox.generated.h"

UCLASS()
class FINAL_SAMPLE_API ALootbox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALootbox();

	UPROPERTY(EditAnywhere) class Afinal_sampleCharacter* Player;

	const float commonPercentage = 0.6f;
	const float rarePercentage = 0.3f;
	const float legendaryPercentage = 0.1f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void ReceiveItem();
};
