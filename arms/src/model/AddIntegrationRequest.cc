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

#include <alibabacloud/arms/model/AddIntegrationRequest.h>

using AlibabaCloud::ARMS::Model::AddIntegrationRequest;

AddIntegrationRequest::AddIntegrationRequest() :
	RpcServiceRequest("arms", "2019-08-08", "AddIntegration")
{
	setMethod(HttpRequest::Method::Post);
}

AddIntegrationRequest::~AddIntegrationRequest()
{}

std::string AddIntegrationRequest::getRegionId()const
{
	return regionId_;
}

void AddIntegrationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AddIntegrationRequest::getIntegration()const
{
	return integration_;
}

void AddIntegrationRequest::setIntegration(const std::string& integration)
{
	integration_ = integration;
	setParameter("Integration", integration);
}

std::string AddIntegrationRequest::getClusterId()const
{
	return clusterId_;
}

void AddIntegrationRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

