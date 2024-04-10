// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TESTOVOE_API UBaseObject : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Building")
	bool ChangeOuter(UObject* NewOuter);

};
