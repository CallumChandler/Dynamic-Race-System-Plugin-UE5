// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/PlayerState.h"
#include "DRS_Reciever.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeRaceSpeed, int, RaceLevel);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DYNAMICRACESYSTEM_API UDRS_Reciever : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDRS_Reciever();

	//Adds this particular Reciever to the Processor Manually (to be used only if World Partition is in use)
	UFUNCTION(BlueprintCallable, Category = "DRS")
	void ConnectToProcessor();

	//Adds this Reciever to a designated Processor Manually
	UFUNCTION(BlueprintCallable, Category = "DRS")
	void ConnectToProcessorByName(FString ProcessorName); //!!!TEST!!!

	//Updates Recievers
	UPROPERTY(BlueprintAssignable)
	FChangeRaceSpeed OnRaceLevelChange;

	//Event that runs when RaceLevel updates
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "DRS")
	void OnRaceSpeedChange(int NewRaceLevel);
};
