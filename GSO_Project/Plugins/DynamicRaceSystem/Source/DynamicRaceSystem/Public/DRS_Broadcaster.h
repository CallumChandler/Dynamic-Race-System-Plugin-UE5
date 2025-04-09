// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DRS_Broadcaster.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DYNAMICRACESYSTEM_API UDRS_Broadcaster : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDRS_Broadcaster();

private:
	//Broadcaster Values
	int RacerSpeed;
	int RacerPosition;

public:
	//Get/Set Broadcaster Values
	UFUNCTION(BlueprintCallable, Category = "DRS")
	void SetBroadcaster(int position, int speed);

	UFUNCTION(BlueprintCallable, Category = "DRS")
	void GetBroadcaster(int& position, int& speed);

};
