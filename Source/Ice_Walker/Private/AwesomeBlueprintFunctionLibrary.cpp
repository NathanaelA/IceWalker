// Fill out your copyright notice in the Description page of Project Settings.

#include "AwesomeBlueprintFunctionLibrary.h"
#include "FileHelper.h"
#include "Paths.h"


bool UAwesomeBlueprintFunctionLibrary::FileSaveString(FString SaveText, FString FileName)
{
	return FFileHelper::SaveStringToFile(SaveText, *(FPaths::GameDir() + FileName));
}

bool UAwesomeBlueprintFunctionLibrary::FileLoadString(FString FileName, FString& LoadedText)
{
	return FFileHelper::LoadFileToString(LoadedText, *(FPaths::GameDir() + FileName));
}