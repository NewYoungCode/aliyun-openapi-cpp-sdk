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

#include <alibabacloud/rds/model/AllocateReadWriteSplittingConnectionRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

AllocateReadWriteSplittingConnectionRequest::AllocateReadWriteSplittingConnectionRequest() :
	RdsRequest("AllocateReadWriteSplittingConnection")
{}

AllocateReadWriteSplittingConnectionRequest::~AllocateReadWriteSplittingConnectionRequest()
{}

long AllocateReadWriteSplittingConnectionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AllocateReadWriteSplittingConnectionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AllocateReadWriteSplittingConnectionRequest::getConnectionStringPrefix()const
{
	return connectionStringPrefix_;
}

void AllocateReadWriteSplittingConnectionRequest::setConnectionStringPrefix(const std::string& connectionStringPrefix)
{
	connectionStringPrefix_ = connectionStringPrefix;
	setParameter("ConnectionStringPrefix", connectionStringPrefix);
}

std::string AllocateReadWriteSplittingConnectionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AllocateReadWriteSplittingConnectionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AllocateReadWriteSplittingConnectionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AllocateReadWriteSplittingConnectionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string AllocateReadWriteSplittingConnectionRequest::getWeight()const
{
	return weight_;
}

void AllocateReadWriteSplittingConnectionRequest::setWeight(const std::string& weight)
{
	weight_ = weight;
	setParameter("Weight", weight);
}

long AllocateReadWriteSplittingConnectionRequest::getOwnerId()const
{
	return ownerId_;
}

void AllocateReadWriteSplittingConnectionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AllocateReadWriteSplittingConnectionRequest::getIPType()const
{
	return iPType_;
}

void AllocateReadWriteSplittingConnectionRequest::setIPType(const std::string& iPType)
{
	iPType_ = iPType;
	setParameter("IPType", iPType);
}

std::string AllocateReadWriteSplittingConnectionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AllocateReadWriteSplittingConnectionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string AllocateReadWriteSplittingConnectionRequest::getPort()const
{
	return port_;
}

void AllocateReadWriteSplittingConnectionRequest::setPort(const std::string& port)
{
	port_ = port;
	setParameter("Port", port);
}

std::string AllocateReadWriteSplittingConnectionRequest::getDistributionType()const
{
	return distributionType_;
}

void AllocateReadWriteSplittingConnectionRequest::setDistributionType(const std::string& distributionType)
{
	distributionType_ = distributionType;
	setParameter("DistributionType", distributionType);
}

std::string AllocateReadWriteSplittingConnectionRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void AllocateReadWriteSplittingConnectionRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string AllocateReadWriteSplittingConnectionRequest::getMaxDelayTime()const
{
	return maxDelayTime_;
}

void AllocateReadWriteSplittingConnectionRequest::setMaxDelayTime(const std::string& maxDelayTime)
{
	maxDelayTime_ = maxDelayTime;
	setParameter("MaxDelayTime", maxDelayTime);
}

