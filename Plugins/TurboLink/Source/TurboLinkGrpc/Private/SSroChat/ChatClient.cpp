//Generated by TurboLink CodeGenerator, do not edit!
#include "SSroChat/ChatClient.h"
#include "SSroChat/ChatService.h"
#include "ChatContext.h"
#include "TurboLinkGrpcManager_Private.h"
#include "Templates/SharedPointer.h"

FGrpcContextHandle UChatServiceClient::InitConnectChannel()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_ChatService_ConnectChannel>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UChatServiceClient::ConnectChannel(FGrpcContextHandle Handle, const FGrpcSroChatChatChannelTarget& Request, TMap<FString, FString>& MetaData)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		for (auto const& Pair : MetaData)
		{
			context->Get()->RpcContext->AddMetadata(TCHAR_TO_UTF8(*Pair.Key), TCHAR_TO_UTF8(*Pair.Value));
		}
		auto contextConnectChannel = StaticCastSharedPtr<GrpcContext_ChatService_ConnectChannel>(*context);
		contextConnectChannel->Call(Request);
	}
}

FGrpcContextHandle UChatServiceClient::InitConnectDirectMessage()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_ChatService_ConnectDirectMessage>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UChatServiceClient::ConnectDirectMessage(FGrpcContextHandle Handle, const FGrpcSroCharacterCharacterTarget& Request, TMap<FString, FString>& MetaData)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		for (auto const& Pair : MetaData)
		{
			context->Get()->RpcContext->AddMetadata(TCHAR_TO_UTF8(*Pair.Key), TCHAR_TO_UTF8(*Pair.Value));
		}
		auto contextConnectDirectMessage = StaticCastSharedPtr<GrpcContext_ChatService_ConnectDirectMessage>(*context);
		contextConnectDirectMessage->Call(Request);
	}
}

FGrpcContextHandle UChatServiceClient::InitSendChatMessage()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_ChatService_SendChatMessage>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UChatServiceClient::SendChatMessage(FGrpcContextHandle Handle, const FGrpcSroChatSendChatMessageRequest& Request, TMap<FString, FString>& MetaData)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		for (auto const& Pair : MetaData)
		{
			context->Get()->RpcContext->AddMetadata(TCHAR_TO_UTF8(*Pair.Key), TCHAR_TO_UTF8(*Pair.Value));
		}
		auto contextSendChatMessage = StaticCastSharedPtr<GrpcContext_ChatService_SendChatMessage>(*context);
		contextSendChatMessage->Call(Request);
	}
}

FGrpcContextHandle UChatServiceClient::InitSendDirectMessage()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_ChatService_SendDirectMessage>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UChatServiceClient::SendDirectMessage(FGrpcContextHandle Handle, const FGrpcSroChatSendDirectMessageRequest& Request, TMap<FString, FString>& MetaData)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		for (auto const& Pair : MetaData)
		{
			context->Get()->RpcContext->AddMetadata(TCHAR_TO_UTF8(*Pair.Key), TCHAR_TO_UTF8(*Pair.Value));
		}
		auto contextSendDirectMessage = StaticCastSharedPtr<GrpcContext_ChatService_SendDirectMessage>(*context);
		contextSendDirectMessage->Call(Request);
	}
}

FGrpcContextHandle UChatServiceClient::InitGetChannel()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_ChatService_GetChannel>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UChatServiceClient::GetChannel(FGrpcContextHandle Handle, const FGrpcSroChatChatChannelTarget& Request, TMap<FString, FString>& MetaData)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		for (auto const& Pair : MetaData)
		{
			context->Get()->RpcContext->AddMetadata(TCHAR_TO_UTF8(*Pair.Key), TCHAR_TO_UTF8(*Pair.Value));
		}
		auto contextGetChannel = StaticCastSharedPtr<GrpcContext_ChatService_GetChannel>(*context);
		contextGetChannel->Call(Request);
	}
}

FGrpcContextHandle UChatServiceClient::InitAllChatChannels()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_ChatService_AllChatChannels>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UChatServiceClient::AllChatChannels(FGrpcContextHandle Handle, const FGrpcGoogleProtobufEmpty& Request, TMap<FString, FString>& MetaData)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		for (auto const& Pair : MetaData)
		{
			context->Get()->RpcContext->AddMetadata(TCHAR_TO_UTF8(*Pair.Key), TCHAR_TO_UTF8(*Pair.Value));
		}
		auto contextAllChatChannels = StaticCastSharedPtr<GrpcContext_ChatService_AllChatChannels>(*context);
		contextAllChatChannels->Call(Request);
	}
}

FGrpcContextHandle UChatServiceClient::InitCreateChannel()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_ChatService_CreateChannel>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UChatServiceClient::CreateChannel(FGrpcContextHandle Handle, const FGrpcSroChatCreateChannelMessage& Request, TMap<FString, FString>& MetaData)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		for (auto const& Pair : MetaData)
		{
			context->Get()->RpcContext->AddMetadata(TCHAR_TO_UTF8(*Pair.Key), TCHAR_TO_UTF8(*Pair.Value));
		}
		auto contextCreateChannel = StaticCastSharedPtr<GrpcContext_ChatService_CreateChannel>(*context);
		contextCreateChannel->Call(Request);
	}
}

FGrpcContextHandle UChatServiceClient::InitDeleteChannel()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_ChatService_DeleteChannel>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UChatServiceClient::DeleteChannel(FGrpcContextHandle Handle, const FGrpcSroChatChatChannelTarget& Request, TMap<FString, FString>& MetaData)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		for (auto const& Pair : MetaData)
		{
			context->Get()->RpcContext->AddMetadata(TCHAR_TO_UTF8(*Pair.Key), TCHAR_TO_UTF8(*Pair.Value));
		}
		auto contextDeleteChannel = StaticCastSharedPtr<GrpcContext_ChatService_DeleteChannel>(*context);
		contextDeleteChannel->Call(Request);
	}
}

FGrpcContextHandle UChatServiceClient::InitEditChannel()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_ChatService_EditChannel>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UChatServiceClient::EditChannel(FGrpcContextHandle Handle, const FGrpcSroChatUpdateChatChannelRequest& Request, TMap<FString, FString>& MetaData)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		for (auto const& Pair : MetaData)
		{
			context->Get()->RpcContext->AddMetadata(TCHAR_TO_UTF8(*Pair.Key), TCHAR_TO_UTF8(*Pair.Value));
		}
		auto contextEditChannel = StaticCastSharedPtr<GrpcContext_ChatService_EditChannel>(*context);
		contextEditChannel->Call(Request);
	}
}

FGrpcContextHandle UChatServiceClient::InitGetAuthorizedChatChannels()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_ChatService_GetAuthorizedChatChannels>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UChatServiceClient::GetAuthorizedChatChannels(FGrpcContextHandle Handle, const FGrpcSroCharacterCharacterTarget& Request, TMap<FString, FString>& MetaData)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		for (auto const& Pair : MetaData)
		{
			context->Get()->RpcContext->AddMetadata(TCHAR_TO_UTF8(*Pair.Key), TCHAR_TO_UTF8(*Pair.Value));
		}
		auto contextGetAuthorizedChatChannels = StaticCastSharedPtr<GrpcContext_ChatService_GetAuthorizedChatChannels>(*context);
		contextGetAuthorizedChatChannels->Call(Request);
	}
}

FGrpcContextHandle UChatServiceClient::InitUpdateUserChatChannelAuthorizations()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_ChatService_UpdateUserChatChannelAuthorizations>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UChatServiceClient::UpdateUserChatChannelAuthorizations(FGrpcContextHandle Handle, const FGrpcSroChatRequestChatChannelAuthChange& Request, TMap<FString, FString>& MetaData)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		for (auto const& Pair : MetaData)
		{
			context->Get()->RpcContext->AddMetadata(TCHAR_TO_UTF8(*Pair.Key), TCHAR_TO_UTF8(*Pair.Value));
		}
		auto contextUpdateUserChatChannelAuthorizations = StaticCastSharedPtr<GrpcContext_ChatService_UpdateUserChatChannelAuthorizations>(*context);
		contextUpdateUserChatChannelAuthorizations->Call(Request);
	}
}

FGrpcContextHandle UChatServiceClient::InitSetUserChatChannelAuthorizations()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_ChatService_SetUserChatChannelAuthorizations>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UChatServiceClient::SetUserChatChannelAuthorizations(FGrpcContextHandle Handle, const FGrpcSroChatRequestSetChannelAuth& Request, TMap<FString, FString>& MetaData)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		for (auto const& Pair : MetaData)
		{
			context->Get()->RpcContext->AddMetadata(TCHAR_TO_UTF8(*Pair.Key), TCHAR_TO_UTF8(*Pair.Value));
		}
		auto contextSetUserChatChannelAuthorizations = StaticCastSharedPtr<GrpcContext_ChatService_SetUserChatChannelAuthorizations>(*context);
		contextSetUserChatChannelAuthorizations->Call(Request);
	}
}

void UChatServiceClient::TryCancel(FGrpcContextHandle Handle)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		(*context)->TryCancel();
	}
}

void UChatServiceClient::Shutdown()
{
	OnConnectChannelResponse.Clear();
	OnConnectDirectMessageResponse.Clear();
	OnSendChatMessageResponse.Clear();
	OnSendDirectMessageResponse.Clear();
	OnGetChannelResponse.Clear();
	OnAllChatChannelsResponse.Clear();
	OnCreateChannelResponse.Clear();
	OnDeleteChannelResponse.Clear();
	OnEditChannelResponse.Clear();
	OnGetAuthorizedChatChannelsResponse.Clear();
	OnUpdateUserChatChannelAuthorizationsResponse.Clear();
	OnSetUserChatChannelAuthorizationsResponse.Clear();
	Super::Shutdown();
}

