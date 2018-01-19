// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Pawn_Animal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawn_Animal() {}
// Cross Module References
	INNOVATIONGAME_API UClass* Z_Construct_UClass_APawn_Animal_NoRegister();
	INNOVATIONGAME_API UClass* Z_Construct_UClass_APawn_Animal();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_InnovationGame();
// End Cross Module References
	void APawn_Animal::StaticRegisterNativesAPawn_Animal()
	{
	}
	UClass* Z_Construct_UClass_APawn_Animal_NoRegister()
	{
		return APawn_Animal::StaticClass();
	}
	UClass* Z_Construct_UClass_APawn_Animal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_InnovationGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Pawn_Animal.h" },
				{ "ModuleRelativePath", "Pawn_Animal.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APawn_Animal>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APawn_Animal::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(APawn_Animal, 2846829272);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APawn_Animal(Z_Construct_UClass_APawn_Animal, &APawn_Animal::StaticClass, TEXT("/Script/InnovationGame"), TEXT("APawn_Animal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APawn_Animal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
