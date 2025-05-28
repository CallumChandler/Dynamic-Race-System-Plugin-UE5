// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DRS_Broadcaster.h"
#include "DRS_Reciever.h"
#include "DRS_Processor.generated.h"

UENUM(BlueprintType)
enum CalcType
{
	Mean,
	ForwardWeight,
	ExpandedForwardWeight,
	RearWeight,
	ExpandedRearWeight
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DYNAMICRACESYSTEM_API UDRS_Processor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDRS_Processor();

protected:
	void BeginPlay();

	//All Broadcasters in one Array
	TArray<UDRS_Broadcaster*> BrActorArray;

	//All Recievers in one Array
	TArray<UDRS_Reciever*> RActorArray;

	//Update SpeedArray
	TArray<int> GetRacersSpeeds();

	//Formula Function/s, Calc gives the value and Produce turns it into the RaceLevel
	static int CalcMean(TArray<int> RaceSpeeds);
	static int CalcForWeight(TArray<int> RaceSpeeds);
	static int CalcExpForWeight(TArray<int> RaceSpeeds);
	static int CalcRearWeight(TArray<int> RaceSpeeds);
	static int CalcExpRearWeight(TArray<int> RaceSpeeds);

	int ProduceRaceLevel(int val);

public:
	//Race Level Bounds
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "DRS")
	int LowerRaceBound = 60;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "DRS")
	int UpperRaceBound = 120;

	//Adds a Reciever to the according array
	void AddToRecieverArray(UDRS_Reciever* Reciever);

	//Adds/Removes a Broadcaster to the according array
	void AddToBroadcasterArray(UDRS_Broadcaster* Broadcaster);
	void RemoveFromBroadcasterArray(UDRS_Broadcaster* Broadcaster);

	//Overall 'Level' of the Racers (1->3)
	UPROPERTY(BlueprintReadOnly, Category = "DRS");
	int RaceLevel = 1;

	//Calls for the ACs to be updated, if they need to be
	UFUNCTION(BlueprintCallable, Category = "DRS")
	void UpdateAdaptiveComps(CalcType CalcType);
};
