// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "HilariousCartsGameMode.h"
#include "HilariousCartsPawn.h"
#include "HilariousCartsHud.h"

AHilariousCartsGameMode::AHilariousCartsGameMode()
{
	DefaultPawnClass = AHilariousCartsPawn::StaticClass();
	HUDClass = AHilariousCartsHud::StaticClass();
}
