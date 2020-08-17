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

#include <alibabacloud/polardb/model/DescribeDBClusterAuditLogCollectorRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClusterAuditLogCollectorRequest;

DescribeDBClusterAuditLogCollectorRequest::DescribeDBClusterAuditLogCollectorRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusterAuditLogCollector")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterAuditLogCollectorRequest::~DescribeDBClusterAuditLogCollectorRequest()
{}

long DescribeDBClusterAuditLogCollectorRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBClusterAuditLogCollectorRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterAuditLogCollectorRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBClusterAuditLogCollectorRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBClusterAuditLogCollectorRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBClusterAuditLogCollectorRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBClusterAuditLogCollectorRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DescribeDBClusterAuditLogCollectorRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string DescribeDBClusterAuditLogCollectorRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBClusterAuditLogCollectorRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeDBClusterAuditLogCollectorRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBClusterAuditLogCollectorRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}
