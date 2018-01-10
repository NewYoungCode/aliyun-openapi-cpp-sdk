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

#include <alibabacloud/rds/model/DescribeDampPoliciesByCidRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDampPoliciesByCidRequest::DescribeDampPoliciesByCidRequest() :
	RdsRequest("DescribeDampPoliciesByCid")
{}

DescribeDampPoliciesByCidRequest::~DescribeDampPoliciesByCidRequest()
{}

long DescribeDampPoliciesByCidRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDampPoliciesByCidRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDampPoliciesByCidRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDampPoliciesByCidRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDampPoliciesByCidRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDampPoliciesByCidRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDampPoliciesByCidRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDampPoliciesByCidRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeDampPoliciesByCidRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDampPoliciesByCidRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeDampPoliciesByCidRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDampPoliciesByCidRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long DescribeDampPoliciesByCidRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDampPoliciesByCidRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDampPoliciesByCidRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDampPoliciesByCidRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

