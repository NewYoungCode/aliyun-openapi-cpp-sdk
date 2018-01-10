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

#include <alibabacloud/rds/model/DescribeCharacterSetNameRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeCharacterSetNameRequest::DescribeCharacterSetNameRequest() :
	RdsRequest("DescribeCharacterSetName")
{}

DescribeCharacterSetNameRequest::~DescribeCharacterSetNameRequest()
{}

long DescribeCharacterSetNameRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCharacterSetNameRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeCharacterSetNameRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCharacterSetNameRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeCharacterSetNameRequest::getEngine()const
{
	return engine_;
}

void DescribeCharacterSetNameRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

std::string DescribeCharacterSetNameRequest::getRegionId()const
{
	return regionId_;
}

void DescribeCharacterSetNameRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeCharacterSetNameRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCharacterSetNameRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeCharacterSetNameRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCharacterSetNameRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeCharacterSetNameRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCharacterSetNameRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

