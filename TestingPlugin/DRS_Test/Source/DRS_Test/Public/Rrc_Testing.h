// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DRS_Reciever.h"
#include "Rrc_Testing.generated.h"

/**
 * 
 */
UCLASS()
class DRS_TEST_API URrc_Testing : public UDRS_Reciever
{
	GENERATED_BODY()

public:
	int Debug_GetRaceLevel();
};
