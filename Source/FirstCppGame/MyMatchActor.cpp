// Fill out your copyright notice in the Description page of Project Settings.

#include "HSMath.h"
#include "MyMatchActor.h"


// Sets default values
AMyMatchActor::AMyMatchActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyMatchActor::BeginPlay()
{
	Super::BeginPlay();

	   UHSMath::intPlus(  ValueA,   ValueB);
	  
	 
}

// Called every frame
void AMyMatchActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

