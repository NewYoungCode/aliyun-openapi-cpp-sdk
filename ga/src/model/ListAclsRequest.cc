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

#include <alibabacloud/ga/model/ListAclsRequest.h>

using AlibabaCloud::Ga::Model::ListAclsRequest;

ListAclsRequest::ListAclsRequest() :
	RpcServiceRequest("ga", "2019-11-20", "ListAcls")
{
	setMethod(HttpRequest::Method::Post);
}

ListAclsRequest::~ListAclsRequest()
{}

std::string ListAclsRequest::getAclName()const
{
	return aclName_;
}

void ListAclsRequest::setAclName(const std::string& aclName)
{
	aclName_ = aclName;
	setParameter("AclName", aclName);
}

std::string ListAclsRequest::getClientToken()const
{
	return clientToken_;
}

void ListAclsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

Array ListAclsRequest::getAclIds()const
{
	return aclIds_;
}

void ListAclsRequest::setAclIds(const Array& aclIds)
{
	aclIds_ = aclIds;
	setParameter("AclIds", std::to_string(aclIds));
}

std::string ListAclsRequest::getRegionId()const
{
	return regionId_;
}

void ListAclsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListAclsRequest::getNextToken()const
{
	return nextToken_;
}

void ListAclsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

int ListAclsRequest::getMaxResults()const
{
	return maxResults_;
}

void ListAclsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

