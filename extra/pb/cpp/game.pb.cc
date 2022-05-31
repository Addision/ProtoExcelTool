// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: game.proto

#include "game.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
constexpr TestReq::TestReq(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : age_(0){}
struct TestReqDefaultTypeInternal {
  constexpr TestReqDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~TestReqDefaultTypeInternal() {}
  union {
    TestReq _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT TestReqDefaultTypeInternal _TestReq_default_instance_;
constexpr TestAck::TestAck(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct TestAckDefaultTypeInternal {
  constexpr TestAckDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~TestAckDefaultTypeInternal() {}
  union {
    TestAck _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT TestAckDefaultTypeInternal _TestAck_default_instance_;
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_game_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_game_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_game_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_game_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TestReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::TestReq, age_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TestAck, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::TestReq)},
  { 7, -1, -1, sizeof(::TestAck)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_TestReq_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_TestAck_default_instance_),
};

const char descriptor_table_protodef_game_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\ngame.proto\032\014common.proto\"\026\n\007TestReq\022\013\n"
  "\003age\030\001 \001(\005\"\t\n\007TestAck*D\n\tGameMsgId\022\017\n\013Ga"
  "me_MSG_ID\020\000\022\022\n\rGAME_TEST_REQ\020\321\017\022\022\n\rGAME_"
  "TEST_ACK\020\322\017b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_game_2eproto_deps[1] = {
  &::descriptor_table_common_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_game_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_game_2eproto = {
  false, false, 139, descriptor_table_protodef_game_2eproto, "game.proto", 
  &descriptor_table_game_2eproto_once, descriptor_table_game_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_game_2eproto::offsets,
  file_level_metadata_game_2eproto, file_level_enum_descriptors_game_2eproto, file_level_service_descriptors_game_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_game_2eproto_getter() {
  return &descriptor_table_game_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_game_2eproto(&descriptor_table_game_2eproto);
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* GameMsgId_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_game_2eproto);
  return file_level_enum_descriptors_game_2eproto[0];
}
bool GameMsgId_IsValid(int value) {
  switch (value) {
    case 0:
    case 2001:
    case 2002:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class TestReq::_Internal {
 public:
};

TestReq::TestReq(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:TestReq)
}
TestReq::TestReq(const TestReq& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  age_ = from.age_;
  // @@protoc_insertion_point(copy_constructor:TestReq)
}

void TestReq::SharedCtor() {
age_ = 0;
}

TestReq::~TestReq() {
  // @@protoc_insertion_point(destructor:TestReq)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void TestReq::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void TestReq::ArenaDtor(void* object) {
  TestReq* _this = reinterpret_cast< TestReq* >(object);
  (void)_this;
}
void TestReq::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TestReq::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void TestReq::Clear() {
// @@protoc_insertion_point(message_clear_start:TestReq)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  age_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TestReq::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 age = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          age_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
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

::PROTOBUF_NAMESPACE_ID::uint8* TestReq::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TestReq)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 age = 1;
  if (this->_internal_age() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_age(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TestReq)
  return target;
}

size_t TestReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TestReq)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 age = 1;
  if (this->_internal_age() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_age());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TestReq::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    TestReq::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TestReq::GetClassData() const { return &_class_data_; }

void TestReq::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<TestReq *>(to)->MergeFrom(
      static_cast<const TestReq &>(from));
}


void TestReq::MergeFrom(const TestReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TestReq)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_age() != 0) {
    _internal_set_age(from._internal_age());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TestReq::CopyFrom(const TestReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TestReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestReq::IsInitialized() const {
  return true;
}

void TestReq::InternalSwap(TestReq* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(age_, other->age_);
}

::PROTOBUF_NAMESPACE_ID::Metadata TestReq::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_game_2eproto_getter, &descriptor_table_game_2eproto_once,
      file_level_metadata_game_2eproto[0]);
}

// ===================================================================

class TestAck::_Internal {
 public:
};

TestAck::TestAck(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase(arena, is_message_owned) {
  // @@protoc_insertion_point(arena_constructor:TestAck)
}
TestAck::TestAck(const TestAck& from)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:TestAck)
}





const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TestAck::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl,
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl,
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TestAck::GetClassData() const { return &_class_data_; }







::PROTOBUF_NAMESPACE_ID::Metadata TestAck::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_game_2eproto_getter, &descriptor_table_game_2eproto_once,
      file_level_metadata_game_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::TestReq* Arena::CreateMaybeMessage< ::TestReq >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TestReq >(arena);
}
template<> PROTOBUF_NOINLINE ::TestAck* Arena::CreateMaybeMessage< ::TestAck >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TestAck >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
