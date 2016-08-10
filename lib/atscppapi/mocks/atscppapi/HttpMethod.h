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
 * @file HttpMethod.h
 * @brief Contains an enumeration and printable strings for Http Methods.
 */
#pragma once
#ifndef ATSCPPAPI_HTTP_METHOD_H_
#define ATSCPPAPI_HTTP_METHOD_H_

#include <string>

namespace atscppapi {

/**
 * An enumeration of all available Http Methods.
 */
enum HttpMethod {
  HTTP_METHOD_UNKNOWN = 0,
  HTTP_METHOD_GET,
  HTTP_METHOD_POST,
  HTTP_METHOD_HEAD,
  HTTP_METHOD_CONNECT,
  HTTP_METHOD_DELETE,
  HTTP_METHOD_ICP_QUERY,
  HTTP_METHOD_OPTIONS,
  HTTP_METHOD_PURGE,
  HTTP_METHOD_PUT,
  HTTP_METHOD_TRACE,
  HTTP_METHOD_PUSH
};

/**
 * An array of printable strings representing of the HttpMethod
 * \code
 * cout << HTTP_METHOD_STRINGS[HTTP_METHOD_GET] << endl;
 * \endcode
 */
const std::string HTTP_METHOD_STRINGS[] = { std::string("UNKNOWN"),
                                                       std::string("GET"),
                                                       std::string("POST"),
                                                       std::string("HEAD"),
                                                       std::string("CONNECT"),
                                                       std::string("DELETE"),
                                                       std::string("ICP_QUERY"),
                                                       std::string("OPTIONS"),
                                                       std::string("PURGE"),
                                                       std::string("PUT"),
                                                       std::string("TRACE"),
                                                       std::string("PUSH") };

}

#endif