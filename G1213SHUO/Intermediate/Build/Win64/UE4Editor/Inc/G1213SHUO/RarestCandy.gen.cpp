// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G1213SHUO/RarestCandy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRarestCandy() {}
// Cross Module References
	G1213SHUO_API UClass* Z_Construct_UClass_ARarestCandy_NoRegister();
	G1213SHUO_API UClass* Z_Construct_UClass_ARarestCandy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_G1213SHUO();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ARarestCandy::StaticRegisterNativesARarestCandy()
	{
	}
	UClass* Z_Construct_UClass_ARarestCandy_NoRegister()
	{
		return ARarestCandy::StaticClass();
	}
	struct Z_Construct_UClass_ARarestCandy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARarestCandy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_G1213SHUO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARarestCandy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RarestCandy.h" },
		{ "ModuleRelativePath", "RarestCandy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARarestCandy_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "RarestCandy" },
		{ "ModuleRelativePath", "RarestCandy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARarestCandy_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARarestCandy, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARarestCandy_Statics::NewProp_Sound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARarestCandy_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARarestCandy_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "RarestCandy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RarestCandy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARarestCandy_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARarestCandy, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARarestCandy_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARarestCandy_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARarestCandy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARarestCandy_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARarestCandy_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARarestCandy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARarestCandy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARarestCandy_Statics::ClassParams = {
		&ARarestCandy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARarestCandy_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ARarestCandy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ARarestCandy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARarestCandy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARarestCandy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARarestCandy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARarestCandy, 539285649);
	template<> G1213SHUO_API UClass* StaticClass<ARarestCandy>()
	{
		return ARarestCandy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARarestCandy(Z_Construct_UClass_ARarestCandy, &ARarestCandy::StaticClass, TEXT("/Script/G1213SHUO"), TEXT("ARarestCandy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARarestCandy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
