// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h" 
#include "GameProcessor.generated.h"


USTRUCT(BlueprintType)  
struct FGameProcessItem
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameProcessor")
		FString ProcessName = "Unnamed Process";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameProcessor")
		int ExecuteTime = 1;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameProcessor")
		FString Instruction = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameProcessor")
		int SectionX = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameProcessor")
		int SectionY = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameProcessor")
		int SectionZ = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameProcessor")
		int GridX = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameProcessor")
		int GridY = 0; 

};


UCLASS()
class FIRSTCPPGAME_API AGameProcessor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameProcessor();







	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	bool DebugMode = false;

	bool ProcessorActive = false;
	int ProcessorCurrentSpentTime = 0;
	int ProcessorMaxTimePerTick = 100;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameProcessor")
		TArray<FGameProcessItem>   GameProcessQueue;
		//FGameProcessItem GameProcessQueue[];



	UFUNCTION(BlueprintCallable, Category = "GameProcessor")
		void QueueGameProcess(FGameProcessItem GameProcessItem);

	UFUNCTION(BlueprintCallable, Category = "GameProcessor")
		void StartProcessor();

	UFUNCTION(BlueprintCallable, Category = "GameProcessor")
		void PrintGameProcess(FGameProcessItem GameProcessItem);
		void PrintGameProcess(FGameProcessItem GameProcessItem, FString ExtraText);
};
