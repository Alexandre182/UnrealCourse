// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Floater.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloater() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AFloater_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AFloater();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AFloater::StaticRegisterNativesAFloater()
	{
	}
	UClass* Z_Construct_UClass_AFloater_NoRegister()
	{
		return AFloater::StaticClass();
	}
	struct Z_Construct_UClass_AFloater_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitializeFloaterLocations_MetaData[];
#endif
		static void NewProp_bInitializeFloaterLocations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitializeFloaterLocations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldFloat_MetaData[];
#endif
		static void NewProp_bShouldFloat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacedLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlacedLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloater_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Floater.h" },
		{ "ModuleRelativePath", "Floater.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_bInitializeFloaterLocations_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "Floater.h" },
	};
#endif
	void Z_Construct_UClass_AFloater_Statics::NewProp_bInitializeFloaterLocations_SetBit(void* Obj)
	{
		((AFloater*)Obj)->bInitializeFloaterLocations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_bInitializeFloaterLocations = { "bInitializeFloaterLocations", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFloater), &Z_Construct_UClass_AFloater_Statics::NewProp_bInitializeFloaterLocations_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_bInitializeFloaterLocations_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_bInitializeFloaterLocations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_bShouldFloat_MetaData[] = {
		{ "Category", "FloaterVectors" },
		{ "ModuleRelativePath", "Floater.h" },
	};
#endif
	void Z_Construct_UClass_AFloater_Statics::NewProp_bShouldFloat_SetBit(void* Obj)
	{
		((AFloater*)Obj)->bShouldFloat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_bShouldFloat = { "bShouldFloat", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFloater), &Z_Construct_UClass_AFloater_Statics::NewProp_bShouldFloat_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_bShouldFloat_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_bShouldFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_InitialDirection_MetaData[] = {
		{ "Category", "FloaterVectors" },
		{ "ModuleRelativePath", "Floater.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_InitialDirection = { "InitialDirection", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, InitialDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_InitialDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_InitialDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_WorldOrigin_MetaData[] = {
		{ "Category", "FloaterVectors" },
		{ "ModuleRelativePath", "Floater.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_WorldOrigin = { "WorldOrigin", nullptr, (EPropertyFlags)0x0010000000030005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, WorldOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_WorldOrigin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_WorldOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_PlacedLocation_MetaData[] = {
		{ "Category", "FloaterVectors" },
		{ "ModuleRelativePath", "Floater.h" },
		{ "ToolTip", "Location of the Actor when dragged in from the editor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_PlacedLocation = { "PlacedLocation", nullptr, (EPropertyFlags)0x0010000000020805, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, PlacedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_PlacedLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_PlacedLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_InitialLocation_MetaData[] = {
		{ "Category", "FloaterVectors" },
		{ "ModuleRelativePath", "Floater.h" },
		{ "ToolTip", "Location used by SetActirKicatuib() when BeginPlay() is called" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_InitialLocation = { "InitialLocation", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, InitialLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_InitialLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_InitialLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "ActorMeshComponents" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Floater.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_StaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloater_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_bInitializeFloaterLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_bShouldFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_InitialDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_WorldOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_PlacedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_InitialLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloater_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloater>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFloater_Statics::ClassParams = {
		&AFloater::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFloater_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloater()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFloater_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloater, 3957263742);
	template<> MYPROJECT_API UClass* StaticClass<AFloater>()
	{
		return AFloater::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloater(Z_Construct_UClass_AFloater, &AFloater::StaticClass, TEXT("/Script/MyProject"), TEXT("AFloater"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloater);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
