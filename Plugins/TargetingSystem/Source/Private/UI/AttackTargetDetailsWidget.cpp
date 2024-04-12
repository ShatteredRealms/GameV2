// Copyright Wil Simpson All Rights Reserved

#include "UI/AttackTargetDetailsWidget.h"

bool UAttackTargetDetailsWidget::SetAttacked_Implementation(bool bNewAttacked)
{
	if (bNewAttacked == bAttacked)
	{
		return false;
	}
	
	bAttacked = bNewAttacked;
	return true;
}
