// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api.proto

#include "api.pb.h"

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

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace routeguide {
PROTOBUF_CONSTEXPR Point::Point(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.latitude_)*/0
  , /*decltype(_impl_.longitude_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct PointDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PointDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~PointDefaultTypeInternal() {}
  union {
    Point _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PointDefaultTypeInternal _Point_default_instance_;
PROTOBUF_CONSTEXPR Feature::Feature(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.location_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct FeatureDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FeatureDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FeatureDefaultTypeInternal() {}
  union {
    Feature _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FeatureDefaultTypeInternal _Feature_default_instance_;
}  // namespace routeguide
static ::_pb::Metadata file_level_metadata_api_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_api_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_api_2eproto = nullptr;

const uint32_t TableStruct_api_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::routeguide::Point, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::routeguide::Point, _impl_.latitude_),
  PROTOBUF_FIELD_OFFSET(::routeguide::Point, _impl_.longitude_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::routeguide::Feature, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::routeguide::Feature, _impl_.name_),
  PROTOBUF_FIELD_OFFSET(::routeguide::Feature, _impl_.location_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::routeguide::Point)},
  { 8, -1, -1, sizeof(::routeguide::Feature)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::routeguide::_Point_default_instance_._instance,
  &::routeguide::_Feature_default_instance_._instance,
};

const char descriptor_table_protodef_api_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\tapi.proto\022\nrouteguide\",\n\005Point\022\020\n\010lati"
  "tude\030\001 \001(\005\022\021\n\tlongitude\030\002 \001(\005\"<\n\007Feature"
  "\022\014\n\004name\030\001 \001(\t\022#\n\010location\030\002 \001(\0132\021.route"
  "guide.Point2D\n\nRouteGuide\0226\n\nGetFeature\022"
  "\021.routeguide.Point\032\023.routeguide.Feature\""
  "\000b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_api_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_api_2eproto = {
    false, false, 209, descriptor_table_protodef_api_2eproto,
    "api.proto",
    &descriptor_table_api_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_api_2eproto::offsets,
    file_level_metadata_api_2eproto, file_level_enum_descriptors_api_2eproto,
    file_level_service_descriptors_api_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_api_2eproto_getter() {
  return &descriptor_table_api_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_api_2eproto(&descriptor_table_api_2eproto);
namespace routeguide {

// ===================================================================

class Point::_Internal {
 public:
};

Point::Point(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:routeguide.Point)
}
Point::Point(const Point& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Point* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.latitude_){}
    , decltype(_impl_.longitude_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.latitude_, &from._impl_.latitude_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.longitude_) -
    reinterpret_cast<char*>(&_impl_.latitude_)) + sizeof(_impl_.longitude_));
  // @@protoc_insertion_point(copy_constructor:routeguide.Point)
}

inline void Point::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.latitude_){0}
    , decltype(_impl_.longitude_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Point::~Point() {
  // @@protoc_insertion_point(destructor:routeguide.Point)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Point::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Point::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Point::Clear() {
// @@protoc_insertion_point(message_clear_start:routeguide.Point)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.latitude_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.longitude_) -
      reinterpret_cast<char*>(&_impl_.latitude_)) + sizeof(_impl_.longitude_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Point::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 latitude = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.latitude_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 longitude = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.longitude_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* Point::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:routeguide.Point)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 latitude = 1;
  if (this->_internal_latitude() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_latitude(), target);
  }

  // int32 longitude = 2;
  if (this->_internal_longitude() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_longitude(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:routeguide.Point)
  return target;
}

size_t Point::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:routeguide.Point)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 latitude = 1;
  if (this->_internal_latitude() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_latitude());
  }

  // int32 longitude = 2;
  if (this->_internal_longitude() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_longitude());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Point::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Point::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Point::GetClassData() const { return &_class_data_; }


void Point::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Point*>(&to_msg);
  auto& from = static_cast<const Point&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:routeguide.Point)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_latitude() != 0) {
    _this->_internal_set_latitude(from._internal_latitude());
  }
  if (from._internal_longitude() != 0) {
    _this->_internal_set_longitude(from._internal_longitude());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Point::CopyFrom(const Point& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:routeguide.Point)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Point::IsInitialized() const {
  return true;
}

void Point::InternalSwap(Point* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Point, _impl_.longitude_)
      + sizeof(Point::_impl_.longitude_)
      - PROTOBUF_FIELD_OFFSET(Point, _impl_.latitude_)>(
          reinterpret_cast<char*>(&_impl_.latitude_),
          reinterpret_cast<char*>(&other->_impl_.latitude_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Point::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_api_2eproto_getter, &descriptor_table_api_2eproto_once,
      file_level_metadata_api_2eproto[0]);
}

// ===================================================================

class Feature::_Internal {
 public:
  static const ::routeguide::Point& location(const Feature* msg);
};

const ::routeguide::Point&
Feature::_Internal::location(const Feature* msg) {
  return *msg->_impl_.location_;
}
Feature::Feature(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:routeguide.Feature)
}
Feature::Feature(const Feature& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Feature* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , decltype(_impl_.location_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_location()) {
    _this->_impl_.location_ = new ::routeguide::Point(*from._impl_.location_);
  }
  // @@protoc_insertion_point(copy_constructor:routeguide.Feature)
}

inline void Feature::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , decltype(_impl_.location_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Feature::~Feature() {
  // @@protoc_insertion_point(destructor:routeguide.Feature)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Feature::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.name_.Destroy();
  if (this != internal_default_instance()) delete _impl_.location_;
}

void Feature::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Feature::Clear() {
// @@protoc_insertion_point(message_clear_start:routeguide.Feature)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.name_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.location_ != nullptr) {
    delete _impl_.location_;
  }
  _impl_.location_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Feature::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "routeguide.Feature.name"));
        } else
          goto handle_unusual;
        continue;
      // .routeguide.Point location = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_location(), ptr);
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

uint8_t* Feature::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:routeguide.Feature)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "routeguide.Feature.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // .routeguide.Point location = 2;
  if (this->_internal_has_location()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::location(this),
        _Internal::location(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:routeguide.Feature)
  return target;
}

size_t Feature::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:routeguide.Feature)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // .routeguide.Point location = 2;
  if (this->_internal_has_location()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.location_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Feature::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Feature::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Feature::GetClassData() const { return &_class_data_; }


void Feature::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Feature*>(&to_msg);
  auto& from = static_cast<const Feature&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:routeguide.Feature)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (from._internal_has_location()) {
    _this->_internal_mutable_location()->::routeguide::Point::MergeFrom(
        from._internal_location());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Feature::CopyFrom(const Feature& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:routeguide.Feature)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Feature::IsInitialized() const {
  return true;
}

void Feature::InternalSwap(Feature* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
  swap(_impl_.location_, other->_impl_.location_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Feature::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_api_2eproto_getter, &descriptor_table_api_2eproto_once,
      file_level_metadata_api_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace routeguide
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::routeguide::Point*
Arena::CreateMaybeMessage< ::routeguide::Point >(Arena* arena) {
  return Arena::CreateMessageInternal< ::routeguide::Point >(arena);
}
template<> PROTOBUF_NOINLINE ::routeguide::Feature*
Arena::CreateMaybeMessage< ::routeguide::Feature >(Arena* arena) {
  return Arena::CreateMessageInternal< ::routeguide::Feature >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>