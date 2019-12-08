// Fill out your copyright notice in the Description page of Project Settings.


#include "ProximityMine.h"
#include "Components/MeshComponent.h"
#include "Components/BoxComponent.h"
#include "final_sampleCharacter.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine.h"

// Sets default values
AProximityMine::AProximityMine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;
}

// Called when the game starts or when spawned
void AProximityMine::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AProximityMine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Explode();
}

void AProximityMine::NotifyActorBeginOverlap(AActor * OtherActor)
{
	auto player = Cast<Afinal_sampleCharacter>(OtherActor);
	//Explode();

}

void AProximityMine::Explode()
{
	TArray < TEnumAsByte<EObjectTypeQuery> > filter;
	TArray<AActor*> ignore;
	TArray<AActor*> out;
	out.Num();
	FString result = FString::Printf(TEXT("Actor close to mine"), out.Num());

	UKismetSystemLibrary::SphereOverlapActors(this, GetActorLocation(), Distance, filter, Afinal_sampleCharacter::StaticClass(), ignore, out);

	for (auto actor : out)
	{
		auto player = Cast<Afinal_sampleCharacter>(actor);
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Black, result);
	}
}

