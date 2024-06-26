//Generated by TurboLink CodeGenerator, do not edit!
#include "SSroGamebackend/ConnectionNode.h"
#include "SSroGamebackend/ConnectionService.h"
#include "TurboLinkGrpcManager.h"
#include "TurboLinkGrpcUtilities.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Runtime/Launch/Resources/Version.h"

UCallConnectionServiceConnectGameServer* UCallConnectionServiceConnectGameServer::ConnectGameServer(UObject* WorldContextObject, const FGrpcSroCharacterCharacterTarget& Request, TMap<FString, FString>& MetaData)
{
	UCallConnectionServiceConnectGameServer* node = NewObject<UCallConnectionServiceConnectGameServer>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->ConnectionService = Cast<UConnectionService>(turboLinkManager->MakeService("ConnectionService"));
	if (node->ConnectionService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;
	node->ServiceState = EGrpcServiceState::Idle;
	node->MetaData = MetaData;

	node->ConnectionService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallConnectionServiceConnectGameServer::OnServiceStateChanged);
	return node;
}

void UCallConnectionServiceConnectGameServer::Activate()
{
	ConnectionService->Connect();
}

void UCallConnectionServiceConnectGameServer::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (ServiceState == NewState) return;
	ServiceState = NewState;

	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcSroGamebackendConnectGameServerResponse response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		ConnectionServiceClient = ConnectionService->MakeClient();
		ConnectionServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallConnectionServiceConnectGameServer::OnContextStateChange);
		ConnectionServiceClient->OnConnectGameServerResponse.AddUniqueDynamic(this, &UCallConnectionServiceConnectGameServer::OnResponse);

		Context = ConnectionServiceClient->InitConnectGameServer();
		ConnectionServiceClient->ConnectGameServer(Context, Request, MetaData);
	}
}

void UCallConnectionServiceConnectGameServer::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallConnectionServiceConnectGameServer::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroGamebackendConnectGameServerResponse& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnConnectGameServerResponse.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallConnectionServiceConnectGameServer::Shutdown()
{
	ConnectionService->OnServiceStateChanged.RemoveDynamic(this, &UCallConnectionServiceConnectGameServer::OnServiceStateChanged);
	if (ConnectionServiceClient != nullptr)
	{
		ConnectionService->RemoveClient(ConnectionServiceClient);
		ConnectionServiceClient->Shutdown();
		ConnectionServiceClient = nullptr;
	}

	if (ConnectionService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(ConnectionService);
		ConnectionService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}

UCallConnectionServiceVerifyConnect* UCallConnectionServiceVerifyConnect::VerifyConnect(UObject* WorldContextObject, const FGrpcSroGamebackendVerifyConnectRequest& Request, TMap<FString, FString>& MetaData)
{
	UCallConnectionServiceVerifyConnect* node = NewObject<UCallConnectionServiceVerifyConnect>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->ConnectionService = Cast<UConnectionService>(turboLinkManager->MakeService("ConnectionService"));
	if (node->ConnectionService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;
	node->ServiceState = EGrpcServiceState::Idle;
	node->MetaData = MetaData;

	node->ConnectionService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallConnectionServiceVerifyConnect::OnServiceStateChanged);
	return node;
}

void UCallConnectionServiceVerifyConnect::Activate()
{
	ConnectionService->Connect();
}

void UCallConnectionServiceVerifyConnect::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (ServiceState == NewState) return;
	ServiceState = NewState;

	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcSroCharacterCharacterDetails response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		ConnectionServiceClient = ConnectionService->MakeClient();
		ConnectionServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallConnectionServiceVerifyConnect::OnContextStateChange);
		ConnectionServiceClient->OnVerifyConnectResponse.AddUniqueDynamic(this, &UCallConnectionServiceVerifyConnect::OnResponse);

		Context = ConnectionServiceClient->InitVerifyConnect();
		ConnectionServiceClient->VerifyConnect(Context, Request, MetaData);
	}
}

void UCallConnectionServiceVerifyConnect::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallConnectionServiceVerifyConnect::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroCharacterCharacterDetails& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnVerifyConnectResponse.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallConnectionServiceVerifyConnect::Shutdown()
{
	ConnectionService->OnServiceStateChanged.RemoveDynamic(this, &UCallConnectionServiceVerifyConnect::OnServiceStateChanged);
	if (ConnectionServiceClient != nullptr)
	{
		ConnectionService->RemoveClient(ConnectionServiceClient);
		ConnectionServiceClient->Shutdown();
		ConnectionServiceClient = nullptr;
	}

	if (ConnectionService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(ConnectionService);
		ConnectionService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}

UCallConnectionServiceTransferPlayer* UCallConnectionServiceTransferPlayer::TransferPlayer(UObject* WorldContextObject, const FGrpcSroGamebackendTransferPlayerRequest& Request, TMap<FString, FString>& MetaData)
{
	UCallConnectionServiceTransferPlayer* node = NewObject<UCallConnectionServiceTransferPlayer>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->ConnectionService = Cast<UConnectionService>(turboLinkManager->MakeService("ConnectionService"));
	if (node->ConnectionService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;
	node->ServiceState = EGrpcServiceState::Idle;
	node->MetaData = MetaData;

	node->ConnectionService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallConnectionServiceTransferPlayer::OnServiceStateChanged);
	return node;
}

void UCallConnectionServiceTransferPlayer::Activate()
{
	ConnectionService->Connect();
}

void UCallConnectionServiceTransferPlayer::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (ServiceState == NewState) return;
	ServiceState = NewState;

	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcSroGamebackendConnectGameServerResponse response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		ConnectionServiceClient = ConnectionService->MakeClient();
		ConnectionServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallConnectionServiceTransferPlayer::OnContextStateChange);
		ConnectionServiceClient->OnTransferPlayerResponse.AddUniqueDynamic(this, &UCallConnectionServiceTransferPlayer::OnResponse);

		Context = ConnectionServiceClient->InitTransferPlayer();
		ConnectionServiceClient->TransferPlayer(Context, Request, MetaData);
	}
}

void UCallConnectionServiceTransferPlayer::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallConnectionServiceTransferPlayer::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroGamebackendConnectGameServerResponse& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnTransferPlayerResponse.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallConnectionServiceTransferPlayer::Shutdown()
{
	ConnectionService->OnServiceStateChanged.RemoveDynamic(this, &UCallConnectionServiceTransferPlayer::OnServiceStateChanged);
	if (ConnectionServiceClient != nullptr)
	{
		ConnectionService->RemoveClient(ConnectionServiceClient);
		ConnectionServiceClient->Shutdown();
		ConnectionServiceClient = nullptr;
	}

	if (ConnectionService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(ConnectionService);
		ConnectionService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}

UCallConnectionServiceIsPlaying* UCallConnectionServiceIsPlaying::IsPlaying(UObject* WorldContextObject, const FGrpcSroCharacterCharacterTarget& Request, TMap<FString, FString>& MetaData)
{
	UCallConnectionServiceIsPlaying* node = NewObject<UCallConnectionServiceIsPlaying>(WorldContextObject);
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(WorldContextObject);

	node->ConnectionService = Cast<UConnectionService>(turboLinkManager->MakeService("ConnectionService"));
	if (node->ConnectionService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;
	node->ServiceState = EGrpcServiceState::Idle;
	node->MetaData = MetaData;

	node->ConnectionService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallConnectionServiceIsPlaying::OnServiceStateChanged);
	return node;
}

void UCallConnectionServiceIsPlaying::Activate()
{
	ConnectionService->Connect();
}

void UCallConnectionServiceIsPlaying::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (ServiceState == NewState) return;
	ServiceState = NewState;

	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcSroGamebackendConnectionStatus response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		ConnectionServiceClient = ConnectionService->MakeClient();
		ConnectionServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallConnectionServiceIsPlaying::OnContextStateChange);
		ConnectionServiceClient->OnIsPlayingResponse.AddUniqueDynamic(this, &UCallConnectionServiceIsPlaying::OnResponse);

		Context = ConnectionServiceClient->InitIsPlaying();
		ConnectionServiceClient->IsPlaying(Context, Request, MetaData);
	}
}

void UCallConnectionServiceIsPlaying::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallConnectionServiceIsPlaying::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& GrpcResult, const FGrpcSroGamebackendConnectionStatus& Response)
{
	if (GrpcResult.Code == EGrpcResultCode::Ok)
	{
		OnIsPlayingResponse.Broadcast(GrpcResult, Response);
	}
	else
	{
		OnFail.Broadcast(GrpcResult, Response);
	}
}

void UCallConnectionServiceIsPlaying::Shutdown()
{
	ConnectionService->OnServiceStateChanged.RemoveDynamic(this, &UCallConnectionServiceIsPlaying::OnServiceStateChanged);
	if (ConnectionServiceClient != nullptr)
	{
		ConnectionService->RemoveClient(ConnectionServiceClient);
		ConnectionServiceClient->Shutdown();
		ConnectionServiceClient = nullptr;
	}

	if (ConnectionService != nullptr)
	{
		UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager(this)->ReleaseService(ConnectionService);
		ConnectionService = nullptr;
	}

	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION>=5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}
