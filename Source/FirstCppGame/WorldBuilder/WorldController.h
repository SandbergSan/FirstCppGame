// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WorldController.generated.h"


/**
 * 
 */
UCLASS()
class FIRSTCPPGAME_API UWorldController : public UObject
{
	GENERATED_BODY()
	
public:


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldBuilder")
	class AWorldBuilder* SpawnedWorldBuilder;

	UFUNCTION(BlueprintCallable, Category = "HS")
		static  float NewWorldPlusTest(float inputIntA);

	UFUNCTION(BlueprintCallable, Category = "WorldBuilder")
		  void SpawnWorldBuilder();

};
