// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CreateViewWidget.generated.h"

/**
 * 
 */
UCLASS()
class LISTENSERVER_API UCreateViewWidget : public UUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(Meta = (BindWidget))
	TObjectPtr<class UButton> CreateBtn;

	UPROPERTY(Meta = (BindWidget))
	TObjectPtr<class UButton> CancelBtn;

	UFUNCTION()
	void CreateServerHandler();

	UFUNCTION()
	void ClickedCancelBtn();

};
