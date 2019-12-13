// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "G1213ANGEGameMode.h"
#include "G1213ANGEHUD.h"
#include "G1213ANGECharacter.h"
#include "UObject/ConstructorHelpers.h"

AG1213ANGEGameMode::AG1213ANGEGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AG1213ANGEHUD::StaticClass();
}
