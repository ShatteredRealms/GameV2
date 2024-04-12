//Generated by TurboLink CodeGenerator, do not edit!
#include "SSroChat/ChatNode.h"
#include "SSroChat/ChatService.h"
#include "TurboLinkGrpcManager.h"
#include "TurboLinkGrpcUtilities.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Runtime/Launch/Resources/Version.h"

UCallChatServiceConnectChannel* UCallChatServiceConnectChannel::ConnectChannel(UObject* WorldContextObject, const FGrpcSroChatChatChannelTarget& Request, TMap<FString, FString>& MetaData)
{
	UCallChatServiceConnectChannel* node = NewObject<UCallChatServiceConnectChannel>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->ChatService = Cast<UChatService>(turboLinkManager->MakeService("ChatService"));
	if (node->ChatService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;
	node->ServiceState = EGrpcServiceState::Idle;
	node->MetaData = MetaData;

	node->ChatService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallChatServiceConnectChannel::OnServiceStateChanged);
	return node;
}

void UCallChatServiceConnectChannel::Activate()
{
	ChatService->Connect();
}

void UCallChatServiceConnectChannel::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (ServiceState == NewState) return;
	ServiceState = NewState;

	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcSroChatChatMessage response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		ChatServiceClient = ChatService->MakeClient();
		ChatServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallChatServiceConnectChannel::OnContextStateChange);
		ChatServiceClient->OnConnectChannelResponse.AddUniqueDynamic(this, &UCallChatServiceConnectChannel::OnResponse);

		Context = ChatServiceClient->InitConnectChannel();
		ChatServiceClient->ConnectChannel(Context, Request, MetaData);
	}
}

void UCallChatServiceConnectChannel::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		OnFinished.Broadcast(FGrpcResult{}, FGrpcSroChatChatMessage{});
		Shutdown();
	}
}

void UCallChatServiceConnectChannel::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroChatChatMessage& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnConnectChannelResponse.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallChatServiceConnectChannel::Shutdown()
{
	ChatService->OnServiceStateChanged.RemoveDynamic(this, &UCallChatServiceConnectChannel::OnServiceStateChanged);
	if (ChatServiceClient != nullptr)
	{
		ChatService->RemoveClient(ChatServiceClient);
		ChatServiceClient->Shutdown();
		ChatServiceClient = nullptr;
	}

	if (ChatService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(ChatService);
		ChatService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}

UCallChatServiceConnectDirectMessage* UCallChatServiceConnectDirectMessage::ConnectDirectMessage(UObject* WorldContextObject, const FGrpcSroCharacterCharacterTarget& Request, TMap<FString, FString>& MetaData)
{
	UCallChatServiceConnectDirectMessage* node = NewObject<UCallChatServiceConnectDirectMessage>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->ChatService = Cast<UChatService>(turboLinkManager->MakeService("ChatService"));
	if (node->ChatService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;
	node->ServiceState = EGrpcServiceState::Idle;
	node->MetaData = MetaData;

	node->ChatService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallChatServiceConnectDirectMessage::OnServiceStateChanged);
	return node;
}

void UCallChatServiceConnectDirectMessage::Activate()
{
	ChatService->Connect();
}

void UCallChatServiceConnectDirectMessage::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (ServiceState == NewState) return;
	ServiceState = NewState;

	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcSroChatChatMessage response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		ChatServiceClient = ChatService->MakeClient();
		ChatServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallChatServiceConnectDirectMessage::OnContextStateChange);
		ChatServiceClient->OnConnectDirectMessageResponse.AddUniqueDynamic(this, &UCallChatServiceConnectDirectMessage::OnResponse);

		Context = ChatServiceClient->InitConnectDirectMessage();
		ChatServiceClient->ConnectDirectMessage(Context, Request, MetaData);
	}
}

void UCallChatServiceConnectDirectMessage::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		OnFinished.Broadcast(FGrpcResult{}, FGrpcSroChatChatMessage{});
		Shutdown();
	}
}

void UCallChatServiceConnectDirectMessage::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroChatChatMessage& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnConnectDirectMessageResponse.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallChatServiceConnectDirectMessage::Shutdown()
{
	ChatService->OnServiceStateChanged.RemoveDynamic(this, &UCallChatServiceConnectDirectMessage::OnServiceStateChanged);
	if (ChatServiceClient != nullptr)
	{
		ChatService->RemoveClient(ChatServiceClient);
		ChatServiceClient->Shutdown();
		ChatServiceClient = nullptr;
	}

	if (ChatService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(ChatService);
		ChatService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}

UCallChatServiceSendChatMessage* UCallChatServiceSendChatMessage::SendChatMessage(UObject* WorldContextObject, const FGrpcSroChatSendChatMessageRequest& Request, TMap<FString, FString>& MetaData)
{
	UCallChatServiceSendChatMessage* node = NewObject<UCallChatServiceSendChatMessage>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->ChatService = Cast<UChatService>(turboLinkManager->MakeService("ChatService"));
	if (node->ChatService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;
	node->ServiceState = EGrpcServiceState::Idle;
	node->MetaData = MetaData;

	node->ChatService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallChatServiceSendChatMessage::OnServiceStateChanged);
	return node;
}

void UCallChatServiceSendChatMessage::Activate()
{
	ChatService->Connect();
}

void UCallChatServiceSendChatMessage::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (ServiceState == NewState) return;
	ServiceState = NewState;

	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcGoogleProtobufEmpty response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		ChatServiceClient = ChatService->MakeClient();
		ChatServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallChatServiceSendChatMessage::OnContextStateChange);
		ChatServiceClient->OnSendChatMessageResponse.AddUniqueDynamic(this, &UCallChatServiceSendChatMessage::OnResponse);

		Context = ChatServiceClient->InitSendChatMessage();
		ChatServiceClient->SendChatMessage(Context, Request, MetaData);
	}
}

void UCallChatServiceSendChatMessage::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallChatServiceSendChatMessage::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnSendChatMessageResponse.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallChatServiceSendChatMessage::Shutdown()
{
	ChatService->OnServiceStateChanged.RemoveDynamic(this, &UCallChatServiceSendChatMessage::OnServiceStateChanged);
	if (ChatServiceClient != nullptr)
	{
		ChatService->RemoveClient(ChatServiceClient);
		ChatServiceClient->Shutdown();
		ChatServiceClient = nullptr;
	}

	if (ChatService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(ChatService);
		ChatService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}

UCallChatServiceSendDirectMessage* UCallChatServiceSendDirectMessage::SendDirectMessage(UObject* WorldContextObject, const FGrpcSroChatSendDirectMessageRequest& Request, TMap<FString, FString>& MetaData)
{
	UCallChatServiceSendDirectMessage* node = NewObject<UCallChatServiceSendDirectMessage>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->ChatService = Cast<UChatService>(turboLinkManager->MakeService("ChatService"));
	if (node->ChatService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;
	node->ServiceState = EGrpcServiceState::Idle;
	node->MetaData = MetaData;

	node->ChatService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallChatServiceSendDirectMessage::OnServiceStateChanged);
	return node;
}

void UCallChatServiceSendDirectMessage::Activate()
{
	ChatService->Connect();
}

void UCallChatServiceSendDirectMessage::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (ServiceState == NewState) return;
	ServiceState = NewState;

	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcGoogleProtobufEmpty response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		ChatServiceClient = ChatService->MakeClient();
		ChatServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallChatServiceSendDirectMessage::OnContextStateChange);
		ChatServiceClient->OnSendDirectMessageResponse.AddUniqueDynamic(this, &UCallChatServiceSendDirectMessage::OnResponse);

		Context = ChatServiceClient->InitSendDirectMessage();
		ChatServiceClient->SendDirectMessage(Context, Request, MetaData);
	}
}

void UCallChatServiceSendDirectMessage::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallChatServiceSendDirectMessage::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnSendDirectMessageResponse.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallChatServiceSendDirectMessage::Shutdown()
{
	ChatService->OnServiceStateChanged.RemoveDynamic(this, &UCallChatServiceSendDirectMessage::OnServiceStateChanged);
	if (ChatServiceClient != nullptr)
	{
		ChatService->RemoveClient(ChatServiceClient);
		ChatServiceClient->Shutdown();
		ChatServiceClient = nullptr;
	}

	if (ChatService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(ChatService);
		ChatService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}

UCallChatServiceGetChannel* UCallChatServiceGetChannel::GetChannel(UObject* WorldContextObject, const FGrpcSroChatChatChannelTarget& Request, TMap<FString, FString>& MetaData)
{
	UCallChatServiceGetChannel* node = NewObject<UCallChatServiceGetChannel>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->ChatService = Cast<UChatService>(turboLinkManager->MakeService("ChatService"));
	if (node->ChatService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;
	node->ServiceState = EGrpcServiceState::Idle;
	node->MetaData = MetaData;

	node->ChatService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallChatServiceGetChannel::OnServiceStateChanged);
	return node;
}

void UCallChatServiceGetChannel::Activate()
{
	ChatService->Connect();
}

void UCallChatServiceGetChannel::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (ServiceState == NewState) return;
	ServiceState = NewState;

	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcSroChatChatChannel response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		ChatServiceClient = ChatService->MakeClient();
		ChatServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallChatServiceGetChannel::OnContextStateChange);
		ChatServiceClient->OnGetChannelResponse.AddUniqueDynamic(this, &UCallChatServiceGetChannel::OnResponse);

		Context = ChatServiceClient->InitGetChannel();
		ChatServiceClient->GetChannel(Context, Request, MetaData);
	}
}

void UCallChatServiceGetChannel::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallChatServiceGetChannel::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroChatChatChannel& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnGetChannelResponse.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallChatServiceGetChannel::Shutdown()
{
	ChatService->OnServiceStateChanged.RemoveDynamic(this, &UCallChatServiceGetChannel::OnServiceStateChanged);
	if (ChatServiceClient != nullptr)
	{
		ChatService->RemoveClient(ChatServiceClient);
		ChatServiceClient->Shutdown();
		ChatServiceClient = nullptr;
	}

	if (ChatService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(ChatService);
		ChatService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}

UCallChatServiceAllChatChannels* UCallChatServiceAllChatChannels::AllChatChannels(UObject* WorldContextObject, const FGrpcGoogleProtobufEmpty& Request, TMap<FString, FString>& MetaData)
{
	UCallChatServiceAllChatChannels* node = NewObject<UCallChatServiceAllChatChannels>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->ChatService = Cast<UChatService>(turboLinkManager->MakeService("ChatService"));
	if (node->ChatService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;
	node->ServiceState = EGrpcServiceState::Idle;
	node->MetaData = MetaData;

	node->ChatService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallChatServiceAllChatChannels::OnServiceStateChanged);
	return node;
}

void UCallChatServiceAllChatChannels::Activate()
{
	ChatService->Connect();
}

void UCallChatServiceAllChatChannels::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (ServiceState == NewState) return;
	ServiceState = NewState;

	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcSroChatChatChannels response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		ChatServiceClient = ChatService->MakeClient();
		ChatServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallChatServiceAllChatChannels::OnContextStateChange);
		ChatServiceClient->OnAllChatChannelsResponse.AddUniqueDynamic(this, &UCallChatServiceAllChatChannels::OnResponse);

		Context = ChatServiceClient->InitAllChatChannels();
		ChatServiceClient->AllChatChannels(Context, Request, MetaData);
	}
}

void UCallChatServiceAllChatChannels::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallChatServiceAllChatChannels::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroChatChatChannels& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnAllChatChannelsResponse.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallChatServiceAllChatChannels::Shutdown()
{
	ChatService->OnServiceStateChanged.RemoveDynamic(this, &UCallChatServiceAllChatChannels::OnServiceStateChanged);
	if (ChatServiceClient != nullptr)
	{
		ChatService->RemoveClient(ChatServiceClient);
		ChatServiceClient->Shutdown();
		ChatServiceClient = nullptr;
	}

	if (ChatService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(ChatService);
		ChatService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}

UCallChatServiceCreateChannel* UCallChatServiceCreateChannel::CreateChannel(UObject* WorldContextObject, const FGrpcSroChatCreateChannelMessage& Request, TMap<FString, FString>& MetaData)
{
	UCallChatServiceCreateChannel* node = NewObject<UCallChatServiceCreateChannel>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->ChatService = Cast<UChatService>(turboLinkManager->MakeService("ChatService"));
	if (node->ChatService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;
	node->ServiceState = EGrpcServiceState::Idle;
	node->MetaData = MetaData;

	node->ChatService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallChatServiceCreateChannel::OnServiceStateChanged);
	return node;
}

void UCallChatServiceCreateChannel::Activate()
{
	ChatService->Connect();
}

void UCallChatServiceCreateChannel::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (ServiceState == NewState) return;
	ServiceState = NewState;

	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcGoogleProtobufEmpty response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		ChatServiceClient = ChatService->MakeClient();
		ChatServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallChatServiceCreateChannel::OnContextStateChange);
		ChatServiceClient->OnCreateChannelResponse.AddUniqueDynamic(this, &UCallChatServiceCreateChannel::OnResponse);

		Context = ChatServiceClient->InitCreateChannel();
		ChatServiceClient->CreateChannel(Context, Request, MetaData);
	}
}

void UCallChatServiceCreateChannel::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallChatServiceCreateChannel::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnCreateChannelResponse.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallChatServiceCreateChannel::Shutdown()
{
	ChatService->OnServiceStateChanged.RemoveDynamic(this, &UCallChatServiceCreateChannel::OnServiceStateChanged);
	if (ChatServiceClient != nullptr)
	{
		ChatService->RemoveClient(ChatServiceClient);
		ChatServiceClient->Shutdown();
		ChatServiceClient = nullptr;
	}

	if (ChatService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(ChatService);
		ChatService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}

UCallChatServiceDeleteChannel* UCallChatServiceDeleteChannel::DeleteChannel(UObject* WorldContextObject, const FGrpcSroChatChatChannelTarget& Request, TMap<FString, FString>& MetaData)
{
	UCallChatServiceDeleteChannel* node = NewObject<UCallChatServiceDeleteChannel>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->ChatService = Cast<UChatService>(turboLinkManager->MakeService("ChatService"));
	if (node->ChatService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;
	node->ServiceState = EGrpcServiceState::Idle;
	node->MetaData = MetaData;

	node->ChatService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallChatServiceDeleteChannel::OnServiceStateChanged);
	return node;
}

void UCallChatServiceDeleteChannel::Activate()
{
	ChatService->Connect();
}

void UCallChatServiceDeleteChannel::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (ServiceState == NewState) return;
	ServiceState = NewState;

	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcGoogleProtobufEmpty response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		ChatServiceClient = ChatService->MakeClient();
		ChatServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallChatServiceDeleteChannel::OnContextStateChange);
		ChatServiceClient->OnDeleteChannelResponse.AddUniqueDynamic(this, &UCallChatServiceDeleteChannel::OnResponse);

		Context = ChatServiceClient->InitDeleteChannel();
		ChatServiceClient->DeleteChannel(Context, Request, MetaData);
	}
}

void UCallChatServiceDeleteChannel::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallChatServiceDeleteChannel::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnDeleteChannelResponse.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallChatServiceDeleteChannel::Shutdown()
{
	ChatService->OnServiceStateChanged.RemoveDynamic(this, &UCallChatServiceDeleteChannel::OnServiceStateChanged);
	if (ChatServiceClient != nullptr)
	{
		ChatService->RemoveClient(ChatServiceClient);
		ChatServiceClient->Shutdown();
		ChatServiceClient = nullptr;
	}

	if (ChatService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(ChatService);
		ChatService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}

UCallChatServiceEditChannel* UCallChatServiceEditChannel::EditChannel(UObject* WorldContextObject, const FGrpcSroChatUpdateChatChannelRequest& Request, TMap<FString, FString>& MetaData)
{
	UCallChatServiceEditChannel* node = NewObject<UCallChatServiceEditChannel>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->ChatService = Cast<UChatService>(turboLinkManager->MakeService("ChatService"));
	if (node->ChatService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;
	node->ServiceState = EGrpcServiceState::Idle;
	node->MetaData = MetaData;

	node->ChatService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallChatServiceEditChannel::OnServiceStateChanged);
	return node;
}

void UCallChatServiceEditChannel::Activate()
{
	ChatService->Connect();
}

void UCallChatServiceEditChannel::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (ServiceState == NewState) return;
	ServiceState = NewState;

	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcGoogleProtobufEmpty response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		ChatServiceClient = ChatService->MakeClient();
		ChatServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallChatServiceEditChannel::OnContextStateChange);
		ChatServiceClient->OnEditChannelResponse.AddUniqueDynamic(this, &UCallChatServiceEditChannel::OnResponse);

		Context = ChatServiceClient->InitEditChannel();
		ChatServiceClient->EditChannel(Context, Request, MetaData);
	}
}

void UCallChatServiceEditChannel::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallChatServiceEditChannel::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnEditChannelResponse.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallChatServiceEditChannel::Shutdown()
{
	ChatService->OnServiceStateChanged.RemoveDynamic(this, &UCallChatServiceEditChannel::OnServiceStateChanged);
	if (ChatServiceClient != nullptr)
	{
		ChatService->RemoveClient(ChatServiceClient);
		ChatServiceClient->Shutdown();
		ChatServiceClient = nullptr;
	}

	if (ChatService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(ChatService);
		ChatService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}

UCallChatServiceGetAuthorizedChatChannels* UCallChatServiceGetAuthorizedChatChannels::GetAuthorizedChatChannels(UObject* WorldContextObject, const FGrpcSroCharacterCharacterTarget& Request, TMap<FString, FString>& MetaData)
{
	UCallChatServiceGetAuthorizedChatChannels* node = NewObject<UCallChatServiceGetAuthorizedChatChannels>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->ChatService = Cast<UChatService>(turboLinkManager->MakeService("ChatService"));
	if (node->ChatService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;
	node->ServiceState = EGrpcServiceState::Idle;
	node->MetaData = MetaData;

	node->ChatService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallChatServiceGetAuthorizedChatChannels::OnServiceStateChanged);
	return node;
}

void UCallChatServiceGetAuthorizedChatChannels::Activate()
{
	ChatService->Connect();
}

void UCallChatServiceGetAuthorizedChatChannels::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (ServiceState == NewState) return;
	ServiceState = NewState;

	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcSroChatChatChannels response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		ChatServiceClient = ChatService->MakeClient();
		ChatServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallChatServiceGetAuthorizedChatChannels::OnContextStateChange);
		ChatServiceClient->OnGetAuthorizedChatChannelsResponse.AddUniqueDynamic(this, &UCallChatServiceGetAuthorizedChatChannels::OnResponse);

		Context = ChatServiceClient->InitGetAuthorizedChatChannels();
		ChatServiceClient->GetAuthorizedChatChannels(Context, Request, MetaData);
	}
}

void UCallChatServiceGetAuthorizedChatChannels::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallChatServiceGetAuthorizedChatChannels::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroChatChatChannels& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnGetAuthorizedChatChannelsResponse.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallChatServiceGetAuthorizedChatChannels::Shutdown()
{
	ChatService->OnServiceStateChanged.RemoveDynamic(this, &UCallChatServiceGetAuthorizedChatChannels::OnServiceStateChanged);
	if (ChatServiceClient != nullptr)
	{
		ChatService->RemoveClient(ChatServiceClient);
		ChatServiceClient->Shutdown();
		ChatServiceClient = nullptr;
	}

	if (ChatService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(ChatService);
		ChatService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}

UCallChatServiceUpdateUserChatChannelAuthorizations* UCallChatServiceUpdateUserChatChannelAuthorizations::UpdateUserChatChannelAuthorizations(UObject* WorldContextObject, const FGrpcSroChatRequestChatChannelAuthChange& Request, TMap<FString, FString>& MetaData)
{
	UCallChatServiceUpdateUserChatChannelAuthorizations* node = NewObject<UCallChatServiceUpdateUserChatChannelAuthorizations>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->ChatService = Cast<UChatService>(turboLinkManager->MakeService("ChatService"));
	if (node->ChatService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;
	node->ServiceState = EGrpcServiceState::Idle;
	node->MetaData = MetaData;

	node->ChatService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallChatServiceUpdateUserChatChannelAuthorizations::OnServiceStateChanged);
	return node;
}

void UCallChatServiceUpdateUserChatChannelAuthorizations::Activate()
{
	ChatService->Connect();
}

void UCallChatServiceUpdateUserChatChannelAuthorizations::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (ServiceState == NewState) return;
	ServiceState = NewState;

	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcGoogleProtobufEmpty response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		ChatServiceClient = ChatService->MakeClient();
		ChatServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallChatServiceUpdateUserChatChannelAuthorizations::OnContextStateChange);
		ChatServiceClient->OnUpdateUserChatChannelAuthorizationsResponse.AddUniqueDynamic(this, &UCallChatServiceUpdateUserChatChannelAuthorizations::OnResponse);

		Context = ChatServiceClient->InitUpdateUserChatChannelAuthorizations();
		ChatServiceClient->UpdateUserChatChannelAuthorizations(Context, Request, MetaData);
	}
}

void UCallChatServiceUpdateUserChatChannelAuthorizations::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallChatServiceUpdateUserChatChannelAuthorizations::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnUpdateUserChatChannelAuthorizationsResponse.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallChatServiceUpdateUserChatChannelAuthorizations::Shutdown()
{
	ChatService->OnServiceStateChanged.RemoveDynamic(this, &UCallChatServiceUpdateUserChatChannelAuthorizations::OnServiceStateChanged);
	if (ChatServiceClient != nullptr)
	{
		ChatService->RemoveClient(ChatServiceClient);
		ChatServiceClient->Shutdown();
		ChatServiceClient = nullptr;
	}

	if (ChatService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(ChatService);
		ChatService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}

UCallChatServiceSetUserChatChannelAuthorizations* UCallChatServiceSetUserChatChannelAuthorizations::SetUserChatChannelAuthorizations(UObject* WorldContextObject, const FGrpcSroChatRequestSetChannelAuth& Request, TMap<FString, FString>& MetaData)
{
	UCallChatServiceSetUserChatChannelAuthorizations* node = NewObject<UCallChatServiceSetUserChatChannelAuthorizations>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->ChatService = Cast<UChatService>(turboLinkManager->MakeService("ChatService"));
	if (node->ChatService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;
	node->ServiceState = EGrpcServiceState::Idle;
	node->MetaData = MetaData;

	node->ChatService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallChatServiceSetUserChatChannelAuthorizations::OnServiceStateChanged);
	return node;
}

void UCallChatServiceSetUserChatChannelAuthorizations::Activate()
{
	ChatService->Connect();
}

void UCallChatServiceSetUserChatChannelAuthorizations::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (ServiceState == NewState) return;
	ServiceState = NewState;

	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcGoogleProtobufEmpty response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		ChatServiceClient = ChatService->MakeClient();
		ChatServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallChatServiceSetUserChatChannelAuthorizations::OnContextStateChange);
		ChatServiceClient->OnSetUserChatChannelAuthorizationsResponse.AddUniqueDynamic(this, &UCallChatServiceSetUserChatChannelAuthorizations::OnResponse);

		Context = ChatServiceClient->InitSetUserChatChannelAuthorizations();
		ChatServiceClient->SetUserChatChannelAuthorizations(Context, Request, MetaData);
	}
}

void UCallChatServiceSetUserChatChannelAuthorizations::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallChatServiceSetUserChatChannelAuthorizations::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnSetUserChatChannelAuthorizationsResponse.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallChatServiceSetUserChatChannelAuthorizations::Shutdown()
{
	ChatService->OnServiceStateChanged.RemoveDynamic(this, &UCallChatServiceSetUserChatChannelAuthorizations::OnServiceStateChanged);
	if (ChatServiceClient != nullptr)
	{
		ChatService->RemoveClient(ChatServiceClient);
		ChatServiceClient->Shutdown();
		ChatServiceClient = nullptr;
	}

	if (ChatService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(ChatService);
		ChatService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}