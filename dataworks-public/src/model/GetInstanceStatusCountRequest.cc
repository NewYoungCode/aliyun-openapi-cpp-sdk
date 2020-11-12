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

#include <alibabacloud/dataworks-public/model/GetInstanceStatusCountRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetInstanceStatusCountRequest;

GetInstanceStatusCountRequest::GetInstanceStatusCountRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "GetInstanceStatusCount")
{
	setMethod(HttpRequest::Method::Post);
}

GetInstanceStatusCountRequest::~GetInstanceStatusCountRequest()
{}

std::string GetInstanceStatusCountRequest::getProjectEnv()const
{
	return projectEnv_;
}

void GetInstanceStatusCountRequest::setProjectEnv(const std::string& projectEnv)
{
	projectEnv_ = projectEnv;
	setBodyParameter("ProjectEnv", projectEnv);
}

std::string GetInstanceStatusCountRequest::getBizDate()const
{
	return bizDate_;
}

void GetInstanceStatusCountRequest::setBizDate(const std::string& bizDate)
{
	bizDate_ = bizDate;
	setBodyParameter("BizDate", bizDate);
}

long GetInstanceStatusCountRequest::getProjectId()const
{
	return projectId_;
}

void GetInstanceStatusCountRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}
