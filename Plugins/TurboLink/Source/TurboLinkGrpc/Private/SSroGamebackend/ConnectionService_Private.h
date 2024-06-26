//Generated by TurboLink CodeGenerator, do not edit!
#pragma once

#include "SSroGamebackend/ConnectionService.h"
#include "TurboLinkGrpcManager_Private.h"
#include "sro/gamebackend/connection.grpc.pb.h"
#include "ConnectionService_Private.generated.h"

class UConnectionService::Private
{
public:
	std::shared_ptr<UTurboLinkGrpcManager::Private::ServiceChannel> Channel;
	std::unique_ptr<::sro::gamebackend::ConnectionService::Stub> Stub;
};


UCLASS()
class UConnectionServiceConnectGameServerLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UConnectionServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroGamebackendConnectGameServerResponse& Response);
public:
	FGrpcContextHandle Handle;
	UConnectionService::FConnectGameServerResponseLambda ResponseLambda;
};

UCLASS()
class UConnectionServiceVerifyConnectLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UConnectionServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroCharacterCharacterDetails& Response);
public:
	FGrpcContextHandle Handle;
	UConnectionService::FVerifyConnectResponseLambda ResponseLambda;
};

UCLASS()
class UConnectionServiceTransferPlayerLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UConnectionServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroGamebackendConnectGameServerResponse& Response);
public:
	FGrpcContextHandle Handle;
	UConnectionService::FTransferPlayerResponseLambda ResponseLambda;
};

UCLASS()
class UConnectionServiceIsPlayingLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UConnectionServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroGamebackendConnectionStatus& Response);
public:
	FGrpcContextHandle Handle;
	UConnectionService::FIsPlayingResponseLambda ResponseLambda;
};

