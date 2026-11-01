/* ========================= eCAL LICENSE =================================
 *
 * Copyright (C) 2016 - 2025 Continental Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * ========================= eCAL LICENSE =================================
*/

#pragma once

#include <google/protobuf/stubs/common.h>

#define ECAL_PROTOBUF_VERSION_NUMBER(major, minor, patch) (((major) * 1000000) + ((minor) * 1000) + (patch))
#define ECAL_PROTOBUF_REQUIRED_VERSION ECAL_PROTOBUF_VERSION_NUMBER(7, 36, 2)

#if GOOGLE_PROTOBUF_VERSION < ECAL_PROTOBUF_REQUIRED_VERSION
#error "eCAL protobuf integration requires the protobuf C++ runtime shipped with protobuf 36.2 or newer"
#endif
