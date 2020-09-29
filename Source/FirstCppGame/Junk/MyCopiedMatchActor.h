// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyCopiedMatchActor.generated.h"

UCLASS()
class FIRSTCPPGAME_API AMyCopiedMatchActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyCopiedMatchActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HSSetting")
		int ValueA = 1 ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HSSetting")
		int ValueB = 1;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
