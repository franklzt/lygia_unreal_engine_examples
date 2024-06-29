// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ShaderFileBlueprintLib.generated.h"

/**
 * 
 */
UCLASS()
class LYGIASHADER_API UShaderFileBlueprintLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void CopyHLSLFileAsUSH(FString PluginName= "");

	UFUNCTION(BlueprintCallable)
	static void CopyHLSLFileAsushInPlugin();
};
