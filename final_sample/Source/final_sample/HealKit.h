// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HealKit.generated.h"

UCLASS()
class FINAL_SAMPLE_API AHealKit : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHealKit();

	UPROPERTY(VisibleAnywhere) UStaticMeshComponent* MeshComponent;
	//UPROPERTY(VisibleAnywhere) class UBoxComponent* BoxComponent;
	UPROPERTY(BlueprintReadOnly) float HealAmount;
	UPROPERTY(EditAnywhere) float Duration;
	UPROPERTY(EditAnywhere) class USoundBase* HealSoundCue;
	
	class Afinal_sampleCharacter* Player;
	bool isHealing;
	FTimerHandle timerHandle;
	//float startTime;
	float endTime;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
	void Heal();
	//virtual void NotifyActorBeginOverlap(AActor * OtherActor) override;
};
