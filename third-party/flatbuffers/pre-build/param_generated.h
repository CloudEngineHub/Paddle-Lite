// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_PARAM_PADDLE_LITE_FBS_PROTO_H_
#define FLATBUFFERS_GENERATED_PARAM_PADDLE_LITE_FBS_PROTO_H_

#include "flatbuffers/flatbuffers.h"

namespace paddle {
namespace lite {
namespace fbs {
namespace proto {

struct CombinedParamsDesc;
struct CombinedParamsDescBuilder;
struct CombinedParamsDescT;

namespace ParamDesc_ {

struct DenseTensorDesc;
struct DenseTensorDescBuilder;
struct DenseTensorDescT;

struct VersionDesc;
struct VersionDescBuilder;
struct VersionDescT;

}  // namespace ParamDesc_

struct ParamDesc;
struct ParamDescBuilder;
struct ParamDescT;

bool operator==(const CombinedParamsDescT &lhs, const CombinedParamsDescT &rhs);
bool operator!=(const CombinedParamsDescT &lhs, const CombinedParamsDescT &rhs);
namespace ParamDesc_ {

bool operator==(const DenseTensorDescT &lhs, const DenseTensorDescT &rhs);
bool operator!=(const DenseTensorDescT &lhs, const DenseTensorDescT &rhs);
bool operator==(const VersionDescT &lhs, const VersionDescT &rhs);
bool operator!=(const VersionDescT &lhs, const VersionDescT &rhs);
}  // namespace ParamDesc_

bool operator==(const ParamDescT &lhs, const ParamDescT &rhs);
bool operator!=(const ParamDescT &lhs, const ParamDescT &rhs);

inline const flatbuffers::TypeTable *CombinedParamsDescTypeTable();

namespace ParamDesc_ {

inline const flatbuffers::TypeTable *DenseTensorDescTypeTable();

inline const flatbuffers::TypeTable *VersionDescTypeTable();

}  // namespace ParamDesc_

inline const flatbuffers::TypeTable *ParamDescTypeTable();

namespace ParamDesc_ {

enum VariableDesc {
  VariableDesc_NONE = 0,
  VariableDesc_DenseTensorDesc = 1,
  VariableDesc_MIN = VariableDesc_NONE,
  VariableDesc_MAX = VariableDesc_DenseTensorDesc
};

inline const VariableDesc (&EnumValuesVariableDesc())[2] {
  static const VariableDesc values[] = {
    VariableDesc_NONE,
    VariableDesc_DenseTensorDesc
  };
  return values;
}

inline const char * const *EnumNamesVariableDesc() {
  static const char * const names[3] = {
    "NONE",
    "DenseTensorDesc",
    nullptr
  };
  return names;
}

inline const char *EnumNameVariableDesc(VariableDesc e) {
  if (flatbuffers::IsOutRange(e, VariableDesc_NONE, VariableDesc_DenseTensorDesc)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesVariableDesc()[index];
}

template<typename T> struct VariableDescTraits {
  static const VariableDesc enum_value = VariableDesc_NONE;
};

template<> struct VariableDescTraits<paddle::lite::fbs::proto::ParamDesc_::DenseTensorDesc> {
  static const VariableDesc enum_value = VariableDesc_DenseTensorDesc;
};

struct VariableDescUnion {
  VariableDesc type;
  void *value;

  VariableDescUnion() : type(VariableDesc_NONE), value(nullptr) {}
  VariableDescUnion(VariableDescUnion&& u) FLATBUFFERS_NOEXCEPT :
    type(VariableDesc_NONE), value(nullptr)
    { std::swap(type, u.type); std::swap(value, u.value); }
  VariableDescUnion(const VariableDescUnion &);
  VariableDescUnion &operator=(const VariableDescUnion &u)
    { VariableDescUnion t(u); std::swap(type, t.type); std::swap(value, t.value); return *this; }
  VariableDescUnion &operator=(VariableDescUnion &&u) FLATBUFFERS_NOEXCEPT
    { std::swap(type, u.type); std::swap(value, u.value); return *this; }
  ~VariableDescUnion() { Reset(); }

  void Reset();

#ifndef FLATBUFFERS_CPP98_STL
  template <typename T>
  void Set(T&& val) {
    using RT = typename std::remove_reference<T>::type;
    Reset();
    type = VariableDescTraits<typename RT::TableType>::enum_value;
    if (type != VariableDesc_NONE) {
      value = new RT(std::forward<T>(val));
    }
  }
#endif  // FLATBUFFERS_CPP98_STL

  static void *UnPack(const void *obj, VariableDesc type, const flatbuffers::resolver_function_t *resolver);
  flatbuffers::Offset<void> Pack(flatbuffers::FlatBufferBuilder &_fbb, const flatbuffers::rehasher_function_t *_rehasher = nullptr) const;

  paddle::lite::fbs::proto::ParamDesc_::DenseTensorDescT *AsDenseTensorDesc() {
    return type == VariableDesc_DenseTensorDesc ?
      reinterpret_cast<paddle::lite::fbs::proto::ParamDesc_::DenseTensorDescT *>(value) : nullptr;
  }
  const paddle::lite::fbs::proto::ParamDesc_::DenseTensorDescT *AsDenseTensorDesc() const {
    return type == VariableDesc_DenseTensorDesc ?
      reinterpret_cast<const paddle::lite::fbs::proto::ParamDesc_::DenseTensorDescT *>(value) : nullptr;
  }
};


inline bool operator==(const VariableDescUnion &lhs, const VariableDescUnion &rhs) {
  if (lhs.type != rhs.type) return false;
  switch (lhs.type) {
    case VariableDesc_NONE: {
      return true;
    }
    case VariableDesc_DenseTensorDesc: {
      return *(reinterpret_cast<const paddle::lite::fbs::proto::ParamDesc_::DenseTensorDescT *>(lhs.value)) ==
             *(reinterpret_cast<const paddle::lite::fbs::proto::ParamDesc_::DenseTensorDescT *>(rhs.value));
    }
    default: {
      return false;
    }
  }
}

inline bool operator!=(const VariableDescUnion &lhs, const VariableDescUnion &rhs) {
    return !(lhs == rhs);
}

bool VerifyVariableDesc(flatbuffers::Verifier &verifier, const void *obj, VariableDesc type);
bool VerifyVariableDescVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types);

}  // namespace ParamDesc_

struct CombinedParamsDescT : public flatbuffers::NativeTable {
  typedef CombinedParamsDesc TableType;
  std::vector<std::unique_ptr<paddle::lite::fbs::proto::ParamDescT>> params;
  CombinedParamsDescT() {
  }
};

inline bool operator==(const CombinedParamsDescT &lhs, const CombinedParamsDescT &rhs) {
  return
      (lhs.params == rhs.params);
}

inline bool operator!=(const CombinedParamsDescT &lhs, const CombinedParamsDescT &rhs) {
    return !(lhs == rhs);
}


struct CombinedParamsDesc FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef CombinedParamsDescT NativeTableType;
  typedef CombinedParamsDescBuilder Builder;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return CombinedParamsDescTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PARAMS = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<paddle::lite::fbs::proto::ParamDesc>> *params() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<paddle::lite::fbs::proto::ParamDesc>> *>(VT_PARAMS);
  }
  flatbuffers::Vector<flatbuffers::Offset<paddle::lite::fbs::proto::ParamDesc>> *mutable_params() {
    return GetPointer<flatbuffers::Vector<flatbuffers::Offset<paddle::lite::fbs::proto::ParamDesc>> *>(VT_PARAMS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_PARAMS) &&
           verifier.VerifyVector(params()) &&
           verifier.VerifyVectorOfTables(params()) &&
           verifier.EndTable();
  }
  CombinedParamsDescT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(CombinedParamsDescT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<CombinedParamsDesc> Pack(flatbuffers::FlatBufferBuilder &_fbb, const CombinedParamsDescT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct CombinedParamsDescBuilder {
  typedef CombinedParamsDesc Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_params(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<paddle::lite::fbs::proto::ParamDesc>>> params) {
    fbb_.AddOffset(CombinedParamsDesc::VT_PARAMS, params);
  }
  explicit CombinedParamsDescBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  CombinedParamsDescBuilder &operator=(const CombinedParamsDescBuilder &);
  flatbuffers::Offset<CombinedParamsDesc> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<CombinedParamsDesc>(end);
    return o;
  }
};

inline flatbuffers::Offset<CombinedParamsDesc> CreateCombinedParamsDesc(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<paddle::lite::fbs::proto::ParamDesc>>> params = 0) {
  CombinedParamsDescBuilder builder_(_fbb);
  builder_.add_params(params);
  return builder_.Finish();
}

inline flatbuffers::Offset<CombinedParamsDesc> CreateCombinedParamsDescDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    std::vector<flatbuffers::Offset<paddle::lite::fbs::proto::ParamDesc>> *params = nullptr) {
  auto params__ = params ? _fbb.CreateVectorOfSortedTables<paddle::lite::fbs::proto::ParamDesc>(params) : 0;
  return paddle::lite::fbs::proto::CreateCombinedParamsDesc(
      _fbb,
      params__);
}

flatbuffers::Offset<CombinedParamsDesc> CreateCombinedParamsDesc(flatbuffers::FlatBufferBuilder &_fbb, const CombinedParamsDescT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

namespace ParamDesc_ {

struct DenseTensorDescT : public flatbuffers::NativeTable {
  typedef DenseTensorDesc TableType;
  int32_t lod_level;
  std::vector<int64_t> lod;
  std::vector<int64_t> dim;
  paddle::lite::fbs::proto::VarType_::Type data_type;
  std::vector<int8_t> data;
  DenseTensorDescT()
      : lod_level(0),
        data_type(paddle::lite::fbs::proto::VarType_::Type_BOOL) {
  }
};

inline bool operator==(const DenseTensorDescT &lhs, const DenseTensorDescT &rhs) {
  return
      (lhs.lod_level == rhs.lod_level) &&
      (lhs.lod == rhs.lod) &&
      (lhs.dim == rhs.dim) &&
      (lhs.data_type == rhs.data_type) &&
      (lhs.data == rhs.data);
}

inline bool operator!=(const DenseTensorDescT &lhs, const DenseTensorDescT &rhs) {
    return !(lhs == rhs);
}


struct DenseTensorDesc FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef DenseTensorDescT NativeTableType;
  typedef DenseTensorDescBuilder Builder;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return DenseTensorDescTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_LOD_LEVEL = 4,
    VT_LOD = 6,
    VT_DIM = 8,
    VT_DATA_TYPE = 10,
    VT_DATA = 12
  };
  int32_t lod_level() const {
    return GetField<int32_t>(VT_LOD_LEVEL, 0);
  }
  bool mutate_lod_level(int32_t _lod_level) {
    return SetField<int32_t>(VT_LOD_LEVEL, _lod_level, 0);
  }
  const flatbuffers::Vector<int64_t> *lod() const {
    return GetPointer<const flatbuffers::Vector<int64_t> *>(VT_LOD);
  }
  flatbuffers::Vector<int64_t> *mutable_lod() {
    return GetPointer<flatbuffers::Vector<int64_t> *>(VT_LOD);
  }
  const flatbuffers::Vector<int64_t> *dim() const {
    return GetPointer<const flatbuffers::Vector<int64_t> *>(VT_DIM);
  }
  flatbuffers::Vector<int64_t> *mutable_dim() {
    return GetPointer<flatbuffers::Vector<int64_t> *>(VT_DIM);
  }
  paddle::lite::fbs::proto::VarType_::Type data_type() const {
    return static_cast<paddle::lite::fbs::proto::VarType_::Type>(GetField<int32_t>(VT_DATA_TYPE, 0));
  }
  bool mutate_data_type(paddle::lite::fbs::proto::VarType_::Type _data_type) {
    return SetField<int32_t>(VT_DATA_TYPE, static_cast<int32_t>(_data_type), 0);
  }
  const flatbuffers::Vector<int8_t> *data() const {
    return GetPointer<const flatbuffers::Vector<int8_t> *>(VT_DATA);
  }
  flatbuffers::Vector<int8_t> *mutable_data() {
    return GetPointer<flatbuffers::Vector<int8_t> *>(VT_DATA);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_LOD_LEVEL) &&
           VerifyOffset(verifier, VT_LOD) &&
           verifier.VerifyVector(lod()) &&
           VerifyOffset(verifier, VT_DIM) &&
           verifier.VerifyVector(dim()) &&
           VerifyField<int32_t>(verifier, VT_DATA_TYPE) &&
           VerifyOffset(verifier, VT_DATA) &&
           verifier.VerifyVector(data()) &&
           verifier.EndTable();
  }
  DenseTensorDescT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(DenseTensorDescT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<DenseTensorDesc> Pack(flatbuffers::FlatBufferBuilder &_fbb, const DenseTensorDescT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct DenseTensorDescBuilder {
  typedef DenseTensorDesc Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_lod_level(int32_t lod_level) {
    fbb_.AddElement<int32_t>(DenseTensorDesc::VT_LOD_LEVEL, lod_level, 0);
  }
  void add_lod(flatbuffers::Offset<flatbuffers::Vector<int64_t>> lod) {
    fbb_.AddOffset(DenseTensorDesc::VT_LOD, lod);
  }
  void add_dim(flatbuffers::Offset<flatbuffers::Vector<int64_t>> dim) {
    fbb_.AddOffset(DenseTensorDesc::VT_DIM, dim);
  }
  void add_data_type(paddle::lite::fbs::proto::VarType_::Type data_type) {
    fbb_.AddElement<int32_t>(DenseTensorDesc::VT_DATA_TYPE, static_cast<int32_t>(data_type), 0);
  }
  void add_data(flatbuffers::Offset<flatbuffers::Vector<int8_t>> data) {
    fbb_.AddOffset(DenseTensorDesc::VT_DATA, data);
  }
  explicit DenseTensorDescBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  DenseTensorDescBuilder &operator=(const DenseTensorDescBuilder &);
  flatbuffers::Offset<DenseTensorDesc> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<DenseTensorDesc>(end);
    return o;
  }
};

inline flatbuffers::Offset<DenseTensorDesc> CreateDenseTensorDesc(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t lod_level = 0,
    flatbuffers::Offset<flatbuffers::Vector<int64_t>> lod = 0,
    flatbuffers::Offset<flatbuffers::Vector<int64_t>> dim = 0,
    paddle::lite::fbs::proto::VarType_::Type data_type = paddle::lite::fbs::proto::VarType_::Type_BOOL,
    flatbuffers::Offset<flatbuffers::Vector<int8_t>> data = 0) {
  DenseTensorDescBuilder builder_(_fbb);
  builder_.add_data(data);
  builder_.add_data_type(data_type);
  builder_.add_dim(dim);
  builder_.add_lod(lod);
  builder_.add_lod_level(lod_level);
  return builder_.Finish();
}

inline flatbuffers::Offset<DenseTensorDesc> CreateDenseTensorDescDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t lod_level = 0,
    const std::vector<int64_t> *lod = nullptr,
    const std::vector<int64_t> *dim = nullptr,
    paddle::lite::fbs::proto::VarType_::Type data_type = paddle::lite::fbs::proto::VarType_::Type_BOOL,
    const std::vector<int8_t> *data = nullptr) {
  auto lod__ = lod ? _fbb.CreateVector<int64_t>(*lod) : 0;
  auto dim__ = dim ? _fbb.CreateVector<int64_t>(*dim) : 0;
  auto data__ = data ? _fbb.CreateVector<int8_t>(*data) : 0;
  return paddle::lite::fbs::proto::ParamDesc_::CreateDenseTensorDesc(
      _fbb,
      lod_level,
      lod__,
      dim__,
      data_type,
      data__);
}

flatbuffers::Offset<DenseTensorDesc> CreateDenseTensorDesc(flatbuffers::FlatBufferBuilder &_fbb, const DenseTensorDescT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct VersionDescT : public flatbuffers::NativeTable {
  typedef VersionDesc TableType;
  int32_t version;
  int32_t model_version;
  VersionDescT()
      : version(0),
        model_version(0) {
  }
};

inline bool operator==(const VersionDescT &lhs, const VersionDescT &rhs) {
  return
      (lhs.version == rhs.version) &&
      (lhs.model_version == rhs.model_version);
}

inline bool operator!=(const VersionDescT &lhs, const VersionDescT &rhs) {
    return !(lhs == rhs);
}


struct VersionDesc FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef VersionDescT NativeTableType;
  typedef VersionDescBuilder Builder;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return VersionDescTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_VERSION = 4,
    VT_MODEL_VERSION = 6
  };
  int32_t version() const {
    return GetField<int32_t>(VT_VERSION, 0);
  }
  bool mutate_version(int32_t _version) {
    return SetField<int32_t>(VT_VERSION, _version, 0);
  }
  int32_t model_version() const {
    return GetField<int32_t>(VT_MODEL_VERSION, 0);
  }
  bool mutate_model_version(int32_t _model_version) {
    return SetField<int32_t>(VT_MODEL_VERSION, _model_version, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_VERSION) &&
           VerifyField<int32_t>(verifier, VT_MODEL_VERSION) &&
           verifier.EndTable();
  }
  VersionDescT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(VersionDescT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<VersionDesc> Pack(flatbuffers::FlatBufferBuilder &_fbb, const VersionDescT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct VersionDescBuilder {
  typedef VersionDesc Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_version(int32_t version) {
    fbb_.AddElement<int32_t>(VersionDesc::VT_VERSION, version, 0);
  }
  void add_model_version(int32_t model_version) {
    fbb_.AddElement<int32_t>(VersionDesc::VT_MODEL_VERSION, model_version, 0);
  }
  explicit VersionDescBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  VersionDescBuilder &operator=(const VersionDescBuilder &);
  flatbuffers::Offset<VersionDesc> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<VersionDesc>(end);
    return o;
  }
};

inline flatbuffers::Offset<VersionDesc> CreateVersionDesc(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t version = 0,
    int32_t model_version = 0) {
  VersionDescBuilder builder_(_fbb);
  builder_.add_model_version(model_version);
  builder_.add_version(version);
  return builder_.Finish();
}

flatbuffers::Offset<VersionDesc> CreateVersionDesc(flatbuffers::FlatBufferBuilder &_fbb, const VersionDescT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

}  // namespace ParamDesc_

struct ParamDescT : public flatbuffers::NativeTable {
  typedef ParamDesc TableType;
  std::unique_ptr<paddle::lite::fbs::proto::ParamDesc_::VersionDescT> version;
  std::string name;
  paddle::lite::fbs::proto::ParamDesc_::VariableDescUnion variable;
  ParamDescT() {
  }
};

inline bool operator==(const ParamDescT &lhs, const ParamDescT &rhs) {
  return
      (lhs.version == rhs.version) &&
      (lhs.name == rhs.name) &&
      (lhs.variable == rhs.variable);
}

inline bool operator!=(const ParamDescT &lhs, const ParamDescT &rhs) {
    return !(lhs == rhs);
}


struct ParamDesc FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ParamDescT NativeTableType;
  typedef ParamDescBuilder Builder;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return ParamDescTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_VERSION = 4,
    VT_NAME = 6,
    VT_VARIABLE_TYPE = 8,
    VT_VARIABLE = 10
  };
  const paddle::lite::fbs::proto::ParamDesc_::VersionDesc *version() const {
    return GetPointer<const paddle::lite::fbs::proto::ParamDesc_::VersionDesc *>(VT_VERSION);
  }
  paddle::lite::fbs::proto::ParamDesc_::VersionDesc *mutable_version() {
    return GetPointer<paddle::lite::fbs::proto::ParamDesc_::VersionDesc *>(VT_VERSION);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  flatbuffers::String *mutable_name() {
    return GetPointer<flatbuffers::String *>(VT_NAME);
  }
  bool KeyCompareLessThan(const ParamDesc *o) const {
    return *name() < *o->name();
  }
  int KeyCompareWithValue(const char *val) const {
    return strcmp(name()->c_str(), val);
  }
  paddle::lite::fbs::proto::ParamDesc_::VariableDesc variable_type() const {
    return static_cast<paddle::lite::fbs::proto::ParamDesc_::VariableDesc>(GetField<uint8_t>(VT_VARIABLE_TYPE, 0));
  }
  const void *variable() const {
    return GetPointer<const void *>(VT_VARIABLE);
  }
  template<typename T> const T *variable_as() const;
  const paddle::lite::fbs::proto::ParamDesc_::DenseTensorDesc *variable_as_DenseTensorDesc() const {
    return variable_type() == paddle::lite::fbs::proto::ParamDesc_::VariableDesc_DenseTensorDesc ? static_cast<const paddle::lite::fbs::proto::ParamDesc_::DenseTensorDesc *>(variable()) : nullptr;
  }
  void *mutable_variable() {
    return GetPointer<void *>(VT_VARIABLE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_VERSION) &&
           verifier.VerifyTable(version()) &&
           VerifyOffsetRequired(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyField<uint8_t>(verifier, VT_VARIABLE_TYPE) &&
           VerifyOffset(verifier, VT_VARIABLE) &&
           VerifyVariableDesc(verifier, variable(), variable_type()) &&
           verifier.EndTable();
  }
  ParamDescT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(ParamDescT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<ParamDesc> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ParamDescT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

template<> inline const paddle::lite::fbs::proto::ParamDesc_::DenseTensorDesc *ParamDesc::variable_as<paddle::lite::fbs::proto::ParamDesc_::DenseTensorDesc>() const {
  return variable_as_DenseTensorDesc();
}

struct ParamDescBuilder {
  typedef ParamDesc Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_version(flatbuffers::Offset<paddle::lite::fbs::proto::ParamDesc_::VersionDesc> version) {
    fbb_.AddOffset(ParamDesc::VT_VERSION, version);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(ParamDesc::VT_NAME, name);
  }
  void add_variable_type(paddle::lite::fbs::proto::ParamDesc_::VariableDesc variable_type) {
    fbb_.AddElement<uint8_t>(ParamDesc::VT_VARIABLE_TYPE, static_cast<uint8_t>(variable_type), 0);
  }
  void add_variable(flatbuffers::Offset<void> variable) {
    fbb_.AddOffset(ParamDesc::VT_VARIABLE, variable);
  }
  explicit ParamDescBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ParamDescBuilder &operator=(const ParamDescBuilder &);
  flatbuffers::Offset<ParamDesc> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ParamDesc>(end);
    fbb_.Required(o, ParamDesc::VT_NAME);
    return o;
  }
};

inline flatbuffers::Offset<ParamDesc> CreateParamDesc(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<paddle::lite::fbs::proto::ParamDesc_::VersionDesc> version = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    paddle::lite::fbs::proto::ParamDesc_::VariableDesc variable_type = paddle::lite::fbs::proto::ParamDesc_::VariableDesc_NONE,
    flatbuffers::Offset<void> variable = 0) {
  ParamDescBuilder builder_(_fbb);
  builder_.add_variable(variable);
  builder_.add_name(name);
  builder_.add_version(version);
  builder_.add_variable_type(variable_type);
  return builder_.Finish();
}

inline flatbuffers::Offset<ParamDesc> CreateParamDescDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<paddle::lite::fbs::proto::ParamDesc_::VersionDesc> version = 0,
    const char *name = nullptr,
    paddle::lite::fbs::proto::ParamDesc_::VariableDesc variable_type = paddle::lite::fbs::proto::ParamDesc_::VariableDesc_NONE,
    flatbuffers::Offset<void> variable = 0) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  return paddle::lite::fbs::proto::CreateParamDesc(
      _fbb,
      version,
      name__,
      variable_type,
      variable);
}

flatbuffers::Offset<ParamDesc> CreateParamDesc(flatbuffers::FlatBufferBuilder &_fbb, const ParamDescT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline CombinedParamsDescT *CombinedParamsDesc::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<paddle::lite::fbs::proto::CombinedParamsDescT> _o = std::unique_ptr<paddle::lite::fbs::proto::CombinedParamsDescT>(new CombinedParamsDescT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void CombinedParamsDesc::UnPackTo(CombinedParamsDescT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = params(); if (_e) { _o->params.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->params[_i] = std::unique_ptr<paddle::lite::fbs::proto::ParamDescT>(_e->Get(_i)->UnPack(_resolver)); } } }
}

inline flatbuffers::Offset<CombinedParamsDesc> CombinedParamsDesc::Pack(flatbuffers::FlatBufferBuilder &_fbb, const CombinedParamsDescT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateCombinedParamsDesc(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<CombinedParamsDesc> CreateCombinedParamsDesc(flatbuffers::FlatBufferBuilder &_fbb, const CombinedParamsDescT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const CombinedParamsDescT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _params = _fbb.CreateVector<flatbuffers::Offset<paddle::lite::fbs::proto::ParamDesc>> (_o->params.size(), [](size_t i, _VectorArgs *__va) { return CreateParamDesc(*__va->__fbb, __va->__o->params[i].get(), __va->__rehasher); }, &_va );
  return paddle::lite::fbs::proto::CreateCombinedParamsDesc(
      _fbb,
      _params);
}

namespace ParamDesc_ {

inline DenseTensorDescT *DenseTensorDesc::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<paddle::lite::fbs::proto::ParamDesc_::DenseTensorDescT> _o = std::unique_ptr<paddle::lite::fbs::proto::ParamDesc_::DenseTensorDescT>(new DenseTensorDescT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void DenseTensorDesc::UnPackTo(DenseTensorDescT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = lod_level(); _o->lod_level = _e; }
  { auto _e = lod(); if (_e) { _o->lod.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->lod[_i] = _e->Get(_i); } } }
  { auto _e = dim(); if (_e) { _o->dim.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->dim[_i] = _e->Get(_i); } } }
  { auto _e = data_type(); _o->data_type = _e; }
  { auto _e = data(); if (_e) { _o->data.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->data[_i] = _e->Get(_i); } } }
}

inline flatbuffers::Offset<DenseTensorDesc> DenseTensorDesc::Pack(flatbuffers::FlatBufferBuilder &_fbb, const DenseTensorDescT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateDenseTensorDesc(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<DenseTensorDesc> CreateDenseTensorDesc(flatbuffers::FlatBufferBuilder &_fbb, const DenseTensorDescT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const DenseTensorDescT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _lod_level = _o->lod_level;
  auto _lod = _fbb.CreateVector(_o->lod);
  auto _dim = _fbb.CreateVector(_o->dim);
  auto _data_type = _o->data_type;
  auto _data = _fbb.CreateVector(_o->data);
  return paddle::lite::fbs::proto::ParamDesc_::CreateDenseTensorDesc(
      _fbb,
      _lod_level,
      _lod,
      _dim,
      _data_type,
      _data);
}

inline VersionDescT *VersionDesc::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<paddle::lite::fbs::proto::ParamDesc_::VersionDescT> _o = std::unique_ptr<paddle::lite::fbs::proto::ParamDesc_::VersionDescT>(new VersionDescT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void VersionDesc::UnPackTo(VersionDescT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = version(); _o->version = _e; }
  { auto _e = model_version(); _o->model_version = _e; }
}

inline flatbuffers::Offset<VersionDesc> VersionDesc::Pack(flatbuffers::FlatBufferBuilder &_fbb, const VersionDescT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateVersionDesc(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<VersionDesc> CreateVersionDesc(flatbuffers::FlatBufferBuilder &_fbb, const VersionDescT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const VersionDescT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _version = _o->version;
  auto _model_version = _o->model_version;
  return paddle::lite::fbs::proto::ParamDesc_::CreateVersionDesc(
      _fbb,
      _version,
      _model_version);
}

}  // namespace ParamDesc_

inline ParamDescT *ParamDesc::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<paddle::lite::fbs::proto::ParamDescT> _o = std::unique_ptr<paddle::lite::fbs::proto::ParamDescT>(new ParamDescT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void ParamDesc::UnPackTo(ParamDescT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = version(); if (_e) _o->version = std::unique_ptr<paddle::lite::fbs::proto::ParamDesc_::VersionDescT>(_e->UnPack(_resolver)); }
  { auto _e = name(); if (_e) _o->name = _e->str(); }
  { auto _e = variable_type(); _o->variable.type = _e; }
  { auto _e = variable(); if (_e) _o->variable.value = paddle::lite::fbs::proto::ParamDesc_::VariableDescUnion::UnPack(_e, variable_type(), _resolver); }
}

inline flatbuffers::Offset<ParamDesc> ParamDesc::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ParamDescT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateParamDesc(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<ParamDesc> CreateParamDesc(flatbuffers::FlatBufferBuilder &_fbb, const ParamDescT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ParamDescT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _version = _o->version ? CreateVersionDesc(_fbb, _o->version.get(), _rehasher) : 0;
  auto _name = _fbb.CreateString(_o->name);
  auto _variable_type = _o->variable.type;
  auto _variable = _o->variable.Pack(_fbb);
  return paddle::lite::fbs::proto::CreateParamDesc(
      _fbb,
      _version,
      _name,
      _variable_type,
      _variable);
}

namespace ParamDesc_ {

inline bool VerifyVariableDesc(flatbuffers::Verifier &verifier, const void *obj, VariableDesc type) {
  switch (type) {
    case VariableDesc_NONE: {
      return true;
    }
    case VariableDesc_DenseTensorDesc: {
      auto ptr = reinterpret_cast<const paddle::lite::fbs::proto::ParamDesc_::DenseTensorDesc *>(obj);
      return verifier.VerifyTable(ptr);
    }
    default: return true;
  }
}

inline bool VerifyVariableDescVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyVariableDesc(
        verifier,  values->Get(i), types->GetEnum<VariableDesc>(i))) {
      return false;
    }
  }
  return true;
}

inline void *VariableDescUnion::UnPack(const void *obj, VariableDesc type, const flatbuffers::resolver_function_t *resolver) {
  switch (type) {
    case VariableDesc_DenseTensorDesc: {
      auto ptr = reinterpret_cast<const paddle::lite::fbs::proto::ParamDesc_::DenseTensorDesc *>(obj);
      return ptr->UnPack(resolver);
    }
    default: return nullptr;
  }
}

inline flatbuffers::Offset<void> VariableDescUnion::Pack(flatbuffers::FlatBufferBuilder &_fbb, const flatbuffers::rehasher_function_t *_rehasher) const {
  switch (type) {
    case VariableDesc_DenseTensorDesc: {
      auto ptr = reinterpret_cast<const paddle::lite::fbs::proto::ParamDesc_::DenseTensorDescT *>(value);
      return CreateDenseTensorDesc(_fbb, ptr, _rehasher).Union();
    }
    default: return 0;
  }
}

inline VariableDescUnion::VariableDescUnion(const VariableDescUnion &u) : type(u.type), value(nullptr) {
  switch (type) {
    case VariableDesc_DenseTensorDesc: {
      value = new paddle::lite::fbs::proto::ParamDesc_::DenseTensorDescT(*reinterpret_cast<paddle::lite::fbs::proto::ParamDesc_::DenseTensorDescT *>(u.value));
      break;
    }
    default:
      break;
  }
}

inline void VariableDescUnion::Reset() {
  switch (type) {
    case VariableDesc_DenseTensorDesc: {
      auto ptr = reinterpret_cast<paddle::lite::fbs::proto::ParamDesc_::DenseTensorDescT *>(value);
      delete ptr;
      break;
    }
    default: break;
  }
  value = nullptr;
  type = VariableDesc_NONE;
}

inline const flatbuffers::TypeTable *VariableDescTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_SEQUENCE, 0, -1 },
    { flatbuffers::ET_SEQUENCE, 0, 0 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    paddle::lite::fbs::proto::ParamDesc_::DenseTensorDescTypeTable
  };
  static const char * const names[] = {
    "NONE",
    "DenseTensorDesc"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_UNION, 2, type_codes, type_refs, nullptr, names
  };
  return &tt;
}

}  // namespace ParamDesc_

inline const flatbuffers::TypeTable *CombinedParamsDescTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_SEQUENCE, 1, 0 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    paddle::lite::fbs::proto::ParamDescTypeTable
  };
  static const char * const names[] = {
    "params"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 1, type_codes, type_refs, nullptr, names
  };
  return &tt;
}

namespace ParamDesc_ {

inline const flatbuffers::TypeTable *DenseTensorDescTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_INT, 0, -1 },
    { flatbuffers::ET_LONG, 1, -1 },
    { flatbuffers::ET_LONG, 1, -1 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_CHAR, 1, -1 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    paddle::lite::fbs::proto::VarType_::TypeTypeTable
  };
  static const char * const names[] = {
    "lod_level",
    "lod",
    "dim",
    "data_type",
    "data"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 5, type_codes, type_refs, nullptr, names
  };
  return &tt;
}

inline const flatbuffers::TypeTable *VersionDescTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_INT, 0, -1 },
    { flatbuffers::ET_INT, 0, -1 }
  };
  static const char * const names[] = {
    "version",
    "model_version"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 2, type_codes, nullptr, nullptr, names
  };
  return &tt;
}

}  // namespace ParamDesc_

inline const flatbuffers::TypeTable *ParamDescTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_SEQUENCE, 0, 0 },
    { flatbuffers::ET_STRING, 0, -1 },
    { flatbuffers::ET_UTYPE, 0, 1 },
    { flatbuffers::ET_SEQUENCE, 0, 1 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    paddle::lite::fbs::proto::ParamDesc_::VersionDescTypeTable,
    paddle::lite::fbs::proto::ParamDesc_::VariableDescTypeTable
  };
  static const char * const names[] = {
    "version",
    "name",
    "variable_type",
    "variable"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 4, type_codes, type_refs, nullptr, names
  };
  return &tt;
}

inline const paddle::lite::fbs::proto::CombinedParamsDesc *GetCombinedParamsDesc(const void *buf) {
  return flatbuffers::GetRoot<paddle::lite::fbs::proto::CombinedParamsDesc>(buf);
}

inline const paddle::lite::fbs::proto::CombinedParamsDesc *GetSizePrefixedCombinedParamsDesc(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<paddle::lite::fbs::proto::CombinedParamsDesc>(buf);
}

inline CombinedParamsDesc *GetMutableCombinedParamsDesc(void *buf) {
  return flatbuffers::GetMutableRoot<CombinedParamsDesc>(buf);
}

inline bool VerifyCombinedParamsDescBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<paddle::lite::fbs::proto::CombinedParamsDesc>(nullptr);
}

inline bool VerifySizePrefixedCombinedParamsDescBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<paddle::lite::fbs::proto::CombinedParamsDesc>(nullptr);
}

inline void FinishCombinedParamsDescBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<paddle::lite::fbs::proto::CombinedParamsDesc> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedCombinedParamsDescBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<paddle::lite::fbs::proto::CombinedParamsDesc> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<paddle::lite::fbs::proto::CombinedParamsDescT> UnPackCombinedParamsDesc(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<paddle::lite::fbs::proto::CombinedParamsDescT>(GetCombinedParamsDesc(buf)->UnPack(res));
}

inline std::unique_ptr<paddle::lite::fbs::proto::CombinedParamsDescT> UnPackSizePrefixedCombinedParamsDesc(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<paddle::lite::fbs::proto::CombinedParamsDescT>(GetSizePrefixedCombinedParamsDesc(buf)->UnPack(res));
}

}  // namespace proto
}  // namespace fbs
}  // namespace lite
}  // namespace paddle

#endif  // FLATBUFFERS_GENERATED_PARAM_PADDLE_LITE_FBS_PROTO_H_
