// Copyright Epic Games, Inc. All Rights Reserved.

#include "WitchHat_GameGameMode.h"
#include "WitchHat_GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWitchHat_GameGameMode::AWitchHat_GameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
