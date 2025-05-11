// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Net/UnrealNetwork.h"
#include "DRS_Broadcaster.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DYNAMICRACESYSTEM_API UDRS_Broadcaster : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDRS_Broadcaster();

protected:
	void BeginPlay();

protected:
	//Broadcaster Values
	int RacerSpeed;
	int RacerPosition;

public:
	//Get/Set Broadcaster Values
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation, Category = "DRS")
	void SetSpeed(int speed);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation, Category = "DRS")
	void SetPosition(int position);

	UFUNCTION(BlueprintCallable, Category = "DRS")
	int GetSpeed();

	UFUNCTION(BlueprintCallable, Category = "DRS")
	int GetPosition();

};
