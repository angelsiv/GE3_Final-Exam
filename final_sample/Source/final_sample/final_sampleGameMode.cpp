// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "final_sampleGameMode.h"
#include "final_sampleHUD.h"
#include "final_sampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

Afinal_sampleGameMode::Afinal_sampleGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Afinal_sampleHUD::StaticClass();
}
