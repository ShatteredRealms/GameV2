// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/TargetDetailsWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TARGETINGSYSTEM_TargetDetailsWidget_generated_h
#error "TargetDetailsWidget.generated.h already included, missing '#pragma once' in TargetDetailsWidget.h"
#endif
#define TARGETINGSYSTEM_TargetDetailsWidget_generated_h

#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_15_SPARSE_DATA
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool SetTargeted_Implementation(bool bNewTargeted); \
 \
	DECLARE_FUNCTION(execIsTargeted); \
	DECLARE_FUNCTION(execSetTargeted); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execSetDisplayName);


#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_15_ACCESSORS
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_15_CALLBACK_WRAPPERS
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetDetailsWidget(); \
	friend struct Z_Construct_UClass_UTargetDetailsWidget_Statics; \
public: \
	DECLARE_CLASS(UTargetDetailsWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TargetingSystem"), NO_API) \
	DECLARE_SERIALIZER(UTargetDetailsWidget)


#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetDetailsWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetDetailsWidget(UTargetDetailsWidget&&); \
	NO_API UTargetDetailsWidget(const UTargetDetailsWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetDetailsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetDetailsWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetDetailsWidget) \
	NO_API virtual ~UTargetDetailsWidget();


#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_12_PROLOG
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_15_SPARSE_DATA \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_15_ACCESSORS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_15_CALLBACK_WRAPPERS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TARGETINGSYSTEM_API UClass* StaticClass<class UTargetDetailsWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
