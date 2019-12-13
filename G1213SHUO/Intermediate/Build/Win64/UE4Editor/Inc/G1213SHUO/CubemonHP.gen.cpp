// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G1213SHUO/CubemonHP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubemonHP() {}
// Cross Module References
	G1213SHUO_API UClass* Z_Construct_UClass_UCubemonHP_NoRegister();
	G1213SHUO_API UClass* Z_Construct_UClass_UCubemonHP();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_G1213SHUO();
// End Cross Module References
	void UCubemonHP::StaticRegisterNativesUCubemonHP()
	{
	}
	UClass* Z_Construct_UClass_UCubemonHP_NoRegister()
	{
		return UCubemonHP::StaticClass();
	}
	struct Z_Construct_UClass_UCubemonHP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCubemonHP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_G1213SHUO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubemonHP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CubemonHP.h" },
		{ "ModuleRelativePath", "CubemonHP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCubemonHP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCubemonHP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCubemonHP_Statics::ClassParams = {
		&UCubemonHP::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCubemonHP_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCubemonHP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCubemonHP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCubemonHP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCubemonHP, 1847680288);
	template<> G1213SHUO_API UClass* StaticClass<UCubemonHP>()
	{
		return UCubemonHP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCubemonHP(Z_Construct_UClass_UCubemonHP, &UCubemonHP::StaticClass, TEXT("/Script/G1213SHUO"), TEXT("UCubemonHP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCubemonHP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
