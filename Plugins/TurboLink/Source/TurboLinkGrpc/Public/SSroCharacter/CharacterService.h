//Generated by TurboLink CodeGenerator, do not edit!
#pragma once
#include "TurboLinkGrpcService.h"
#include "SSroCharacter/CharacterClient.h"
#include "CharacterService.generated.h"

class UTurboLinkGrpcManager;

UCLASS(ClassGroup = TurboLink, BlueprintType)
class TURBOLINKGRPC_API UCharacterService : public UGrpcService
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = TurboLink)
	virtual void Connect() override;
	
	UFUNCTION(BlueprintCallable, Category = TurboLink)
	virtual EGrpcServiceState GetServiceState() const override;

	UFUNCTION(BlueprintCallable, Category = TurboLink)
	UCharacterServiceClient* MakeClient();

private:
	virtual void Shutdown() override;

	UPROPERTY()
	UCharacterServiceClient* InnerClient; 
public:
	typedef TFunction<void(const FGrpcResult& GrpcResult, const FGrpcSroCharacterCharactersDetails& Response)> FGetCharactersResponseLambda;
	void CallGetCharacters(const FGrpcGoogleProtobufEmpty& Request, FGetCharactersResponseLambda ResponseLambda, TMap<FString, FString>& MetaData);

	typedef TFunction<void(const FGrpcResult& GrpcResult, const FGrpcSroCharacterCharacterDetails& Response)> FGetCharacterResponseLambda;
	void CallGetCharacter(const FGrpcSroCharacterCharacterTarget& Request, FGetCharacterResponseLambda ResponseLambda, TMap<FString, FString>& MetaData);

	typedef TFunction<void(const FGrpcResult& GrpcResult, const FGrpcSroCharacterCharacterDetails& Response)> FCreateCharacterResponseLambda;
	void CallCreateCharacter(const FGrpcSroCharacterCreateCharacterRequest& Request, FCreateCharacterResponseLambda ResponseLambda, TMap<FString, FString>& MetaData);

	typedef TFunction<void(const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response)> FDeleteCharacterResponseLambda;
	void CallDeleteCharacter(const FGrpcSroCharacterCharacterTarget& Request, FDeleteCharacterResponseLambda ResponseLambda, TMap<FString, FString>& MetaData);

	typedef TFunction<void(const FGrpcResult& GrpcResult, const FGrpcSroCharacterCharactersDetails& Response)> FGetAllCharactersForUserResponseLambda;
	void CallGetAllCharactersForUser(const FGrpcSroUserTarget& Request, FGetAllCharactersForUserResponseLambda ResponseLambda, TMap<FString, FString>& MetaData);

	typedef TFunction<void(const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response)> FEditCharacterResponseLambda;
	void CallEditCharacter(const FGrpcSroCharacterEditCharacterRequest& Request, FEditCharacterResponseLambda ResponseLambda, TMap<FString, FString>& MetaData);

	typedef TFunction<void(const FGrpcResult& GrpcResult, const FGrpcSroCharacterPlayTimeResponse& Response)> FAddCharacterPlayTimeResponseLambda;
	void CallAddCharacterPlayTime(const FGrpcSroCharacterAddPlayTimeRequest& Request, FAddCharacterPlayTimeResponseLambda ResponseLambda, TMap<FString, FString>& MetaData);

	typedef TFunction<void(const FGrpcResult& GrpcResult, const FGrpcSroCharacterInventory& Response)> FGetInventoryResponseLambda;
	void CallGetInventory(const FGrpcSroCharacterCharacterTarget& Request, FGetInventoryResponseLambda ResponseLambda, TMap<FString, FString>& MetaData);

	typedef TFunction<void(const FGrpcResult& GrpcResult, const FGrpcGoogleProtobufEmpty& Response)> FSetInventoryResponseLambda;
	void CallSetInventory(const FGrpcSroCharacterUpdateInventoryRequest& Request, FSetInventoryResponseLambda ResponseLambda, TMap<FString, FString>& MetaData);

public:
	class Private;
	Private* const d = nullptr;

public:
	UCharacterService();
	virtual ~UCharacterService();
};

