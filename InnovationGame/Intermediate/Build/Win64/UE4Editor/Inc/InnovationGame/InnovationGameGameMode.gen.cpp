// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "InnovationGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInnovationGameGameMode() {}
// Cross Module References
	INNOVATIONGAME_API UClass* Z_Construct_UClass_AInnovationGameGameMode_NoRegister();
	INNOVATIONGAME_API UClass* Z_Construct_UClass_AInnovationGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_InnovationGame();
// End Cross Module References
	void AInnovationGameGameMode::StaticRegisterNativesAInnovationGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_AInnovationGameGameMode_NoRegister()
	{
		return AInnovationGameGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AInnovationGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_InnovationGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "InnovationGameGameMode.h" },
				{ "ModuleRelativePath", "InnovationGameGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AInnovationGameGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AInnovationGameGameMode::StaticClass,
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
	IMPLEMENT_CLASS(AInnovationGameGameMode, 4002525994);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInnovationGameGameMode(Z_Construct_UClass_AInnovationGameGameMode, &AInnovationGameGameMode::StaticClass, TEXT("/Script/InnovationGame"), TEXT("AInnovationGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInnovationGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
