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

#include <alibabacloud/eflo/model/CreateVccRouteEntryRequest.h>

using AlibabaCloud::Eflo::Model::CreateVccRouteEntryRequest;

CreateVccRouteEntryRequest::CreateVccRouteEntryRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "CreateVccRouteEntry") {
  setMethod(HttpRequest::Method::Post);
}

CreateVccRouteEntryRequest::~CreateVccRouteEntryRequest() {}

std::string CreateVccRouteEntryRequest::getDestinationCidrBlock() const {
  return destinationCidrBlock_;
}

void CreateVccRouteEntryRequest::setDestinationCidrBlock(const std::string &destinationCidrBlock) {
  destinationCidrBlock_ = destinationCidrBlock;
  setBodyParameter(std::string("DestinationCidrBlock"), destinationCidrBlock);
}

std::string CreateVccRouteEntryRequest::getRegionId() const {
  return regionId_;
}

void CreateVccRouteEntryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string CreateVccRouteEntryRequest::getVccId() const {
  return vccId_;
}

void CreateVccRouteEntryRequest::setVccId(const std::string &vccId) {
  vccId_ = vccId;
  setBodyParameter(std::string("VccId"), vccId);
}

