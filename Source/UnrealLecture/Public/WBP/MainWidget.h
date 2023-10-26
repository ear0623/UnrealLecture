// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"
#include "MainWidget.generated.h"

/**
 * 
 */
UCLASS()
class UNREALLECTURE_API UMainWidget : public UUserWidget
{
	GENERATED_BODY()

	
	
private:
	UPROPERTY(meta=(BindWidget))
	UTextBlock* InteractingText;

public:
	FORCEINLINE UTextBlock* Interactedtest();
};
