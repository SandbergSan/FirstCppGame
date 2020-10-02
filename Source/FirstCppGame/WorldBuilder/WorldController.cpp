// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldBuilder/WorldBuilder.h"
#include "WorldController.h"

void UWorldController::SpawnWorldBuilder() 
{

	FVector Location(0.0f, 0.0f, 0.0f);
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;

	SpawnedWorldBuilder = GetWorld()->SpawnActor<AWorldBuilder>(Location, Rotation, SpawnInfo);

}

float UWorldController::NewWorldPlusTest(float inputIntA)
{
	return  0.0f ;
}