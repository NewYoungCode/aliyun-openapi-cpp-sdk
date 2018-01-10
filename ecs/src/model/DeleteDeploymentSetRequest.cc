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

#include <alibabacloud/ecs/model/DeleteDeploymentSetRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DeleteDeploymentSetRequest::DeleteDeploymentSetRequest() :
	EcsRequest("DeleteDeploymentSet")
{}

DeleteDeploymentSetRequest::~DeleteDeploymentSetRequest()
{}

std::string DeleteDeploymentSetRequest::getDeploymentSetId()const
{
	return deploymentSetId_;
}

void DeleteDeploymentSetRequest::setDeploymentSetId(const std::string& deploymentSetId)
{
	deploymentSetId_ = deploymentSetId;
	setParameter("DeploymentSetId", deploymentSetId);
}

long DeleteDeploymentSetRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteDeploymentSetRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteDeploymentSetRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteDeploymentSetRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteDeploymentSetRequest::getRegionId()const
{
	return regionId_;
}

void DeleteDeploymentSetRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteDeploymentSetRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteDeploymentSetRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DeleteDeploymentSetRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteDeploymentSetRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

