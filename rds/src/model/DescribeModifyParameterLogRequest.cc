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

#include <alibabacloud/rds/model/DescribeModifyParameterLogRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeModifyParameterLogRequest::DescribeModifyParameterLogRequest() :
	RdsRequest("DescribeModifyParameterLog")
{}

DescribeModifyParameterLogRequest::~DescribeModifyParameterLogRequest()
{}

long DescribeModifyParameterLogRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeModifyParameterLogRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeModifyParameterLogRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeModifyParameterLogRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeModifyParameterLogRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeModifyParameterLogRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeModifyParameterLogRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeModifyParameterLogRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeModifyParameterLogRequest::getEndTime()const
{
	return endTime_;
}

void DescribeModifyParameterLogRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeModifyParameterLogRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeModifyParameterLogRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeModifyParameterLogRequest::getStartTime()const
{
	return startTime_;
}

void DescribeModifyParameterLogRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeModifyParameterLogRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeModifyParameterLogRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeModifyParameterLogRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeModifyParameterLogRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeModifyParameterLogRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeModifyParameterLogRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

