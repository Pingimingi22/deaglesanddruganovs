// Copyright Epic Games, Inc. All Rights Reserved.

#include "deaglesanddruganovsGameMode.h"
#include "deaglesanddruganovsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AdeaglesanddruganovsGameMode::AdeaglesanddruganovsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
