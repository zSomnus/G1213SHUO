// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G1213SHUO/UnluckyTrap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnluckyTrap() {}
// Cross Module References
	G1213SHUO_API UClass* Z_Construct_UClass_AUnluckyTrap_NoRegister();
	G1213SHUO_API UClass* Z_Construct_UClass_AUnluckyTrap();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_G1213SHUO();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AUnluckyTrap::StaticRegisterNativesAUnluckyTrap()
	{
	}
	UClass* Z_Construct_UClass_AUnluckyTrap_NoRegister()
	{
		return AUnluckyTrap::StaticClass();
	}
	struct Z_Construct_UClass_AUnluckyTrap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Unlucky_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Unlucky;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnluckyTrap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_G1213SHUO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnluckyTrap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnluckyTrap.h" },
		{ "ModuleRelativePath", "UnluckyTrap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnluckyTrap_Statics::NewProp_Unlucky_MetaData[] = {
		{ "Category", "UnluckyTrap" },
		{ "ModuleRelativePath", "UnluckyTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUnluckyTrap_Statics::NewProp_Unlucky = { "Unlucky", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnluckyTrap, Unlucky), METADATA_PARAMS(Z_Construct_UClass_AUnluckyTrap_Statics::NewProp_Unlucky_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnluckyTrap_Statics::NewProp_Unlucky_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnluckyTrap_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "UnluckyTrap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnluckyTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnluckyTrap_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnluckyTrap, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnluckyTrap_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnluckyTrap_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnluckyTrap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnluckyTrap_Statics::NewProp_Unlucky,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnluckyTrap_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnluckyTrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnluckyTrap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnluckyTrap_Statics::ClassParams = {
		&AUnluckyTrap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUnluckyTrap_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AUnluckyTrap_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AUnluckyTrap_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUnluckyTrap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnluckyTrap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnluckyTrap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnluckyTrap, 3972671973);
	template<> G1213SHUO_API UClass* StaticClass<AUnluckyTrap>()
	{
		return AUnluckyTrap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnluckyTrap(Z_Construct_UClass_AUnluckyTrap, &AUnluckyTrap::StaticClass, TEXT("/Script/G1213SHUO"), TEXT("AUnluckyTrap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnluckyTrap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
