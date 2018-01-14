// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "InnovationGameGameMode.h"
#include "InnovationGameHUD.h"
#include "InnovationGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInnovationGameGameMode::AInnovationGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AInnovationGameHUD::StaticClass();
}
