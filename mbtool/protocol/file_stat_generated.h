// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_FILESTAT_MBTOOL_DAEMON_V3_H_
#define FLATBUFFERS_GENERATED_FILESTAT_MBTOOL_DAEMON_V3_H_

#include "flatbuffers/flatbuffers.h"

namespace mbtool {
namespace daemon {
namespace v3 {

struct StructStat;

struct FileStatError;

struct FileStatRequest;

struct FileStatResponse;

struct StructStat FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ST_DEV = 4,
    VT_ST_INO = 6,
    VT_ST_MODE = 8,
    VT_ST_NLINK = 10,
    VT_ST_UID = 12,
    VT_ST_GID = 14,
    VT_ST_RDEV = 16,
    VT_ST_SIZE = 18,
    VT_ST_BLKSIZE = 20,
    VT_ST_BLOCKS = 22,
    VT_ST_ATIME = 24,
    VT_ST_MTIME = 26,
    VT_ST_CTIME = 28
  };
  uint64_t st_dev() const { return GetField<uint64_t>(VT_ST_DEV, 0); }
  uint64_t st_ino() const { return GetField<uint64_t>(VT_ST_INO, 0); }
  uint32_t st_mode() const { return GetField<uint32_t>(VT_ST_MODE, 0); }
  uint64_t st_nlink() const { return GetField<uint64_t>(VT_ST_NLINK, 0); }
  uint32_t st_uid() const { return GetField<uint32_t>(VT_ST_UID, 0); }
  uint32_t st_gid() const { return GetField<uint32_t>(VT_ST_GID, 0); }
  uint64_t st_rdev() const { return GetField<uint64_t>(VT_ST_RDEV, 0); }
  uint64_t st_size() const { return GetField<uint64_t>(VT_ST_SIZE, 0); }
  uint64_t st_blksize() const { return GetField<uint64_t>(VT_ST_BLKSIZE, 0); }
  uint64_t st_blocks() const { return GetField<uint64_t>(VT_ST_BLOCKS, 0); }
  uint64_t st_atime() const { return GetField<uint64_t>(VT_ST_ATIME, 0); }
  uint64_t st_mtime() const { return GetField<uint64_t>(VT_ST_MTIME, 0); }
  uint64_t st_ctime() const { return GetField<uint64_t>(VT_ST_CTIME, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_ST_DEV) &&
           VerifyField<uint64_t>(verifier, VT_ST_INO) &&
           VerifyField<uint32_t>(verifier, VT_ST_MODE) &&
           VerifyField<uint64_t>(verifier, VT_ST_NLINK) &&
           VerifyField<uint32_t>(verifier, VT_ST_UID) &&
           VerifyField<uint32_t>(verifier, VT_ST_GID) &&
           VerifyField<uint64_t>(verifier, VT_ST_RDEV) &&
           VerifyField<uint64_t>(verifier, VT_ST_SIZE) &&
           VerifyField<uint64_t>(verifier, VT_ST_BLKSIZE) &&
           VerifyField<uint64_t>(verifier, VT_ST_BLOCKS) &&
           VerifyField<uint64_t>(verifier, VT_ST_ATIME) &&
           VerifyField<uint64_t>(verifier, VT_ST_MTIME) &&
           VerifyField<uint64_t>(verifier, VT_ST_CTIME) &&
           verifier.EndTable();
  }
};

struct StructStatBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_st_dev(uint64_t st_dev) { fbb_.AddElement<uint64_t>(StructStat::VT_ST_DEV, st_dev, 0); }
  void add_st_ino(uint64_t st_ino) { fbb_.AddElement<uint64_t>(StructStat::VT_ST_INO, st_ino, 0); }
  void add_st_mode(uint32_t st_mode) { fbb_.AddElement<uint32_t>(StructStat::VT_ST_MODE, st_mode, 0); }
  void add_st_nlink(uint64_t st_nlink) { fbb_.AddElement<uint64_t>(StructStat::VT_ST_NLINK, st_nlink, 0); }
  void add_st_uid(uint32_t st_uid) { fbb_.AddElement<uint32_t>(StructStat::VT_ST_UID, st_uid, 0); }
  void add_st_gid(uint32_t st_gid) { fbb_.AddElement<uint32_t>(StructStat::VT_ST_GID, st_gid, 0); }
  void add_st_rdev(uint64_t st_rdev) { fbb_.AddElement<uint64_t>(StructStat::VT_ST_RDEV, st_rdev, 0); }
  void add_st_size(uint64_t st_size) { fbb_.AddElement<uint64_t>(StructStat::VT_ST_SIZE, st_size, 0); }
  void add_st_blksize(uint64_t st_blksize) { fbb_.AddElement<uint64_t>(StructStat::VT_ST_BLKSIZE, st_blksize, 0); }
  void add_st_blocks(uint64_t st_blocks) { fbb_.AddElement<uint64_t>(StructStat::VT_ST_BLOCKS, st_blocks, 0); }
  void add_st_atime(uint64_t st_atime) { fbb_.AddElement<uint64_t>(StructStat::VT_ST_ATIME, st_atime, 0); }
  void add_st_mtime(uint64_t st_mtime) { fbb_.AddElement<uint64_t>(StructStat::VT_ST_MTIME, st_mtime, 0); }
  void add_st_ctime(uint64_t st_ctime) { fbb_.AddElement<uint64_t>(StructStat::VT_ST_CTIME, st_ctime, 0); }
  StructStatBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  StructStatBuilder &operator=(const StructStatBuilder &);
  flatbuffers::Offset<StructStat> Finish() {
    auto o = flatbuffers::Offset<StructStat>(fbb_.EndTable(start_, 13));
    return o;
  }
};

inline flatbuffers::Offset<StructStat> CreateStructStat(flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t st_dev = 0,
    uint64_t st_ino = 0,
    uint32_t st_mode = 0,
    uint64_t st_nlink = 0,
    uint32_t st_uid = 0,
    uint32_t st_gid = 0,
    uint64_t st_rdev = 0,
    uint64_t st_size = 0,
    uint64_t st_blksize = 0,
    uint64_t st_blocks = 0,
    uint64_t st_atime = 0,
    uint64_t st_mtime = 0,
    uint64_t st_ctime = 0) {
  StructStatBuilder builder_(_fbb);
  builder_.add_st_ctime(st_ctime);
  builder_.add_st_mtime(st_mtime);
  builder_.add_st_atime(st_atime);
  builder_.add_st_blocks(st_blocks);
  builder_.add_st_blksize(st_blksize);
  builder_.add_st_size(st_size);
  builder_.add_st_rdev(st_rdev);
  builder_.add_st_nlink(st_nlink);
  builder_.add_st_ino(st_ino);
  builder_.add_st_dev(st_dev);
  builder_.add_st_gid(st_gid);
  builder_.add_st_uid(st_uid);
  builder_.add_st_mode(st_mode);
  return builder_.Finish();
}

struct FileStatError FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ERRNO_VALUE = 4,
    VT_MSG = 6
  };
  int32_t errno_value() const { return GetField<int32_t>(VT_ERRNO_VALUE, 0); }
  const flatbuffers::String *msg() const { return GetPointer<const flatbuffers::String *>(VT_MSG); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ERRNO_VALUE) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_MSG) &&
           verifier.Verify(msg()) &&
           verifier.EndTable();
  }
};

struct FileStatErrorBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_errno_value(int32_t errno_value) { fbb_.AddElement<int32_t>(FileStatError::VT_ERRNO_VALUE, errno_value, 0); }
  void add_msg(flatbuffers::Offset<flatbuffers::String> msg) { fbb_.AddOffset(FileStatError::VT_MSG, msg); }
  FileStatErrorBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  FileStatErrorBuilder &operator=(const FileStatErrorBuilder &);
  flatbuffers::Offset<FileStatError> Finish() {
    auto o = flatbuffers::Offset<FileStatError>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<FileStatError> CreateFileStatError(flatbuffers::FlatBufferBuilder &_fbb,
    int32_t errno_value = 0,
    flatbuffers::Offset<flatbuffers::String> msg = 0) {
  FileStatErrorBuilder builder_(_fbb);
  builder_.add_msg(msg);
  builder_.add_errno_value(errno_value);
  return builder_.Finish();
}

inline flatbuffers::Offset<FileStatError> CreateFileStatErrorDirect(flatbuffers::FlatBufferBuilder &_fbb,
    int32_t errno_value = 0,
    const char *msg = nullptr) {
  return CreateFileStatError(_fbb, errno_value, msg ? _fbb.CreateString(msg) : 0);
}

struct FileStatRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4
  };
  int32_t id() const { return GetField<int32_t>(VT_ID, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ID) &&
           verifier.EndTable();
  }
};

struct FileStatRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(int32_t id) { fbb_.AddElement<int32_t>(FileStatRequest::VT_ID, id, 0); }
  FileStatRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  FileStatRequestBuilder &operator=(const FileStatRequestBuilder &);
  flatbuffers::Offset<FileStatRequest> Finish() {
    auto o = flatbuffers::Offset<FileStatRequest>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<FileStatRequest> CreateFileStatRequest(flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0) {
  FileStatRequestBuilder builder_(_fbb);
  builder_.add_id(id);
  return builder_.Finish();
}

struct FileStatResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_SUCCESS = 4,
    VT_ERROR_MSG = 6,
    VT_STAT = 8,
    VT_ERROR = 10
  };
  bool success() const { return GetField<uint8_t>(VT_SUCCESS, 0) != 0; }
  const flatbuffers::String *error_msg() const { return GetPointer<const flatbuffers::String *>(VT_ERROR_MSG); }
  const StructStat *stat() const { return GetPointer<const StructStat *>(VT_STAT); }
  const FileStatError *error() const { return GetPointer<const FileStatError *>(VT_ERROR); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_SUCCESS) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_ERROR_MSG) &&
           verifier.Verify(error_msg()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_STAT) &&
           verifier.VerifyTable(stat()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_ERROR) &&
           verifier.VerifyTable(error()) &&
           verifier.EndTable();
  }
};

struct FileStatResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_success(bool success) { fbb_.AddElement<uint8_t>(FileStatResponse::VT_SUCCESS, static_cast<uint8_t>(success), 0); }
  void add_error_msg(flatbuffers::Offset<flatbuffers::String> error_msg) { fbb_.AddOffset(FileStatResponse::VT_ERROR_MSG, error_msg); }
  void add_stat(flatbuffers::Offset<StructStat> stat) { fbb_.AddOffset(FileStatResponse::VT_STAT, stat); }
  void add_error(flatbuffers::Offset<FileStatError> error) { fbb_.AddOffset(FileStatResponse::VT_ERROR, error); }
  FileStatResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  FileStatResponseBuilder &operator=(const FileStatResponseBuilder &);
  flatbuffers::Offset<FileStatResponse> Finish() {
    auto o = flatbuffers::Offset<FileStatResponse>(fbb_.EndTable(start_, 4));
    return o;
  }
};

inline flatbuffers::Offset<FileStatResponse> CreateFileStatResponse(flatbuffers::FlatBufferBuilder &_fbb,
    bool success = false,
    flatbuffers::Offset<flatbuffers::String> error_msg = 0,
    flatbuffers::Offset<StructStat> stat = 0,
    flatbuffers::Offset<FileStatError> error = 0) {
  FileStatResponseBuilder builder_(_fbb);
  builder_.add_error(error);
  builder_.add_stat(stat);
  builder_.add_error_msg(error_msg);
  builder_.add_success(success);
  return builder_.Finish();
}

inline flatbuffers::Offset<FileStatResponse> CreateFileStatResponseDirect(flatbuffers::FlatBufferBuilder &_fbb,
    bool success = false,
    const char *error_msg = nullptr,
    flatbuffers::Offset<StructStat> stat = 0,
    flatbuffers::Offset<FileStatError> error = 0) {
  return CreateFileStatResponse(_fbb, success, error_msg ? _fbb.CreateString(error_msg) : 0, stat, error);
}

}  // namespace v3
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_FILESTAT_MBTOOL_DAEMON_V3_H_
