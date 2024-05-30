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

#include <alibabacloud/slb/model/DescribeMasterSlaveServerGroupsRequest.h>

using AlibabaCloud::Slb::Model::DescribeMasterSlaveServerGroupsRequest;

DescribeMasterSlaveServerGroupsRequest::DescribeMasterSlaveServerGroupsRequest()
    : RpcServiceRequest("slb", "2014-05-15", "DescribeMasterSlaveServerGroups") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMasterSlaveServerGroupsRequest::~DescribeMasterSlaveServerGroupsRequest() {}

std::string DescribeMasterSlaveServerGroupsRequest::getAccess_key_id() const {
  return access_key_id_;
}

void DescribeMasterSlaveServerGroupsRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long DescribeMasterSlaveServerGroupsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeMasterSlaveServerGroupsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool DescribeMasterSlaveServerGroupsRequest::getIncludeListener() const {
  return includeListener_;
}

void DescribeMasterSlaveServerGroupsRequest::setIncludeListener(bool includeListener) {
  includeListener_ = includeListener;
  setParameter(std::string("IncludeListener"), includeListener ? "true" : "false");
}

std::string DescribeMasterSlaveServerGroupsRequest::getDescription() const {
  return description_;
}

void DescribeMasterSlaveServerGroupsRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string DescribeMasterSlaveServerGroupsRequest::getRegionId() const {
  return regionId_;
}

void DescribeMasterSlaveServerGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<DescribeMasterSlaveServerGroupsRequest::Tag> DescribeMasterSlaveServerGroupsRequest::getTag() const {
  return tag_;
}

void DescribeMasterSlaveServerGroupsRequest::setTag(const std::vector<DescribeMasterSlaveServerGroupsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeMasterSlaveServerGroupsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeMasterSlaveServerGroupsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeMasterSlaveServerGroupsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeMasterSlaveServerGroupsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeMasterSlaveServerGroupsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeMasterSlaveServerGroupsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeMasterSlaveServerGroupsRequest::getTags() const {
  return tags_;
}

void DescribeMasterSlaveServerGroupsRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string DescribeMasterSlaveServerGroupsRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void DescribeMasterSlaveServerGroupsRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

