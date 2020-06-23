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

#include <alibabacloud/tag/model/ListTagKeysRequest.h>

using AlibabaCloud::Tag::Model::ListTagKeysRequest;

ListTagKeysRequest::ListTagKeysRequest() :
	RpcServiceRequest("tag", "2018-08-28", "ListTagKeys")
{
	setMethod(HttpRequest::Method::Post);
}

ListTagKeysRequest::~ListTagKeysRequest()
{}

std::string ListTagKeysRequest::getRegionId()const
{
	return regionId_;
}

void ListTagKeysRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListTagKeysRequest::getNextToken()const
{
	return nextToken_;
}

void ListTagKeysRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

int ListTagKeysRequest::getPageSize()const
{
	return pageSize_;
}

void ListTagKeysRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListTagKeysRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListTagKeysRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListTagKeysRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListTagKeysRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ListTagKeysRequest::getOwnerId()const
{
	return ownerId_;
}

void ListTagKeysRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ListTagKeysRequest::getResourceType()const
{
	return resourceType_;
}

void ListTagKeysRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string ListTagKeysRequest::getCategory()const
{
	return category_;
}

void ListTagKeysRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

