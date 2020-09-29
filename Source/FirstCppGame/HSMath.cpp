// Fill out your copyright notice in the Description page of Project Settings.


#include "HSMath.h"


int UHSMath::intPlus(int inputIntA, int inputIntB)
{
	int result ;
	// char message[] = "geh";
	//FString str(message);
	FString str("Heja"  );
	FString strB =  *str;
	str = "je";

	//result = (inputIntA + inputIntB);
	result = (inputIntA + inputIntB);



	UE_LOG(LogTemp, Warning, TEXT( "HSMath just added two numbers."     ))
	UE_LOG(LogTemp, Warning, TEXT("%s"),  *str)
	UE_LOG(LogTemp, Warning, TEXT("%s"), *strB)
		//(FString::FromInt(result))
	return result;
}
