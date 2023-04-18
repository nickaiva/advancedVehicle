// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "advancedVehicleGameMode.h"
#include "advancedVehiclePawn.h"
#include "advancedVehicleHud.h"

AadvancedVehicleGameMode::AadvancedVehicleGameMode()
{
	DefaultPawnClass = AadvancedVehiclePawn::StaticClass();
	HUDClass = AadvancedVehicleHud::StaticClass();
}
