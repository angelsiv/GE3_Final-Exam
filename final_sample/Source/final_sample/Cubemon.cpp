// Fill out your copyright notice in the Description page of Project Settings.


#include "Cubemon.h"
#include "Components/MeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "final_sampleProjectile.h"
#include "Components/WidgetComponent.h"
#include "CubemonHP.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACubemon::ACubemon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	MeshBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body Mesh"));
	MeshHead = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Head Mesh"));
	Widget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
	
	RootComponent = MeshBody;
	MeshHead->SetupAttachment(RootComponent);

	Widget->SetupAttachment(RootComponent);
	Widget->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Called when the game starts or when spawned
void ACubemon::BeginPlay()
{
	Super::BeginPlay();

	auto CubemonHP = Cast<UCubemonHP>(Widget->GetUserWidgetObject());
	if (CubemonHP != nullptr)
	{
		CubemonHP->Cubemon = this;
	}

}

// Called every frame
void ACubemon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto camera = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);
	Widget->SetWorldRotation(camera->GetCameraRotation());
	Widget->AddLocalRotation(FRotator(0, 180, 0));
}

void ACubemon::NotifyHit(UPrimitiveComponent * MyComp, AActor * Other, UPrimitiveComponent * OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult & Hit)
{
	if (Cast<Afinal_sampleProjectile>(Other))
	{
		HP -= 0.1f;
		if (HP <= 0)
		{
			Destroy();
		}
	}
}


