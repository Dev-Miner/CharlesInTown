// Copyright Epic Games, Inc. All Rights Reserved.

#include "CharlesInTownGameMode.h"
#include "CharlesInTownCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACharlesInTownGameMode::ACharlesInTownGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
