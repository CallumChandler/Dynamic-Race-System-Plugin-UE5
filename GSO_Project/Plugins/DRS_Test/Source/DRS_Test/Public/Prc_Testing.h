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
	bool Debug_IsRecieverPresent(UDRS_Reciever* Rrc);
	bool Debug_IsBroadcasterPresent(UDRS_Broadcaster* Brc);
};
