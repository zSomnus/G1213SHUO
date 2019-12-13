// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G1213SHUO/ResetPad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResetPad() {}
// Cross Module References
	G1213SHUO_API UClass* Z_Construct_UClass_AResetPad_NoRegister();
	G1213SHUO_API UClass* Z_Construct_UClass_AResetPad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_G1213SHUO();
	G1213SHUO_API UClass* Z_Construct_UClass_AG1213SHUOCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AResetPad::StaticRegisterNativesAResetPad()
	{
	}
	UClass* Z_Construct_UClass_AResetPad_NoRegister()
	{
		return AResetPad::StaticClass();
	}
	struct Z_Construct_UClass_AResetPad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AResetPad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_G1213SHUO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResetPad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ResetPad.h" },
		{ "ModuleRelativePath", "ResetPad.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResetPad_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "ResetPad" },
		{ "ModuleRelativePath", "ResetPad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AResetPad_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AResetPad, Player), Z_Construct_UClass_AG1213SHUOCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AResetPad_Statics::NewProp_Player_MetaData, ARRAY_COUNT(Z_Construct_UClass_AResetPad_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResetPad_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "ResetPad" },
		{ "ModuleRelativePath", "ResetPad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AResetPad_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AResetPad, Distance), METADATA_PARAMS(Z_Construct_UClass_AResetPad_Statics::NewProp_Distance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AResetPad_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResetPad_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "ResetPad" },
		{ "ModuleRelativePath", "ResetPad.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AResetPad_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AResetPad, Speed), METADATA_PARAMS(Z_Construct_UClass_AResetPad_Statics::NewProp_Speed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AResetPad_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResetPad_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "ResetPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ResetPad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AResetPad_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AResetPad, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AResetPad_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AResetPad_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AResetPad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResetPad_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResetPad_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResetPad_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResetPad_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AResetPad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResetPad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AResetPad_Statics::ClassParams = {
		&AResetPad::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AResetPad_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AResetPad_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AResetPad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AResetPad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AResetPad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AResetPad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AResetPad, 1623685022);
	template<> G1213SHUO_API UClass* StaticClass<AResetPad>()
	{
		return AResetPad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AResetPad(Z_Construct_UClass_AResetPad, &AResetPad::StaticClass, TEXT("/Script/G1213SHUO"), TEXT("AResetPad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AResetPad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
