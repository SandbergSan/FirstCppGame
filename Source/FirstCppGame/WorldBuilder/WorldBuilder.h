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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldBuilder")
	FString WorldName = "MyWorld";

	UFUNCTION(BlueprintCallable, Category = "WorldBuilder")
	void Startoff(int Intin);

};
