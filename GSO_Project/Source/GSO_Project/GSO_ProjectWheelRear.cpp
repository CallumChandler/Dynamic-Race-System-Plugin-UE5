// Copyright Epic Games, Inc. All Rights Reserved.

#include "GSO_ProjectWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UGSO_ProjectWheelRear::UGSO_ProjectWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}