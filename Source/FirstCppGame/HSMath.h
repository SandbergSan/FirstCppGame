// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HSMath.generated.h"
  
/**
 * 
 */
UCLASS()
class FIRSTCPPGAME_API UHSMath : public UObject
{
	GENERATED_BODY()
public:

	//Regular function:
	UFUNCTION(BlueprintCallable, Category = "HS")
	static int intPlus(int inputIntA, int inputIntB); 
	//Regular function overloaded - cannot be visible in blueprints: 
	static float intPlus(float inputIntA, float inputIntB);

	 

	//Template functions cannot be visible in blueprints.	
	template <class TA, class TB >  
	static TA numberMinus(TA inputA, TB inputB)
	{
		return  (inputA - inputB); 
	}


	//using overload to do another function:

	UFUNCTION(BlueprintCallable, Category = "HS")
	static int NewPlusInt(int inputIntA, int inputIntB);
	UFUNCTION(BlueprintCallable, Category = "HS")
	static float NewPlusFloat(float inputIntA, float inputIntB);
	template <class TA, class TB >
	static TA NewPlusHidden(TA inputA, TB inputB )
	{

		 FString strKf = "Player used a super function: "; 
		 UE_LOG(LogTemp, Warning, TEXT(" %s"), *strKf)
		 
		return  (inputA + inputB);
	}

};
