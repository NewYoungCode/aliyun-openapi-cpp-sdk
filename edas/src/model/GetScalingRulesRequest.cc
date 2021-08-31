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

#include <alibabacloud/edas/model/GetScalingRulesRequest.h>

using AlibabaCloud::Edas::Model::GetScalingRulesRequest;

GetScalingRulesRequest::GetScalingRulesRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/app/scalingRules");
	setMethod(HttpRequest::Method::Get);
}

GetScalingRulesRequest::~GetScalingRulesRequest()
{}

std::string GetScalingRulesRequest::getMode()const
{
	return mode_;
}

void GetScalingRulesRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setParameter("Mode", mode);
}

std::string GetScalingRulesRequest::getAppId()const
{
	return appId_;
}

void GetScalingRulesRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string GetScalingRulesRequest::getGroupId()const
{
	return groupId_;
}

void GetScalingRulesRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

