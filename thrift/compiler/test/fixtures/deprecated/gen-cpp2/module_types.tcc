/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/deprecated/gen-cpp2/module_types.h"
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace cpp2 {

template <class Protocol_>
uint32_t House::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "id") {
        fid = 1;
        ftype = apache::thrift::protocol::T_I64;
      }
      else if (fname == "houseName") {
        fid = 2;
        ftype = apache::thrift::protocol::T_STRING;
      }
      else if (fname == "houseColors") {
        fid = 3;
        ftype = apache::thrift::protocol::T_SET;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->id);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->houseName);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 3:
      {
        if (ftype == apache::thrift::protocol::T_SET) {
          this->houseColors = std::set< ::cpp2::ColorID>();
          uint32_t _size0;
          apache::thrift::protocol::TType _etype3;
          xfer += iprot->readSetBegin(_etype3, _size0);
          uint32_t _i4;
          if (_size0 == std::numeric_limits<uint32_t>::max()) {
            for (_i4 = 0; iprot->peekSet(); _i4++) {
               ::cpp2::ColorID _elem5;
              xfer += iprot->readI64(_elem5);
              this->houseColors.value().insert(std::move(_elem5));
            }
          }
          else {
            for (_i4 = 0; _i4 < _size0; ++_i4) {
               ::cpp2::ColorID _elem6;
              xfer += iprot->readI64(_elem6);
              this->houseColors.value().insert(std::move(_elem6));
            }
          }
          xfer += iprot->readSetEnd();
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t House::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("House");
  xfer += prot_->serializedFieldSize("id", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->serializedSizeI64(this->id);
  xfer += prot_->serializedFieldSize("houseName", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->houseName);
  if (this->houseColors.hasValue()) {
    xfer += prot_->serializedFieldSize("houseColors", apache::thrift::protocol::T_SET, 3);
    xfer += prot_->serializedSizeSetBegin(apache::thrift::protocol::T_I64, this->houseColors.value().size());
    for (auto _iter7 = this->houseColors.value().begin(); _iter7 != this->houseColors.value().end(); ++_iter7) {
      xfer += prot_->serializedSizeI64((*_iter7));
    }
    xfer += prot_->serializedSizeSetEnd();
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t House::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("House");
  xfer += prot_->serializedFieldSize("id", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->serializedSizeI64(this->id);
  xfer += prot_->serializedFieldSize("houseName", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->houseName);
  if (this->houseColors.hasValue()) {
    xfer += prot_->serializedFieldSize("houseColors", apache::thrift::protocol::T_SET, 3);
    xfer += prot_->serializedSizeSetBegin(apache::thrift::protocol::T_I64, this->houseColors.value().size());
    for (auto _iter8 = this->houseColors.value().begin(); _iter8 != this->houseColors.value().end(); ++_iter8) {
      xfer += prot_->serializedSizeI64((*_iter8));
    }
    xfer += prot_->serializedSizeSetEnd();
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t House::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("House");
  xfer += prot_->writeFieldBegin("id", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->writeI64(this->id);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("houseName", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->writeString(this->houseName);
  xfer += prot_->writeFieldEnd();
  if (this->houseColors.hasValue()) {
    xfer += prot_->writeFieldBegin("houseColors", apache::thrift::protocol::T_SET, 3);
    xfer += prot_->writeSetBegin(apache::thrift::protocol::T_I64, this->houseColors.value().size());
    for (auto _iter9 = this->houseColors.value().begin(); _iter9 != this->houseColors.value().end(); ++_iter9) {
      xfer += prot_->writeI64((*_iter9));
    }
    xfer += prot_->writeSetEnd();
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t Field::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "id") {
        fid = 1;
        ftype = apache::thrift::protocol::T_I64;
      }
      else if (fname == "fieldType") {
        fid = 2;
        ftype = apache::thrift::protocol::T_I32;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->id);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->fieldType);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t Field::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Field");
  xfer += prot_->serializedFieldSize("id", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->serializedSizeI64(this->id);
  xfer += prot_->serializedFieldSize("fieldType", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->serializedSizeI32(this->fieldType);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Field::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Field");
  xfer += prot_->serializedFieldSize("id", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->serializedSizeI64(this->id);
  xfer += prot_->serializedFieldSize("fieldType", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->serializedSizeI32(this->fieldType);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Field::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Field");
  xfer += prot_->writeFieldBegin("id", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->writeI64(this->id);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldType", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->writeI32(this->fieldType);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2