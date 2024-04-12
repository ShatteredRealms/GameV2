// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/Targets/AttackableCharacter.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackableCharacter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_AAttackableCharacter();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_AAttackableCharacter_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_ATargetableCharacter();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	DEFINE_FUNCTION(AAttackableCharacter::execGetAttackTargetRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetAttackTargetRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAttackableCharacter::execOnAttackTargetUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttackTargetUpdated_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAttackableCharacter::execGetAttackTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AAttackableCharacter**)Z_Param__Result=P_THIS->GetAttackTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAttackableCharacter::execHandleStopAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->HandleStopAttack_Validate())
		{
			RPC_ValidateFailed(TEXT("HandleStopAttack_Validate"));
			return;
		}
		P_THIS->HandleStopAttack_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAttackableCharacter::execHandleStartAttack)
	{
		P_GET_OBJECT(AAttackableCharacter,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->HandleStartAttack_Validate(Z_Param_Target))
		{
			RPC_ValidateFailed(TEXT("HandleStartAttack_Validate"));
			return;
		}
		P_THIS->HandleStartAttack_Implementation(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAttackableCharacter::execStopAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAttackableCharacter::execStartAttack)
	{
		P_GET_OBJECT(AAttackableCharacter,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAttack(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAttackableCharacter::execIsAttacking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttacking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAttackableCharacter::execOnRep_AttackTarget)
	{
		P_GET_OBJECT(AAttackableCharacter,Z_Param_OldAttackTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttackTarget(Z_Param_OldAttackTarget);
		P_NATIVE_END;
	}
	struct AttackableCharacter_eventHandleStartAttack_Parms
	{
		AAttackableCharacter* Target;
	};
	static FName NAME_AAttackableCharacter_HandleStartAttack = FName(TEXT("HandleStartAttack"));
	void AAttackableCharacter::HandleStartAttack(AAttackableCharacter* Target)
	{
		AttackableCharacter_eventHandleStartAttack_Parms Parms;
		Parms.Target=Target;
		ProcessEvent(FindFunctionChecked(NAME_AAttackableCharacter_HandleStartAttack),&Parms);
	}
	static FName NAME_AAttackableCharacter_HandleStopAttack = FName(TEXT("HandleStopAttack"));
	void AAttackableCharacter::HandleStopAttack()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAttackableCharacter_HandleStopAttack),NULL);
	}
	static FName NAME_AAttackableCharacter_OnAttackTargetUpdated = FName(TEXT("OnAttackTargetUpdated"));
	void AAttackableCharacter::OnAttackTargetUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAttackableCharacter_OnAttackTargetUpdated),NULL);
	}
	void AAttackableCharacter::StaticRegisterNativesAAttackableCharacter()
	{
		UClass* Class = AAttackableCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttackTarget", &AAttackableCharacter::execGetAttackTarget },
			{ "GetAttackTargetRotation", &AAttackableCharacter::execGetAttackTargetRotation },
			{ "HandleStartAttack", &AAttackableCharacter::execHandleStartAttack },
			{ "HandleStopAttack", &AAttackableCharacter::execHandleStopAttack },
			{ "IsAttacking", &AAttackableCharacter::execIsAttacking },
			{ "OnAttackTargetUpdated", &AAttackableCharacter::execOnAttackTargetUpdated },
			{ "OnRep_AttackTarget", &AAttackableCharacter::execOnRep_AttackTarget },
			{ "StartAttack", &AAttackableCharacter::execStartAttack },
			{ "StopAttack", &AAttackableCharacter::execStopAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAttackableCharacter_GetAttackTarget_Statics
	{
		struct AttackableCharacter_eventGetAttackTarget_Parms
		{
			AAttackableCharacter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAttackableCharacter_GetAttackTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttackableCharacter_eventGetAttackTarget_Parms, ReturnValue), Z_Construct_UClass_AAttackableCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAttackableCharacter_GetAttackTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttackableCharacter_GetAttackTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttackableCharacter_GetAttackTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the current fighting target */" },
#endif
		{ "ModuleRelativePath", "Public/Targets/AttackableCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current fighting target" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttackableCharacter_GetAttackTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttackableCharacter, nullptr, "GetAttackTarget", nullptr, nullptr, Z_Construct_UFunction_AAttackableCharacter_GetAttackTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackableCharacter_GetAttackTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAttackableCharacter_GetAttackTarget_Statics::AttackableCharacter_eventGetAttackTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackableCharacter_GetAttackTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAttackableCharacter_GetAttackTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackableCharacter_GetAttackTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAttackableCharacter_GetAttackTarget_Statics::AttackableCharacter_eventGetAttackTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAttackableCharacter_GetAttackTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAttackableCharacter_GetAttackTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAttackableCharacter_GetAttackTargetRotation_Statics
	{
		struct AttackableCharacter_eventGetAttackTargetRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAttackableCharacter_GetAttackTargetRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttackableCharacter_eventGetAttackTargetRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAttackableCharacter_GetAttackTargetRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttackableCharacter_GetAttackTargetRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttackableCharacter_GetAttackTargetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the rotation necessary to look at the fighting target */" },
#endif
		{ "ModuleRelativePath", "Public/Targets/AttackableCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the rotation necessary to look at the fighting target" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttackableCharacter_GetAttackTargetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttackableCharacter, nullptr, "GetAttackTargetRotation", nullptr, nullptr, Z_Construct_UFunction_AAttackableCharacter_GetAttackTargetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackableCharacter_GetAttackTargetRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAttackableCharacter_GetAttackTargetRotation_Statics::AttackableCharacter_eventGetAttackTargetRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackableCharacter_GetAttackTargetRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAttackableCharacter_GetAttackTargetRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackableCharacter_GetAttackTargetRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAttackableCharacter_GetAttackTargetRotation_Statics::AttackableCharacter_eventGetAttackTargetRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAttackableCharacter_GetAttackTargetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAttackableCharacter_GetAttackTargetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAttackableCharacter_HandleStartAttack_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAttackableCharacter_HandleStartAttack_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttackableCharacter_eventHandleStartAttack_Parms, Target), Z_Construct_UClass_AAttackableCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAttackableCharacter_HandleStartAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttackableCharacter_HandleStartAttack_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttackableCharacter_HandleStartAttack_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Server: Start fighting the given target */" },
#endif
		{ "ModuleRelativePath", "Public/Targets/AttackableCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server: Start fighting the given target" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttackableCharacter_HandleStartAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttackableCharacter, nullptr, "HandleStartAttack", nullptr, nullptr, Z_Construct_UFunction_AAttackableCharacter_HandleStartAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackableCharacter_HandleStartAttack_Statics::PropPointers), sizeof(AttackableCharacter_eventHandleStartAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackableCharacter_HandleStartAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAttackableCharacter_HandleStartAttack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackableCharacter_HandleStartAttack_Statics::PropPointers) < 2048);
	static_assert(sizeof(AttackableCharacter_eventHandleStartAttack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAttackableCharacter_HandleStartAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAttackableCharacter_HandleStartAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAttackableCharacter_HandleStopAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttackableCharacter_HandleStopAttack_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Server: Stop fighting the current target */" },
#endif
		{ "ModuleRelativePath", "Public/Targets/AttackableCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server: Stop fighting the current target" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttackableCharacter_HandleStopAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttackableCharacter, nullptr, "HandleStopAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackableCharacter_HandleStopAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAttackableCharacter_HandleStopAttack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAttackableCharacter_HandleStopAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAttackableCharacter_HandleStopAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAttackableCharacter_IsAttacking_Statics
	{
		struct AttackableCharacter_eventIsAttacking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAttackableCharacter_IsAttacking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttackableCharacter_eventIsAttacking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAttackableCharacter_IsAttacking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AttackableCharacter_eventIsAttacking_Parms), &Z_Construct_UFunction_AAttackableCharacter_IsAttacking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAttackableCharacter_IsAttacking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttackableCharacter_IsAttacking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttackableCharacter_IsAttacking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the character is attacking or not */" },
#endif
		{ "ModuleRelativePath", "Public/Targets/AttackableCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the character is attacking or not" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttackableCharacter_IsAttacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttackableCharacter, nullptr, "IsAttacking", nullptr, nullptr, Z_Construct_UFunction_AAttackableCharacter_IsAttacking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackableCharacter_IsAttacking_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAttackableCharacter_IsAttacking_Statics::AttackableCharacter_eventIsAttacking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackableCharacter_IsAttacking_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAttackableCharacter_IsAttacking_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackableCharacter_IsAttacking_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAttackableCharacter_IsAttacking_Statics::AttackableCharacter_eventIsAttacking_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAttackableCharacter_IsAttacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAttackableCharacter_IsAttacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAttackableCharacter_OnAttackTargetUpdated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttackableCharacter_OnAttackTargetUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the server fighting target is updated */" },
#endif
		{ "ModuleRelativePath", "Public/Targets/AttackableCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the server fighting target is updated" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttackableCharacter_OnAttackTargetUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttackableCharacter, nullptr, "OnAttackTargetUpdated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackableCharacter_OnAttackTargetUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAttackableCharacter_OnAttackTargetUpdated_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAttackableCharacter_OnAttackTargetUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAttackableCharacter_OnAttackTargetUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAttackableCharacter_OnRep_AttackTarget_Statics
	{
		struct AttackableCharacter_eventOnRep_AttackTarget_Parms
		{
			AAttackableCharacter* OldAttackTarget;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldAttackTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAttackableCharacter_OnRep_AttackTarget_Statics::NewProp_OldAttackTarget = { "OldAttackTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttackableCharacter_eventOnRep_AttackTarget_Parms, OldAttackTarget), Z_Construct_UClass_AAttackableCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAttackableCharacter_OnRep_AttackTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttackableCharacter_OnRep_AttackTarget_Statics::NewProp_OldAttackTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttackableCharacter_OnRep_AttackTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Targets/AttackableCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttackableCharacter_OnRep_AttackTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttackableCharacter, nullptr, "OnRep_AttackTarget", nullptr, nullptr, Z_Construct_UFunction_AAttackableCharacter_OnRep_AttackTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackableCharacter_OnRep_AttackTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAttackableCharacter_OnRep_AttackTarget_Statics::AttackableCharacter_eventOnRep_AttackTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackableCharacter_OnRep_AttackTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAttackableCharacter_OnRep_AttackTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackableCharacter_OnRep_AttackTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAttackableCharacter_OnRep_AttackTarget_Statics::AttackableCharacter_eventOnRep_AttackTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAttackableCharacter_OnRep_AttackTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAttackableCharacter_OnRep_AttackTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAttackableCharacter_StartAttack_Statics
	{
		struct AttackableCharacter_eventStartAttack_Parms
		{
			AAttackableCharacter* Target;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAttackableCharacter_StartAttack_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttackableCharacter_eventStartAttack_Parms, Target), Z_Construct_UClass_AAttackableCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAttackableCharacter_StartAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttackableCharacter_StartAttack_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttackableCharacter_StartAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attempts to start attacking the target */" },
#endif
		{ "ModuleRelativePath", "Public/Targets/AttackableCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempts to start attacking the target" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttackableCharacter_StartAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttackableCharacter, nullptr, "StartAttack", nullptr, nullptr, Z_Construct_UFunction_AAttackableCharacter_StartAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackableCharacter_StartAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAttackableCharacter_StartAttack_Statics::AttackableCharacter_eventStartAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackableCharacter_StartAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAttackableCharacter_StartAttack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackableCharacter_StartAttack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAttackableCharacter_StartAttack_Statics::AttackableCharacter_eventStartAttack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAttackableCharacter_StartAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAttackableCharacter_StartAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAttackableCharacter_StopAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttackableCharacter_StopAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attempts to stop fighting */" },
#endif
		{ "ModuleRelativePath", "Public/Targets/AttackableCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempts to stop fighting" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttackableCharacter_StopAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttackableCharacter, nullptr, "StopAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackableCharacter_StopAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAttackableCharacter_StopAttack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAttackableCharacter_StopAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAttackableCharacter_StopAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAttackableCharacter);
	UClass* Z_Construct_UClass_AAttackableCharacter_NoRegister()
	{
		return AAttackableCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAttackableCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttackTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAttackableCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATargetableCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAttackableCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAttackableCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAttackableCharacter_GetAttackTarget, "GetAttackTarget" }, // 1934840582
		{ &Z_Construct_UFunction_AAttackableCharacter_GetAttackTargetRotation, "GetAttackTargetRotation" }, // 595160384
		{ &Z_Construct_UFunction_AAttackableCharacter_HandleStartAttack, "HandleStartAttack" }, // 688394524
		{ &Z_Construct_UFunction_AAttackableCharacter_HandleStopAttack, "HandleStopAttack" }, // 4230922249
		{ &Z_Construct_UFunction_AAttackableCharacter_IsAttacking, "IsAttacking" }, // 2784845510
		{ &Z_Construct_UFunction_AAttackableCharacter_OnAttackTargetUpdated, "OnAttackTargetUpdated" }, // 3992129018
		{ &Z_Construct_UFunction_AAttackableCharacter_OnRep_AttackTarget, "OnRep_AttackTarget" }, // 1449604122
		{ &Z_Construct_UFunction_AAttackableCharacter_StartAttack, "StartAttack" }, // 1587763700
		{ &Z_Construct_UFunction_AAttackableCharacter_StopAttack, "StopAttack" }, // 286726922
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAttackableCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttackableCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base SRO character that cant attack and be attacked. It has combat and skill attribute sets.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Targets/AttackableCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Targets/AttackableCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base SRO character that cant attack and be attacked. It has combat and skill attribute sets." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttackableCharacter_Statics::NewProp_AttackTarget_MetaData[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attack target of this. Null if not fighting. */" },
#endif
		{ "ModuleRelativePath", "Public/Targets/AttackableCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attack target of this. Null if not fighting." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAttackableCharacter_Statics::NewProp_AttackTarget = { "AttackTarget", "OnRep_AttackTarget", (EPropertyFlags)0x0024080100020035, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttackableCharacter, AttackTarget), Z_Construct_UClass_AAttackableCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAttackableCharacter_Statics::NewProp_AttackTarget_MetaData), Z_Construct_UClass_AAttackableCharacter_Statics::NewProp_AttackTarget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAttackableCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttackableCharacter_Statics::NewProp_AttackTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAttackableCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAttackableCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAttackableCharacter_Statics::ClassParams = {
		&AAttackableCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAttackableCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAttackableCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAttackableCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAttackableCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAttackableCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAttackableCharacter()
	{
		if (!Z_Registration_Info_UClass_AAttackableCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAttackableCharacter.OuterSingleton, Z_Construct_UClass_AAttackableCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAttackableCharacter.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<AAttackableCharacter>()
	{
		return AAttackableCharacter::StaticClass();
	}

	void AAttackableCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_AttackTarget(TEXT("AttackTarget"));

		const bool bIsValid = true
			&& Name_AttackTarget == ClassReps[(int32)ENetFields_Private::AttackTarget].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAttackableCharacter"));
	}
	AAttackableCharacter::AAttackableCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAttackableCharacter);
	AAttackableCharacter::~AAttackableCharacter() {}
	struct Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAttackableCharacter, AAttackableCharacter::StaticClass, TEXT("AAttackableCharacter"), &Z_Registration_Info_UClass_AAttackableCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAttackableCharacter), 501131533U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_2734482202(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
