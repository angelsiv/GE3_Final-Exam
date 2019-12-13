// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnluckyTrap.generated.h"

UCLASS()
class G1213ANGE_API AUnluckyTrap : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUnluckyTrap();
	UPROPERTY(VisibleAnywhere) UStaticMeshComponent* MeshComponent1;
	UPROPERTY(VisibleAnywhere) UStaticMeshComponent* MeshComponent2;

	UPROPERTY(EditAnywhere) int UnluckyValue = 4;
	class AG1213ANGECharacter* Player;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
};
