/*
 *  Copyright (c) 2017-present, Facebook, Inc.
 *
 *  This source code is licensed under the MIT license found in the LICENSE
 *  file in the root directory of this source tree.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 *  @generated
 */
#pragma once

#include <memory>
#include <string>
#include <utility>

#include <folly/Optional.h>
#include <folly/io/IOBuf.h>
#include <mcrouter/lib/carbon/CarbonProtocolReader.h>
#include <mcrouter/lib/carbon/CommonSerializationTraits.h>
#include <mcrouter/lib/carbon/Keys.h>
#include <mcrouter/lib/carbon/ReplyCommon.h>
#include <mcrouter/lib/carbon/RequestCommon.h>
#include <mcrouter/lib/carbon/RequestReplyUtil.h>
#include <mcrouter/lib/carbon/Result.h>
#include <mcrouter/lib/carbon/TypeList.h>
#include <mcrouter/lib/carbon/Variant.h>

namespace carbon {
namespace test {

enum class SimpleEnum : int64_t {
  Twenty = 20,
  Zero = 0,
  One = 1,
  Negative = -92233
};

std::string enumSimpleEnumToString(SimpleEnum val);

class TestCompactReply;

class TestCompactRequest : public carbon::RequestCommon {
 public:
  using reply_type = TestCompactReply;

  static constexpr size_t typeId = 73;
  static constexpr const char* name = "testCompact";

  TestCompactRequest() = default;
  TestCompactRequest(const TestCompactRequest&) = default;
  TestCompactRequest& operator=(const TestCompactRequest&) = default;
  TestCompactRequest(TestCompactRequest&&) = default;
  TestCompactRequest& operator=(TestCompactRequest&&) = default;
  explicit TestCompactRequest(folly::StringPiece sp)
      : key_(sp) {}
  explicit TestCompactRequest(std::string&& carbonKey)
      : key_(std::move(carbonKey)) {}
  explicit TestCompactRequest(const char* key)
      : key_(key) {}

  const carbon::Keys<std::string>& key() const {
    return key_;
  }
  carbon::Keys<std::string>& key() {
    markBufferAsDirty();
    return key_;
  }
  const SimpleEnum& testEnum() const {
    return testEnum_;
  }
  SimpleEnum& testEnum() {
    markBufferAsDirty();
    return testEnum_;
  }
  bool testBool() const {
    return testBool_;
  }
  bool& testBool() {
    markBufferAsDirty();
    return testBool_;
  }
  char testChar() const {
    return testChar_;
  }
  char& testChar() {
    markBufferAsDirty();
    return testChar_;
  }
  int8_t testInt8() const {
    return testInt8_;
  }
  int8_t& testInt8() {
    markBufferAsDirty();
    return testInt8_;
  }
  int16_t testInt16() const {
    return testInt16_;
  }
  int16_t& testInt16() {
    markBufferAsDirty();
    return testInt16_;
  }
  int32_t testInt32() const {
    return testInt32_;
  }
  int32_t& testInt32() {
    markBufferAsDirty();
    return testInt32_;
  }
  int64_t testInt64() const {
    return testInt64_;
  }
  int64_t& testInt64() {
    markBufferAsDirty();
    return testInt64_;
  }
  uint8_t testUInt8() const {
    return testUInt8_;
  }
  uint8_t& testUInt8() {
    markBufferAsDirty();
    return testUInt8_;
  }
  uint16_t testUInt16() const {
    return testUInt16_;
  }
  uint16_t& testUInt16() {
    markBufferAsDirty();
    return testUInt16_;
  }
  uint32_t testUInt32() const {
    return testUInt32_;
  }
  uint32_t& testUInt32() {
    markBufferAsDirty();
    return testUInt32_;
  }
  uint64_t testUInt64() const {
    return testUInt64_;
  }
  uint64_t& testUInt64() {
    markBufferAsDirty();
    return testUInt64_;
  }
  const std::string& testShortString() const {
    return testShortString_;
  }
  std::string& testShortString() {
    markBufferAsDirty();
    return testShortString_;
  }
  const std::string& testLongString() const {
    return testLongString_;
  }
  std::string& testLongString() {
    markBufferAsDirty();
    return testLongString_;
  }
  const folly::IOBuf& testIobuf() const {
    return testIobuf_;
  }
  folly::IOBuf& testIobuf() {
    markBufferAsDirty();
    return testIobuf_;
  }
  const std::vector<std::string>& testList() const {
    return testList_;
  }
  std::vector<std::string>& testList() {
    markBufferAsDirty();
    return testList_;
  }
  template <class Writer>
  void serialize(Writer&& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  carbon::Keys<std::string> key_;
  SimpleEnum testEnum_{SimpleEnum::Twenty};
  int64_t testInt64_{0};
  uint64_t testUInt64_{0};
  std::string testShortString_;
  std::string testLongString_;
  folly::IOBuf testIobuf_;
  std::vector<std::string> testList_;
  int32_t testInt32_{0};
  uint32_t testUInt32_{0};
  int16_t testInt16_{0};
  uint16_t testUInt16_{0};
  bool testBool_{false};
  char testChar_{'\0'};
  int8_t testInt8_{0};
  uint8_t testUInt8_{0};
};

class TestCompactReply : public carbon::ReplyCommon {
 public:

  static constexpr size_t typeId = 74;

  TestCompactReply() = default;
  TestCompactReply(const TestCompactReply&) = default;
  TestCompactReply& operator=(const TestCompactReply&) = default;
  TestCompactReply(TestCompactReply&&) = default;
  TestCompactReply& operator=(TestCompactReply&&) = default;
  explicit TestCompactReply(carbon::Result carbonResult)
      : result_(carbonResult) {}

  carbon::Result result() const {
    return result_;
  }
  carbon::Result& result() {
    return result_;
  }
  int32_t valInt32() const {
    return valInt32_;
  }
  int32_t& valInt32() {
    return valInt32_;
  }
  int64_t valInt64() const {
    return valInt64_;
  }
  int64_t& valInt64() {
    return valInt64_;
  }

  template <class Writer>
  void serialize(Writer&& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  int64_t valInt64_{0};
  int32_t valInt32_{0};
  carbon::Result result_{carbon::Result::UNKNOWN};
};
} // namespace test
} // namespace carbon

#include "CompactTestMessages-inl.h"
