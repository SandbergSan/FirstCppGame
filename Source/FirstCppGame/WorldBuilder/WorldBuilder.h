// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WorldBuilder.generated.h"

UCLASS()
class FIRSTCPPGAME_API AWorldBuilder : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWorldBuilder();

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



	//World Variables:
	#pragma region World Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldBuilder")
	FString WorldName = "MyWorld";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldBuilder")
	FString WorldNameB = "MyWorldB";

	//Locked Variables:


	// The number of sections and grids will end up ((their value * 2) - 1) since one is always alone in the center of world.
	const int WorldMaxSectionsHorizontal = 10; 
	const int WorldMaxSectionsVertical = 1;
	 
	const int GridSizeHorisontal = 30; 
	const int GridSizeVertical = 60;
	const int SectionSizeHorizontal = 10;
	const int SectionSizeVertical = 10;

	const int GridPolySize = 6;
	const int SectionPolySize = 2;

	const float DistanceFromPlayerToLoadData = 100.f;
	const float DistanceFromPlayerToShowGrid = 40.f;

	#pragma endregion World Variables


	//World Functions:
	#pragma region World Functions

	UFUNCTION(BlueprintCallable, Category = "WorldBuilder")
	void Startoff(int Intin);
	 
	UFUNCTION(BlueprintCallable, Category = "WorldBuilder")
	void Initiate();

	#pragma endregion World Functions


};
