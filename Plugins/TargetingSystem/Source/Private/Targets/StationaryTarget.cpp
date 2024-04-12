// Copyright Wil Simpson All Rights Reserved

#include "Targets/StationaryTarget.h"

AStationaryTarget::AStationaryTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateOptionalDefaultSubobject<UStaticMeshComponent>(TEXT("TargetMesh0"));
	if (Mesh)
	{
		RootComponent = Mesh;
		Mesh->AlwaysLoadOnClient = true;
		Mesh->AlwaysLoadOnServer = true;
		Mesh->bOwnerNoSee = false;
		Mesh->bCastDynamicShadow = true;
		Mesh->bAffectDynamicIndirectLighting = true;
		Mesh->PrimaryComponentTick.TickGroup = TG_PrePhysics;
		static FName MeshCollisionProfileName(TEXT("TargetMesh"));
		Mesh->SetCollisionProfileName(MeshCollisionProfileName);
		Mesh->SetGenerateOverlapEvents(false);
		Mesh->SetCanEverAffectNavigation(false);
	}

	TargetComponent = CreateDefaultSubobject<UTargetComponent>(TEXT("TargetComponent"));
	TargetComponent->SetupAttachment(RootComponent);
}

UTargetComponent* AStationaryTarget::GetTargetComponent()
{
	return TargetComponent;
}

void AStationaryTarget::SetDisplayName(FString NewDisplayName)
{
	DisplayName = NewDisplayName;
	TargetComponent->SetDisplayName(NewDisplayName);
}
