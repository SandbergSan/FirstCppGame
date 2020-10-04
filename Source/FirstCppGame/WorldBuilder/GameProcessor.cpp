// Fill out your copyright notice in the Description page of Project Settings.


//#include "Kismet/KismetMathLibrary.h" -- FMath::Max3(a, b, c);
#include "GameProcessor.h"


// Sets default values
AGameProcessor::AGameProcessor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameProcessor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameProcessor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (ProcessorActive == true) {

		ProcessorCurrentSpentTime = 0;




		//Messages to log (potentially junk):
		/*
		UE_LOG(LogTemp, Warning, TEXT("tick start"));
		FString strK = "ProcessorActive -- spenttime: ";
		strK.Append(FString::FromInt(ProcessorCurrentSpentTime));
		strK.Append("  -- num: ");
		strK.Append(FString::FromInt(GameProcessQueue.Num()));
		UE_LOG(LogTemp, Warning, TEXT("%s"), *strK)
		*/


		while ((GameProcessQueue.Num() > 0) && (ProcessorCurrentSpentTime < ProcessorMaxTimePerTick)) {

			if (GameProcessQueue.IsValidIndex(0) == true) {


				//Messages to log (potentially junk):
				/*
				FString strKf = "ProcessorWhile -- spenttime: ";
				strKf.Append(FString::FromInt(ProcessorCurrentSpentTime));
				strKf.Append("  -- num: ");
				strKf.Append(FString::FromInt(GameProcessQueue.Num())); 
				strKf.Append("  --  ");
				strKf.Append(GameProcessQueue[0].ProcessName);
				strKf.Append(" | time: "); 
				strKf.Append(FString::FromInt(GameProcessQueue[0].ExecuteTime));
				UE_LOG(LogTemp, Warning, TEXT("%s"), *strKf)
				*/ 


				//Adds a value of at least one to ProcessorCurrentSpentTime so that the while loop will eventually end.
				#pragma region ProcessorCurrentSpentTime
				int SpendTime = 1;
				if (GameProcessQueue[0].ExecuteTime > 0) {
					SpendTime = GameProcessQueue[0].ExecuteTime; 
				}
				else { 
					//If ExecuteTime is below 1 the processor will be going until all those processes are executed.
					FString ErrorMessage = "GameProcessor | ";
					ErrorMessage.Append(GameProcessQueue[0].ProcessName);
					ErrorMessage.Append(" | ExecuteTime is below 1."); 
					UE_LOG(LogTemp, Error, TEXT("%s"), *ErrorMessage);
					GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, (TEXT("%s"), *ErrorMessage));
				}
				ProcessorCurrentSpentTime += SpendTime;
				#pragma endregion ProcessorCurrentSpentTime

				
				//Processes the info gotten from the GameProcessItem.
				#pragma region GameProcessItem Processing
				if (GameProcessQueue[0].ProcessName == TEXT("DespawnGridsOnSection")) {
					//No functionality scripted yet.
				}
				else if (GameProcessQueue[0].ProcessName == TEXT("SpawnGridsOnSection")) {
					//No functionality scripted yet.
				}
				else if (GameProcessQueue[0].ProcessName == TEXT("Debug")) {
					//Debug Message that shows up if anything is assigned the Debug Process.
					//Debug Process is just a temporary process, not meant to be used for anything.
					//This is supposed to be enabled even if DebugMode is set to false.
					PrintGameProcess(GameProcessQueue[0]);
				}
				else {
					//If wrong ProcessName is used, an error message will appear.
					FString ErrorMessage = "GameProcessor | Wrong ProcessName on struct GameProcessItem: ";
					ErrorMessage.Append(GameProcessQueue[0].ProcessName);
					UE_LOG(LogTemp, Error, TEXT("%s"), *ErrorMessage);
					GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, (TEXT("%s"), *ErrorMessage));
				}
				#pragma endregion GameProcessItem Processing


				//When Processing is complete, it removes the GameProcessItem,
				GameProcessQueue.RemoveAt(0);

				//Now it repeats the while loop if there is more GameProcessItems in GameProcessQueue and if ProcessorCurrentSpentTime is lower than ProcessorMaxTimePerTick

			}
		}
		
		if (DebugMode == true) {
			FString DebugMessage = "GameProcessor |				";
			DebugMessage.Append("	Processing Time: ");
			DebugMessage.Append(FString::FromInt(ProcessorCurrentSpentTime));
			DebugMessage.Append("	| Remaining Processes: ");
			DebugMessage.Append(FString::FromInt(GameProcessQueue.Num()));
			UE_LOG(LogTemp, Warning, TEXT("%s"), *DebugMessage)
		}

		//Messages to log (potentially junk):
		/*
		FString strKfa = "ProcessorWhileDone -- spenttime: ";
		strKfa.Append(FString::FromInt(ProcessorCurrentSpentTime));
		strKfa.Append("  -- num: ");
		strKfa.Append(FString::FromInt(GameProcessQueue.Num()));
		UE_LOG(LogTemp, Warning, TEXT("%s"), *strKfa)
		UE_LOG(LogTemp, Warning, TEXT("tick end"));
		*/

	} 
}

void AGameProcessor::QueueGameProcess(FGameProcessItem GameProcessItem)
{
	if (DebugMode == true) {
		PrintGameProcess(GameProcessItem, " Added New:	");
	}
	GameProcessQueue.Add(GameProcessItem);
}


void AGameProcessor::StartProcessor()
{
	if (DebugMode == true) {
		FString DebugMessage = "GameProcessor |				";
		DebugMessage.Append("	Processing Started!"); 
		UE_LOG(LogTemp, Warning, TEXT("%s"), *DebugMessage)
	}
	ProcessorActive = true;
}

void AGameProcessor::PrintGameProcess(FGameProcessItem GameProcessItem)
{
	PrintGameProcess(GameProcessItem, "				");
}

void AGameProcessor::PrintGameProcess(FGameProcessItem GameProcessItem, FString ExtraText)
{
	FString DebugMessage = "GameProcessor |";
	DebugMessage.Append(ExtraText);
	DebugMessage.Append("	secX: ");
	if (GameProcessItem.SectionX >= 0) {
		DebugMessage.Append(" ");
	}
	DebugMessage.Append(FString::FromInt(GameProcessItem.SectionX));
	DebugMessage.Append("	secY: ");
	if (GameProcessItem.SectionY >= 0) {
		DebugMessage.Append(" ");
	}
	DebugMessage.Append(FString::FromInt(GameProcessItem.SectionY));
	DebugMessage.Append("	secZ: ");
	if (GameProcessItem.SectionZ >= 0) {
		DebugMessage.Append(" ");
	}
	DebugMessage.Append(FString::FromInt(GameProcessItem.SectionZ));
	DebugMessage.Append("	grdX: ");
	if (GameProcessItem.GridX >= 0) {
		DebugMessage.Append(" ");
	}
	DebugMessage.Append(FString::FromInt(GameProcessItem.GridX));
	DebugMessage.Append("	grdY: ");
	if (GameProcessItem.GridY >= 0) {
		DebugMessage.Append(" ");
	}
	DebugMessage.Append(FString::FromInt(GameProcessItem.GridY));
	DebugMessage.Append("	| execTime: ");
	DebugMessage.Append(FString::FromInt(GameProcessItem.ExecuteTime));
	DebugMessage.Append("	| procName: ");
	DebugMessage.Append(GameProcessItem.ProcessName);
	DebugMessage.Append(" | Instruction: ");
	DebugMessage.Append(GameProcessItem.Instruction);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *DebugMessage);
}
