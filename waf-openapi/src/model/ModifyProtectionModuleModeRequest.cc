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

#include <alibabacloud/waf-openapi/model/ModifyProtectionModuleModeRequest.h>

using AlibabaCloud::Waf_openapi::Model::ModifyProtectionModuleModeRequest;

ModifyProtectionModuleModeRequest::ModifyProtectionModuleModeRequest() :
	RpcServiceRequest("waf-openapi", "2019-09-10", "ModifyProtectionModuleMode")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyProtectionModuleModeRequest::~ModifyProtectionModuleModeRequest()
{}

std::string ModifyProtectionModuleModeRequest::getDefenseType()const
{
	return defenseType_;
}

void ModifyProtectionModuleModeRequest::setDefenseType(const std::string& defenseType)
{
	defenseType_ = defenseType;
	setParameter("DefenseType", defenseType);
}

int ModifyProtectionModuleModeRequest::getMode()const
{
	return mode_;
}

void ModifyProtectionModuleModeRequest::setMode(int mode)
{
	mode_ = mode;
	setParameter("Mode", std::to_string(mode));
}

std::string ModifyProtectionModuleModeRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyProtectionModuleModeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyProtectionModuleModeRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyProtectionModuleModeRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ModifyProtectionModuleModeRequest::getDomain()const
{
	return domain_;
}

void ModifyProtectionModuleModeRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string ModifyProtectionModuleModeRequest::getLang()const
{
	return lang_;
}

void ModifyProtectionModuleModeRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

