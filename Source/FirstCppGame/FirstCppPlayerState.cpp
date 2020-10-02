// Fill out your copyright notice in the Description page of Project Settings.

#include "WorldBuilder/WorldBuilder.h"
#include "FirstCppPlayerState.h"


AFirstCppPlayerState::AFirstCppPlayerState()
	: Super()
{
 

}

void AFirstCppPlayerState::BeginPlay()
{
	Super::BeginPlay(); 


	SpawnWorldBuilder();

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