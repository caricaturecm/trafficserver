/**
  Licensed to the Apache Software Foundation (ASF) under one
  or more contributor license agreements.  See the NOTICE file
  distributed with this work for additional information
  regarding copyright ownership.  The ASF licenses this file
  to you under the Apache License, Version 2.0 (the
  "License"); you may not use this file except in compliance
  with the License.  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
 */
/**
 * @file Response.h
 */

#pragma once
#ifndef ATSCPPAPI_RESPONSE_H_
#define ATSCPPAPI_RESPONSE_H_

#include <atscppapi/Headers.h>
#include <atscppapi/HttpVersion.h>
#include <atscppapi/HttpStatus.h>

namespace atscppapi {

// forward declarations
struct ResponseState;
namespace utils { class internal; }

/**
 * @brief Encapsulates a response.
 */
class Response: noncopyable {
public:
  Response() {}

  /** @return HTTP version of the response */
  //HttpVersion getVersion() const;
  MOCK_CONST_METHOD0(getVersion, HttpVersion ());

  /** @return Status code of the response */
  //HttpStatus getStatusCode() const;
  MOCK_CONST_METHOD0(getStatusCode, HttpStatus ());

  /** @param New status code to set */
  //void setStatusCode(HttpStatus);
  MOCK_METHOD1(setStatusCode, void (HttpStatus));

  /** @return Reason phrase of the response */
  //std::string getReasonPhrase() const;
  MOCK_CONST_METHOD0(getReasonPhrase, std::string ());

  /** @param New reason phrase to set */
  //void setReasonPhrase(const std::string &);
  MOCK_METHOD1(setResonPhrase, void (const std::string&));

  /** @return Headers of the response */
  //Headers &getHeaders() const;
  MOCK_CONST_METHOD0(getHeaders, Headers& ());

  ~Response() { }
private:

//  void init(void *hdr_buf, void *hdr_loc);
  MOCK_METHOD2(init, void(void*, void*));

  friend class Transaction;
  friend class utils::internal;
};

}

#endif
