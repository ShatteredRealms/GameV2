// Copyright Wil Simpson All Rights Reserved

#include "UI/TargetDetailsWidget.h"

bool UTargetDetailsWidget::SetTargeted_Implementation(bool bNewTargeted)
{
	if (bNewTargeted == bTargeted)
	{
		return false;
	}
	
	bTargeted = bNewTargeted;
	return true;
}

void UTargetDetailsWidget::Setup(AActor* NewTarget)
{
	Target = NewTarget;
}

void UTargetDetailsWidget::SetDisplayName(FString NewDisplayName)
{
	DisplayName = NewDisplayName;
}
