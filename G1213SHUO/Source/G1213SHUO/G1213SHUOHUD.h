// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "G1213SHUOHUD.generated.h"

UCLASS()
class AG1213SHUOHUD : public AHUD
{
	GENERATED_BODY()

public:
	AG1213SHUOHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

