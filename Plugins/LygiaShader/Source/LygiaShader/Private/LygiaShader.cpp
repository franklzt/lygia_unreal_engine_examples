// Copyright Epic Games, Inc. All Rights Reserved.

#include "LygiaShader.h"
#include "ShaderCore.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FLygiaShaderModule"

void FLygiaShaderModule::StartupModule()
{
	FString PluginShaderDir = FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("LygiaShader"))->GetBaseDir(), TEXT("Shaders"));
	//AddShaderSourceDirectoryMapping(TEXT("/Plugin/LygiaShader"), PluginShaderDir);
	AddShaderSourceDirectoryMapping("/LygiaShader", PluginShaderDir);
}

void FLygiaShaderModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	ResetAllShaderSourceDirectoryMappings();
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FLygiaShaderModule, LygiaShader)