// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cubemon.generated.h"

UCLASS()
class FINAL_SAMPLE_API ACubemon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACubemon();

	UPROPERTY(VisibleAnywhere) UStaticMeshComponent* MeshBody;
	UPROPERTY(VisibleAnywhere) UStaticMeshComponent* MeshHead;
	UPROPERTY(VisibleAnywhere) class UWidgetComponent* Widget;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly) float HP = 1.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
};
