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

#include <alibabacloud/ddoscoo/model/ModifyWebAIProtectSwitchRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifyWebAIProtectSwitchRequest;

ModifyWebAIProtectSwitchRequest::ModifyWebAIProtectSwitchRequest() :
	RpcServiceRequest("ddoscoo", "2020-01-01", "ModifyWebAIProtectSwitch")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyWebAIProtectSwitchRequest::~ModifyWebAIProtectSwitchRequest()
{}

std::string ModifyWebAIProtectSwitchRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ModifyWebAIProtectSwitchRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ModifyWebAIProtectSwitchRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyWebAIProtectSwitchRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ModifyWebAIProtectSwitchRequest::getDomain()const
{
	return domain_;
}

void ModifyWebAIProtectSwitchRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string ModifyWebAIProtectSwitchRequest::getConfig()const
{
	return config_;
}

void ModifyWebAIProtectSwitchRequest::setConfig(const std::string& config)
{
	config_ = config;
	setParameter("Config", config);
}
