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

#include <alibabacloud/rds/model/DescribeActionEventPolicyRequest.h>

using AlibabaCloud::Rds::Model::DescribeActionEventPolicyRequest;

DescribeActionEventPolicyRequest::DescribeActionEventPolicyRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeActionEventPolicy") {
  setMethod(HttpRequest::Method::Post);
}

DescribeActionEventPolicyRequest::~DescribeActionEventPolicyRequest() {}

long DescribeActionEventPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeActionEventPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeActionEventPolicyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeActionEventPolicyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeActionEventPolicyRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeActionEventPolicyRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeActionEventPolicyRequest::getRegionId() const {
  return regionId_;
}

void DescribeActionEventPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeActionEventPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeActionEventPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeActionEventPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeActionEventPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

