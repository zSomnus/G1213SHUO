// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G1213SHUO/BlackHole.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackHole() {}
// Cross Module References
	G1213SHUO_API UClass* Z_Construct_UClass_ABlackHole_NoRegister();
	G1213SHUO_API UClass* Z_Construct_UClass_ABlackHole();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_G1213SHUO();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABlackHole::StaticRegisterNativesABlackHole()
	{
	}
	UClass* Z_Construct_UClass_ABlackHole_NoRegister()
	{
		return ABlackHole::StaticClass();
	}
	struct Z_Construct_UClass_ABlackHole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Impulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Impulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StringForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Period;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Particle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlackHole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_G1213SHUO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHole_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlackHole.h" },
		{ "ModuleRelativePath", "BlackHole.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHole_Statics::NewProp_Impulse_MetaData[] = {
		{ "Category", "BlackHole" },
		{ "ModuleRelativePath", "BlackHole.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABlackHole_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlackHole, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABlackHole_Statics::NewProp_Impulse_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlackHole_Statics::NewProp_Impulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHole_Statics::NewProp_StringForce_MetaData[] = {
		{ "Category", "BlackHole" },
		{ "ModuleRelativePath", "BlackHole.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlackHole_Statics::NewProp_StringForce = { "StringForce", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlackHole, StringForce), METADATA_PARAMS(Z_Construct_UClass_ABlackHole_Statics::NewProp_StringForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlackHole_Statics::NewProp_StringForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHole_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "BlackHole" },
		{ "ModuleRelativePath", "BlackHole.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlackHole_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlackHole, Period), METADATA_PARAMS(Z_Construct_UClass_ABlackHole_Statics::NewProp_Period_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlackHole_Statics::NewProp_Period_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHole_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "BlackHole" },
		{ "ModuleRelativePath", "BlackHole.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlackHole_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlackHole, Distance), METADATA_PARAMS(Z_Construct_UClass_ABlackHole_Statics::NewProp_Distance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlackHole_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHole_Statics::NewProp_Particle_MetaData[] = {
		{ "Category", "BlackHole" },
		{ "ModuleRelativePath", "BlackHole.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackHole_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlackHole, Particle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlackHole_Statics::NewProp_Particle_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlackHole_Statics::NewProp_Particle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHole_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "BlackHole" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BlackHole.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackHole_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlackHole, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlackHole_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlackHole_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlackHole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHole_Statics::NewProp_Impulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHole_Statics::NewProp_StringForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHole_Statics::NewProp_Period,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHole_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHole_Statics::NewProp_Particle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHole_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlackHole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlackHole>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlackHole_Statics::ClassParams = {
		&ABlackHole::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABlackHole_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABlackHole_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABlackHole_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABlackHole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlackHole()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlackHole_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlackHole, 539736611);
	template<> G1213SHUO_API UClass* StaticClass<ABlackHole>()
	{
		return ABlackHole::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlackHole(Z_Construct_UClass_ABlackHole, &ABlackHole::StaticClass, TEXT("/Script/G1213SHUO"), TEXT("ABlackHole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlackHole);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
