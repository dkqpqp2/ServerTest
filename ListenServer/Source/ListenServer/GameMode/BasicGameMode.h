// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "../UI/StartWidget.h"
#include "BasicGameMode.generated.h"

/**
 * 
 */
UCLASS()
class LISTENSERVER_API ABasicGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABasicGameMode();

protected:
	TSubclassOf<UUserWidget> BasicStartWidgetClass;
	UStartWidget* StartWidget;
	
	virtual void BeginPlay() override;
};
