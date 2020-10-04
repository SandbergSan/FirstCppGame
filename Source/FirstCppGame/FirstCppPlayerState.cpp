// Fill out your copyright notice in the Description page of Project Settings.

#include "WorldBuilder/WorldBuilder.h"
#include "WorldBuilder/GameProcessor.h"
#include "FirstCppPlayerState.h"


AFirstCppPlayerState::AFirstCppPlayerState()
	: Super()
{
 

}

void AFirstCppPlayerState::BeginPlay()
{
	Super::BeginPlay(); 


	SpawnWorldBuilder();
	SpawnGameProcessor();

}

// Called every frame
void AFirstCppPlayerState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFirstCppPlayerState::SpawnWorldBuilder()
{
	UE_LOG(LogTemp, Warning, TEXT("Worldbuilder Spawned! <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"))

	FVector Location(0.0f, 0.0f, 0.0f);
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;

	 SpawnedWorldBuilder = GetWorld()->SpawnActor<AWorldBuilder>(Location, Rotation, SpawnInfo);

}

void AFirstCppPlayerState::SpawnGameProcessor()
{
	UE_LOG(LogTemp, Warning, TEXT("GameProcessor Spawned! <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"))

	FVector Location(0.0f, 0.0f, 0.0f);
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;

	SpawnedGameProcessor = GetWorld()->SpawnActor<AGameProcessor>(Location, Rotation, SpawnInfo);

}