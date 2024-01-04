// Copyright Epic Games, Inc. All Rights Reserved.

#include "BullseyeBonanzaGameMode.h"
#include "BullseyeBonanzaCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABullseyeBonanzaGameMode::ABullseyeBonanzaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
