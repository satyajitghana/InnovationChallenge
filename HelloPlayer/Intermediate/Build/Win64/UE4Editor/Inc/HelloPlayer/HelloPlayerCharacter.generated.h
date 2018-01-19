// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HELLOPLAYER_HelloPlayerCharacter_generated_h
#error "HelloPlayerCharacter.generated.h already included, missing '#pragma once' in HelloPlayerCharacter.h"
#endif
#define HELLOPLAYER_HelloPlayerCharacter_generated_h

#define HelloPlayer_Source_HelloPlayer_HelloPlayerCharacter_h_12_RPC_WRAPPERS
#define HelloPlayer_Source_HelloPlayer_HelloPlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define HelloPlayer_Source_HelloPlayer_HelloPlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHelloPlayerCharacter(); \
	friend HELLOPLAYER_API class UClass* Z_Construct_UClass_AHelloPlayerCharacter(); \
public: \
	DECLARE_CLASS(AHelloPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HelloPlayer"), NO_API) \
	DECLARE_SERIALIZER(AHelloPlayerCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HelloPlayer_Source_HelloPlayer_HelloPlayerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHelloPlayerCharacter(); \
	friend HELLOPLAYER_API class UClass* Z_Construct_UClass_AHelloPlayerCharacter(); \
public: \
	DECLARE_CLASS(AHelloPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HelloPlayer"), NO_API) \
	DECLARE_SERIALIZER(AHelloPlayerCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HelloPlayer_Source_HelloPlayer_HelloPlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHelloPlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHelloPlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHelloPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHelloPlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHelloPlayerCharacter(AHelloPlayerCharacter&&); \
	NO_API AHelloPlayerCharacter(const AHelloPlayerCharacter&); \
public:


#define HelloPlayer_Source_HelloPlayer_HelloPlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHelloPlayerCharacter(AHelloPlayerCharacter&&); \
	NO_API AHelloPlayerCharacter(const AHelloPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHelloPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHelloPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHelloPlayerCharacter)


#define HelloPlayer_Source_HelloPlayer_HelloPlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AHelloPlayerCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AHelloPlayerCharacter, FollowCamera); }


#define HelloPlayer_Source_HelloPlayer_HelloPlayerCharacter_h_9_PROLOG
#define HelloPlayer_Source_HelloPlayer_HelloPlayerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HelloPlayer_Source_HelloPlayer_HelloPlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	HelloPlayer_Source_HelloPlayer_HelloPlayerCharacter_h_12_RPC_WRAPPERS \
	HelloPlayer_Source_HelloPlayer_HelloPlayerCharacter_h_12_INCLASS \
	HelloPlayer_Source_HelloPlayer_HelloPlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HelloPlayer_Source_HelloPlayer_HelloPlayerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HelloPlayer_Source_HelloPlayer_HelloPlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	HelloPlayer_Source_HelloPlayer_HelloPlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HelloPlayer_Source_HelloPlayer_HelloPlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	HelloPlayer_Source_HelloPlayer_HelloPlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HelloPlayer_Source_HelloPlayer_HelloPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
