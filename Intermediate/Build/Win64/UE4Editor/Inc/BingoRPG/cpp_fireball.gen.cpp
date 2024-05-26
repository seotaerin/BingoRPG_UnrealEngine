// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BingoRPG/cpp_fireball.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecpp_fireball() {}
// Cross Module References
	BINGORPG_API UClass* Z_Construct_UClass_Acpp_fireball_NoRegister();
	BINGORPG_API UClass* Z_Construct_UClass_Acpp_fireball();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BingoRPG();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(Acpp_fireball::execSetInputValue)
	{
		P_GET_UBOOL_REF(Z_Param_Out_InputValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetInputValue(Z_Param_Out_InputValue);
		P_NATIVE_END;
	}
	void Acpp_fireball::StaticRegisterNativesAcpp_fireball()
	{
		UClass* Class = Acpp_fireball::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetInputValue", &Acpp_fireball::execSetInputValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Acpp_fireball_SetInputValue_Statics
	{
		struct cpp_fireball_eventSetInputValue_Parms
		{
			bool InputValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputValue_MetaData[];
#endif
		static void NewProp_InputValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InputValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Acpp_fireball_SetInputValue_Statics::NewProp_InputValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_Acpp_fireball_SetInputValue_Statics::NewProp_InputValue_SetBit(void* Obj)
	{
		((cpp_fireball_eventSetInputValue_Parms*)Obj)->InputValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Acpp_fireball_SetInputValue_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(cpp_fireball_eventSetInputValue_Parms), &Z_Construct_UFunction_Acpp_fireball_SetInputValue_Statics::NewProp_InputValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_Acpp_fireball_SetInputValue_Statics::NewProp_InputValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Acpp_fireball_SetInputValue_Statics::NewProp_InputValue_MetaData)) };
	void Z_Construct_UFunction_Acpp_fireball_SetInputValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((cpp_fireball_eventSetInputValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Acpp_fireball_SetInputValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(cpp_fireball_eventSetInputValue_Parms), &Z_Construct_UFunction_Acpp_fireball_SetInputValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Acpp_fireball_SetInputValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Acpp_fireball_SetInputValue_Statics::NewProp_InputValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Acpp_fireball_SetInputValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Acpp_fireball_SetInputValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "cpp_fireball.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Acpp_fireball_SetInputValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Acpp_fireball, nullptr, "SetInputValue", nullptr, nullptr, sizeof(cpp_fireball_eventSetInputValue_Parms), Z_Construct_UFunction_Acpp_fireball_SetInputValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Acpp_fireball_SetInputValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Acpp_fireball_SetInputValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Acpp_fireball_SetInputValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Acpp_fireball_SetInputValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Acpp_fireball_SetInputValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Acpp_fireball_NoRegister()
	{
		return Acpp_fireball::StaticClass();
	}
	struct Z_Construct_UClass_Acpp_fireball_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireballColl_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireballColl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireballImg_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireballImg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireballSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireballSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Acpp_fireball_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BingoRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Acpp_fireball_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Acpp_fireball_SetInputValue, "SetInputValue" }, // 382433469
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acpp_fireball_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "cpp_fireball.h" },
		{ "ModuleRelativePath", "cpp_fireball.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acpp_fireball_Statics::NewProp_FireballColl_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "cpp_fireball.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Acpp_fireball_Statics::NewProp_FireballColl = { "FireballColl", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Acpp_fireball, FireballColl), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Acpp_fireball_Statics::NewProp_FireballColl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Acpp_fireball_Statics::NewProp_FireballColl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acpp_fireball_Statics::NewProp_FireballImg_MetaData[] = {
		{ "Category", "Animation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "cpp_fireball.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Acpp_fireball_Statics::NewProp_FireballImg = { "FireballImg", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Acpp_fireball, FireballImg), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Acpp_fireball_Statics::NewProp_FireballImg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Acpp_fireball_Statics::NewProp_FireballImg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acpp_fireball_Statics::NewProp_root_MetaData[] = {
		{ "Category", "Direction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "cpp_fireball.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Acpp_fireball_Statics::NewProp_root = { "root", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Acpp_fireball, root), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Acpp_fireball_Statics::NewProp_root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Acpp_fireball_Statics::NewProp_root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acpp_fireball_Statics::NewProp_FireballSpeed_MetaData[] = {
		{ "Category", "Fireball" },
		{ "ModuleRelativePath", "cpp_fireball.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Acpp_fireball_Statics::NewProp_FireballSpeed = { "FireballSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Acpp_fireball, FireballSpeed), METADATA_PARAMS(Z_Construct_UClass_Acpp_fireball_Statics::NewProp_FireballSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Acpp_fireball_Statics::NewProp_FireballSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Acpp_fireball_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Acpp_fireball_Statics::NewProp_FireballColl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Acpp_fireball_Statics::NewProp_FireballImg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Acpp_fireball_Statics::NewProp_root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Acpp_fireball_Statics::NewProp_FireballSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Acpp_fireball_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Acpp_fireball>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Acpp_fireball_Statics::ClassParams = {
		&Acpp_fireball::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Acpp_fireball_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Acpp_fireball_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Acpp_fireball_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Acpp_fireball_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Acpp_fireball()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Acpp_fireball_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Acpp_fireball, 1442187908);
	template<> BINGORPG_API UClass* StaticClass<Acpp_fireball>()
	{
		return Acpp_fireball::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Acpp_fireball(Z_Construct_UClass_Acpp_fireball, &Acpp_fireball::StaticClass, TEXT("/Script/BingoRPG"), TEXT("Acpp_fireball"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Acpp_fireball);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
