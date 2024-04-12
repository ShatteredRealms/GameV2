//Generated by TurboLink CodeGenerator, do not edit!
#pragma once
#include "SSroCharacter/CharacterMessage.h"
#include "TurboLinkGrpcContext.h"
#include "sro/character/character.grpc.pb.h"

void GRPC_TO_TURBOLINK(const ::sro::character::PlayTimeResponse* in, FGrpcSroCharacterPlayTimeResponse* out);
void TURBOLINK_TO_GRPC(const FGrpcSroCharacterPlayTimeResponse* in, ::sro::character::PlayTimeResponse* out);

void GRPC_TO_TURBOLINK(const ::sro::character::AddPlayTimeRequest* in, FGrpcSroCharacterAddPlayTimeRequest* out);
void TURBOLINK_TO_GRPC(const FGrpcSroCharacterAddPlayTimeRequest* in, ::sro::character::AddPlayTimeRequest* out);

void GRPC_TO_TURBOLINK(const ::sro::character::CreateCharacterRequest* in, FGrpcSroCharacterCreateCharacterRequest* out);
void TURBOLINK_TO_GRPC(const FGrpcSroCharacterCreateCharacterRequest* in, ::sro::character::CreateCharacterRequest* out);

void GRPC_TO_TURBOLINK(const ::sro::character::CharacterTarget* in, FGrpcSroCharacterCharacterTarget* out);
void TURBOLINK_TO_GRPC(const FGrpcSroCharacterCharacterTarget* in, ::sro::character::CharacterTarget* out);

void GRPC_TO_TURBOLINK(const ::sro::character::EditCharacterRequest* in, FGrpcSroCharacterEditCharacterRequest* out);
void TURBOLINK_TO_GRPC(const FGrpcSroCharacterEditCharacterRequest* in, ::sro::character::EditCharacterRequest* out);

void GRPC_TO_TURBOLINK(const ::sro::character::CharacterDetails* in, FGrpcSroCharacterCharacterDetails* out);
void TURBOLINK_TO_GRPC(const FGrpcSroCharacterCharacterDetails* in, ::sro::character::CharacterDetails* out);

void GRPC_TO_TURBOLINK(const ::sro::character::CharactersDetails* in, FGrpcSroCharacterCharactersDetails* out);
void TURBOLINK_TO_GRPC(const FGrpcSroCharacterCharactersDetails* in, ::sro::character::CharactersDetails* out);

void GRPC_TO_TURBOLINK(const ::sro::character::InventoryItem* in, FGrpcSroCharacterInventoryItem* out);
void TURBOLINK_TO_GRPC(const FGrpcSroCharacterInventoryItem* in, ::sro::character::InventoryItem* out);

void GRPC_TO_TURBOLINK(const ::sro::character::Inventory* in, FGrpcSroCharacterInventory* out);
void TURBOLINK_TO_GRPC(const FGrpcSroCharacterInventory* in, ::sro::character::Inventory* out);

void GRPC_TO_TURBOLINK(const ::sro::character::UpdateInventoryRequest* in, FGrpcSroCharacterUpdateInventoryRequest* out);
void TURBOLINK_TO_GRPC(const FGrpcSroCharacterUpdateInventoryRequest* in, ::sro::character::UpdateInventoryRequest* out);

typedef grpc::ClientAsyncResponseReader<::sro::character::CharactersDetails> CharacterService_GetCharacters_ReaderWriter;
typedef grpc::ClientAsyncResponseReader<::sro::character::CharacterDetails> CharacterService_GetCharacter_ReaderWriter;
typedef grpc::ClientAsyncResponseReader<::sro::character::CharacterDetails> CharacterService_CreateCharacter_ReaderWriter;
typedef grpc::ClientAsyncResponseReader<::google::protobuf::Empty> CharacterService_DeleteCharacter_ReaderWriter;
typedef grpc::ClientAsyncResponseReader<::sro::character::CharactersDetails> CharacterService_GetAllCharactersForUser_ReaderWriter;
typedef grpc::ClientAsyncResponseReader<::google::protobuf::Empty> CharacterService_EditCharacter_ReaderWriter;
typedef grpc::ClientAsyncResponseReader<::sro::character::PlayTimeResponse> CharacterService_AddCharacterPlayTime_ReaderWriter;
typedef grpc::ClientAsyncResponseReader<::sro::character::Inventory> CharacterService_GetInventory_ReaderWriter;
typedef grpc::ClientAsyncResponseReader<::google::protobuf::Empty> CharacterService_SetInventory_ReaderWriter;