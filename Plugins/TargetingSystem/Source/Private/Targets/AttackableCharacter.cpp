#include "Targets/AttackableCharacter.h"

#include "GameplayTagsManager.h"
#include "Kismet/KismetMathLibrary.h"
#include "Net/UnrealNetwork.h"


void AAttackableCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AAttackableCharacter, AttackTarget);
}

void AAttackableCharacter::StartAttack(AAttackableCharacter* Target)
{
	if (Target == this || !IsLocallyControlled() || Target == nullptr)
	{
		return;
	}

	HandleStartAttack(Target);
}

void AAttackableCharacter::StopAttack()
{
	if (!IsLocallyControlled())
	{
		return;
	}

	if (!IsAttacking())
	{
		return;
	}
	
	HandleStopAttack();
}

bool AAttackableCharacter::HandleStopAttack_Validate()
{
	if (!IsAttacking())
	{
		return false;
	}
	
	return true;
}

bool AAttackableCharacter::HandleStartAttack_Validate(AAttackableCharacter* Target)
{
	if (Target == this || Target == nullptr)
	{
		return false;
	}

	return true;
}

void AAttackableCharacter::HandleStartAttack_Implementation(AAttackableCharacter* Target)
{
	AttackTarget = Target;
}

void AAttackableCharacter::HandleStopAttack_Implementation()
{
	// Clear fighting target
	AttackTarget = nullptr;
	
	// Call BP event
	OnAttackTargetUpdated();
}

FRotator AAttackableCharacter::GetAttackTargetRotation() const
{
	if (!AttackTarget)
	{
		return GetActorRotation();
	}
	
	const FRotator Rotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), AttackTarget->GetActorLocation());
	
	if (GetController())
	{
		FRotator ControllerRotation = GetController()->GetControlRotation();
		ControllerRotation.Yaw = Rotation.Yaw;
		return ControllerRotation;
	}

	return FRotator{0, Rotation.Yaw, 0};
}

UAttackTargetComponent* AAttackableCharacter::GetTargetComponent()
{
	return Cast<UAttackTargetComponent>(TargetComponent);
}

void AAttackableCharacter::OnRep_AttackTarget(AAttackableCharacter* OldAttackTarget)
{
	if (IsLocallyControlled())
	{
		if (OldAttackTarget && OldAttackTarget != AttackTarget)
		{
			OldAttackTarget->GetTargetComponent()->SetAttacked(false);
		}

		if (AttackTarget)
		{
			AttackTarget->GetTargetComponent()->SetAttacked(true);
		}
	}
	
	OnAttackTargetUpdated();
}

void AAttackableCharacter::OnAttackTargetUpdated_Implementation()
{
}