// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGameMode.h"
#include "../Player/OBot_PlayerController.h"

AMainGameMode::AMainGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> OBotClassRef(TEXT("/Game/StackOBot/Blueprints/Character/BP_Bot.BP_Bot_C"));
	if (OBotClassRef.Class)
	{
		DefaultPawnClass = OBotClassRef.Class;
	}

	PlayerControllerClass = AOBot_PlayerController::StaticClass();
}
