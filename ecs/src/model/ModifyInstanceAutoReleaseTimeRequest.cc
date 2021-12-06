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

#include <alibabacloud/ecs/model/ModifyInstanceAutoReleaseTimeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInstanceAutoReleaseTimeRequest;

ModifyInstanceAutoReleaseTimeRequest::ModifyInstanceAutoReleaseTimeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyInstanceAutoReleaseTime") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceAutoReleaseTimeRequest::~ModifyInstanceAutoReleaseTimeRequest() {}

long ModifyInstanceAutoReleaseTimeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceAutoReleaseTimeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyInstanceAutoReleaseTimeRequest::getRegionId() const {
  return regionId_;
}

void ModifyInstanceAutoReleaseTimeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyInstanceAutoReleaseTimeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceAutoReleaseTimeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceAutoReleaseTimeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstanceAutoReleaseTimeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyInstanceAutoReleaseTimeRequest::getAutoReleaseTime() const {
  return autoReleaseTime_;
}

void ModifyInstanceAutoReleaseTimeRequest::setAutoReleaseTime(const std::string &autoReleaseTime) {
  autoReleaseTime_ = autoReleaseTime;
  setParameter(std::string("AutoReleaseTime"), autoReleaseTime);
}

long ModifyInstanceAutoReleaseTimeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceAutoReleaseTimeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyInstanceAutoReleaseTimeRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceAutoReleaseTimeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

