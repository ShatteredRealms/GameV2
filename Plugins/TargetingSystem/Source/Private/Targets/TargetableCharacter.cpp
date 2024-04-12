// Copyright Wil Simpson All Rights Reserved

#include "Targets/TargetableCharacter.h"

ATargetableCharacter::ATargetableCharacter(const FObjectInitializer& ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;

	TargetComponent = CreateDefaultSubobject<UTargetComponent>(TEXT("TargetComponent"));
	TargetComponent->SetupAttachment(RootComponent);
}

UTargetComponent* ATargetableCharacter::GetTargetComponent()
{
	return TargetComponent;
}
