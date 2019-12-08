// Fill out your copyright notice in the Description page of Project Settings.


#include "LaunchPad.h"
#include "Engine.h" //get engine and not unreal engine for adding impulse
#include "final_sampleCharacter.h"
#include "Components/BoxComponent.h"
#include "Components/MeshComponent.h"

// Sets default values
ALaunchPad::ALaunchPad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	RootComponent = MeshComponent;
	BoxComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void ALaunchPad::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ALaunchPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALaunchPad::NotifyHit(UPrimitiveComponent * MyComp, AActor * Other, UPrimitiveComponent * OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult & Hit)
{
	auto player = Cast<Afinal_sampleCharacter>(Other);
	player->GetCharacterMovement()->AddForce(ForwardForce);
	player->GetCharacterMovement()->AddForce(UpForce);
}

void ALaunchPad::NotifyActorBeginOverlap(AActor * OtherActor)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Touched launchpad"));
	auto Character = Cast<Afinal_sampleCharacter>(OtherActor);
	//Character->GetCharacterMovement()->AddImpulse(ForwardVector);
}





