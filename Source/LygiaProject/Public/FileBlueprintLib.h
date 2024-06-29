// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileBlueprintLib.generated.h"

/**
 * 
 */
UCLASS()
class LYGIAPROJECT_API UFileBlueprintLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void CopyHLSLFileAsUSH(FString PluginName= "");
};
