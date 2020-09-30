// Fill out your copyright notice in the Description page of Project Settings.


#include "HSMath.h"
 

int UHSMath::intPlus(int inputIntA, int inputIntB)
{
	int result ;
	result = (inputIntA + inputIntB);
	 
	//std::string outputStr;
	//outputStr.append(std::to_string(2.0f));
	FString strC = "Player plussed: ";

	strC.Append(FString::FromInt(inputIntA));
	strC.Append(" + ");
	strC.Append(FString::FromInt(inputIntB));

	strC.Append(" = ");
	strC.Append(FString::FromInt(result));
	// char message[] = "geh";
	//FString str(message);
	FString str("Heja"  );
	FString strB =  *str;
	str = "je";

	//FString outputText = "Player just added ";

	//result = (inputIntA + inputIntB);

	//int k;
	   int k = numberMinus(11, 2);
	   FString strK = "Player minused int: ";
	   strK.Append(FString::FromInt(k));

	   float kf = numberMinus(11.4f, 2.1f);
	    kf = numberMinus(kf, 1);
	   FString strKf = "Player minused float: ";
	   strKf.Append(FString::SanitizeFloat(kf,3));

	//UE_LOG(LogTemp, Warning, TEXT( "HSMath just added two numbers."     ))
	//UE_LOG(LogTemp, Warning, TEXT("%s"),  *str)
	//	UE_LOG(LogTemp, Warning, TEXT("%s"), *strB)
	UE_LOG(LogTemp, Warning, TEXT("%s"), *strC)
		UE_LOG(LogTemp, Warning, TEXT("haha") )
	 	UE_LOG(LogTemp, Warning, TEXT("%s"), *strK)
		UE_LOG(LogTemp, Warning, TEXT("%s"), *strKf)
		//(FString::FromInt(result))
	return result;
}

float UHSMath::intPlus(float inputIntA, float inputIntB)
{
	FString strKf = "Player also plussed float: ";
	strKf.Append(FString::SanitizeFloat((inputIntA + inputIntB), 3));
	UE_LOG(LogTemp, Warning, TEXT("Also plussed a float %s"), *strKf)
	return (inputIntA + inputIntB);
}

int UHSMath::NewPlusInt(int inputIntA, int inputIntB)
{
	return (NewPlusHidden(inputIntA, inputIntB ));
}

float UHSMath::NewPlusFloat(float inputIntA, float inputIntB)
{
	return (NewPlusHidden (inputIntA, inputIntB ));
}
