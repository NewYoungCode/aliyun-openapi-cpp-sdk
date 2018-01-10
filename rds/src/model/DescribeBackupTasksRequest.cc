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

#include <alibabacloud/rds/model/DescribeBackupTasksRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeBackupTasksRequest::DescribeBackupTasksRequest() :
	RdsRequest("DescribeBackupTasks")
{}

DescribeBackupTasksRequest::~DescribeBackupTasksRequest()
{}

std::string DescribeBackupTasksRequest::getBackupJobId()const
{
	return backupJobId_;
}

void DescribeBackupTasksRequest::setBackupJobId(const std::string& backupJobId)
{
	backupJobId_ = backupJobId;
	setParameter("BackupJobId", backupJobId);
}

long DescribeBackupTasksRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeBackupTasksRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeBackupTasksRequest::getFlag()const
{
	return flag_;
}

void DescribeBackupTasksRequest::setFlag(const std::string& flag)
{
	flag_ = flag;
	setParameter("Flag", flag);
}

std::string DescribeBackupTasksRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeBackupTasksRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeBackupTasksRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeBackupTasksRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DescribeBackupTasksRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeBackupTasksRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeBackupTasksRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeBackupTasksRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeBackupTasksRequest::getBackupMode()const
{
	return backupMode_;
}

void DescribeBackupTasksRequest::setBackupMode(const std::string& backupMode)
{
	backupMode_ = backupMode;
	setParameter("BackupMode", backupMode);
}

long DescribeBackupTasksRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeBackupTasksRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeBackupTasksRequest::getBackupJobStatus()const
{
	return backupJobStatus_;
}

void DescribeBackupTasksRequest::setBackupJobStatus(const std::string& backupJobStatus)
{
	backupJobStatus_ = backupJobStatus;
	setParameter("BackupJobStatus", backupJobStatus);
}

std::string DescribeBackupTasksRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeBackupTasksRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

