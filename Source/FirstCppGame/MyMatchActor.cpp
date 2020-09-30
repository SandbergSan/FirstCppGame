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
	   UHSMath::intPlus(1.2f, 1.3f);
	 
	   int a = 0;
	   float bf = 0;

	   a = UHSMath::NewPlusFloat(1, 2);
	   bf = UHSMath::NewPlusFloat(1.2f, 1.3f);

	   FString strK = "a: ";
	   strK.Append(FString::FromInt(a));
	   FString strKB = "b: ";
	   strKB.Append(FString::SanitizeFloat(bf));

	   UE_LOG(LogTemp, Display, TEXT(" %s"), *strK)
	 UE_LOG(LogTemp, Display, TEXT(" %s"), *strKB)
}

// Called every frame
void AMyMatchActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

