// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BetweenTwoWays/BetweenTwoWaysHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBetweenTwoWaysHUD() {}
// Cross Module References
	BETWEENTWOWAYS_API UClass* Z_Construct_UClass_ABetweenTwoWaysHUD_NoRegister();
	BETWEENTWOWAYS_API UClass* Z_Construct_UClass_ABetweenTwoWaysHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_BetweenTwoWays();
// End Cross Module References
	void ABetweenTwoWaysHUD::StaticRegisterNativesABetweenTwoWaysHUD()
	{
	}
	UClass* Z_Construct_UClass_ABetweenTwoWaysHUD_NoRegister()
	{
		return ABetweenTwoWaysHUD::StaticClass();
	}
	struct Z_Construct_UClass_ABetweenTwoWaysHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABetweenTwoWaysHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_BetweenTwoWays,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABetweenTwoWaysHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "BetweenTwoWaysHUD.h" },
		{ "ModuleRelativePath", "BetweenTwoWaysHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABetweenTwoWaysHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABetweenTwoWaysHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABetweenTwoWaysHUD_Statics::ClassParams = {
		&ABetweenTwoWaysHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABetweenTwoWaysHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABetweenTwoWaysHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABetweenTwoWaysHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABetweenTwoWaysHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABetweenTwoWaysHUD, 3877351111);
	template<> BETWEENTWOWAYS_API UClass* StaticClass<ABetweenTwoWaysHUD>()
	{
		return ABetweenTwoWaysHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABetweenTwoWaysHUD(Z_Construct_UClass_ABetweenTwoWaysHUD, &ABetweenTwoWaysHUD::StaticClass, TEXT("/Script/BetweenTwoWays"), TEXT("ABetweenTwoWaysHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABetweenTwoWaysHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
