/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
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
 */

#include <alibabacloud/viapi-regen/model/GetWorkspaceRequest.h>

using AlibabaCloud::Viapi_regen::Model::GetWorkspaceRequest;

GetWorkspaceRequest::GetWorkspaceRequest()
    : RpcServiceRequest("viapi-regen", "2021-11-19", "GetWorkspace") {
  setMethod(HttpRequest::Method::Post);
}

GetWorkspaceRequest::~GetWorkspaceRequest() {}

long GetWorkspaceRequest::getId() const {
  return id_;
}

void GetWorkspaceRequest::setId(long id) {
  id_ = id;
  setBodyParameter(std::string("Id"), std::to_string(id));
}

