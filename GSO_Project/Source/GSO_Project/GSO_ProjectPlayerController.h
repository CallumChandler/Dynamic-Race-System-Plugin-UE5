// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GSO_ProjectPlayerController.generated.h"

class UInputMappingContext;
class AGSO_ProjectPawn;
class UGSO_ProjectUI;

/**
 *  Vehicle Player Controller class
 *  Handles input mapping and user interface
 */
UCLASS(abstract)
class GSO_PROJECT_API AGSO_ProjectPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:

	/** Input Mapping Context to be used for player input */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* InputMappingContext;

	/** Pointer to the controlled vehicle pawn */
	TObjectPtr<AGSO_ProjectPawn> VehiclePawn;

	/** Type of the UI to spawn */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = UI)
	TSubclassOf<UGSO_ProjectUI> VehicleUIClass;

	/** Pointer to the UI widget */
	TObjectPtr<UGSO_ProjectUI> VehicleUI;

	// Begin Actor interface
protected:

	void OnPossessed();

public:

	virtual void Tick(float Delta) override;

	// End Actor interface

	// Begin PlayerController interface
protected:

	virtual void OnPossess(APawn* InPawn) override;

	// End PlayerController interface
};
