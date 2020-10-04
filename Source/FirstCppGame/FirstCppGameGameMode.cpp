// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FirstCppGameGameMode.h"
#include "FirstCppGameHUD.h"
#include "FirstCppPlayerState.h"
#include "FirstCppGameCharacter.h"
#include "BatteryMan.h"
#include "UObject/ConstructorHelpers.h"
#include "WorldBuilder/WorldBuilder.h"
//#include "WorldBuilder.h"
//#include "WorldBuilder.generated.h"

AFirstCppGameGameMode::AFirstCppGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/BP/BP_BatteryMan"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFirstCppGameHUD::StaticClass();

	PlayerStateClass = AFirstCppPlayerState::StaticClass();
	
}

void AFirstCppGameGameMode::SpawnWorldBuilder()
{

	FVector Location(0.0f, 0.0f, 0.0f);
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;
	  
	SpawnedWorldBuilder = GetWorld()->SpawnActor<AWorldBuilder>(Location, Rotation, SpawnInfo);
	 
}
