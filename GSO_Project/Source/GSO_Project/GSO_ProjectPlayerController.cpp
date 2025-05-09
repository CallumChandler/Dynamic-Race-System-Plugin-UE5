// Copyright Epic Games, Inc. All Rights Reserved.


#include "GSO_ProjectPlayerController.h"
#include "GSO_ProjectPawn.h"
#include "GSO_ProjectUI.h"
#include "EnhancedInputSubsystems.h"
#include "ChaosWheeledVehicleMovementComponent.h"

void AGSO_ProjectPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// get the enhanced input subsystem
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		// add the mapping context so we get controls
		Subsystem->AddMappingContext(InputMappingContext, 0);
	}

	if (IsLocalPlayerController())
	{
		//spawn the UI widget and add it to the viewport
		VehicleUI = CreateWidget<UGSO_ProjectUI>(this, VehicleUIClass);

		if (VehicleUI)
		{
			//check(VehicleUI);
			VehicleUI->AddToPlayerScreen();
		}
	}
}

void AGSO_ProjectPlayerController::Tick(float Delta)
{
	Super::Tick(Delta);

	/*UE_LOG(LogTemp, Warning, TEXT("---- For %s ----"), *FString(this->GetName()));

	if (VehiclePawn)
	{
		UE_LOG(LogTemp, Warning, TEXT("Pawn: %s"), *FString(VehiclePawn->GetName()));
	}

	if (VehicleUI)
	{
		UE_LOG(LogTemp, Warning, TEXT("UI: %s"), *FString(VehicleUI->GetName()));
	}*/

	if (IsValid(VehiclePawn) && IsValid(VehicleUI))
	{
		

		VehicleUI->UpdateSpeed(VehiclePawn->GetChaosVehicleMovement()->GetForwardSpeed());
		VehicleUI->UpdateGear(VehiclePawn->GetChaosVehicleMovement()->GetCurrentGear());
	}
}

void AGSO_ProjectPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (InPawn)
	{
		//Tries to get a pointer to the controlled pawn
		VehiclePawn = CastChecked<AGSO_ProjectPawn>(InPawn);
	}
}

