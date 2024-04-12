// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Targetable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TARGETINGSYSTEM_Targetable_generated_h
#error "Targetable.generated.h already included, missing '#pragma once' in Targetable.h"
#endif
#define TARGETINGSYSTEM_Targetable_generated_h

#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_14_SPARSE_DATA
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_14_ACCESSORS
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TARGETINGSYSTEM_API UTargetable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TARGETINGSYSTEM_API UTargetable(UTargetable&&); \
	TARGETINGSYSTEM_API UTargetable(const UTargetable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TARGETINGSYSTEM_API, UTargetable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetable) \
	TARGETINGSYSTEM_API virtual ~UTargetable();


#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTargetable(); \
	friend struct Z_Construct_UClass_UTargetable_Statics; \
public: \
	DECLARE_CLASS(UTargetable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TargetingSystem"), TARGETINGSYSTEM_API) \
	DECLARE_SERIALIZER(UTargetable)


#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_14_GENERATED_UINTERFACE_BODY() \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITargetable() {} \
public: \
	typedef UTargetable UClassType; \
	typedef ITargetable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_11_PROLOG
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_14_SPARSE_DATA \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_14_ACCESSORS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TARGETINGSYSTEM_API UClass* StaticClass<class UTargetable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
