// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G1213SHUO/Cubemon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubemon() {}
// Cross Module References
	G1213SHUO_API UClass* Z_Construct_UClass_ACubemon_NoRegister();
	G1213SHUO_API UClass* Z_Construct_UClass_ACubemon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_G1213SHUO();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACubemon::StaticRegisterNativesACubemon()
	{
	}
	UClass* Z_Construct_UClass_ACubemon_NoRegister()
	{
		return ACubemon::StaticClass();
	}
	struct Z_Construct_UClass_ACubemon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeadMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACubemon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_G1213SHUO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubemon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cubemon.h" },
		{ "ModuleRelativePath", "Cubemon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubemon_Statics::NewProp_WidgetComponent_MetaData[] = {
		{ "Category", "Cubemon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cubemon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubemon_Statics::NewProp_WidgetComponent = { "WidgetComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACubemon, WidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACubemon_Statics::NewProp_WidgetComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACubemon_Statics::NewProp_WidgetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubemon_Statics::NewProp_HeadMeshComponent_MetaData[] = {
		{ "Category", "Cubemon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cubemon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubemon_Statics::NewProp_HeadMeshComponent = { "HeadMeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACubemon, HeadMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACubemon_Statics::NewProp_HeadMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACubemon_Statics::NewProp_HeadMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubemon_Statics::NewProp_BodyMeshComponent_MetaData[] = {
		{ "Category", "Cubemon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cubemon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubemon_Statics::NewProp_BodyMeshComponent = { "BodyMeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACubemon, BodyMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACubemon_Statics::NewProp_BodyMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACubemon_Statics::NewProp_BodyMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACubemon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubemon_Statics::NewProp_WidgetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubemon_Statics::NewProp_HeadMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubemon_Statics::NewProp_BodyMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACubemon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubemon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACubemon_Statics::ClassParams = {
		&ACubemon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACubemon_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ACubemon_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACubemon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACubemon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACubemon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACubemon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACubemon, 4115177248);
	template<> G1213SHUO_API UClass* StaticClass<ACubemon>()
	{
		return ACubemon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACubemon(Z_Construct_UClass_ACubemon, &ACubemon::StaticClass, TEXT("/Script/G1213SHUO"), TEXT("ACubemon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubemon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
