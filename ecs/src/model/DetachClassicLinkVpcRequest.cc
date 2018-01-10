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

#include <alibabacloud/ecs/model/DetachClassicLinkVpcRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DetachClassicLinkVpcRequest::DetachClassicLinkVpcRequest() :
	EcsRequest("DetachClassicLinkVpc")
{}

DetachClassicLinkVpcRequest::~DetachClassicLinkVpcRequest()
{}

long DetachClassicLinkVpcRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DetachClassicLinkVpcRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DetachClassicLinkVpcRequest::getInstanceId()const
{
	return instanceId_;
}

void DetachClassicLinkVpcRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DetachClassicLinkVpcRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DetachClassicLinkVpcRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DetachClassicLinkVpcRequest::getRegionId()const
{
	return regionId_;
}

void DetachClassicLinkVpcRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DetachClassicLinkVpcRequest::getVpcId()const
{
	return vpcId_;
}

void DetachClassicLinkVpcRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

long DetachClassicLinkVpcRequest::getOwnerId()const
{
	return ownerId_;
}

void DetachClassicLinkVpcRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

