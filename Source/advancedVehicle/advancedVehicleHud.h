// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "advancedVehicleHud.generated.h"

UCLASS(config = Game)
class AadvancedVehicleHud : public AHUD
{
	GENERATED_BODY()

public:
	AadvancedVehicleHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
