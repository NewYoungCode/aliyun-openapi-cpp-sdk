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

#include <alibabacloud/sae/model/RestartInstancesRequest.h>

using AlibabaCloud::Sae::Model::RestartInstancesRequest;

RestartInstancesRequest::RestartInstancesRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/app/restartInstances"};
  setMethod(HttpRequest::Method::Put);
}

RestartInstancesRequest::~RestartInstancesRequest() {}

std::string RestartInstancesRequest::getInstanceIds() const {
  return instanceIds_;
}

void RestartInstancesRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

std::string RestartInstancesRequest::getAppId() const {
  return appId_;
}

void RestartInstancesRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

