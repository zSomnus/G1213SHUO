// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "G1213SHUOGameMode.h"
#include "G1213SHUOHUD.h"
#include "G1213SHUOCharacter.h"
#include "UObject/ConstructorHelpers.h"

AG1213SHUOGameMode::AG1213SHUOGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AG1213SHUOHUD::StaticClass();
}
