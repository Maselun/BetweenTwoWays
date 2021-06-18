// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BetweenTwoWays/BetweenTwoWaysGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBetweenTwoWaysGameMode() {}
// Cross Module References
	BETWEENTWOWAYS_API UClass* Z_Construct_UClass_ABetweenTwoWaysGameMode_NoRegister();
	BETWEENTWOWAYS_API UClass* Z_Construct_UClass_ABetweenTwoWaysGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BetweenTwoWays();
// End Cross Module References
	void ABetweenTwoWaysGameMode::StaticRegisterNativesABetweenTwoWaysGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABetweenTwoWaysGameMode_NoRegister()
	{
		return ABetweenTwoWaysGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABetweenTwoWaysGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABetweenTwoWaysGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BetweenTwoWays,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABetweenTwoWaysGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "BetweenTwoWaysGameMode.h" },
		{ "ModuleRelativePath", "BetweenTwoWaysGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABetweenTwoWaysGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABetweenTwoWaysGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABetweenTwoWaysGameMode_Statics::ClassParams = {
		&ABetweenTwoWaysGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABetweenTwoWaysGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABetweenTwoWaysGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABetweenTwoWaysGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABetweenTwoWaysGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABetweenTwoWaysGameMode, 4099886628);
	template<> BETWEENTWOWAYS_API UClass* StaticClass<ABetweenTwoWaysGameMode>()
	{
		return ABetweenTwoWaysGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABetweenTwoWaysGameMode(Z_Construct_UClass_ABetweenTwoWaysGameMode, &ABetweenTwoWaysGameMode::StaticClass, TEXT("/Script/BetweenTwoWays"), TEXT("ABetweenTwoWaysGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABetweenTwoWaysGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
