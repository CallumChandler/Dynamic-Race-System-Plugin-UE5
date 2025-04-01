// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GSO_ProjectPawn.h"
#include "GSO_ProjectSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class GSO_PROJECT_API AGSO_ProjectSportsCar : public AGSO_ProjectPawn
{
	GENERATED_BODY()
	
public:

	AGSO_ProjectSportsCar();
};
