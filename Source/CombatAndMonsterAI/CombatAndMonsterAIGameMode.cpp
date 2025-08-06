// Copyright Epic Games, Inc. All Rights Reserved.

#include "CombatAndMonsterAIGameMode.h"
#include "CombatAndMonsterAICharacter.h"
#include "UObject/ConstructorHelpers.h"

ACombatAndMonsterAIGameMode::ACombatAndMonsterAIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
