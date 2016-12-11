// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_MBGETPACKAGESCOUNT_MBTOOL_DAEMON_V3_H_
#define FLATBUFFERS_GENERATED_MBGETPACKAGESCOUNT_MBTOOL_DAEMON_V3_H_

#include "flatbuffers/flatbuffers.h"

namespace mbtool {
namespace daemon {
namespace v3 {

struct MbGetPackagesCountError;

struct MbGetPackagesCountRequest;

struct MbGetPackagesCountResponse;

struct MbGetPackagesCountError FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           verifier.EndTable();
  }
};

struct MbGetPackagesCountErrorBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  MbGetPackagesCountErrorBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  MbGetPackagesCountErrorBuilder &operator=(const MbGetPackagesCountErrorBuilder &);
  flatbuffers::Offset<MbGetPackagesCountError> Finish() {
    auto o = flatbuffers::Offset<MbGetPackagesCountError>(fbb_.EndTable(start_, 0));
    return o;
  }
};

inline flatbuffers::Offset<MbGetPackagesCountError> CreateMbGetPackagesCountError(flatbuffers::FlatBufferBuilder &_fbb) {
  MbGetPackagesCountErrorBuilder builder_(_fbb);
  return builder_.Finish();
}

struct MbGetPackagesCountRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ROM_ID = 4
  };
  const flatbuffers::String *rom_id() const { return GetPointer<const flatbuffers::String *>(VT_ROM_ID); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_ROM_ID) &&
           verifier.Verify(rom_id()) &&
           verifier.EndTable();
  }
};

struct MbGetPackagesCountRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_rom_id(flatbuffers::Offset<flatbuffers::String> rom_id) { fbb_.AddOffset(MbGetPackagesCountRequest::VT_ROM_ID, rom_id); }
  MbGetPackagesCountRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  MbGetPackagesCountRequestBuilder &operator=(const MbGetPackagesCountRequestBuilder &);
  flatbuffers::Offset<MbGetPackagesCountRequest> Finish() {
    auto o = flatbuffers::Offset<MbGetPackagesCountRequest>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<MbGetPackagesCountRequest> CreateMbGetPackagesCountRequest(flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> rom_id = 0) {
  MbGetPackagesCountRequestBuilder builder_(_fbb);
  builder_.add_rom_id(rom_id);
  return builder_.Finish();
}

inline flatbuffers::Offset<MbGetPackagesCountRequest> CreateMbGetPackagesCountRequestDirect(flatbuffers::FlatBufferBuilder &_fbb,
    const char *rom_id = nullptr) {
  return CreateMbGetPackagesCountRequest(_fbb, rom_id ? _fbb.CreateString(rom_id) : 0);
}

struct MbGetPackagesCountResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_SUCCESS = 4,
    VT_SYSTEM_PACKAGES = 6,
    VT_SYSTEM_UPDATE_PACKAGES = 8,
    VT_NON_SYSTEM_PACKAGES = 10,
    VT_ERROR = 12
  };
  bool success() const { return GetField<uint8_t>(VT_SUCCESS, 0) != 0; }
  uint32_t system_packages() const { return GetField<uint32_t>(VT_SYSTEM_PACKAGES, 0); }
  uint32_t system_update_packages() const { return GetField<uint32_t>(VT_SYSTEM_UPDATE_PACKAGES, 0); }
  uint32_t non_system_packages() const { return GetField<uint32_t>(VT_NON_SYSTEM_PACKAGES, 0); }
  const MbGetPackagesCountError *error() const { return GetPointer<const MbGetPackagesCountError *>(VT_ERROR); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_SUCCESS) &&
           VerifyField<uint32_t>(verifier, VT_SYSTEM_PACKAGES) &&
           VerifyField<uint32_t>(verifier, VT_SYSTEM_UPDATE_PACKAGES) &&
           VerifyField<uint32_t>(verifier, VT_NON_SYSTEM_PACKAGES) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_ERROR) &&
           verifier.VerifyTable(error()) &&
           verifier.EndTable();
  }
};

struct MbGetPackagesCountResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_success(bool success) { fbb_.AddElement<uint8_t>(MbGetPackagesCountResponse::VT_SUCCESS, static_cast<uint8_t>(success), 0); }
  void add_system_packages(uint32_t system_packages) { fbb_.AddElement<uint32_t>(MbGetPackagesCountResponse::VT_SYSTEM_PACKAGES, system_packages, 0); }
  void add_system_update_packages(uint32_t system_update_packages) { fbb_.AddElement<uint32_t>(MbGetPackagesCountResponse::VT_SYSTEM_UPDATE_PACKAGES, system_update_packages, 0); }
  void add_non_system_packages(uint32_t non_system_packages) { fbb_.AddElement<uint32_t>(MbGetPackagesCountResponse::VT_NON_SYSTEM_PACKAGES, non_system_packages, 0); }
  void add_error(flatbuffers::Offset<MbGetPackagesCountError> error) { fbb_.AddOffset(MbGetPackagesCountResponse::VT_ERROR, error); }
  MbGetPackagesCountResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  MbGetPackagesCountResponseBuilder &operator=(const MbGetPackagesCountResponseBuilder &);
  flatbuffers::Offset<MbGetPackagesCountResponse> Finish() {
    auto o = flatbuffers::Offset<MbGetPackagesCountResponse>(fbb_.EndTable(start_, 5));
    return o;
  }
};

inline flatbuffers::Offset<MbGetPackagesCountResponse> CreateMbGetPackagesCountResponse(flatbuffers::FlatBufferBuilder &_fbb,
    bool success = false,
    uint32_t system_packages = 0,
    uint32_t system_update_packages = 0,
    uint32_t non_system_packages = 0,
    flatbuffers::Offset<MbGetPackagesCountError> error = 0) {
  MbGetPackagesCountResponseBuilder builder_(_fbb);
  builder_.add_error(error);
  builder_.add_non_system_packages(non_system_packages);
  builder_.add_system_update_packages(system_update_packages);
  builder_.add_system_packages(system_packages);
  builder_.add_success(success);
  return builder_.Finish();
}

}  // namespace v3
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_MBGETPACKAGESCOUNT_MBTOOL_DAEMON_V3_H_
