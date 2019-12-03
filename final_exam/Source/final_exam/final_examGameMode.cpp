// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "final_examGameMode.h"
#include "final_examHUD.h"
#include "final_examCharacter.h"
#include "UObject/ConstructorHelpers.h"

Afinal_examGameMode::Afinal_examGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Afinal_examHUD::StaticClass();
}
