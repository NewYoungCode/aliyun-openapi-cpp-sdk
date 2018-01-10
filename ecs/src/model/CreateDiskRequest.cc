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

#include <alibabacloud/ecs/model/CreateDiskRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

CreateDiskRequest::CreateDiskRequest() :
	EcsRequest("CreateDisk")
{}

CreateDiskRequest::~CreateDiskRequest()
{}

std::string CreateDiskRequest::getTag4Value()const
{
	return tag4Value_;
}

void CreateDiskRequest::setTag4Value(const std::string& tag4Value)
{
	tag4Value_ = tag4Value;
	setParameter("Tag4Value", tag4Value);
}

long CreateDiskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDiskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateDiskRequest::getSnapshotId()const
{
	return snapshotId_;
}

void CreateDiskRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setParameter("SnapshotId", snapshotId);
}

std::string CreateDiskRequest::getTag2Key()const
{
	return tag2Key_;
}

void CreateDiskRequest::setTag2Key(const std::string& tag2Key)
{
	tag2Key_ = tag2Key;
	setParameter("Tag2Key", tag2Key);
}

std::string CreateDiskRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDiskRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateDiskRequest::getDescription()const
{
	return description_;
}

void CreateDiskRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateDiskRequest::getTag3Key()const
{
	return tag3Key_;
}

void CreateDiskRequest::setTag3Key(const std::string& tag3Key)
{
	tag3Key_ = tag3Key;
	setParameter("Tag3Key", tag3Key);
}

std::string CreateDiskRequest::getDiskName()const
{
	return diskName_;
}

void CreateDiskRequest::setDiskName(const std::string& diskName)
{
	diskName_ = diskName;
	setParameter("DiskName", diskName);
}

std::string CreateDiskRequest::getTag1Value()const
{
	return tag1Value_;
}

void CreateDiskRequest::setTag1Value(const std::string& tag1Value)
{
	tag1Value_ = tag1Value;
	setParameter("Tag1Value", tag1Value);
}

std::string CreateDiskRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateDiskRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateDiskRequest::getRegionId()const
{
	return regionId_;
}

void CreateDiskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateDiskRequest::getDiskCategory()const
{
	return diskCategory_;
}

void CreateDiskRequest::setDiskCategory(const std::string& diskCategory)
{
	diskCategory_ = diskCategory;
	setParameter("DiskCategory", diskCategory);
}

std::string CreateDiskRequest::getTag3Value()const
{
	return tag3Value_;
}

void CreateDiskRequest::setTag3Value(const std::string& tag3Value)
{
	tag3Value_ = tag3Value;
	setParameter("Tag3Value", tag3Value);
}

std::string CreateDiskRequest::getTag5Key()const
{
	return tag5Key_;
}

void CreateDiskRequest::setTag5Key(const std::string& tag5Key)
{
	tag5Key_ = tag5Key;
	setParameter("Tag5Key", tag5Key);
}

std::string CreateDiskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDiskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateDiskRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDiskRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateDiskRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDiskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDiskRequest::getTag5Value()const
{
	return tag5Value_;
}

void CreateDiskRequest::setTag5Value(const std::string& tag5Value)
{
	tag5Value_ = tag5Value;
	setParameter("Tag5Value", tag5Value);
}

std::string CreateDiskRequest::getTag1Key()const
{
	return tag1Key_;
}

void CreateDiskRequest::setTag1Key(const std::string& tag1Key)
{
	tag1Key_ = tag1Key;
	setParameter("Tag1Key", tag1Key);
}

int CreateDiskRequest::getSize()const
{
	return size_;
}

void CreateDiskRequest::setSize(int size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

bool CreateDiskRequest::getEncrypted()const
{
	return encrypted_;
}

void CreateDiskRequest::setEncrypted(bool encrypted)
{
	encrypted_ = encrypted;
	setParameter("Encrypted", std::to_string(encrypted));
}

std::string CreateDiskRequest::getTag2Value()const
{
	return tag2Value_;
}

void CreateDiskRequest::setTag2Value(const std::string& tag2Value)
{
	tag2Value_ = tag2Value;
	setParameter("Tag2Value", tag2Value);
}

std::string CreateDiskRequest::getZoneId()const
{
	return zoneId_;
}

void CreateDiskRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string CreateDiskRequest::getTag4Key()const
{
	return tag4Key_;
}

void CreateDiskRequest::setTag4Key(const std::string& tag4Key)
{
	tag4Key_ = tag4Key;
	setParameter("Tag4Key", tag4Key);
}

