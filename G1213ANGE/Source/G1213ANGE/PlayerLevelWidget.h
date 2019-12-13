// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "G1213ANGECharacter.h"
#include "PlayerLevelWidget.generated.h"

/**
 * 
 */
UCLASS()
class G1213ANGE_API UPlayerLevelWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadOnly) class AG1213ANGECharacter* Player;
};
