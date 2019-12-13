// Fill out your copyright notice in the Description page of Project Settings.


#include "Cubemon.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "G1213ANGEProjectile.h"
#include "Kismet/GameplayStatics.h"
#include "CubemonLevel.h"

// Sets default values
ACubemon::ACubemon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshBody"));
	MeshHead = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshHead"));
	Widget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));

	RootComponent = MeshBody;
	MeshHead->SetupAttachment(RootComponent);
	Widget->SetupAttachment(RootComponent);
	Widget->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
}

// Called when the game starts or when spawned
void ACubemon::BeginPlay()
{
	Super::BeginPlay();
	auto CubemonLevel = Cast<UCubemonLevel>(Widget->GetWidgetClass());
	if (CubemonLevel != nullptr)
	{
		CubemonLevel->Cubemon = this;
	}
}

// Called every frame
void ACubemon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto camera = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);
	if (Widget != nullptr)
	{
		Widget->SetWorldRotation(camera->GetCameraRotation());
		Widget->AddLocalRotation(FRotator(0, 180, 0));
	}
}

void ACubemon::NotifyHit(UPrimitiveComponent * MyComp, AActor * Other, UPrimitiveComponent * OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult & Hit)
{
	if (Cast<AG1213ANGEProjectile>(Other))
	{
		CubemonLevel--;
	}
}
