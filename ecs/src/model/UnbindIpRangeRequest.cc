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

#include <alibabacloud/ecs/model/UnbindIpRangeRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

UnbindIpRangeRequest::UnbindIpRangeRequest() :
	EcsRequest("UnbindIpRange")
{}

UnbindIpRangeRequest::~UnbindIpRangeRequest()
{}

std::string UnbindIpRangeRequest::getIpAddress()const
{
	return ipAddress_;
}

void UnbindIpRangeRequest::setIpAddress(const std::string& ipAddress)
{
	ipAddress_ = ipAddress;
	setParameter("IpAddress", ipAddress);
}

long UnbindIpRangeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnbindIpRangeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UnbindIpRangeRequest::getInstanceId()const
{
	return instanceId_;
}

void UnbindIpRangeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string UnbindIpRangeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnbindIpRangeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UnbindIpRangeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UnbindIpRangeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long UnbindIpRangeRequest::getOwnerId()const
{
	return ownerId_;
}

void UnbindIpRangeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

