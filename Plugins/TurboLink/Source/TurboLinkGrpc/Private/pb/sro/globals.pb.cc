﻿#if defined(_MSC_VER)
  #pragma warning (disable:4018) // 'expression' : signed/unsigned mismatch
  #pragma warning (disable:4065) // switch statement contains 'default' but no 'case' labels
  #pragma warning (disable:4146) // unary minus operator applied to unsigned type, result still unsigned
  #pragma warning (disable:4244) // 'conversion' conversion from 'type1' to 'type2', possible loss of data
  #pragma warning (disable:4251) // 'identifier' : class 'type' needs to have dll-interface to be used by clients of class 'type2'
  #pragma warning (disable:4267) // 'var' : conversion from 'size_t' to 'type', possible loss of data
  #pragma warning (disable:4305) // 'identifier' : truncation from 'type1' to 'type2'
  #pragma warning (disable:4307) // 'operator' : integral constant overflow
  #pragma warning (disable:4309) // 'conversion' : truncation of constant value
  #pragma warning (disable:4334) // 'operator' : result of 32-bit shift implicitly converted to 64 bits (was 64-bit shift intended?)
  #pragma warning (disable:4355) // 'this' : used in base member initializer list
  #pragma warning (disable:4506) // no definition for inline function 'function'
  #pragma warning (disable:4800) // 'type' : forcing value to bool 'true' or 'false' (performance warning)
  #pragma warning (disable:4996) // The compiler encountered a deprecated declaration.
  #pragma warning (disable:4125) // decimal digit terminates octal escape sequence
#endif// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sro/globals.proto

#include "sro/globals.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = ::PROTOBUF_NAMESPACE_ID::internal;
namespace sro {
template <typename>
PROTOBUF_CONSTEXPR UserTarget::UserTarget(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.target_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_._oneof_case_)*/{}} {}
struct UserTargetDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UserTargetDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~UserTargetDefaultTypeInternal() {}
  union {
    UserTarget _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UserTargetDefaultTypeInternal _UserTarget_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR Location::Location(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.world_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.x_)*/ 0

  , /*decltype(_impl_.y_)*/ 0

  , /*decltype(_impl_.z_)*/ 0

  , /*decltype(_impl_.roll_)*/ 0

  , /*decltype(_impl_.pitch_)*/ 0

  , /*decltype(_impl_.yaw_)*/ 0

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct LocationDefaultTypeInternal {
  PROTOBUF_CONSTEXPR LocationDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~LocationDefaultTypeInternal() {}
  union {
    Location _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 LocationDefaultTypeInternal _Location_default_instance_;
}  // namespace sro
static ::_pb::Metadata file_level_metadata_sro_2fglobals_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_sro_2fglobals_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_sro_2fglobals_2eproto = nullptr;
const ::uint32_t TableStruct_sro_2fglobals_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::sro::UserTarget, _internal_metadata_),
    ~0u,  // no _extensions_
    PROTOBUF_FIELD_OFFSET(::sro::UserTarget, _impl_._oneof_case_[0]),
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    ::_pbi::kInvalidFieldOffsetTag,
    ::_pbi::kInvalidFieldOffsetTag,
    PROTOBUF_FIELD_OFFSET(::sro::UserTarget, _impl_.target_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::sro::Location, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::sro::Location, _impl_.world_),
    PROTOBUF_FIELD_OFFSET(::sro::Location, _impl_.x_),
    PROTOBUF_FIELD_OFFSET(::sro::Location, _impl_.y_),
    PROTOBUF_FIELD_OFFSET(::sro::Location, _impl_.z_),
    PROTOBUF_FIELD_OFFSET(::sro::Location, _impl_.roll_),
    PROTOBUF_FIELD_OFFSET(::sro::Location, _impl_.pitch_),
    PROTOBUF_FIELD_OFFSET(::sro::Location, _impl_.yaw_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::sro::UserTarget)},
        { 11, -1, -1, sizeof(::sro::Location)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::sro::_UserTarget_default_instance_._instance,
    &::sro::_Location_default_instance_._instance,
};
const char descriptor_table_protodef_sro_2fglobals_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\021sro/globals.proto\022\003sro\"8\n\nUserTarget\022\014"
    "\n\002id\030\001 \001(\tH\000\022\022\n\010username\030\002 \001(\tH\000B\010\n\006targ"
    "et\"d\n\010Location\022\r\n\005world\030\001 \001(\t\022\t\n\001x\030\002 \001(\002"
    "\022\t\n\001y\030\003 \001(\002\022\t\n\001z\030\004 \001(\002\022\014\n\004roll\030\005 \001(\002\022\r\n\005"
    "pitch\030\006 \001(\002\022\013\n\003yaw\030\007 \001(\002B\010Z\006pkg/pbb\006prot"
    "o3"
};
static ::absl::once_flag descriptor_table_sro_2fglobals_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_sro_2fglobals_2eproto = {
    false,
    false,
    202,
    descriptor_table_protodef_sro_2fglobals_2eproto,
    "sro/globals.proto",
    &descriptor_table_sro_2fglobals_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_sro_2fglobals_2eproto::offsets,
    file_level_metadata_sro_2fglobals_2eproto,
    file_level_enum_descriptors_sro_2fglobals_2eproto,
    file_level_service_descriptors_sro_2fglobals_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_sro_2fglobals_2eproto_getter() {
  return &descriptor_table_sro_2fglobals_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_sro_2fglobals_2eproto(&descriptor_table_sro_2fglobals_2eproto);
namespace sro {
// ===================================================================

class UserTarget::_Internal {
 public:
  static constexpr ::int32_t kOneofCaseOffset =
    PROTOBUF_FIELD_OFFSET(::sro::UserTarget, _impl_._oneof_case_);
};

UserTarget::UserTarget(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:sro.UserTarget)
}
UserTarget::UserTarget(const UserTarget& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  UserTarget* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.target_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , /*decltype(_impl_._oneof_case_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  clear_has_target();
  switch (from.target_case()) {
    case kId: {
      _this->_internal_set_id(from._internal_id());
      break;
    }
    case kUsername: {
      _this->_internal_set_username(from._internal_username());
      break;
    }
    case TARGET_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:sro.UserTarget)
}

inline void UserTarget::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.target_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , /*decltype(_impl_._oneof_case_)*/{}
  };
  clear_has_target();
}

UserTarget::~UserTarget() {
  // @@protoc_insertion_point(destructor:sro.UserTarget)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void UserTarget::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  if (has_target()) {
    clear_target();
  }
}

void UserTarget::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void UserTarget::clear_target() {
// @@protoc_insertion_point(one_of_clear_start:sro.UserTarget)
  switch (target_case()) {
    case kId: {
      _impl_.target_.id_.Destroy();
      break;
    }
    case kUsername: {
      _impl_.target_.username_.Destroy();
      break;
    }
    case TARGET_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[0] = TARGET_NOT_SET;
}


void UserTarget::Clear() {
// @@protoc_insertion_point(message_clear_start:sro.UserTarget)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_target();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* UserTarget::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_id();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "sro.UserTarget.id"));
        } else {
          goto handle_unusual;
        }
        continue;
      // string username = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_username();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "sro.UserTarget.username"));
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* UserTarget::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:sro.UserTarget)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  switch (target_case()) {
    case kId: {
      const std::string& _s = this->_internal_id();
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "sro.UserTarget.id");
      target = stream->WriteStringMaybeAliased(1, _s, target);
      break;
    }
    case kUsername: {
      const std::string& _s = this->_internal_username();
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "sro.UserTarget.username");
      target = stream->WriteStringMaybeAliased(2, _s, target);
      break;
    }
    default: ;
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sro.UserTarget)
  return target;
}

::size_t UserTarget::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sro.UserTarget)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  switch (target_case()) {
    // string id = 1;
    case kId: {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_id());
      break;
    }
    // string username = 2;
    case kUsername: {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_username());
      break;
    }
    case TARGET_NOT_SET: {
      break;
    }
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData UserTarget::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    UserTarget::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*UserTarget::GetClassData() const { return &_class_data_; }


void UserTarget::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<UserTarget*>(&to_msg);
  auto& from = static_cast<const UserTarget&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:sro.UserTarget)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  switch (from.target_case()) {
    case kId: {
      _this->_internal_set_id(from._internal_id());
      break;
    }
    case kUsername: {
      _this->_internal_set_username(from._internal_username());
      break;
    }
    case TARGET_NOT_SET: {
      break;
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void UserTarget::CopyFrom(const UserTarget& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sro.UserTarget)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserTarget::IsInitialized() const {
  return true;
}

void UserTarget::InternalSwap(UserTarget* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.target_, other->_impl_.target_);
  swap(_impl_._oneof_case_[0], other->_impl_._oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata UserTarget::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_sro_2fglobals_2eproto_getter, &descriptor_table_sro_2fglobals_2eproto_once,
      file_level_metadata_sro_2fglobals_2eproto[0]);
}
// ===================================================================

class Location::_Internal {
 public:
};

Location::Location(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:sro.Location)
}
Location::Location(const Location& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Location* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.world_) {}

    , decltype(_impl_.x_) {}

    , decltype(_impl_.y_) {}

    , decltype(_impl_.z_) {}

    , decltype(_impl_.roll_) {}

    , decltype(_impl_.pitch_) {}

    , decltype(_impl_.yaw_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.world_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.world_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_world().empty()) {
    _this->_impl_.world_.Set(from._internal_world(), _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.x_, &from._impl_.x_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.yaw_) -
    reinterpret_cast<char*>(&_impl_.x_)) + sizeof(_impl_.yaw_));
  // @@protoc_insertion_point(copy_constructor:sro.Location)
}

inline void Location::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.world_) {}

    , decltype(_impl_.x_) { 0 }

    , decltype(_impl_.y_) { 0 }

    , decltype(_impl_.z_) { 0 }

    , decltype(_impl_.roll_) { 0 }

    , decltype(_impl_.pitch_) { 0 }

    , decltype(_impl_.yaw_) { 0 }

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.world_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.world_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Location::~Location() {
  // @@protoc_insertion_point(destructor:sro.Location)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Location::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.world_.Destroy();
}

void Location::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Location::Clear() {
// @@protoc_insertion_point(message_clear_start:sro.Location)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.world_.ClearToEmpty();
  ::memset(&_impl_.x_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.yaw_) -
      reinterpret_cast<char*>(&_impl_.x_)) + sizeof(_impl_.yaw_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Location::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string world = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_world();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "sro.Location.world"));
        } else {
          goto handle_unusual;
        }
        continue;
      // float x = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 21)) {
          _impl_.x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else {
          goto handle_unusual;
        }
        continue;
      // float y = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 29)) {
          _impl_.y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else {
          goto handle_unusual;
        }
        continue;
      // float z = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 37)) {
          _impl_.z_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else {
          goto handle_unusual;
        }
        continue;
      // float roll = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 45)) {
          _impl_.roll_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else {
          goto handle_unusual;
        }
        continue;
      // float pitch = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 53)) {
          _impl_.pitch_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else {
          goto handle_unusual;
        }
        continue;
      // float yaw = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 61)) {
          _impl_.yaw_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* Location::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:sro.Location)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string world = 1;
  if (!this->_internal_world().empty()) {
    const std::string& _s = this->_internal_world();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "sro.Location.world");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // float x = 2;
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_x = this->_internal_x();
  ::uint32_t raw_x;
  memcpy(&raw_x, &tmp_x, sizeof(tmp_x));
  if (raw_x != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        2, this->_internal_x(), target);
  }

  // float y = 3;
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_y = this->_internal_y();
  ::uint32_t raw_y;
  memcpy(&raw_y, &tmp_y, sizeof(tmp_y));
  if (raw_y != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        3, this->_internal_y(), target);
  }

  // float z = 4;
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_z = this->_internal_z();
  ::uint32_t raw_z;
  memcpy(&raw_z, &tmp_z, sizeof(tmp_z));
  if (raw_z != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        4, this->_internal_z(), target);
  }

  // float roll = 5;
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_roll = this->_internal_roll();
  ::uint32_t raw_roll;
  memcpy(&raw_roll, &tmp_roll, sizeof(tmp_roll));
  if (raw_roll != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        5, this->_internal_roll(), target);
  }

  // float pitch = 6;
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_pitch = this->_internal_pitch();
  ::uint32_t raw_pitch;
  memcpy(&raw_pitch, &tmp_pitch, sizeof(tmp_pitch));
  if (raw_pitch != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        6, this->_internal_pitch(), target);
  }

  // float yaw = 7;
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_yaw = this->_internal_yaw();
  ::uint32_t raw_yaw;
  memcpy(&raw_yaw, &tmp_yaw, sizeof(tmp_yaw));
  if (raw_yaw != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        7, this->_internal_yaw(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sro.Location)
  return target;
}

::size_t Location::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sro.Location)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string world = 1;
  if (!this->_internal_world().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_world());
  }

  // float x = 2;
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_x = this->_internal_x();
  ::uint32_t raw_x;
  memcpy(&raw_x, &tmp_x, sizeof(tmp_x));
  if (raw_x != 0) {
    total_size += 5;
  }

  // float y = 3;
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_y = this->_internal_y();
  ::uint32_t raw_y;
  memcpy(&raw_y, &tmp_y, sizeof(tmp_y));
  if (raw_y != 0) {
    total_size += 5;
  }

  // float z = 4;
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_z = this->_internal_z();
  ::uint32_t raw_z;
  memcpy(&raw_z, &tmp_z, sizeof(tmp_z));
  if (raw_z != 0) {
    total_size += 5;
  }

  // float roll = 5;
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_roll = this->_internal_roll();
  ::uint32_t raw_roll;
  memcpy(&raw_roll, &tmp_roll, sizeof(tmp_roll));
  if (raw_roll != 0) {
    total_size += 5;
  }

  // float pitch = 6;
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_pitch = this->_internal_pitch();
  ::uint32_t raw_pitch;
  memcpy(&raw_pitch, &tmp_pitch, sizeof(tmp_pitch));
  if (raw_pitch != 0) {
    total_size += 5;
  }

  // float yaw = 7;
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_yaw = this->_internal_yaw();
  ::uint32_t raw_yaw;
  memcpy(&raw_yaw, &tmp_yaw, sizeof(tmp_yaw));
  if (raw_yaw != 0) {
    total_size += 5;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Location::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Location::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Location::GetClassData() const { return &_class_data_; }


void Location::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Location*>(&to_msg);
  auto& from = static_cast<const Location&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:sro.Location)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_world().empty()) {
    _this->_internal_set_world(from._internal_world());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_x = from._internal_x();
  ::uint32_t raw_x;
  memcpy(&raw_x, &tmp_x, sizeof(tmp_x));
  if (raw_x != 0) {
    _this->_internal_set_x(from._internal_x());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_y = from._internal_y();
  ::uint32_t raw_y;
  memcpy(&raw_y, &tmp_y, sizeof(tmp_y));
  if (raw_y != 0) {
    _this->_internal_set_y(from._internal_y());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_z = from._internal_z();
  ::uint32_t raw_z;
  memcpy(&raw_z, &tmp_z, sizeof(tmp_z));
  if (raw_z != 0) {
    _this->_internal_set_z(from._internal_z());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_roll = from._internal_roll();
  ::uint32_t raw_roll;
  memcpy(&raw_roll, &tmp_roll, sizeof(tmp_roll));
  if (raw_roll != 0) {
    _this->_internal_set_roll(from._internal_roll());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_pitch = from._internal_pitch();
  ::uint32_t raw_pitch;
  memcpy(&raw_pitch, &tmp_pitch, sizeof(tmp_pitch));
  if (raw_pitch != 0) {
    _this->_internal_set_pitch(from._internal_pitch());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_yaw = from._internal_yaw();
  ::uint32_t raw_yaw;
  memcpy(&raw_yaw, &tmp_yaw, sizeof(tmp_yaw));
  if (raw_yaw != 0) {
    _this->_internal_set_yaw(from._internal_yaw());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Location::CopyFrom(const Location& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sro.Location)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Location::IsInitialized() const {
  return true;
}

void Location::InternalSwap(Location* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.world_, lhs_arena,
                                       &other->_impl_.world_, rhs_arena);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Location, _impl_.yaw_)
      + sizeof(Location::_impl_.yaw_)
      - PROTOBUF_FIELD_OFFSET(Location, _impl_.x_)>(
          reinterpret_cast<char*>(&_impl_.x_),
          reinterpret_cast<char*>(&other->_impl_.x_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Location::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_sro_2fglobals_2eproto_getter, &descriptor_table_sro_2fglobals_2eproto_once,
      file_level_metadata_sro_2fglobals_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace sro
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::sro::UserTarget*
Arena::CreateMaybeMessage< ::sro::UserTarget >(Arena* arena) {
  return Arena::CreateMessageInternal< ::sro::UserTarget >(arena);
}
template<> PROTOBUF_NOINLINE ::sro::Location*
Arena::CreateMaybeMessage< ::sro::Location >(Arena* arena) {
  return Arena::CreateMessageInternal< ::sro::Location >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"