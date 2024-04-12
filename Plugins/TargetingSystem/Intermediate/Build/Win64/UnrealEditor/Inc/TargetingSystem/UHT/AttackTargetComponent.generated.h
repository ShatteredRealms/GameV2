// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AttackTargetComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TARGETINGSYSTEM_AttackTargetComponent_generated_h
#error "AttackTargetComponent.generated.h already included, missing '#pragma once' in AttackTargetComponent.h"
#endif
#define TARGETINGSYSTEM_AttackTargetComponent_generated_h

#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h_14_SPARSE_DATA
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsAttacked); \
	DECLARE_FUNCTION(execSetAttacked);


#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h_14_ACCESSORS
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttackTargetComponent(); \
	friend struct Z_Construct_UClass_UAttackTargetComponent_Statics; \
public: \
	DECLARE_CLASS(UAttackTargetComponent, UTargetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TargetingSystem"), NO_API) \
	DECLARE_SERIALIZER(UAttackTargetComponent)


#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttackTargetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttackTargetComponent(UAttackTargetComponent&&); \
	NO_API UAttackTargetComponent(const UAttackTargetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttackTargetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackTargetComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttackTargetComponent) \
	NO_API virtual ~UAttackTargetComponent();


#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h_11_PROLOG
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h_14_SPARSE_DATA \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h_14_ACCESSORS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TARGETINGSYSTEM_API UClass* StaticClass<class UAttackTargetComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
