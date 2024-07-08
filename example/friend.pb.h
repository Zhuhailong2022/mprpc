// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: friend.proto

#ifndef PROTOBUF_INCLUDED_friend_2eproto
#define PROTOBUF_INCLUDED_friend_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_friend_2eproto 

namespace protobuf_friend_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_friend_2eproto
namespace fixbug {
class GetFriendsListRequest;
class GetFriendsListRequestDefaultTypeInternal;
extern GetFriendsListRequestDefaultTypeInternal _GetFriendsListRequest_default_instance_;
class GetFriendsListResponse;
class GetFriendsListResponseDefaultTypeInternal;
extern GetFriendsListResponseDefaultTypeInternal _GetFriendsListResponse_default_instance_;
class ResultCode;
class ResultCodeDefaultTypeInternal;
extern ResultCodeDefaultTypeInternal _ResultCode_default_instance_;
}  // namespace fixbug
namespace google {
namespace protobuf {
template<> ::fixbug::GetFriendsListRequest* Arena::CreateMaybeMessage<::fixbug::GetFriendsListRequest>(Arena*);
template<> ::fixbug::GetFriendsListResponse* Arena::CreateMaybeMessage<::fixbug::GetFriendsListResponse>(Arena*);
template<> ::fixbug::ResultCode* Arena::CreateMaybeMessage<::fixbug::ResultCode>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace fixbug {

// ===================================================================

class ResultCode : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:fixbug.ResultCode) */ {
 public:
  ResultCode();
  virtual ~ResultCode();

  ResultCode(const ResultCode& from);

  inline ResultCode& operator=(const ResultCode& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ResultCode(ResultCode&& from) noexcept
    : ResultCode() {
    *this = ::std::move(from);
  }

  inline ResultCode& operator=(ResultCode&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ResultCode& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ResultCode* internal_default_instance() {
    return reinterpret_cast<const ResultCode*>(
               &_ResultCode_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ResultCode* other);
  friend void swap(ResultCode& a, ResultCode& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ResultCode* New() const final {
    return CreateMaybeMessage<ResultCode>(NULL);
  }

  ResultCode* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ResultCode>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ResultCode& from);
  void MergeFrom(const ResultCode& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ResultCode* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes errmsg = 2;
  void clear_errmsg();
  static const int kErrmsgFieldNumber = 2;
  const ::std::string& errmsg() const;
  void set_errmsg(const ::std::string& value);
  #if LANG_CXX11
  void set_errmsg(::std::string&& value);
  #endif
  void set_errmsg(const char* value);
  void set_errmsg(const void* value, size_t size);
  ::std::string* mutable_errmsg();
  ::std::string* release_errmsg();
  void set_allocated_errmsg(::std::string* errmsg);

  // int32 errcode = 1;
  void clear_errcode();
  static const int kErrcodeFieldNumber = 1;
  ::google::protobuf::int32 errcode() const;
  void set_errcode(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:fixbug.ResultCode)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr errmsg_;
  ::google::protobuf::int32 errcode_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_friend_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class GetFriendsListRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:fixbug.GetFriendsListRequest) */ {
 public:
  GetFriendsListRequest();
  virtual ~GetFriendsListRequest();

  GetFriendsListRequest(const GetFriendsListRequest& from);

  inline GetFriendsListRequest& operator=(const GetFriendsListRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GetFriendsListRequest(GetFriendsListRequest&& from) noexcept
    : GetFriendsListRequest() {
    *this = ::std::move(from);
  }

  inline GetFriendsListRequest& operator=(GetFriendsListRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GetFriendsListRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetFriendsListRequest* internal_default_instance() {
    return reinterpret_cast<const GetFriendsListRequest*>(
               &_GetFriendsListRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(GetFriendsListRequest* other);
  friend void swap(GetFriendsListRequest& a, GetFriendsListRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GetFriendsListRequest* New() const final {
    return CreateMaybeMessage<GetFriendsListRequest>(NULL);
  }

  GetFriendsListRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GetFriendsListRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GetFriendsListRequest& from);
  void MergeFrom(const GetFriendsListRequest& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetFriendsListRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint32 userid = 1;
  void clear_userid();
  static const int kUseridFieldNumber = 1;
  ::google::protobuf::uint32 userid() const;
  void set_userid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:fixbug.GetFriendsListRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 userid_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_friend_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class GetFriendsListResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:fixbug.GetFriendsListResponse) */ {
 public:
  GetFriendsListResponse();
  virtual ~GetFriendsListResponse();

  GetFriendsListResponse(const GetFriendsListResponse& from);

  inline GetFriendsListResponse& operator=(const GetFriendsListResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GetFriendsListResponse(GetFriendsListResponse&& from) noexcept
    : GetFriendsListResponse() {
    *this = ::std::move(from);
  }

  inline GetFriendsListResponse& operator=(GetFriendsListResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GetFriendsListResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetFriendsListResponse* internal_default_instance() {
    return reinterpret_cast<const GetFriendsListResponse*>(
               &_GetFriendsListResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(GetFriendsListResponse* other);
  friend void swap(GetFriendsListResponse& a, GetFriendsListResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GetFriendsListResponse* New() const final {
    return CreateMaybeMessage<GetFriendsListResponse>(NULL);
  }

  GetFriendsListResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GetFriendsListResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GetFriendsListResponse& from);
  void MergeFrom(const GetFriendsListResponse& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetFriendsListResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated bytes friends = 2;
  int friends_size() const;
  void clear_friends();
  static const int kFriendsFieldNumber = 2;
  const ::std::string& friends(int index) const;
  ::std::string* mutable_friends(int index);
  void set_friends(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_friends(int index, ::std::string&& value);
  #endif
  void set_friends(int index, const char* value);
  void set_friends(int index, const void* value, size_t size);
  ::std::string* add_friends();
  void add_friends(const ::std::string& value);
  #if LANG_CXX11
  void add_friends(::std::string&& value);
  #endif
  void add_friends(const char* value);
  void add_friends(const void* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& friends() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_friends();

  // .fixbug.ResultCode result = 1;
  bool has_result() const;
  void clear_result();
  static const int kResultFieldNumber = 1;
  private:
  const ::fixbug::ResultCode& _internal_result() const;
  public:
  const ::fixbug::ResultCode& result() const;
  ::fixbug::ResultCode* release_result();
  ::fixbug::ResultCode* mutable_result();
  void set_allocated_result(::fixbug::ResultCode* result);

  // @@protoc_insertion_point(class_scope:fixbug.GetFriendsListResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> friends_;
  ::fixbug::ResultCode* result_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_friend_2eproto::TableStruct;
};
// ===================================================================

class FriendServiceRpc_Stub;

class FriendServiceRpc : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline FriendServiceRpc() {};
 public:
  virtual ~FriendServiceRpc();

  typedef FriendServiceRpc_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void GetFriendsList(::google::protobuf::RpcController* controller,
                       const ::fixbug::GetFriendsListRequest* request,
                       ::fixbug::GetFriendsListResponse* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(FriendServiceRpc);
};

class FriendServiceRpc_Stub : public FriendServiceRpc {
 public:
  FriendServiceRpc_Stub(::google::protobuf::RpcChannel* channel);
  FriendServiceRpc_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~FriendServiceRpc_Stub();

  inline ::google::protobuf::RpcChannel* channel() { return channel_; }

  // implements FriendServiceRpc ------------------------------------------

  void GetFriendsList(::google::protobuf::RpcController* controller,
                       const ::fixbug::GetFriendsListRequest* request,
                       ::fixbug::GetFriendsListResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(FriendServiceRpc_Stub);
};


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ResultCode

// int32 errcode = 1;
inline void ResultCode::clear_errcode() {
  errcode_ = 0;
}
inline ::google::protobuf::int32 ResultCode::errcode() const {
  // @@protoc_insertion_point(field_get:fixbug.ResultCode.errcode)
  return errcode_;
}
inline void ResultCode::set_errcode(::google::protobuf::int32 value) {
  
  errcode_ = value;
  // @@protoc_insertion_point(field_set:fixbug.ResultCode.errcode)
}

// bytes errmsg = 2;
inline void ResultCode::clear_errmsg() {
  errmsg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ResultCode::errmsg() const {
  // @@protoc_insertion_point(field_get:fixbug.ResultCode.errmsg)
  return errmsg_.GetNoArena();
}
inline void ResultCode::set_errmsg(const ::std::string& value) {
  
  errmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:fixbug.ResultCode.errmsg)
}
#if LANG_CXX11
inline void ResultCode::set_errmsg(::std::string&& value) {
  
  errmsg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:fixbug.ResultCode.errmsg)
}
#endif
inline void ResultCode::set_errmsg(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  errmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:fixbug.ResultCode.errmsg)
}
inline void ResultCode::set_errmsg(const void* value, size_t size) {
  
  errmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:fixbug.ResultCode.errmsg)
}
inline ::std::string* ResultCode::mutable_errmsg() {
  
  // @@protoc_insertion_point(field_mutable:fixbug.ResultCode.errmsg)
  return errmsg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ResultCode::release_errmsg() {
  // @@protoc_insertion_point(field_release:fixbug.ResultCode.errmsg)
  
  return errmsg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ResultCode::set_allocated_errmsg(::std::string* errmsg) {
  if (errmsg != NULL) {
    
  } else {
    
  }
  errmsg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), errmsg);
  // @@protoc_insertion_point(field_set_allocated:fixbug.ResultCode.errmsg)
}

// -------------------------------------------------------------------

// GetFriendsListRequest

// uint32 userid = 1;
inline void GetFriendsListRequest::clear_userid() {
  userid_ = 0u;
}
inline ::google::protobuf::uint32 GetFriendsListRequest::userid() const {
  // @@protoc_insertion_point(field_get:fixbug.GetFriendsListRequest.userid)
  return userid_;
}
inline void GetFriendsListRequest::set_userid(::google::protobuf::uint32 value) {
  
  userid_ = value;
  // @@protoc_insertion_point(field_set:fixbug.GetFriendsListRequest.userid)
}

// -------------------------------------------------------------------

// GetFriendsListResponse

// .fixbug.ResultCode result = 1;
inline bool GetFriendsListResponse::has_result() const {
  return this != internal_default_instance() && result_ != NULL;
}
inline void GetFriendsListResponse::clear_result() {
  if (GetArenaNoVirtual() == NULL && result_ != NULL) {
    delete result_;
  }
  result_ = NULL;
}
inline const ::fixbug::ResultCode& GetFriendsListResponse::_internal_result() const {
  return *result_;
}
inline const ::fixbug::ResultCode& GetFriendsListResponse::result() const {
  const ::fixbug::ResultCode* p = result_;
  // @@protoc_insertion_point(field_get:fixbug.GetFriendsListResponse.result)
  return p != NULL ? *p : *reinterpret_cast<const ::fixbug::ResultCode*>(
      &::fixbug::_ResultCode_default_instance_);
}
inline ::fixbug::ResultCode* GetFriendsListResponse::release_result() {
  // @@protoc_insertion_point(field_release:fixbug.GetFriendsListResponse.result)
  
  ::fixbug::ResultCode* temp = result_;
  result_ = NULL;
  return temp;
}
inline ::fixbug::ResultCode* GetFriendsListResponse::mutable_result() {
  
  if (result_ == NULL) {
    auto* p = CreateMaybeMessage<::fixbug::ResultCode>(GetArenaNoVirtual());
    result_ = p;
  }
  // @@protoc_insertion_point(field_mutable:fixbug.GetFriendsListResponse.result)
  return result_;
}
inline void GetFriendsListResponse::set_allocated_result(::fixbug::ResultCode* result) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete result_;
  }
  if (result) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      result = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, result, submessage_arena);
    }
    
  } else {
    
  }
  result_ = result;
  // @@protoc_insertion_point(field_set_allocated:fixbug.GetFriendsListResponse.result)
}

// repeated bytes friends = 2;
inline int GetFriendsListResponse::friends_size() const {
  return friends_.size();
}
inline void GetFriendsListResponse::clear_friends() {
  friends_.Clear();
}
inline const ::std::string& GetFriendsListResponse::friends(int index) const {
  // @@protoc_insertion_point(field_get:fixbug.GetFriendsListResponse.friends)
  return friends_.Get(index);
}
inline ::std::string* GetFriendsListResponse::mutable_friends(int index) {
  // @@protoc_insertion_point(field_mutable:fixbug.GetFriendsListResponse.friends)
  return friends_.Mutable(index);
}
inline void GetFriendsListResponse::set_friends(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:fixbug.GetFriendsListResponse.friends)
  friends_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void GetFriendsListResponse::set_friends(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:fixbug.GetFriendsListResponse.friends)
  friends_.Mutable(index)->assign(std::move(value));
}
#endif
inline void GetFriendsListResponse::set_friends(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  friends_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:fixbug.GetFriendsListResponse.friends)
}
inline void GetFriendsListResponse::set_friends(int index, const void* value, size_t size) {
  friends_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:fixbug.GetFriendsListResponse.friends)
}
inline ::std::string* GetFriendsListResponse::add_friends() {
  // @@protoc_insertion_point(field_add_mutable:fixbug.GetFriendsListResponse.friends)
  return friends_.Add();
}
inline void GetFriendsListResponse::add_friends(const ::std::string& value) {
  friends_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:fixbug.GetFriendsListResponse.friends)
}
#if LANG_CXX11
inline void GetFriendsListResponse::add_friends(::std::string&& value) {
  friends_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:fixbug.GetFriendsListResponse.friends)
}
#endif
inline void GetFriendsListResponse::add_friends(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  friends_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:fixbug.GetFriendsListResponse.friends)
}
inline void GetFriendsListResponse::add_friends(const void* value, size_t size) {
  friends_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:fixbug.GetFriendsListResponse.friends)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
GetFriendsListResponse::friends() const {
  // @@protoc_insertion_point(field_list:fixbug.GetFriendsListResponse.friends)
  return friends_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
GetFriendsListResponse::mutable_friends() {
  // @@protoc_insertion_point(field_mutable_list:fixbug.GetFriendsListResponse.friends)
  return &friends_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace fixbug

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_friend_2eproto
