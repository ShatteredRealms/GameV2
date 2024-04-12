//Generated by TurboLink CodeGenerator, do not edit!
#pragma once

#include "SSroCharacter/CharacterService.h"
#include "TurboLinkGrpcManager_Private.h"
#include "sro/character/character.grpc.pb.h"
#include "CharacterService_Private.generated.h"

class UCharacterService::Private
{
public:
	std::shared_ptr<UTurboLinkGrpcManager::Private::ServiceChannel> Channel;
	std::unique_ptr<::sro::character::CharacterService::Stub> Stub;
};


UCLASS()
class UCharacterServiceGetCharactersLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UCharacterServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroCharacterCharactersDetails& Response);
public:
	FGrpcContextHandle Handle;
	UCharacterService::FGetCharactersResponseLambda ResponseLambda;
};

UCLASS()
class UCharacterServiceGetCharacterLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UCharacterServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroCharacterCharacterDetails& Response);
public:
	FGrpcContextHandle Handle;
	UCharacterService::FGetCharacterResponseLambda ResponseLambda;
};

UCLASS()
class UCharacterServiceCreateCharacterLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UCharacterServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroCharacterCharacterDetails& Response);
public:
	FGrpcContextHandle Handle;
	UCharacterService::FCreateCharacterResponseLambda ResponseLambda;
};

UCLASS()
class UCharacterServiceDeleteCharacterLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UCharacterServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response);
public:
	FGrpcContextHandle Handle;
	UCharacterService::FDeleteCharacterResponseLambda ResponseLambda;
};

UCLASS()
class UCharacterServiceGetAllCharactersForUserLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UCharacterServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroCharacterCharactersDetails& Response);
public:
	FGrpcContextHandle Handle;
	UCharacterService::FGetAllCharactersForUserResponseLambda ResponseLambda;
};

UCLASS()
class UCharacterServiceEditCharacterLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UCharacterServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response);
public:
	FGrpcContextHandle Handle;
	UCharacterService::FEditCharacterResponseLambda ResponseLambda;
};

UCLASS()
class UCharacterServiceAddCharacterPlayTimeLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UCharacterServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroCharacterPlayTimeResponse& Response);
public:
	FGrpcContextHandle Handle;
	UCharacterService::FAddCharacterPlayTimeResponseLambda ResponseLambda;
};

UCLASS()
class UCharacterServiceGetInventoryLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UCharacterServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroCharacterInventory& Response);
public:
	FGrpcContextHandle Handle;
	UCharacterService::FGetInventoryResponseLambda ResponseLambda;
};

UCLASS()
class UCharacterServiceSetInventoryLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UCharacterServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response);
public:
	FGrpcContextHandle Handle;
	UCharacterService::FSetInventoryResponseLambda ResponseLambda;
};
