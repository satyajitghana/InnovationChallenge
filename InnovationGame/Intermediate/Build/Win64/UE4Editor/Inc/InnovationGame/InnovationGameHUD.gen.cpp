// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "InnovationGameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInnovationGameHUD() {}
// Cross Module References
	INNOVATIONGAME_API UClass* Z_Construct_UClass_AInnovationGameHUD_NoRegister();
	INNOVATIONGAME_API UClass* Z_Construct_UClass_AInnovationGameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_InnovationGame();
// End Cross Module References
	void AInnovationGameHUD::StaticRegisterNativesAInnovationGameHUD()
	{
	}
	UClass* Z_Construct_UClass_AInnovationGameHUD_NoRegister()
	{
		return AInnovationGameHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AInnovationGameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_InnovationGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "InnovationGameHUD.h" },
				{ "ModuleRelativePath", "InnovationGameHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AInnovationGameHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AInnovationGameHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInnovationGameHUD, 954546433);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInnovationGameHUD(Z_Construct_UClass_AInnovationGameHUD, &AInnovationGameHUD::StaticClass, TEXT("/Script/InnovationGame"), TEXT("AInnovationGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInnovationGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
