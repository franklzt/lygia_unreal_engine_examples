// Fill out your copyright notice in the Description page of Project Settings.

#include "LygiaProject.h"

#include "Modules/ModuleManager.h"

void FLygiaProjectModule::StartupModule()
{
	//FString ShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders"));
	//AddShaderSourceDirectoryMapping("/Project", ShaderDirectory);
}

void FLygiaProjectModule::ShutdownModule()
{
	//ResetAllShaderSourceDirectoryMappings();
}

//IMPLEMENT_PRIMARY_GAME_MODULE(FILikeTrainsModule, ILikeTrains, "ILikeTrains" );

IMPLEMENT_PRIMARY_GAME_MODULE(FLygiaProjectModule, LygiaProject, "LygiaProject");


