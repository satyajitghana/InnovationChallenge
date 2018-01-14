// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INNOVATIONGAME_InnovationGameCharacter_generated_h
#error "InnovationGameCharacter.generated.h already included, missing '#pragma once' in InnovationGameCharacter.h"
#endif
#define INNOVATIONGAME_InnovationGameCharacter_generated_h

#define InnovationGame_Source_InnovationGame_InnovationGameCharacter_h_14_RPC_WRAPPERS
#define InnovationGame_Source_InnovationGame_InnovationGameCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define InnovationGame_Source_InnovationGame_InnovationGameCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInnovationGameCharacter(); \
	friend INNOVATIONGAME_API class UClass* Z_Construct_UClass_AInnovationGameCharacter(); \
public: \
	DECLARE_CLASS(AInnovationGameCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/InnovationGame"), NO_API) \
	DECLARE_SERIALIZER(AInnovationGameCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define InnovationGame_Source_InnovationGame_InnovationGameCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAInnovationGameCharacter(); \
	friend INNOVATIONGAME_API class UClass* Z_Construct_UClass_AInnovationGameCharacter(); \
public: \
	DECLARE_CLASS(AInnovationGameCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/InnovationGame"), NO_API) \
	DECLARE_SERIALIZER(AInnovationGameCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define InnovationGame_Source_InnovationGame_InnovationGameCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInnovationGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInnovationGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInnovationGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInnovationGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInnovationGameCharacter(AInnovationGameCharacter&&); \
	NO_API AInnovationGameCharacter(const AInnovationGameCharacter&); \
public:


#define InnovationGame_Source_InnovationGame_InnovationGameCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInnovationGameCharacter(AInnovationGameCharacter&&); \
	NO_API AInnovationGameCharacter(const AInnovationGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInnovationGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInnovationGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInnovationGameCharacter)


#define InnovationGame_Source_InnovationGame_InnovationGameCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AInnovationGameCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AInnovationGameCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AInnovationGameCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AInnovationGameCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AInnovationGameCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AInnovationGameCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AInnovationGameCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AInnovationGameCharacter, L_MotionController); }


#define InnovationGame_Source_InnovationGame_InnovationGameCharacter_h_11_PROLOG
#define InnovationGame_Source_InnovationGame_InnovationGameCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InnovationGame_Source_InnovationGame_InnovationGameCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	InnovationGame_Source_InnovationGame_InnovationGameCharacter_h_14_RPC_WRAPPERS \
	InnovationGame_Source_InnovationGame_InnovationGameCharacter_h_14_INCLASS \
	InnovationGame_Source_InnovationGame_InnovationGameCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InnovationGame_Source_InnovationGame_InnovationGameCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InnovationGame_Source_InnovationGame_InnovationGameCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	InnovationGame_Source_InnovationGame_InnovationGameCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	InnovationGame_Source_InnovationGame_InnovationGameCharacter_h_14_INCLASS_NO_PURE_DECLS \
	InnovationGame_Source_InnovationGame_InnovationGameCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InnovationGame_Source_InnovationGame_InnovationGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
