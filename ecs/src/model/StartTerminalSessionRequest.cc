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

#include <alibabacloud/ecs/model/StartTerminalSessionRequest.h>

using AlibabaCloud::Ecs::Model::StartTerminalSessionRequest;

StartTerminalSessionRequest::StartTerminalSessionRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "StartTerminalSession")
{
	setMethod(HttpRequest::Method::Post);
}

StartTerminalSessionRequest::~StartTerminalSessionRequest()
{}

long StartTerminalSessionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StartTerminalSessionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string StartTerminalSessionRequest::getRegionId()const
{
	return regionId_;
}

void StartTerminalSessionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string StartTerminalSessionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void StartTerminalSessionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string StartTerminalSessionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void StartTerminalSessionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long StartTerminalSessionRequest::getOwnerId()const
{
	return ownerId_;
}

void StartTerminalSessionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> StartTerminalSessionRequest::getInstanceId()const
{
	return instanceId_;
}

void StartTerminalSessionRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int dep1 = 0; dep1!= instanceId.size(); dep1++) {
		setParameter("InstanceId."+ std::to_string(dep1), instanceId.at(dep1));
	}
}

