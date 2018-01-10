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

#include <alibabacloud/ecs/model/DeleteKeyPairsRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DeleteKeyPairsRequest::DeleteKeyPairsRequest() :
	EcsRequest("DeleteKeyPairs")
{}

DeleteKeyPairsRequest::~DeleteKeyPairsRequest()
{}

long DeleteKeyPairsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteKeyPairsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteKeyPairsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteKeyPairsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteKeyPairsRequest::getRegionId()const
{
	return regionId_;
}

void DeleteKeyPairsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteKeyPairsRequest::getKeyPairNames()const
{
	return keyPairNames_;
}

void DeleteKeyPairsRequest::setKeyPairNames(const std::string& keyPairNames)
{
	keyPairNames_ = keyPairNames;
	setParameter("KeyPairNames", keyPairNames);
}

long DeleteKeyPairsRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteKeyPairsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

