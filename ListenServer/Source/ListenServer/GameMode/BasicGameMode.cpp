// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicGameMode.h"

ABasicGameMode::ABasicGameMode()
{
	static ConstructorHelpers::FClassFinder<UStartWidget> StartWidgetAsset(TEXT("/Game/UI/WBP_StartWidget.WBP_StartWidget_C"));

	if (StartWidgetAsset.Class)
	{
		BasicStartWidgetClass = StartWidgetAsset.Class;
	}
}

void ABasicGameMode::BeginPlay()
{
	Super::BeginPlay();
	if (IsValid(BasicStartWidgetClass))
	{
		StartWidget = Cast<UStartWidget>(CreateWidget(GetWorld(), BasicStartWidgetClass));

		if (IsValid(StartWidget))
		{
			StartWidget->AddToViewport();
		}
	}
}
