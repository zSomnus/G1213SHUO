// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G1213SHUO/G1213SHUOHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeG1213SHUOHUD() {}
// Cross Module References
	G1213SHUO_API UClass* Z_Construct_UClass_AG1213SHUOHUD_NoRegister();
	G1213SHUO_API UClass* Z_Construct_UClass_AG1213SHUOHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_G1213SHUO();
// End Cross Module References
	void AG1213SHUOHUD::StaticRegisterNativesAG1213SHUOHUD()
	{
	}
	UClass* Z_Construct_UClass_AG1213SHUOHUD_NoRegister()
	{
		return AG1213SHUOHUD::StaticClass();
	}
	struct Z_Construct_UClass_AG1213SHUOHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AG1213SHUOHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_G1213SHUO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AG1213SHUOHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "G1213SHUOHUD.h" },
		{ "ModuleRelativePath", "G1213SHUOHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AG1213SHUOHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AG1213SHUOHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AG1213SHUOHUD_Statics::ClassParams = {
		&AG1213SHUOHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AG1213SHUOHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AG1213SHUOHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AG1213SHUOHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AG1213SHUOHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AG1213SHUOHUD, 2874560937);
	template<> G1213SHUO_API UClass* StaticClass<AG1213SHUOHUD>()
	{
		return AG1213SHUOHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AG1213SHUOHUD(Z_Construct_UClass_AG1213SHUOHUD, &AG1213SHUOHUD::StaticClass, TEXT("/Script/G1213SHUO"), TEXT("AG1213SHUOHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AG1213SHUOHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
