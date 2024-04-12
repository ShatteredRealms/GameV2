//Generated by TurboLink CodeGenerator, do not edit!
#include "ChatService_Private.h"

void UChatServiceConnectChannelLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcSroChatChatMessage& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
}

void UChatServiceConnectChannelLambdaWrapper::OnContextStateChanged(FGrpcContextHandle _Handle, EGrpcContextState NewState)
{
	if (_Handle != this->Handle) return;
	if (NewState == EGrpcContextState::Done)
	{
		FinishLambda();

		InnerClient->OnConnectChannelResponse.RemoveDynamic(this, &UChatServiceConnectChannelLambdaWrapper::OnResponse);
		InnerClient->OnContextStateChange.RemoveDynamic(this, &UChatServiceConnectChannelLambdaWrapper::OnContextStateChanged);
	}
}

void UChatServiceConnectDirectMessageLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcSroChatChatMessage& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
}

void UChatServiceConnectDirectMessageLambdaWrapper::OnContextStateChanged(FGrpcContextHandle _Handle, EGrpcContextState NewState)
{
	if (_Handle != this->Handle) return;
	if (NewState == EGrpcContextState::Done)
	{
		FinishLambda();

		InnerClient->OnConnectDirectMessageResponse.RemoveDynamic(this, &UChatServiceConnectDirectMessageLambdaWrapper::OnResponse);
		InnerClient->OnContextStateChange.RemoveDynamic(this, &UChatServiceConnectDirectMessageLambdaWrapper::OnContextStateChanged);
	}
}

void UChatServiceSendChatMessageLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnSendChatMessageResponse.RemoveDynamic(this, &UChatServiceSendChatMessageLambdaWrapper::OnResponse);
}

void UChatServiceSendDirectMessageLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnSendDirectMessageResponse.RemoveDynamic(this, &UChatServiceSendDirectMessageLambdaWrapper::OnResponse);
}

void UChatServiceGetChannelLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcSroChatChatChannel& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnGetChannelResponse.RemoveDynamic(this, &UChatServiceGetChannelLambdaWrapper::OnResponse);
}

void UChatServiceAllChatChannelsLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcSroChatChatChannels& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnAllChatChannelsResponse.RemoveDynamic(this, &UChatServiceAllChatChannelsLambdaWrapper::OnResponse);
}

void UChatServiceCreateChannelLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnCreateChannelResponse.RemoveDynamic(this, &UChatServiceCreateChannelLambdaWrapper::OnResponse);
}

void UChatServiceDeleteChannelLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnDeleteChannelResponse.RemoveDynamic(this, &UChatServiceDeleteChannelLambdaWrapper::OnResponse);
}

void UChatServiceEditChannelLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnEditChannelResponse.RemoveDynamic(this, &UChatServiceEditChannelLambdaWrapper::OnResponse);
}

void UChatServiceGetAuthorizedChatChannelsLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcSroChatChatChannels& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnGetAuthorizedChatChannelsResponse.RemoveDynamic(this, &UChatServiceGetAuthorizedChatChannelsLambdaWrapper::OnResponse);
}

void UChatServiceUpdateUserChatChannelAuthorizationsLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnUpdateUserChatChannelAuthorizationsResponse.RemoveDynamic(this, &UChatServiceUpdateUserChatChannelAuthorizationsLambdaWrapper::OnResponse);
}

void UChatServiceSetUserChatChannelAuthorizationsLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnSetUserChatChannelAuthorizationsResponse.RemoveDynamic(this, &UChatServiceSetUserChatChannelAuthorizationsLambdaWrapper::OnResponse);
}
