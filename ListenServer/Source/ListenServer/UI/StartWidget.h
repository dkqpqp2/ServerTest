// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "StartWidget.generated.h"

/**
 * 
 */
UCLASS()
class LISTENSERVER_API UStartWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(Meta = (BindWidget))
	TObjectPtr<class UButton> CreateBtn;

	UPROPERTY(Meta = (BindWidget))
	TObjectPtr<class UButton> JoinBtn;

	UPROPERTY(Meta = (BindWidget))
	TObjectPtr<class UButton> QuitBtn;
	
	virtual void NativeConstruct() override;

	UFUNCTION()
	void ClickedCreateButton();
	UFUNCTION()
	void ClickedJoinButton();

	UFUNCTION()
	void ClickedQuitButton();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> CreateViewWidgetClass;

private:
	TObjectPtr<class UCreateViewWidget> CreateViewWidget;

};
