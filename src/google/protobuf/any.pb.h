// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/any.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2fany_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2fany_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2fany_2eproto PROTOBUF_EXPORT
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct PROTOBUF_EXPORT TableStruct_google_2fprotobuf_2fany_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern PROTOBUF_EXPORT const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2fany_2eproto;
PROTOBUF_NAMESPACE_OPEN
class Any;
class AnyDefaultTypeInternal;
PROTOBUF_EXPORT extern AnyDefaultTypeInternal _Any_default_instance_;
PROTOBUF_NAMESPACE_CLOSE
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_EXPORT PROTOBUF_NAMESPACE_ID::Any* Arena::CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Any>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
PROTOBUF_NAMESPACE_OPEN

// ===================================================================

class PROTOBUF_EXPORT Any PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.protobuf.Any) */ {
 public:
  inline Any() : Any(nullptr) {};
  virtual ~Any();

  Any(const Any& from);
  Any(Any&& from) noexcept
    : Any() {
    *this = ::std::move(from);
  }

  inline Any& operator=(const Any& from) {
    CopyFrom(from);
    return *this;
  }
  inline Any& operator=(Any&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Any& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Any* internal_default_instance() {
    return reinterpret_cast<const Any*>(
               &_Any_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  // implements Any -----------------------------------------------

  void PackFrom(const ::PROTOBUF_NAMESPACE_ID::Message& message) {
    _any_metadata_.PackFrom(message);
  }
  void PackFrom(const ::PROTOBUF_NAMESPACE_ID::Message& message,
                const std::string& type_url_prefix) {
    _any_metadata_.PackFrom(message, type_url_prefix);
  }
  bool UnpackTo(::PROTOBUF_NAMESPACE_ID::Message* message) const {
    return _any_metadata_.UnpackTo(message);
  }
  static bool GetAnyFieldDescriptors(
      const ::PROTOBUF_NAMESPACE_ID::Message& message,
      const ::PROTOBUF_NAMESPACE_ID::FieldDescriptor** type_url_field,
      const ::PROTOBUF_NAMESPACE_ID::FieldDescriptor** value_field);
  template <typename T, class = typename std::enable_if<!std::is_convertible<T, const ::PROTOBUF_NAMESPACE_ID::Message&>::value>::type>
  void PackFrom(const T& message) {
    _any_metadata_.PackFrom<T>(message);
  }
  template <typename T, class = typename std::enable_if<!std::is_convertible<T, const ::PROTOBUF_NAMESPACE_ID::Message&>::value>::type>
  void PackFrom(const T& message,
                const std::string& type_url_prefix) {
    _any_metadata_.PackFrom<T>(message, type_url_prefix);}
  template <typename T, class = typename std::enable_if<!std::is_convertible<T, const ::PROTOBUF_NAMESPACE_ID::Message&>::value>::type>
  bool UnpackTo(T* message) const {
    return _any_metadata_.UnpackTo<T>(message);
  }
  template<typename T> bool Is() const {
    return _any_metadata_.Is<T>();
  }
  static bool ParseAnyTypeUrl(const string& type_url,
                              std::string* full_type_name);
  friend void swap(Any& a, Any& b) {
    a.Swap(&b);
  }
  inline void Swap(Any* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Any* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Any* New() const final {
    return CreateMaybeMessage<Any>(nullptr);
  }

  Any* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Any>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Any& from);
  void MergeFrom(const Any& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Any* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.protobuf.Any";
  }
  protected:
  explicit Any(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fprotobuf_2fany_2eproto);
    return ::descriptor_table_google_2fprotobuf_2fany_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTypeUrlFieldNumber = 1,
    kValueFieldNumber = 2,
  };
  // string type_url = 1;
  void clear_type_url();
  const std::string& type_url() const;
  void set_type_url(const std::string& value);
  void set_type_url(std::string&& value);
  void set_type_url(const char* value);
  void set_type_url(const char* value, size_t size);
  std::string* mutable_type_url();
  std::string* release_type_url();
  void set_allocated_type_url(std::string* type_url);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_type_url();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_type_url(
      std::string* type_url);
  private:
  const std::string& _internal_type_url() const;
  void _internal_set_type_url(const std::string& value);
  std::string* _internal_mutable_type_url();
  public:

  // bytes value = 2;
  void clear_value();
  const std::string& value() const;
  void set_value(const std::string& value);
  void set_value(std::string&& value);
  void set_value(const char* value);
  void set_value(const void* value, size_t size);
  std::string* mutable_value();
  std::string* release_value();
  void set_allocated_value(std::string* value);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_value();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_value(
      std::string* value);
  private:
  const std::string& _internal_value() const;
  void _internal_set_value(const std::string& value);
  std::string* _internal_mutable_value();
  public:

  // @@protoc_insertion_point(class_scope:google.protobuf.Any)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr type_url_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr value_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata _any_metadata_;
  friend struct ::TableStruct_google_2fprotobuf_2fany_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Any

// string type_url = 1;
inline void Any::clear_type_url() {
  type_url_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Any::type_url() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Any.type_url)
  return _internal_type_url();
}
inline void Any::set_type_url(const std::string& value) {
  _internal_set_type_url(value);
  // @@protoc_insertion_point(field_set:google.protobuf.Any.type_url)
}
inline std::string* Any::mutable_type_url() {
  // @@protoc_insertion_point(field_mutable:google.protobuf.Any.type_url)
  return _internal_mutable_type_url();
}
inline const std::string& Any::_internal_type_url() const {
  return type_url_.Get();
}
inline void Any::_internal_set_type_url(const std::string& value) {
  
  type_url_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Any::set_type_url(std::string&& value) {
  
  type_url_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:google.protobuf.Any.type_url)
}
inline void Any::set_type_url(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  type_url_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:google.protobuf.Any.type_url)
}
inline void Any::set_type_url(const char* value,
    size_t size) {
  
  type_url_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Any.type_url)
}
inline std::string* Any::_internal_mutable_type_url() {
  
  return type_url_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Any::release_type_url() {
  // @@protoc_insertion_point(field_release:google.protobuf.Any.type_url)
  return type_url_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Any::set_allocated_type_url(std::string* type_url) {
  if (type_url != nullptr) {
    
  } else {
    
  }
  type_url_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), type_url,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Any.type_url)
}
inline std::string* Any::unsafe_arena_release_type_url() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.protobuf.Any.type_url)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return type_url_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void Any::unsafe_arena_set_allocated_type_url(
    std::string* type_url) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (type_url != nullptr) {
    
  } else {
    
  }
  type_url_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      type_url, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.protobuf.Any.type_url)
}

// bytes value = 2;
inline void Any::clear_value() {
  value_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Any::value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Any.value)
  return _internal_value();
}
inline void Any::set_value(const std::string& value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:google.protobuf.Any.value)
}
inline std::string* Any::mutable_value() {
  // @@protoc_insertion_point(field_mutable:google.protobuf.Any.value)
  return _internal_mutable_value();
}
inline const std::string& Any::_internal_value() const {
  return value_.Get();
}
inline void Any::_internal_set_value(const std::string& value) {
  
  value_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Any::set_value(std::string&& value) {
  
  value_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:google.protobuf.Any.value)
}
inline void Any::set_value(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  value_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:google.protobuf.Any.value)
}
inline void Any::set_value(const void* value,
    size_t size) {
  
  value_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Any.value)
}
inline std::string* Any::_internal_mutable_value() {
  
  return value_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Any::release_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.Any.value)
  return value_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Any::set_allocated_value(std::string* value) {
  if (value != nullptr) {
    
  } else {
    
  }
  value_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Any.value)
}
inline std::string* Any::unsafe_arena_release_value() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.protobuf.Any.value)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return value_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void Any::unsafe_arena_set_allocated_value(
    std::string* value) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (value != nullptr) {
    
  } else {
    
  }
  value_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      value, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.protobuf.Any.value)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2fany_2eproto
