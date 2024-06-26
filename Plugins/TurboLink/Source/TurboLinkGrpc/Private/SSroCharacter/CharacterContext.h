//Generated by TurboLink CodeGenerator, do not edit!
#pragma once
#include "TurboLinkGrpcContext.h"
#include "SSroCharacter/CharacterMessage.h"
#include "SSroCharacter/CharacterMarshaling.h"
class GrpcContext_CharacterService_GetCharacters : public GrpcContext_Ping_Pong<CharacterService_GetCharacters_ReaderWriter, ::sro::character::CharactersDetails>
{
	friend class UCharacterServiceClient;
	typedef GrpcContext_Ping_Pong<CharacterService_GetCharacters_ReaderWriter, ::sro::character::CharactersDetails> Super;

private:
	void Call(const FGrpcGoogleProtobufEmpty& Request);
	virtual void OnRpcEvent(bool Ok, const void* EventTag) override;

public:
	GrpcContext_CharacterService_GetCharacters(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client);
};

class GrpcContext_CharacterService_GetCharacter : public GrpcContext_Ping_Pong<CharacterService_GetCharacter_ReaderWriter, ::sro::character::CharacterDetails>
{
	friend class UCharacterServiceClient;
	typedef GrpcContext_Ping_Pong<CharacterService_GetCharacter_ReaderWriter, ::sro::character::CharacterDetails> Super;

private:
	void Call(const FGrpcSroCharacterCharacterTarget& Request);
	virtual void OnRpcEvent(bool Ok, const void* EventTag) override;

public:
	GrpcContext_CharacterService_GetCharacter(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client);
};

class GrpcContext_CharacterService_CreateCharacter : public GrpcContext_Ping_Pong<CharacterService_CreateCharacter_ReaderWriter, ::sro::character::CharacterDetails>
{
	friend class UCharacterServiceClient;
	typedef GrpcContext_Ping_Pong<CharacterService_CreateCharacter_ReaderWriter, ::sro::character::CharacterDetails> Super;

private:
	void Call(const FGrpcSroCharacterCreateCharacterRequest& Request);
	virtual void OnRpcEvent(bool Ok, const void* EventTag) override;

public:
	GrpcContext_CharacterService_CreateCharacter(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client);
};

class GrpcContext_CharacterService_DeleteCharacter : public GrpcContext_Ping_Pong<CharacterService_DeleteCharacter_ReaderWriter, ::google::protobuf::Empty>
{
	friend class UCharacterServiceClient;
	typedef GrpcContext_Ping_Pong<CharacterService_DeleteCharacter_ReaderWriter, ::google::protobuf::Empty> Super;

private:
	void Call(const FGrpcSroCharacterCharacterTarget& Request);
	virtual void OnRpcEvent(bool Ok, const void* EventTag) override;

public:
	GrpcContext_CharacterService_DeleteCharacter(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client);
};

class GrpcContext_CharacterService_GetAllCharactersForUser : public GrpcContext_Ping_Pong<CharacterService_GetAllCharactersForUser_ReaderWriter, ::sro::character::CharactersDetails>
{
	friend class UCharacterServiceClient;
	typedef GrpcContext_Ping_Pong<CharacterService_GetAllCharactersForUser_ReaderWriter, ::sro::character::CharactersDetails> Super;

private:
	void Call(const FGrpcSroUserTarget& Request);
	virtual void OnRpcEvent(bool Ok, const void* EventTag) override;

public:
	GrpcContext_CharacterService_GetAllCharactersForUser(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client);
};

class GrpcContext_CharacterService_EditCharacter : public GrpcContext_Ping_Pong<CharacterService_EditCharacter_ReaderWriter, ::google::protobuf::Empty>
{
	friend class UCharacterServiceClient;
	typedef GrpcContext_Ping_Pong<CharacterService_EditCharacter_ReaderWriter, ::google::protobuf::Empty> Super;

private:
	void Call(const FGrpcSroCharacterEditCharacterRequest& Request);
	virtual void OnRpcEvent(bool Ok, const void* EventTag) override;

public:
	GrpcContext_CharacterService_EditCharacter(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client);
};

class GrpcContext_CharacterService_AddCharacterPlayTime : public GrpcContext_Ping_Pong<CharacterService_AddCharacterPlayTime_ReaderWriter, ::sro::character::PlayTimeResponse>
{
	friend class UCharacterServiceClient;
	typedef GrpcContext_Ping_Pong<CharacterService_AddCharacterPlayTime_ReaderWriter, ::sro::character::PlayTimeResponse> Super;

private:
	void Call(const FGrpcSroCharacterAddPlayTimeRequest& Request);
	virtual void OnRpcEvent(bool Ok, const void* EventTag) override;

public:
	GrpcContext_CharacterService_AddCharacterPlayTime(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client);
};

class GrpcContext_CharacterService_GetInventory : public GrpcContext_Ping_Pong<CharacterService_GetInventory_ReaderWriter, ::sro::character::Inventory>
{
	friend class UCharacterServiceClient;
	typedef GrpcContext_Ping_Pong<CharacterService_GetInventory_ReaderWriter, ::sro::character::Inventory> Super;

private:
	void Call(const FGrpcSroCharacterCharacterTarget& Request);
	virtual void OnRpcEvent(bool Ok, const void* EventTag) override;

public:
	GrpcContext_CharacterService_GetInventory(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client);
};

class GrpcContext_CharacterService_SetInventory : public GrpcContext_Ping_Pong<CharacterService_SetInventory_ReaderWriter, ::google::protobuf::Empty>
{
	friend class UCharacterServiceClient;
	typedef GrpcContext_Ping_Pong<CharacterService_SetInventory_ReaderWriter, ::google::protobuf::Empty> Super;

private:
	void Call(const FGrpcSroCharacterUpdateInventoryRequest& Request);
	virtual void OnRpcEvent(bool Ok, const void* EventTag) override;

public:
	GrpcContext_CharacterService_SetInventory(FGrpcContextHandle _Handle, UGrpcService* _Service, UGrpcClient* _Client);
};

