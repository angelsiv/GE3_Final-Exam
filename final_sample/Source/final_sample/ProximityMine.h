// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProximityMine.generated.h"

UCLASS()
class FINAL_SAMPLE_API AProximityMine : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProximityMine();
	UPROPERTY(VisibleAnywhere) UStaticMeshComponent* MeshComponent;
	UPROPERTY(EditAnywhere) float Distance = 0.0f;
	//UPROPERTY(EditAnywhere) float Delay;
	//UPROPERTY(EditAnywhere) class UParticleSystem* ParticleSystem;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor);
	void Explode();
};
