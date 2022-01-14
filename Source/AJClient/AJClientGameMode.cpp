// Copyright Epic Games, Inc. All Rights Reserved.

#include "AJClientGameMode.h"
#include "AJClientCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAJClientGameMode::AAJClientGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
