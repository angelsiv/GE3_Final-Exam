// Fill out your copyright notice in the Description page of Project Settings.


#include "Caltrop.h"
#include "Components/MeshComponent.h" //added for creating subobject
#include "Components/StaticMeshComponent.h" //added for physics simulation
#include "final_sampleCharacter.h"
#include "UnrealEngine.h"

// Sets default values
ACaltrop::ACaltrop()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//Create Mesh Component
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	RootComponent = MeshComponent;
}

// Called when the game starts or when spawned
void ACaltrop::BeginPlay()
{
	Super::BeginPlay();
	//PROB 2
	MeshComponent->CanEditSimulatePhysics();
}

// Called every frame
void ACaltrop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACaltrop::NotifyHit(UPrimitiveComponent * MyComp, AActor * Other, UPrimitiveComponent * OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult & Hit)
{
	auto player = Cast<Afinal_sampleCharacter>(Other);
	player->HP -= damage;
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Blue, TEXT("Hit by caltrop"));
	this->Destroy();
}

