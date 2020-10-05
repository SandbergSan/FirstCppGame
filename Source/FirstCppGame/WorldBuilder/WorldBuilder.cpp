// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldBuilder.h"
#include "FirstCppPlayerState.h"
#include "GameProcessor.h"
// Sets default values
AWorldBuilder::AWorldBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWorldBuilder::BeginPlay()
{
	Super::BeginPlay();
	//Startoff(1);
}

// Called every frame
void AWorldBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWorldBuilder::Startoff(int Intin)
{
	UE_LOG(LogTemp, Warning, TEXT("Worldbuilder Started! <<<<<<<<<<<<<<<<<<<<<<<<<<<<  1") )

	for (int SectionX = (1 - WorldMaxSectionsHorizontal); SectionX < WorldMaxSectionsHorizontal; SectionX++)
	{
		UE_LOG(LogTemp, Warning, TEXT("Worldbuilder Started! <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<2"))

		for (int SectionY = (1 - WorldMaxSectionsHorizontal); SectionY < WorldMaxSectionsHorizontal; SectionY++)
		{
			for (int SectionZ = (1 - WorldMaxSectionsVertical); SectionZ < WorldMaxSectionsVertical; SectionZ++)
			{

				FString strC = "World Section X: ";
				strC.Append(FString::FromInt(SectionX));
				strC.Append(" Y: ");
				strC.Append(FString::FromInt(SectionY));
				strC.Append(" Z: ");
				strC.Append(FString::FromInt(SectionZ));
				UE_LOG(LogTemp, Warning, TEXT("%s"), *strC)
			}
		}
	}
}


void AWorldBuilder::Initiate()
{
}