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

#include <alibabacloud/waf-openapi/model/ModifyLogServiceStatusRequest.h>

using AlibabaCloud::Waf_openapi::Model::ModifyLogServiceStatusRequest;

ModifyLogServiceStatusRequest::ModifyLogServiceStatusRequest() :
	RpcServiceRequest("waf-openapi", "2019-09-10", "ModifyLogServiceStatus")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyLogServiceStatusRequest::~ModifyLogServiceStatusRequest()
{}

int ModifyLogServiceStatusRequest::getEnabled()const
{
	return enabled_;
}

void ModifyLogServiceStatusRequest::setEnabled(int enabled)
{
	enabled_ = enabled;
	setParameter("Enabled", std::to_string(enabled));
}

std::string ModifyLogServiceStatusRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyLogServiceStatusRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyLogServiceStatusRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyLogServiceStatusRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ModifyLogServiceStatusRequest::getDomain()const
{
	return domain_;
}

void ModifyLogServiceStatusRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string ModifyLogServiceStatusRequest::getLang()const
{
	return lang_;
}

void ModifyLogServiceStatusRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

