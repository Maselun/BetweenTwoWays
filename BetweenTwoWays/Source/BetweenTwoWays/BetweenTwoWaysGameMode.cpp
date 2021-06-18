// Copyright Epic Games, Inc. All Rights Reserved.

#include "BetweenTwoWaysGameMode.h"
#include "BetweenTwoWaysHUD.h"
#include "BetweenTwoWaysCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABetweenTwoWaysGameMode::ABetweenTwoWaysGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABetweenTwoWaysHUD::StaticClass();
}
