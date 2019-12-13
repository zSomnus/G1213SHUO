// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G1213SHUO/G1213SHUOGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeG1213SHUOGameMode() {}
// Cross Module References
	G1213SHUO_API UClass* Z_Construct_UClass_AG1213SHUOGameMode_NoRegister();
	G1213SHUO_API UClass* Z_Construct_UClass_AG1213SHUOGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_G1213SHUO();
// End Cross Module References
	void AG1213SHUOGameMode::StaticRegisterNativesAG1213SHUOGameMode()
	{
	}
	UClass* Z_Construct_UClass_AG1213SHUOGameMode_NoRegister()
	{
		return AG1213SHUOGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AG1213SHUOGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AG1213SHUOGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_G1213SHUO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AG1213SHUOGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "G1213SHUOGameMode.h" },
		{ "ModuleRelativePath", "G1213SHUOGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AG1213SHUOGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AG1213SHUOGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AG1213SHUOGameMode_Statics::ClassParams = {
		&AG1213SHUOGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AG1213SHUOGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AG1213SHUOGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AG1213SHUOGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AG1213SHUOGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AG1213SHUOGameMode, 817196447);
	template<> G1213SHUO_API UClass* StaticClass<AG1213SHUOGameMode>()
	{
		return AG1213SHUOGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AG1213SHUOGameMode(Z_Construct_UClass_AG1213SHUOGameMode, &AG1213SHUOGameMode::StaticClass, TEXT("/Script/G1213SHUO"), TEXT("AG1213SHUOGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AG1213SHUOGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
