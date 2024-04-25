// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSPlayerGameMode.h"
#include "FPSPlayerHUD.h"
#include "FPSPlayerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPSPlayerGameMode::AFPSPlayerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSPlayerHUD::StaticClass();
}
