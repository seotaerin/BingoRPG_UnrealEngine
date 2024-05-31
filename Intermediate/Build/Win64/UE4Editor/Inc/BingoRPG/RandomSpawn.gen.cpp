// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BingoRPG/RandomSpawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomSpawn() {}
// Cross Module References
	BINGORPG_API UClass* Z_Construct_UClass_ARandomSpawn_NoRegister();
	BINGORPG_API UClass* Z_Construct_UClass_ARandomSpawn();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BingoRPG();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PAPER2D_API UClass* Z_Construct_UClass_APaperSpriteActor_NoRegister();
// End Cross Module References
	void ARandomSpawn::StaticRegisterNativesARandomSpawn()
	{
	}
	UClass* Z_Construct_UClass_ARandomSpawn_NoRegister()
	{
		return ARandomSpawn::StaticClass();
	}
	struct Z_Construct_UClass_ARandomSpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonsterRangeColl_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MonsterRangeColl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonsterAtkImg_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MonsterAtkImg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpriteToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARandomSpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BingoRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomSpawn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RandomSpawn.h" },
		{ "ModuleRelativePath", "RandomSpawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomSpawn_Statics::NewProp_MonsterRangeColl_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RandomSpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARandomSpawn_Statics::NewProp_MonsterRangeColl = { "MonsterRangeColl", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARandomSpawn, MonsterRangeColl), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARandomSpawn_Statics::NewProp_MonsterRangeColl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomSpawn_Statics::NewProp_MonsterRangeColl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomSpawn_Statics::NewProp_MonsterAtkImg_MetaData[] = {
		{ "Category", "Animation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RandomSpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARandomSpawn_Statics::NewProp_MonsterAtkImg = { "MonsterAtkImg", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARandomSpawn, MonsterAtkImg), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARandomSpawn_Statics::NewProp_MonsterAtkImg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomSpawn_Statics::NewProp_MonsterAtkImg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomSpawn_Statics::NewProp_root_MetaData[] = {
		{ "Category", "Direcrtion" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RandomSpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARandomSpawn_Statics::NewProp_root = { "root", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARandomSpawn, root), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARandomSpawn_Statics::NewProp_root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomSpawn_Statics::NewProp_root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomSpawn_Statics::NewProp_SpriteToSpawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "RandomSpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARandomSpawn_Statics::NewProp_SpriteToSpawn = { "SpriteToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARandomSpawn, SpriteToSpawn), Z_Construct_UClass_APaperSpriteActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARandomSpawn_Statics::NewProp_SpriteToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomSpawn_Statics::NewProp_SpriteToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARandomSpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomSpawn_Statics::NewProp_MonsterRangeColl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomSpawn_Statics::NewProp_MonsterAtkImg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomSpawn_Statics::NewProp_root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomSpawn_Statics::NewProp_SpriteToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARandomSpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARandomSpawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARandomSpawn_Statics::ClassParams = {
		&ARandomSpawn::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARandomSpawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARandomSpawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARandomSpawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomSpawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARandomSpawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARandomSpawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARandomSpawn, 2703576049);
	template<> BINGORPG_API UClass* StaticClass<ARandomSpawn>()
	{
		return ARandomSpawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARandomSpawn(Z_Construct_UClass_ARandomSpawn, &ARandomSpawn::StaticClass, TEXT("/Script/BingoRPG"), TEXT("ARandomSpawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARandomSpawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
