// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Character_Animal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacter_Animal() {}
// Cross Module References
	INNOVATIONGAME_API UClass* Z_Construct_UClass_ACharacter_Animal_NoRegister();
	INNOVATIONGAME_API UClass* Z_Construct_UClass_ACharacter_Animal();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_InnovationGame();
// End Cross Module References
	void ACharacter_Animal::StaticRegisterNativesACharacter_Animal()
	{
	}
	UClass* Z_Construct_UClass_ACharacter_Animal_NoRegister()
	{
		return ACharacter_Animal::StaticClass();
	}
	UClass* Z_Construct_UClass_ACharacter_Animal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_InnovationGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Character_Animal.h" },
				{ "ModuleRelativePath", "Character_Animal.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACharacter_Animal>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACharacter_Animal::StaticClass,
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
	IMPLEMENT_CLASS(ACharacter_Animal, 4252265085);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacter_Animal(Z_Construct_UClass_ACharacter_Animal, &ACharacter_Animal::StaticClass, TEXT("/Script/InnovationGame"), TEXT("ACharacter_Animal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacter_Animal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
