// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveableResizableWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARWINDOWS_MoveableResizableWidget_generated_h
#error "MoveableResizableWidget.generated.h already included, missing '#pragma once' in MoveableResizableWidget.h"
#endif
#define MODULARWINDOWS_MoveableResizableWidget_generated_h

#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_28_SPARSE_DATA
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaxSize); \
	DECLARE_FUNCTION(execGetMinSize);


#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_28_ACCESSORS
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoveableResizeableWidget(); \
	friend struct Z_Construct_UClass_UMoveableResizeableWidget_Statics; \
public: \
	DECLARE_CLASS(UMoveableResizeableWidget, UMoveableWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularWindows"), NO_API) \
	DECLARE_SERIALIZER(UMoveableResizeableWidget)


#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoveableResizeableWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoveableResizeableWidget(UMoveableResizeableWidget&&); \
	NO_API UMoveableResizeableWidget(const UMoveableResizeableWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoveableResizeableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoveableResizeableWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoveableResizeableWidget) \
	NO_API virtual ~UMoveableResizeableWidget();


#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_25_PROLOG
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_28_SPARSE_DATA \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_28_ACCESSORS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_28_INCLASS_NO_PURE_DECLS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARWINDOWS_API UClass* StaticClass<class UMoveableResizeableWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h


#define FOREACH_ENUM_ESIDE(op) \
	op(TOP) \
	op(RIGHT) \
	op(BOTTOM) \
	op(LEFT) \
	op(TOP_LEFT_CORNER) \
	op(TOP_RIGHT_CORNER) \
	op(BOTTOM_RIGHT_CORNER) \
	op(BOTTOM_LEFT_CORNER) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
