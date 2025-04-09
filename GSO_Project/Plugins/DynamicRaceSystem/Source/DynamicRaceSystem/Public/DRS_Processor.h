// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DRS_Broadcaster.h"
#include "DRS_Processor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DYNAMICRACESYSTEM_API UDRS_Processor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDRS_Processor();

protected:
	void BeginPlay();

private:
	//All Broadcasters in one Array
	TArray<UDRS_Broadcaster*> BrCompArray;

	//Processor's Array of All Racers Speeds (Index = Position)
	TArray<int> SpeedArray;

public:
	//Update SpeedArray
	UFUNCTION(BlueprintCallable, Category = "DRS")
	void GetRacersSpeeds();
};
