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



	//UE_LOG(LogTemp, Warning, TEXT( "HSMath just added two numbers."     ))
	//UE_LOG(LogTemp, Warning, TEXT("%s"),  *str)
	//	UE_LOG(LogTemp, Warning, TEXT("%s"), *strB)
	UE_LOG(LogTemp, Warning, TEXT("%s"), *strC)
		//(FString::FromInt(result))
	return result;
}
