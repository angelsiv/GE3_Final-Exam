// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cubemon.generated.h"

UCLASS()
class G1213ANGE_API ACubemon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACubemon();
	UPROPERTY(VisibleAnywhere) UStaticMeshComponent* MeshHead;
	UPROPERTY(VisibleAnywhere) UStaticMeshComponent* MeshBody;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = "0", ClampMax = "99")) int CubemonLevel = 10;
	UPROPERTY(VisibleAnywhere) class UWidgetComponent* Widget;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
};
