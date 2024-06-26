//Generated by TurboLink CodeGenerator, do not edit!
#include "SSro/HealthClient.h"
#include "SSro/HealthService.h"
#include "HealthContext.h"
#include "TurboLinkGrpcManager_Private.h"
#include "Templates/SharedPointer.h"

FGrpcContextHandle UHealthServiceClient::InitHealth()
{
	FGrpcContextHandle handle = Service->TurboLinkManager->GetNextContextHandle();
	auto context = UGrpcClient::MakeContext<GrpcContext_HealthService_Health>(handle);
	context->RpcContext = UTurboLinkGrpcManager::Private::CreateRpcClientContext();
	return context->GetHandle();
}

void UHealthServiceClient::Health(FGrpcContextHandle Handle, const FGrpcGoogleProtobufEmpty& Request, TMap<FString, FString>& MetaData)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		for (auto const& Pair : MetaData)
		{
			context->Get()->RpcContext->AddMetadata(TCHAR_TO_UTF8(*Pair.Key), TCHAR_TO_UTF8(*Pair.Value));
		}
		auto contextHealth = StaticCastSharedPtr<GrpcContext_HealthService_Health>(*context);
		contextHealth->Call(Request);
	}
}

void UHealthServiceClient::TryCancel(FGrpcContextHandle Handle)
{
	auto context = UGrpcClient::GetContext(Handle);
	if (context != nullptr)
	{
		(*context)->TryCancel();
	}
}

void UHealthServiceClient::Shutdown()
{
	OnHealthResponse.Clear();
	Super::Shutdown();
}

