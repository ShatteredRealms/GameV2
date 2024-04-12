// Copyright Wil Simpson All Rights Reserved

#include "AttackTargetComponent.h"

#include "UI/AttackTargetDetailsWidget.h"

void UAttackTargetComponent::SetAttacked(bool bAttacked)
{
	if (GetDetailsUserWidget()->SetAttacked(bAttacked))
	{
		AttackedChangedDelegate.ExecuteIfBound(bAttacked);
	}
}

UAttackTargetDetailsWidget* UAttackTargetComponent::GetDetailsUserWidget()
{
	return Cast<UAttackTargetDetailsWidget>(GetUserWidgetObject());
}
