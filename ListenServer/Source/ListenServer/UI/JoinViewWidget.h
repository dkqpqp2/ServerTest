// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "JoinViewWidget.generated.h"

/**
 * 
 */
UCLASS()
class LISTENSERVER_API UJoinViewWidget : public UUserWidget
{
	GENERATED_BODY()
	
private:
	UPROPERTY(Meta = (BindWidget))
	TObjectPtr<class UButton> JoinBtn;

	UPROPERTY(Meta = (BindWidget))
	TObjectPtr<class UButton> CancelBtn;

	UFUNCTION()
	void JoinServerHandler();

	UFUNCTION()
	void ClickedCancelBtn();
};
