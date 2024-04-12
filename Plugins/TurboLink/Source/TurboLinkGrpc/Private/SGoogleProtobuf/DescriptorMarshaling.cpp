//Generated by TurboLink CodeGenerator, do not edit!
#include "DescriptorMarshaling.h"

void GRPC_TO_TURBOLINK(const ::google::protobuf::FileDescriptorSet* in, FGrpcGoogleProtobufFileDescriptorSet* out)
{
    out->File.Empty();
    for (int i=0; i<in->file_size(); ++i) {
        FGrpcGoogleProtobufFileDescriptorProto field;
        GRPC_TO_TURBOLINK(&(in->file(i)), &field);
        out->File.Add(MakeShareable(new FGrpcGoogleProtobufFileDescriptorProto(field)));
    }
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufFileDescriptorSet* in, ::google::protobuf::FileDescriptorSet* out)
{
    for(const auto& value : in->File) {
        TURBOLINK_TO_GRPC(value.Get(), out->add_file());
    } 
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::FileDescriptorProto* in, FGrpcGoogleProtobufFileDescriptorProto* out)
{
    out->Name=UTF8_TO_TCHAR(in->name().c_str());
    out->Package=UTF8_TO_TCHAR(in->package().c_str());
    out->Dependency.Empty();
    for (int i=0; i<in->dependency_size(); ++i) {
        out->Dependency.Add(UTF8_TO_TCHAR(in->dependency(i).c_str()));
    }
    out->PublicDependency.Empty();
    for (int i=0; i<in->public_dependency_size(); ++i) {
        out->PublicDependency.Add(in->public_dependency(i));
    }
    out->WeakDependency.Empty();
    for (int i=0; i<in->weak_dependency_size(); ++i) {
        out->WeakDependency.Add(in->weak_dependency(i));
    }
    out->MessageType.Empty();
    for (int i=0; i<in->message_type_size(); ++i) {
        FGrpcGoogleProtobufDescriptorProto field;
        GRPC_TO_TURBOLINK(&(in->message_type(i)), &field);
        out->MessageType.Add(MakeShareable(new FGrpcGoogleProtobufDescriptorProto(field)));
    }
    out->EnumType.Empty();
    for (int i=0; i<in->enum_type_size(); ++i) {
        FGrpcGoogleProtobufEnumDescriptorProto field;
        GRPC_TO_TURBOLINK(&(in->enum_type(i)), &field);
        out->EnumType.Add(MakeShareable(new FGrpcGoogleProtobufEnumDescriptorProto(field)));
    }
    out->Service.Empty();
    for (int i=0; i<in->service_size(); ++i) {
        FGrpcGoogleProtobufServiceDescriptorProto field;
        GRPC_TO_TURBOLINK(&(in->service(i)), &field);
        out->Service.Add(MakeShareable(new FGrpcGoogleProtobufServiceDescriptorProto(field)));
    }
    out->Extension.Empty();
    for (int i=0; i<in->extension_size(); ++i) {
        FGrpcGoogleProtobufFieldDescriptorProto field;
        GRPC_TO_TURBOLINK(&(in->extension(i)), &field);
        out->Extension.Add(MakeShareable(new FGrpcGoogleProtobufFieldDescriptorProto(field)));
    }
    {
        FGrpcGoogleProtobufFileOptions field;
        GRPC_TO_TURBOLINK(&(in->options()), &field);
        out->Options = MakeShareable(new FGrpcGoogleProtobufFileOptions(field));
    }
    {
        FGrpcGoogleProtobufSourceCodeInfo field;
        GRPC_TO_TURBOLINK(&(in->source_code_info()), &field);
        out->SourceCodeInfo = MakeShareable(new FGrpcGoogleProtobufSourceCodeInfo(field));
    }
    out->Syntax=UTF8_TO_TCHAR(in->syntax().c_str());
    out->Edition=UTF8_TO_TCHAR(in->edition().c_str());
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufFileDescriptorProto* in, ::google::protobuf::FileDescriptorProto* out)
{
    out->set_name(TCHAR_TO_UTF8(*(in->Name)));
    out->set_package(TCHAR_TO_UTF8(*(in->Package)));
    for(const auto& value : in->Dependency) {
        out->add_dependency(TCHAR_TO_UTF8(*(value)));
    } 
    for(const auto& value : in->PublicDependency) {
        out->add_public_dependency(value);
    } 
    for(const auto& value : in->WeakDependency) {
        out->add_weak_dependency(value);
    } 
    for(const auto& value : in->MessageType) {
        TURBOLINK_TO_GRPC(value.Get(), out->add_message_type());
    } 
    for(const auto& value : in->EnumType) {
        TURBOLINK_TO_GRPC(value.Get(), out->add_enum_type());
    } 
    for(const auto& value : in->Service) {
        TURBOLINK_TO_GRPC(value.Get(), out->add_service());
    } 
    for(const auto& value : in->Extension) {
        TURBOLINK_TO_GRPC(value.Get(), out->add_extension());
    } 
    TURBOLINK_TO_GRPC(in->Options.Get(), out->mutable_options());
    TURBOLINK_TO_GRPC(in->SourceCodeInfo.Get(), out->mutable_source_code_info());
    out->set_syntax(TCHAR_TO_UTF8(*(in->Syntax)));
    out->set_edition(TCHAR_TO_UTF8(*(in->Edition)));
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::DescriptorProto::ExtensionRange* in, FGrpcGoogleProtobufDescriptorProtoExtensionRange* out)
{
    out->Start=in->start();
    out->End=in->end();
    {
        FGrpcGoogleProtobufExtensionRangeOptions field;
        GRPC_TO_TURBOLINK(&(in->options()), &field);
        out->Options = MakeShareable(new FGrpcGoogleProtobufExtensionRangeOptions(field));
    }
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufDescriptorProtoExtensionRange* in, ::google::protobuf::DescriptorProto::ExtensionRange* out)
{
    out->set_start(in->Start);
    out->set_end(in->End);
    TURBOLINK_TO_GRPC(in->Options.Get(), out->mutable_options());
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::DescriptorProto::ReservedRange* in, FGrpcGoogleProtobufDescriptorProtoReservedRange* out)
{
    out->Start=in->start();
    out->End=in->end();
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufDescriptorProtoReservedRange* in, ::google::protobuf::DescriptorProto::ReservedRange* out)
{
    out->set_start(in->Start);
    out->set_end(in->End);
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::DescriptorProto* in, FGrpcGoogleProtobufDescriptorProto* out)
{
    out->Name=UTF8_TO_TCHAR(in->name().c_str());
    out->Field.Empty();
    for (int i=0; i<in->field_size(); ++i) {
        FGrpcGoogleProtobufFieldDescriptorProto field;
        GRPC_TO_TURBOLINK(&(in->field(i)), &field);
        out->Field.Add(MakeShareable(new FGrpcGoogleProtobufFieldDescriptorProto(field)));
    }
    out->Extension.Empty();
    for (int i=0; i<in->extension_size(); ++i) {
        FGrpcGoogleProtobufFieldDescriptorProto field;
        GRPC_TO_TURBOLINK(&(in->extension(i)), &field);
        out->Extension.Add(MakeShareable(new FGrpcGoogleProtobufFieldDescriptorProto(field)));
    }
    out->NestedType.Empty();
    for (int i=0; i<in->nested_type_size(); ++i) {
        FGrpcGoogleProtobufDescriptorProto field;
        GRPC_TO_TURBOLINK(&(in->nested_type(i)), &field);
        out->NestedType.Add(MakeShareable(new FGrpcGoogleProtobufDescriptorProto(field)));
    }
    out->EnumType.Empty();
    for (int i=0; i<in->enum_type_size(); ++i) {
        FGrpcGoogleProtobufEnumDescriptorProto field;
        GRPC_TO_TURBOLINK(&(in->enum_type(i)), &field);
        out->EnumType.Add(MakeShareable(new FGrpcGoogleProtobufEnumDescriptorProto(field)));
    }
    out->ExtensionRange.Empty();
    for (int i=0; i<in->extension_range_size(); ++i) {
        GRPC_TO_TURBOLINK(&(in->extension_range(i)), &(out->ExtensionRange.AddZeroed_GetRef()));
    }
    out->OneofDecl.Empty();
    for (int i=0; i<in->oneof_decl_size(); ++i) {
        FGrpcGoogleProtobufOneofDescriptorProto field;
        GRPC_TO_TURBOLINK(&(in->oneof_decl(i)), &field);
        out->OneofDecl.Add(MakeShareable(new FGrpcGoogleProtobufOneofDescriptorProto(field)));
    }
    {
        FGrpcGoogleProtobufMessageOptions field;
        GRPC_TO_TURBOLINK(&(in->options()), &field);
        out->Options = MakeShareable(new FGrpcGoogleProtobufMessageOptions(field));
    }
    out->ReservedRange.Empty();
    for (int i=0; i<in->reserved_range_size(); ++i) {
        GRPC_TO_TURBOLINK(&(in->reserved_range(i)), &(out->ReservedRange.AddZeroed_GetRef()));
    }
    out->ReservedName.Empty();
    for (int i=0; i<in->reserved_name_size(); ++i) {
        out->ReservedName.Add(UTF8_TO_TCHAR(in->reserved_name(i).c_str()));
    }
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufDescriptorProto* in, ::google::protobuf::DescriptorProto* out)
{
    out->set_name(TCHAR_TO_UTF8(*(in->Name)));
    for(const auto& value : in->Field) {
        TURBOLINK_TO_GRPC(value.Get(), out->add_field());
    } 
    for(const auto& value : in->Extension) {
        TURBOLINK_TO_GRPC(value.Get(), out->add_extension());
    } 
    for(const auto& value : in->NestedType) {
        TURBOLINK_TO_GRPC(value.Get(), out->add_nested_type());
    } 
    for(const auto& value : in->EnumType) {
        TURBOLINK_TO_GRPC(value.Get(), out->add_enum_type());
    } 
    for(const auto& value : in->ExtensionRange) {
        TURBOLINK_TO_GRPC(&value, out->add_extension_range());
    } 
    for(const auto& value : in->OneofDecl) {
        TURBOLINK_TO_GRPC(value.Get(), out->add_oneof_decl());
    } 
    TURBOLINK_TO_GRPC(in->Options.Get(), out->mutable_options());
    for(const auto& value : in->ReservedRange) {
        TURBOLINK_TO_GRPC(&value, out->add_reserved_range());
    } 
    for(const auto& value : in->ReservedName) {
        out->add_reserved_name(TCHAR_TO_UTF8(*(value)));
    } 
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::ExtensionRangeOptions::Declaration* in, FGrpcGoogleProtobufExtensionRangeOptionsDeclaration* out)
{
    out->Number=in->number();
    out->FullName=UTF8_TO_TCHAR(in->full_name().c_str());
    out->Type=UTF8_TO_TCHAR(in->type().c_str());
    out->IsRepeated=in->is_repeated();
    out->Reserved=in->reserved();
    out->Repeated=in->repeated();
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufExtensionRangeOptionsDeclaration* in, ::google::protobuf::ExtensionRangeOptions::Declaration* out)
{
    out->set_number(in->Number);
    out->set_full_name(TCHAR_TO_UTF8(*(in->FullName)));
    out->set_type(TCHAR_TO_UTF8(*(in->Type)));
    out->set_is_repeated(in->IsRepeated);
    out->set_reserved(in->Reserved);
    out->set_repeated(in->Repeated);
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::ExtensionRangeOptions* in, FGrpcGoogleProtobufExtensionRangeOptions* out)
{
    out->UninterpretedOption.Empty();
    for (int i=0; i<in->uninterpreted_option_size(); ++i) {
        FGrpcGoogleProtobufUninterpretedOption field;
        GRPC_TO_TURBOLINK(&(in->uninterpreted_option(i)), &field);
        out->UninterpretedOption.Add(MakeShareable(new FGrpcGoogleProtobufUninterpretedOption(field)));
    }
    out->Declaration.Empty();
    for (int i=0; i<in->declaration_size(); ++i) {
        GRPC_TO_TURBOLINK(&(in->declaration(i)), &(out->Declaration.AddZeroed_GetRef()));
    }
    out->Verification=StaticCast<EGrpcGoogleProtobufExtensionRangeOptionsVerificationState>(in->verification());
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufExtensionRangeOptions* in, ::google::protobuf::ExtensionRangeOptions* out)
{
    for(const auto& value : in->UninterpretedOption) {
        TURBOLINK_TO_GRPC(value.Get(), out->add_uninterpreted_option());
    } 
    for(const auto& value : in->Declaration) {
        TURBOLINK_TO_GRPC(&value, out->add_declaration());
    } 
    out->set_verification(::google::protobuf::ExtensionRangeOptions::VerificationState(static_cast<uint8>(in->Verification)));
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::FieldDescriptorProto* in, FGrpcGoogleProtobufFieldDescriptorProto* out)
{
    out->Name=UTF8_TO_TCHAR(in->name().c_str());
    out->Number=in->number();
    out->Label=StaticCast<EGrpcGoogleProtobufFieldDescriptorProtoLabel>(in->label());
    out->Type=StaticCast<EGrpcGoogleProtobufFieldDescriptorProtoType>(in->type());
    out->TypeName=UTF8_TO_TCHAR(in->type_name().c_str());
    out->Extendee=UTF8_TO_TCHAR(in->extendee().c_str());
    out->DefaultValue=UTF8_TO_TCHAR(in->default_value().c_str());
    out->OneofIndex=in->oneof_index();
    out->JsonName=UTF8_TO_TCHAR(in->json_name().c_str());
    {
        FGrpcGoogleProtobufFieldOptions field;
        GRPC_TO_TURBOLINK(&(in->options()), &field);
        out->Options = MakeShareable(new FGrpcGoogleProtobufFieldOptions(field));
    }
    out->Proto3Optional=in->proto3_optional();
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufFieldDescriptorProto* in, ::google::protobuf::FieldDescriptorProto* out)
{
    out->set_name(TCHAR_TO_UTF8(*(in->Name)));
    out->set_number(in->Number);
    out->set_label(::google::protobuf::FieldDescriptorProto::Label(static_cast<uint8>(in->Label)));
    out->set_type(::google::protobuf::FieldDescriptorProto::Type(static_cast<uint8>(in->Type)));
    out->set_type_name(TCHAR_TO_UTF8(*(in->TypeName)));
    out->set_extendee(TCHAR_TO_UTF8(*(in->Extendee)));
    out->set_default_value(TCHAR_TO_UTF8(*(in->DefaultValue)));
    out->set_oneof_index(in->OneofIndex);
    out->set_json_name(TCHAR_TO_UTF8(*(in->JsonName)));
    TURBOLINK_TO_GRPC(in->Options.Get(), out->mutable_options());
    out->set_proto3_optional(in->Proto3Optional);
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::OneofDescriptorProto* in, FGrpcGoogleProtobufOneofDescriptorProto* out)
{
    out->Name=UTF8_TO_TCHAR(in->name().c_str());
    {
        FGrpcGoogleProtobufOneofOptions field;
        GRPC_TO_TURBOLINK(&(in->options()), &field);
        out->Options = MakeShareable(new FGrpcGoogleProtobufOneofOptions(field));
    }
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufOneofDescriptorProto* in, ::google::protobuf::OneofDescriptorProto* out)
{
    out->set_name(TCHAR_TO_UTF8(*(in->Name)));
    TURBOLINK_TO_GRPC(in->Options.Get(), out->mutable_options());
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::EnumDescriptorProto::EnumReservedRange* in, FGrpcGoogleProtobufEnumDescriptorProtoEnumReservedRange* out)
{
    out->Start=in->start();
    out->End=in->end();
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufEnumDescriptorProtoEnumReservedRange* in, ::google::protobuf::EnumDescriptorProto::EnumReservedRange* out)
{
    out->set_start(in->Start);
    out->set_end(in->End);
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::EnumDescriptorProto* in, FGrpcGoogleProtobufEnumDescriptorProto* out)
{
    out->Name=UTF8_TO_TCHAR(in->name().c_str());
    out->Value.Empty();
    for (int i=0; i<in->value_size(); ++i) {
        FGrpcGoogleProtobufEnumValueDescriptorProto field;
        GRPC_TO_TURBOLINK(&(in->value(i)), &field);
        out->Value.Add(MakeShareable(new FGrpcGoogleProtobufEnumValueDescriptorProto(field)));
    }
    {
        FGrpcGoogleProtobufEnumOptions field;
        GRPC_TO_TURBOLINK(&(in->options()), &field);
        out->Options = MakeShareable(new FGrpcGoogleProtobufEnumOptions(field));
    }
    out->ReservedRange.Empty();
    for (int i=0; i<in->reserved_range_size(); ++i) {
        GRPC_TO_TURBOLINK(&(in->reserved_range(i)), &(out->ReservedRange.AddZeroed_GetRef()));
    }
    out->ReservedName.Empty();
    for (int i=0; i<in->reserved_name_size(); ++i) {
        out->ReservedName.Add(UTF8_TO_TCHAR(in->reserved_name(i).c_str()));
    }
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufEnumDescriptorProto* in, ::google::protobuf::EnumDescriptorProto* out)
{
    out->set_name(TCHAR_TO_UTF8(*(in->Name)));
    for(const auto& value : in->Value) {
        TURBOLINK_TO_GRPC(value.Get(), out->add_value());
    } 
    TURBOLINK_TO_GRPC(in->Options.Get(), out->mutable_options());
    for(const auto& value : in->ReservedRange) {
        TURBOLINK_TO_GRPC(&value, out->add_reserved_range());
    } 
    for(const auto& value : in->ReservedName) {
        out->add_reserved_name(TCHAR_TO_UTF8(*(value)));
    } 
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::EnumValueDescriptorProto* in, FGrpcGoogleProtobufEnumValueDescriptorProto* out)
{
    out->Name=UTF8_TO_TCHAR(in->name().c_str());
    out->Number=in->number();
    {
        FGrpcGoogleProtobufEnumValueOptions field;
        GRPC_TO_TURBOLINK(&(in->options()), &field);
        out->Options = MakeShareable(new FGrpcGoogleProtobufEnumValueOptions(field));
    }
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufEnumValueDescriptorProto* in, ::google::protobuf::EnumValueDescriptorProto* out)
{
    out->set_name(TCHAR_TO_UTF8(*(in->Name)));
    out->set_number(in->Number);
    TURBOLINK_TO_GRPC(in->Options.Get(), out->mutable_options());
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::ServiceDescriptorProto* in, FGrpcGoogleProtobufServiceDescriptorProto* out)
{
    out->Name=UTF8_TO_TCHAR(in->name().c_str());
    out->Method.Empty();
    for (int i=0; i<in->method_size(); ++i) {
        FGrpcGoogleProtobufMethodDescriptorProto field;
        GRPC_TO_TURBOLINK(&(in->method(i)), &field);
        out->Method.Add(MakeShareable(new FGrpcGoogleProtobufMethodDescriptorProto(field)));
    }
    {
        FGrpcGoogleProtobufServiceOptions field;
        GRPC_TO_TURBOLINK(&(in->options()), &field);
        out->Options = MakeShareable(new FGrpcGoogleProtobufServiceOptions(field));
    }
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufServiceDescriptorProto* in, ::google::protobuf::ServiceDescriptorProto* out)
{
    out->set_name(TCHAR_TO_UTF8(*(in->Name)));
    for(const auto& value : in->Method) {
        TURBOLINK_TO_GRPC(value.Get(), out->add_method());
    } 
    TURBOLINK_TO_GRPC(in->Options.Get(), out->mutable_options());
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::MethodDescriptorProto* in, FGrpcGoogleProtobufMethodDescriptorProto* out)
{
    out->Name=UTF8_TO_TCHAR(in->name().c_str());
    out->InputType=UTF8_TO_TCHAR(in->input_type().c_str());
    out->OutputType=UTF8_TO_TCHAR(in->output_type().c_str());
    {
        FGrpcGoogleProtobufMethodOptions field;
        GRPC_TO_TURBOLINK(&(in->options()), &field);
        out->Options = MakeShareable(new FGrpcGoogleProtobufMethodOptions(field));
    }
    out->ClientStreaming=in->client_streaming();
    out->ServerStreaming=in->server_streaming();
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufMethodDescriptorProto* in, ::google::protobuf::MethodDescriptorProto* out)
{
    out->set_name(TCHAR_TO_UTF8(*(in->Name)));
    out->set_input_type(TCHAR_TO_UTF8(*(in->InputType)));
    out->set_output_type(TCHAR_TO_UTF8(*(in->OutputType)));
    TURBOLINK_TO_GRPC(in->Options.Get(), out->mutable_options());
    out->set_client_streaming(in->ClientStreaming);
    out->set_server_streaming(in->ServerStreaming);
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::FileOptions* in, FGrpcGoogleProtobufFileOptions* out)
{
    out->JavaPackage=UTF8_TO_TCHAR(in->java_package().c_str());
    out->JavaOuterClassname=UTF8_TO_TCHAR(in->java_outer_classname().c_str());
    out->JavaMultipleFiles=in->java_multiple_files();
    out->JavaGenerateEqualsAndHash=in->java_generate_equals_and_hash();
    out->JavaStringCheckUtf8=in->java_string_check_utf8();
    out->OptimizeFor=StaticCast<EGrpcGoogleProtobufFileOptionsOptimizeMode>(in->optimize_for());
    out->GoPackage=UTF8_TO_TCHAR(in->go_package().c_str());
    out->CcGenericServices=in->cc_generic_services();
    out->JavaGenericServices=in->java_generic_services();
    out->PyGenericServices=in->py_generic_services();
    out->PhpGenericServices=in->php_generic_services();
    out->Deprecated=in->deprecated();
    out->CcEnableArenas=in->cc_enable_arenas();
    out->ObjcClassPrefix=UTF8_TO_TCHAR(in->objc_class_prefix().c_str());
    out->CsharpNamespace=UTF8_TO_TCHAR(in->csharp_namespace().c_str());
    out->SwiftPrefix=UTF8_TO_TCHAR(in->swift_prefix().c_str());
    out->PhpClassPrefix=UTF8_TO_TCHAR(in->php_class_prefix().c_str());
    out->PhpNamespace=UTF8_TO_TCHAR(in->php_namespace().c_str());
    out->PhpMetadataNamespace=UTF8_TO_TCHAR(in->php_metadata_namespace().c_str());
    out->RubyPackage=UTF8_TO_TCHAR(in->ruby_package().c_str());
    out->UninterpretedOption.Empty();
    for (int i=0; i<in->uninterpreted_option_size(); ++i) {
        FGrpcGoogleProtobufUninterpretedOption field;
        GRPC_TO_TURBOLINK(&(in->uninterpreted_option(i)), &field);
        out->UninterpretedOption.Add(MakeShareable(new FGrpcGoogleProtobufUninterpretedOption(field)));
    }
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufFileOptions* in, ::google::protobuf::FileOptions* out)
{
    out->set_java_package(TCHAR_TO_UTF8(*(in->JavaPackage)));
    out->set_java_outer_classname(TCHAR_TO_UTF8(*(in->JavaOuterClassname)));
    out->set_java_multiple_files(in->JavaMultipleFiles);
    out->set_java_generate_equals_and_hash(in->JavaGenerateEqualsAndHash);
    out->set_java_string_check_utf8(in->JavaStringCheckUtf8);
    out->set_optimize_for(::google::protobuf::FileOptions::OptimizeMode(static_cast<uint8>(in->OptimizeFor)));
    out->set_go_package(TCHAR_TO_UTF8(*(in->GoPackage)));
    out->set_cc_generic_services(in->CcGenericServices);
    out->set_java_generic_services(in->JavaGenericServices);
    out->set_py_generic_services(in->PyGenericServices);
    out->set_php_generic_services(in->PhpGenericServices);
    out->set_deprecated(in->Deprecated);
    out->set_cc_enable_arenas(in->CcEnableArenas);
    out->set_objc_class_prefix(TCHAR_TO_UTF8(*(in->ObjcClassPrefix)));
    out->set_csharp_namespace(TCHAR_TO_UTF8(*(in->CsharpNamespace)));
    out->set_swift_prefix(TCHAR_TO_UTF8(*(in->SwiftPrefix)));
    out->set_php_class_prefix(TCHAR_TO_UTF8(*(in->PhpClassPrefix)));
    out->set_php_namespace(TCHAR_TO_UTF8(*(in->PhpNamespace)));
    out->set_php_metadata_namespace(TCHAR_TO_UTF8(*(in->PhpMetadataNamespace)));
    out->set_ruby_package(TCHAR_TO_UTF8(*(in->RubyPackage)));
    for(const auto& value : in->UninterpretedOption) {
        TURBOLINK_TO_GRPC(value.Get(), out->add_uninterpreted_option());
    } 
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::MessageOptions* in, FGrpcGoogleProtobufMessageOptions* out)
{
    out->MessageSetWireFormat=in->message_set_wire_format();
    out->NoStandardDescriptorAccessor=in->no_standard_descriptor_accessor();
    out->Deprecated=in->deprecated();
    out->MapEntry=in->map_entry();
    out->DeprecatedLegacyJsonFieldConflicts=in->deprecated_legacy_json_field_conflicts();
    out->UninterpretedOption.Empty();
    for (int i=0; i<in->uninterpreted_option_size(); ++i) {
        FGrpcGoogleProtobufUninterpretedOption field;
        GRPC_TO_TURBOLINK(&(in->uninterpreted_option(i)), &field);
        out->UninterpretedOption.Add(MakeShareable(new FGrpcGoogleProtobufUninterpretedOption(field)));
    }
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufMessageOptions* in, ::google::protobuf::MessageOptions* out)
{
    out->set_message_set_wire_format(in->MessageSetWireFormat);
    out->set_no_standard_descriptor_accessor(in->NoStandardDescriptorAccessor);
    out->set_deprecated(in->Deprecated);
    out->set_map_entry(in->MapEntry);
    out->set_deprecated_legacy_json_field_conflicts(in->DeprecatedLegacyJsonFieldConflicts);
    for(const auto& value : in->UninterpretedOption) {
        TURBOLINK_TO_GRPC(value.Get(), out->add_uninterpreted_option());
    } 
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::FieldOptions* in, FGrpcGoogleProtobufFieldOptions* out)
{
    out->Ctype=StaticCast<EGrpcGoogleProtobufFieldOptionsCType>(in->ctype());
    out->Packed=in->packed();
    out->Jstype=StaticCast<EGrpcGoogleProtobufFieldOptionsJSType>(in->jstype());
    out->Lazy=in->lazy();
    out->UnverifiedLazy=in->unverified_lazy();
    out->Deprecated=in->deprecated();
    out->Weak=in->weak();
    out->DebugRedact=in->debug_redact();
    out->Retention=StaticCast<EGrpcGoogleProtobufFieldOptionsOptionRetention>(in->retention());
    out->Target=StaticCast<EGrpcGoogleProtobufFieldOptionsOptionTargetType>(in->target());
    out->Targets.Empty();
    for (int i=0; i<in->targets_size(); ++i) {
        out->Targets.Add(StaticCast<EGrpcGoogleProtobufFieldOptionsOptionTargetType>(in->targets(i)));
    }
    out->UninterpretedOption.Empty();
    for (int i=0; i<in->uninterpreted_option_size(); ++i) {
        FGrpcGoogleProtobufUninterpretedOption field;
        GRPC_TO_TURBOLINK(&(in->uninterpreted_option(i)), &field);
        out->UninterpretedOption.Add(MakeShareable(new FGrpcGoogleProtobufUninterpretedOption(field)));
    }
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufFieldOptions* in, ::google::protobuf::FieldOptions* out)
{
    out->set_ctype(::google::protobuf::FieldOptions::CType(static_cast<uint8>(in->Ctype)));
    out->set_packed(in->Packed);
    out->set_jstype(::google::protobuf::FieldOptions::JSType(static_cast<uint8>(in->Jstype)));
    out->set_lazy(in->Lazy);
    out->set_unverified_lazy(in->UnverifiedLazy);
    out->set_deprecated(in->Deprecated);
    out->set_weak(in->Weak);
    out->set_debug_redact(in->DebugRedact);
    out->set_retention(::google::protobuf::FieldOptions::OptionRetention(static_cast<uint8>(in->Retention)));
    out->set_target(::google::protobuf::FieldOptions::OptionTargetType(static_cast<uint8>(in->Target)));
    for(const auto& value : in->Targets) {
        out->add_targets(::google::protobuf::FieldOptions::OptionTargetType(static_cast<uint8>(value)));
    } 
    for(const auto& value : in->UninterpretedOption) {
        TURBOLINK_TO_GRPC(value.Get(), out->add_uninterpreted_option());
    } 
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::OneofOptions* in, FGrpcGoogleProtobufOneofOptions* out)
{
    out->UninterpretedOption.Empty();
    for (int i=0; i<in->uninterpreted_option_size(); ++i) {
        FGrpcGoogleProtobufUninterpretedOption field;
        GRPC_TO_TURBOLINK(&(in->uninterpreted_option(i)), &field);
        out->UninterpretedOption.Add(MakeShareable(new FGrpcGoogleProtobufUninterpretedOption(field)));
    }
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufOneofOptions* in, ::google::protobuf::OneofOptions* out)
{
    for(const auto& value : in->UninterpretedOption) {
        TURBOLINK_TO_GRPC(value.Get(), out->add_uninterpreted_option());
    } 
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::EnumOptions* in, FGrpcGoogleProtobufEnumOptions* out)
{
    out->AllowAlias=in->allow_alias();
    out->Deprecated=in->deprecated();
    out->DeprecatedLegacyJsonFieldConflicts=in->deprecated_legacy_json_field_conflicts();
    out->UninterpretedOption.Empty();
    for (int i=0; i<in->uninterpreted_option_size(); ++i) {
        FGrpcGoogleProtobufUninterpretedOption field;
        GRPC_TO_TURBOLINK(&(in->uninterpreted_option(i)), &field);
        out->UninterpretedOption.Add(MakeShareable(new FGrpcGoogleProtobufUninterpretedOption(field)));
    }
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufEnumOptions* in, ::google::protobuf::EnumOptions* out)
{
    out->set_allow_alias(in->AllowAlias);
    out->set_deprecated(in->Deprecated);
    out->set_deprecated_legacy_json_field_conflicts(in->DeprecatedLegacyJsonFieldConflicts);
    for(const auto& value : in->UninterpretedOption) {
        TURBOLINK_TO_GRPC(value.Get(), out->add_uninterpreted_option());
    } 
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::EnumValueOptions* in, FGrpcGoogleProtobufEnumValueOptions* out)
{
    out->Deprecated=in->deprecated();
    out->UninterpretedOption.Empty();
    for (int i=0; i<in->uninterpreted_option_size(); ++i) {
        FGrpcGoogleProtobufUninterpretedOption field;
        GRPC_TO_TURBOLINK(&(in->uninterpreted_option(i)), &field);
        out->UninterpretedOption.Add(MakeShareable(new FGrpcGoogleProtobufUninterpretedOption(field)));
    }
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufEnumValueOptions* in, ::google::protobuf::EnumValueOptions* out)
{
    out->set_deprecated(in->Deprecated);
    for(const auto& value : in->UninterpretedOption) {
        TURBOLINK_TO_GRPC(value.Get(), out->add_uninterpreted_option());
    } 
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::ServiceOptions* in, FGrpcGoogleProtobufServiceOptions* out)
{
    out->Deprecated=in->deprecated();
    out->UninterpretedOption.Empty();
    for (int i=0; i<in->uninterpreted_option_size(); ++i) {
        FGrpcGoogleProtobufUninterpretedOption field;
        GRPC_TO_TURBOLINK(&(in->uninterpreted_option(i)), &field);
        out->UninterpretedOption.Add(MakeShareable(new FGrpcGoogleProtobufUninterpretedOption(field)));
    }
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufServiceOptions* in, ::google::protobuf::ServiceOptions* out)
{
    out->set_deprecated(in->Deprecated);
    for(const auto& value : in->UninterpretedOption) {
        TURBOLINK_TO_GRPC(value.Get(), out->add_uninterpreted_option());
    } 
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::MethodOptions* in, FGrpcGoogleProtobufMethodOptions* out)
{
    out->Deprecated=in->deprecated();
    out->IdempotencyLevel=StaticCast<EGrpcGoogleProtobufMethodOptionsIdempotencyLevel>(in->idempotency_level());
    out->UninterpretedOption.Empty();
    for (int i=0; i<in->uninterpreted_option_size(); ++i) {
        FGrpcGoogleProtobufUninterpretedOption field;
        GRPC_TO_TURBOLINK(&(in->uninterpreted_option(i)), &field);
        out->UninterpretedOption.Add(MakeShareable(new FGrpcGoogleProtobufUninterpretedOption(field)));
    }
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufMethodOptions* in, ::google::protobuf::MethodOptions* out)
{
    out->set_deprecated(in->Deprecated);
    out->set_idempotency_level(::google::protobuf::MethodOptions::IdempotencyLevel(static_cast<uint8>(in->IdempotencyLevel)));
    for(const auto& value : in->UninterpretedOption) {
        TURBOLINK_TO_GRPC(value.Get(), out->add_uninterpreted_option());
    } 
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::UninterpretedOption::NamePart* in, FGrpcGoogleProtobufUninterpretedOptionNamePart* out)
{
    out->NamePart=UTF8_TO_TCHAR(in->name_part().c_str());
    out->IsExtension=in->is_extension();
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufUninterpretedOptionNamePart* in, ::google::protobuf::UninterpretedOption::NamePart* out)
{
    out->set_name_part(TCHAR_TO_UTF8(*(in->NamePart)));
    out->set_is_extension(in->IsExtension);
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::UninterpretedOption* in, FGrpcGoogleProtobufUninterpretedOption* out)
{
    out->Name.Empty();
    for (int i=0; i<in->name_size(); ++i) {
        GRPC_TO_TURBOLINK(&(in->name(i)), &(out->Name.AddZeroed_GetRef()));
    }
    out->IdentifierValue=UTF8_TO_TCHAR(in->identifier_value().c_str());
    out->PositiveIntValue=in->positive_int_value();
    out->NegativeIntValue=in->negative_int_value();
    out->DoubleValue=in->double_value();
    out->StringValue=FBytes((const uint8*)in->string_value().c_str(), in->string_value().length());
    out->AggregateValue=UTF8_TO_TCHAR(in->aggregate_value().c_str());
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufUninterpretedOption* in, ::google::protobuf::UninterpretedOption* out)
{
    for(const auto& value : in->Name) {
        TURBOLINK_TO_GRPC(&value, out->add_name());
    } 
    out->set_identifier_value(TCHAR_TO_UTF8(*(in->IdentifierValue)));
    out->set_positive_int_value(in->PositiveIntValue);
    out->set_negative_int_value(in->NegativeIntValue);
    out->set_double_value(in->DoubleValue);
    out->set_string_value(std::string((const char*)(in->StringValue.Value.GetData()), (size_t)in->StringValue.Value.Num()));
    out->set_aggregate_value(TCHAR_TO_UTF8(*(in->AggregateValue)));
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::SourceCodeInfo::Location* in, FGrpcGoogleProtobufSourceCodeInfoLocation* out)
{
    out->Path.Empty();
    for (int i=0; i<in->path_size(); ++i) {
        out->Path.Add(in->path(i));
    }
    out->Span.Empty();
    for (int i=0; i<in->span_size(); ++i) {
        out->Span.Add(in->span(i));
    }
    out->LeadingComments=UTF8_TO_TCHAR(in->leading_comments().c_str());
    out->TrailingComments=UTF8_TO_TCHAR(in->trailing_comments().c_str());
    out->LeadingDetachedComments.Empty();
    for (int i=0; i<in->leading_detached_comments_size(); ++i) {
        out->LeadingDetachedComments.Add(UTF8_TO_TCHAR(in->leading_detached_comments(i).c_str()));
    }
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufSourceCodeInfoLocation* in, ::google::protobuf::SourceCodeInfo::Location* out)
{
    for(const auto& value : in->Path) {
        out->add_path(value);
    } 
    for(const auto& value : in->Span) {
        out->add_span(value);
    } 
    out->set_leading_comments(TCHAR_TO_UTF8(*(in->LeadingComments)));
    out->set_trailing_comments(TCHAR_TO_UTF8(*(in->TrailingComments)));
    for(const auto& value : in->LeadingDetachedComments) {
        out->add_leading_detached_comments(TCHAR_TO_UTF8(*(value)));
    } 
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::SourceCodeInfo* in, FGrpcGoogleProtobufSourceCodeInfo* out)
{
    out->Location.Empty();
    for (int i=0; i<in->location_size(); ++i) {
        GRPC_TO_TURBOLINK(&(in->location(i)), &(out->Location.AddZeroed_GetRef()));
    }
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufSourceCodeInfo* in, ::google::protobuf::SourceCodeInfo* out)
{
    for(const auto& value : in->Location) {
        TURBOLINK_TO_GRPC(&value, out->add_location());
    } 
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::GeneratedCodeInfo::Annotation* in, FGrpcGoogleProtobufGeneratedCodeInfoAnnotation* out)
{
    out->Path.Empty();
    for (int i=0; i<in->path_size(); ++i) {
        out->Path.Add(in->path(i));
    }
    out->SourceFile=UTF8_TO_TCHAR(in->source_file().c_str());
    out->Begin=in->begin();
    out->End=in->end();
    out->Semantic=StaticCast<EGrpcGoogleProtobufGeneratedCodeInfoAnnotationSemantic>(in->semantic());
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufGeneratedCodeInfoAnnotation* in, ::google::protobuf::GeneratedCodeInfo::Annotation* out)
{
    for(const auto& value : in->Path) {
        out->add_path(value);
    } 
    out->set_source_file(TCHAR_TO_UTF8(*(in->SourceFile)));
    out->set_begin(in->Begin);
    out->set_end(in->End);
    out->set_semantic(::google::protobuf::GeneratedCodeInfo::Annotation::Semantic(static_cast<uint8>(in->Semantic)));
}

void GRPC_TO_TURBOLINK(const ::google::protobuf::GeneratedCodeInfo* in, FGrpcGoogleProtobufGeneratedCodeInfo* out)
{
    out->Annotation.Empty();
    for (int i=0; i<in->annotation_size(); ++i) {
        GRPC_TO_TURBOLINK(&(in->annotation(i)), &(out->Annotation.AddZeroed_GetRef()));
    }
}

void TURBOLINK_TO_GRPC(const FGrpcGoogleProtobufGeneratedCodeInfo* in, ::google::protobuf::GeneratedCodeInfo* out)
{
    for(const auto& value : in->Annotation) {
        TURBOLINK_TO_GRPC(&value, out->add_annotation());
    } 
}
