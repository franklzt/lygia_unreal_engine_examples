// Fill out your copyright notice in the Description page of Project Settings.


#include "ShaderFileBlueprintLib.h"
#include "Interfaces/IPluginManager.h"

void UShaderFileBlueprintLib::CopyHLSLFileAsUSH(FString PluginName)
{
#if WITH_EDITOR
	FString fromFolder = "/ShaderSource/lygia/";
	FString toFoler = "/Shaders/lygia/";
	FString TempRoot = FPaths::ProjectDir();
	if(!PluginName.IsEmpty())
	{
		TempRoot = IPluginManager::Get().FindPlugin(PluginName)->GetBaseDir();
	}
	
	FString sourceRoot =  TempRoot + fromFolder;
	FString destRoot = TempRoot + toFoler;
	
	TArray<FString> TempAllFiles;
	FString TempExtension("*.hlsl");
	
	FString ReplaceExtensionFrom(".hlsl");
	FString ReplaceExtensionTo(".usf");
	//const TCHAR* RootPath = _T("D:/assets/test");
	//TArray<FString> Files;
	//const TCHAR* extension = _T("*.fbx");
	IFileManager& FileManager = IFileManager::Get();
	FileManager.FindFilesRecursive(TempAllFiles, *sourceRoot, *TempExtension, true, false, false);
	for (const auto item: TempAllFiles)
	{
		FString readResult;
		FFileHelper::LoadFileToString(readResult,*item);
		readResult = readResult.Replace(*ReplaceExtensionFrom,*ReplaceExtensionTo);
		//UE_LOG(LogTemp,Warning,TEXT("%s"),*item);
		//UE_LOG(LogTemp,Warning,TEXT("%s"),*readResult);

		//FStringView view(readResult);
		//FFileHelper::SaveStringToFile()

		FString targetFileName(item);
		
		targetFileName = targetFileName.Replace(*fromFolder,*toFoler);
		targetFileName = targetFileName.Replace(*ReplaceExtensionFrom,*ReplaceExtensionTo);
		//UE_LOG(LogTemp,Warning,TEXT("%s"),*targetFileName);
		FFileHelper::SaveStringToFile(readResult,*targetFileName);
	}
#endif
	
}

void UShaderFileBlueprintLib::CopyHLSLFileAsushInPlugin()
{
	UShaderFileBlueprintLib::CopyHLSLFileAsUSH("LygiaShader");
}
