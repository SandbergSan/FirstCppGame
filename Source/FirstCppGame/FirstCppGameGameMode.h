// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FirstCppGameGameMode.generated.h"

UCLASS(minimalapi)
class AFirstCppGameGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFirstCppGameGameMode();

	//This would become gettable/settable in blueprint after "get game mode" "cast to firstcppgamegamemode" 
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldBuilder")
	//int testInt = 1;


	//writing class before aworldbuilder here makes it so you dont have to include the worldbuilder.h file at the top.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldBuilder")
	class AWorldBuilder* SpawnedWorldBuilder;

	UFUNCTION(BlueprintCallable, Category = "WorldBuilder")
	void SpawnWorldBuilder();


};



