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

#include <alibabacloud/waf-openapi/model/DescribeProtectionModuleModeRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribeProtectionModuleModeRequest;

DescribeProtectionModuleModeRequest::DescribeProtectionModuleModeRequest() :
	RpcServiceRequest("waf-openapi", "2019-09-10", "DescribeProtectionModuleMode")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeProtectionModuleModeRequest::~DescribeProtectionModuleModeRequest()
{}

std::string DescribeProtectionModuleModeRequest::getDefenseType()const
{
	return defenseType_;
}

void DescribeProtectionModuleModeRequest::setDefenseType(const std::string& defenseType)
{
	defenseType_ = defenseType;
	setParameter("DefenseType", defenseType);
}

std::string DescribeProtectionModuleModeRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeProtectionModuleModeRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeProtectionModuleModeRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeProtectionModuleModeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeProtectionModuleModeRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeProtectionModuleModeRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeProtectionModuleModeRequest::getDomain()const
{
	return domain_;
}

void DescribeProtectionModuleModeRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string DescribeProtectionModuleModeRequest::getLang()const
{
	return lang_;
}

void DescribeProtectionModuleModeRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

