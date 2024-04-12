// Copyright Wil Simpson All Rights Reserved

#include "TargetComponent.h"

#include "UI/TargetDetailsWidget.h"

UTargetComponent::UTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	SetUsingAbsoluteRotation(true);
	bDrawAtDesiredSize = true;
}

void UTargetComponent::BeginPlay()
{
	Super::BeginPlay();

	// Not needed on the server
	if (GetOwner()->HasAuthority())
	{
		return;
	}
	
	if (!GetWidgetClass())
	{
		return;
	}

	if (!GetWidgetClass()->IsChildOf(UTargetDetailsWidget::StaticClass()))
	{
		return;
	}
	
	UTargetDetailsWidget* NewWidget = CreateWidget<UTargetDetailsWidget>(GetWorld(), WidgetClass);
	NewWidget->Setup(GetOwner());
	SetWidget(NewWidget);
}

void UTargetComponent::SetTargeted(bool bIsTargeted)
{
	if (GetDetailsUserWidget()->SetTargeted(bIsTargeted))
	{
		TargetingChangedDelegate.ExecuteIfBound(bIsTargeted);
	}
}

bool UTargetComponent::IsTargeted()
{
	return GetDetailsUserWidget()->IsTargeted();
}

void UTargetComponent::SetDisplayName(FString NewName)
{
	GetDetailsUserWidget()->SetDisplayName(NewName);
}

UTargetDetailsWidget* UTargetComponent::GetDetailsUserWidget()
{
	return Cast<UTargetDetailsWidget>(GetUserWidgetObject());
}