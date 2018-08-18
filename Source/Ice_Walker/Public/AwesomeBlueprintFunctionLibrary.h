// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AwesomeBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class ICE_WALKER_API UAwesomeBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "save")
		static bool FileSaveString(FString SaveText, FString FileName);

	UFUNCTION(BlueprintPure, Category = "save")
		static bool FileLoadString(FString FileName, FString& LoadedText);
	
	
};
