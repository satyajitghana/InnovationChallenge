// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HelloPlayerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHelloPlayerGameMode() {}
// Cross Module References
	HELLOPLAYER_API UClass* Z_Construct_UClass_AHelloPlayerGameMode_NoRegister();
	HELLOPLAYER_API UClass* Z_Construct_UClass_AHelloPlayerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HelloPlayer();
// End Cross Module References
	void AHelloPlayerGameMode::StaticRegisterNativesAHelloPlayerGameMode()
	{
	}
	UClass* Z_Construct_UClass_AHelloPlayerGameMode_NoRegister()
	{
		return AHelloPlayerGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AHelloPlayerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_HelloPlayer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "HelloPlayerGameMode.h" },
				{ "ModuleRelativePath", "HelloPlayerGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AHelloPlayerGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AHelloPlayerGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHelloPlayerGameMode, 2606089050);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHelloPlayerGameMode(Z_Construct_UClass_AHelloPlayerGameMode, &AHelloPlayerGameMode::StaticClass, TEXT("/Script/HelloPlayer"), TEXT("AHelloPlayerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHelloPlayerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
