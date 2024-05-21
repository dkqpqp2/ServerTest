// Fill out your copyright notice in the Description page of Project Settings.


#include "StartWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "CreateViewWidget.h"
#include "JoinViewWidget.h"

void UStartWidget::NativeConstruct()
{
	Super::NativeConstruct();

	CreateBtn->OnClicked.AddDynamic(this, &UStartWidget::ClickedCreateButton);
	JoinBtn->OnClicked.AddDynamic(this, &UStartWidget::ClickedJoinButton);
}

void UStartWidget::ClickedCreateButton()
{
	/*if (CreateViewWidgetClass)
	{
		if (!CreateViewWidget)
		{
			CreateViewWidget = CreateWidget<UCreateViewWidget>(GetWorld(), CreateViewWidgetClass);
		}

		if (CreateViewWidget)
		{
			CreateViewWidget->AddToViewport();
		}
	}*/
	//

	UGameplayStatics::OpenLevel(GetWorld(), FName("MainLobby"), false);
}

void UStartWidget::ClickedJoinButton()
{
	UGameplayStatics::OpenLevel(GetWorld(), FName("127.0.0.1"));
}

void UStartWidget::ClickedQuitButton()
{
	UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, true);
}
