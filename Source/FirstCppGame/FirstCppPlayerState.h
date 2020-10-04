// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h" 
#include "FirstCppPlayerState.generated.h"


/**
 * 
 */
UCLASS()
class FIRSTCPPGAME_API AFirstCppPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	AFirstCppPlayerState();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	//This would become gettable/settable in blueprint after "get game mode" "cast to firstcppgamegamemode" 
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldBuilder")
	//int testInt = 1;


	//writing class before aworldbuilder here makes it so you dont have to include the worldbuilder.h file at the top.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldBuilder")
		class AWorldBuilder* SpawnedWorldBuilder;
		//AWorldBuilder* SpawnedWorldBuilder;

	//writing class before aworldbuilder here makes it so you dont have to include the worldbuilder.h file at the top.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameProcessor")
		class AGameProcessor* SpawnedGameProcessor;

	UFUNCTION(BlueprintCallable, Category = "WorldBuilder")
		void SpawnWorldBuilder();

	UFUNCTION(BlueprintCallable, Category = "GameProcessor")
		void SpawnGameProcessor();

};
