// Fill out your copyright notice in the Description page of Project Settings.

#include "HSMath.h"
#include "MyCopiedMatchActor.h"


// Sets default values
AMyCopiedMatchActor::AMyCopiedMatchActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCopiedMatchActor::BeginPlay()
{
	Super::BeginPlay();

	   UHSMath::intPlus(  ValueA,   ValueB);
	  
	 
}

// Called every frame
void AMyCopiedMatchActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

