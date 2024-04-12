//Generated by TurboLink CodeGenerator, do not edit!
#pragma once

#include "SSroChat/ChatService.h"
#include "TurboLinkGrpcManager_Private.h"
#include "sro/chat/chat.grpc.pb.h"
#include "ChatService_Private.generated.h"

class UChatService::Private
{
public:
	std::shared_ptr<UTurboLinkGrpcManager::Private::ServiceChannel> Channel;
	std::unique_ptr<::sro::chat::ChatService::Stub> Stub;
};


UCLASS()
class UChatServiceConnectChannelLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UChatServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroChatChatMessage& Response);
	UFUNCTION()
	void OnContextStateChanged(FGrpcContextHandle Handle, EGrpcContextState NewState);
public:
	FGrpcContextHandle Handle;
	UChatService::FConnectChannelResponseLambda ResponseLambda;
	UChatService::FConnectChannelFinishLambda FinishLambda;
};

UCLASS()
class UChatServiceConnectDirectMessageLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UChatServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroChatChatMessage& Response);
	UFUNCTION()
	void OnContextStateChanged(FGrpcContextHandle Handle, EGrpcContextState NewState);
public:
	FGrpcContextHandle Handle;
	UChatService::FConnectDirectMessageResponseLambda ResponseLambda;
	UChatService::FConnectDirectMessageFinishLambda FinishLambda;
};

UCLASS()
class UChatServiceSendChatMessageLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UChatServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response);
public:
	FGrpcContextHandle Handle;
	UChatService::FSendChatMessageResponseLambda ResponseLambda;
};

UCLASS()
class UChatServiceSendDirectMessageLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UChatServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response);
public:
	FGrpcContextHandle Handle;
	UChatService::FSendDirectMessageResponseLambda ResponseLambda;
};

UCLASS()
class UChatServiceGetChannelLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UChatServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroChatChatChannel& Response);
public:
	FGrpcContextHandle Handle;
	UChatService::FGetChannelResponseLambda ResponseLambda;
};

UCLASS()
class UChatServiceAllChatChannelsLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UChatServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroChatChatChannels& Response);
public:
	FGrpcContextHandle Handle;
	UChatService::FAllChatChannelsResponseLambda ResponseLambda;
};

UCLASS()
class UChatServiceCreateChannelLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UChatServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response);
public:
	FGrpcContextHandle Handle;
	UChatService::FCreateChannelResponseLambda ResponseLambda;
};

UCLASS()
class UChatServiceDeleteChannelLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UChatServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response);
public:
	FGrpcContextHandle Handle;
	UChatService::FDeleteChannelResponseLambda ResponseLambda;
};

UCLASS()
class UChatServiceEditChannelLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UChatServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response);
public:
	FGrpcContextHandle Handle;
	UChatService::FEditChannelResponseLambda ResponseLambda;
};

UCLASS()
class UChatServiceGetAuthorizedChatChannelsLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UChatServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroChatChatChannels& Response);
public:
	FGrpcContextHandle Handle;
	UChatService::FGetAuthorizedChatChannelsResponseLambda ResponseLambda;
};

UCLASS()
class UChatServiceUpdateUserChatChannelAuthorizationsLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UChatServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response);
public:
	FGrpcContextHandle Handle;
	UChatService::FUpdateUserChatChannelAuthorizationsResponseLambda ResponseLambda;
};

UCLASS()
class UChatServiceSetUserChatChannelAuthorizationsLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UChatServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response);
public:
	FGrpcContextHandle Handle;
	UChatService::FSetUserChatChannelAuthorizationsResponseLambda ResponseLambda;
};
