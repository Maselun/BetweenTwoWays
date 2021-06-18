// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef BETWEENTWOWAYS_BetweenTwoWaysProjectile_generated_h
#error "BetweenTwoWaysProjectile.generated.h already included, missing '#pragma once' in BetweenTwoWaysProjectile.h"
#endif
#define BETWEENTWOWAYS_BetweenTwoWaysProjectile_generated_h

#define BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h_15_SPARSE_DATA
#define BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABetweenTwoWaysProjectile(); \
	friend struct Z_Construct_UClass_ABetweenTwoWaysProjectile_Statics; \
public: \
	DECLARE_CLASS(ABetweenTwoWaysProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BetweenTwoWays"), NO_API) \
	DECLARE_SERIALIZER(ABetweenTwoWaysProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABetweenTwoWaysProjectile(); \
	friend struct Z_Construct_UClass_ABetweenTwoWaysProjectile_Statics; \
public: \
	DECLARE_CLASS(ABetweenTwoWaysProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BetweenTwoWays"), NO_API) \
	DECLARE_SERIALIZER(ABetweenTwoWaysProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABetweenTwoWaysProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABetweenTwoWaysProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABetweenTwoWaysProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABetweenTwoWaysProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABetweenTwoWaysProjectile(ABetweenTwoWaysProjectile&&); \
	NO_API ABetweenTwoWaysProjectile(const ABetweenTwoWaysProjectile&); \
public:


#define BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABetweenTwoWaysProjectile(ABetweenTwoWaysProjectile&&); \
	NO_API ABetweenTwoWaysProjectile(const ABetweenTwoWaysProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABetweenTwoWaysProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABetweenTwoWaysProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABetweenTwoWaysProjectile)


#define BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ABetweenTwoWaysProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABetweenTwoWaysProjectile, ProjectileMovement); }


#define BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h_12_PROLOG
#define BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h_15_SPARSE_DATA \
	BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h_15_RPC_WRAPPERS \
	BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h_15_INCLASS \
	BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h_15_SPARSE_DATA \
	BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h_15_INCLASS_NO_PURE_DECLS \
	BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BETWEENTWOWAYS_API UClass* StaticClass<class ABetweenTwoWaysProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BetweenTwoWays_Source_BetweenTwoWays_BetweenTwoWaysProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
