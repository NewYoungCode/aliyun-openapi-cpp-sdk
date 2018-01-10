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

#include <alibabacloud/ecs/model/DescribeClassicLinkInstancesRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeClassicLinkInstancesRequest::DescribeClassicLinkInstancesRequest() :
	EcsRequest("DescribeClassicLinkInstances")
{}

DescribeClassicLinkInstancesRequest::~DescribeClassicLinkInstancesRequest()
{}

long DescribeClassicLinkInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeClassicLinkInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeClassicLinkInstancesRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeClassicLinkInstancesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeClassicLinkInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeClassicLinkInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeClassicLinkInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeClassicLinkInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeClassicLinkInstancesRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeClassicLinkInstancesRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string DescribeClassicLinkInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeClassicLinkInstancesRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

long DescribeClassicLinkInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeClassicLinkInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeClassicLinkInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeClassicLinkInstancesRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", pageNumber);
}

