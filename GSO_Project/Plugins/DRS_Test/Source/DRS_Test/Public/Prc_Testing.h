// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DRS_Processor.h"
#include "Prc_Testing.generated.h"

/**
 * 
 */
UCLASS()
class DRS_TEST_API UPrc_Testing : public UDRS_Processor
{
	GENERATED_BODY()

public:
	//----Functions for Testing----
	bool Debug_IsRecieverPresent(UDRS_Reciever* Rrc);
	bool Debug_IsBroadcasterPresent(UDRS_Broadcaster* Brc);
	
	//Gets Racers Speeds for Testing
	TArray<int> Debug_GetRacersSpeeds() { return GetRacersSpeeds(); }

	int Debug_CalcMean(TArray<int> RaceSpeeds) { return CalcMean(RaceSpeeds); }

	int Debug_ProduceRaceLevel(int val) { return ProduceRaceLevel(val); }
};
