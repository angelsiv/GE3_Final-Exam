// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RarestCandy.generated.h"

UCLASS()
class G1213ANGE_API ARarestCandy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARarestCandy();
	
	class AG1213ANGECharacter* Player;
	UPROPERTY(VisibleAnywhere) UStaticMeshComponent* MeshComponent;
	UPROPERTY(EditAnywhere) class USoundBase* SoundCue;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;

};
