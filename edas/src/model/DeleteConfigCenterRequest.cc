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

#include <alibabacloud/edas/model/DeleteConfigCenterRequest.h>

using AlibabaCloud::Edas::Model::DeleteConfigCenterRequest;

DeleteConfigCenterRequest::DeleteConfigCenterRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/configCenter");
	setMethod(HttpRequest::Method::Delete);
}

DeleteConfigCenterRequest::~DeleteConfigCenterRequest()
{}

std::string DeleteConfigCenterRequest::getDataId()const
{
	return dataId_;
}

void DeleteConfigCenterRequest::setDataId(const std::string& dataId)
{
	dataId_ = dataId;
	setParameter("DataId", dataId);
}

std::string DeleteConfigCenterRequest::getLogicalRegionId()const
{
	return logicalRegionId_;
}

void DeleteConfigCenterRequest::setLogicalRegionId(const std::string& logicalRegionId)
{
	logicalRegionId_ = logicalRegionId;
	setParameter("LogicalRegionId", logicalRegionId);
}

std::string DeleteConfigCenterRequest::getGroup()const
{
	return group_;
}

void DeleteConfigCenterRequest::setGroup(const std::string& group)
{
	group_ = group;
	setParameter("Group", group);
}

