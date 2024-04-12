//Generated by TurboLink CodeGenerator, do not edit!
#include "ServermanagerService_Private.h"

void UServerManagerServiceCreateDimensionLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcSroGamebackendDimension& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnCreateDimensionResponse.RemoveDynamic(this, &UServerManagerServiceCreateDimensionLambdaWrapper::OnResponse);
}

void UServerManagerServiceDuplicateDimensionLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcSroGamebackendDimension& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnDuplicateDimensionResponse.RemoveDynamic(this, &UServerManagerServiceDuplicateDimensionLambdaWrapper::OnResponse);
}

void UServerManagerServiceGetDimensionLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcSroGamebackendDimension& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnGetDimensionResponse.RemoveDynamic(this, &UServerManagerServiceGetDimensionLambdaWrapper::OnResponse);
}

void UServerManagerServiceGetAllDimensionLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcSroGamebackendDimensions& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnGetAllDimensionResponse.RemoveDynamic(this, &UServerManagerServiceGetAllDimensionLambdaWrapper::OnResponse);
}

void UServerManagerServiceEditDimensionLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcSroGamebackendDimension& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnEditDimensionResponse.RemoveDynamic(this, &UServerManagerServiceEditDimensionLambdaWrapper::OnResponse);
}

void UServerManagerServiceDeleteDimensionLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnDeleteDimensionResponse.RemoveDynamic(this, &UServerManagerServiceDeleteDimensionLambdaWrapper::OnResponse);
}

void UServerManagerServiceCreateMapLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcSroGamebackendMap& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnCreateMapResponse.RemoveDynamic(this, &UServerManagerServiceCreateMapLambdaWrapper::OnResponse);
}

void UServerManagerServiceGetMapLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcSroGamebackendMap& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnGetMapResponse.RemoveDynamic(this, &UServerManagerServiceGetMapLambdaWrapper::OnResponse);
}

void UServerManagerServiceGetAllMapsLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcSroGamebackendMaps& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnGetAllMapsResponse.RemoveDynamic(this, &UServerManagerServiceGetAllMapsLambdaWrapper::OnResponse);
}

void UServerManagerServiceEditMapLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcSroGamebackendMap& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnEditMapResponse.RemoveDynamic(this, &UServerManagerServiceEditMapLambdaWrapper::OnResponse);
}

void UServerManagerServiceDeleteMapLambdaWrapper::OnResponse(FGrpcContextHandle _Handle, const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response)
{
	if (_Handle != this->Handle) return;

	ResponseLambda(GrpcResult, Response);
	InnerClient->OnDeleteMapResponse.RemoveDynamic(this, &UServerManagerServiceDeleteMapLambdaWrapper::OnResponse);
}
