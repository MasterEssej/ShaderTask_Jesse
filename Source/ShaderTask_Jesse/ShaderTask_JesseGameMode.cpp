// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShaderTask_JesseGameMode.h"
#include "ShaderTask_JesseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShaderTask_JesseGameMode::AShaderTask_JesseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
