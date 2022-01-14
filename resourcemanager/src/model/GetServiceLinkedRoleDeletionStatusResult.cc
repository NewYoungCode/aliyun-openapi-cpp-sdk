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

#include <alibabacloud/resourcemanager/model/GetServiceLinkedRoleDeletionStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

GetServiceLinkedRoleDeletionStatusResult::GetServiceLinkedRoleDeletionStatusResult() :
	ServiceResult()
{}

GetServiceLinkedRoleDeletionStatusResult::GetServiceLinkedRoleDeletionStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetServiceLinkedRoleDeletionStatusResult::~GetServiceLinkedRoleDeletionStatusResult()
{}

void GetServiceLinkedRoleDeletionStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto reasonNode = value["Reason"];
	if(!reasonNode["Message"].isNull())
		reason_.message = reasonNode["Message"].asString();
	auto allRoleUsagesNode = reasonNode["RoleUsages"]["RoleUsage"];
	for (auto reasonNodeRoleUsagesRoleUsage : allRoleUsagesNode)
	{
		Reason::RoleUsage roleUsageObject;
		if(!reasonNodeRoleUsagesRoleUsage["Region"].isNull())
			roleUsageObject.region = reasonNodeRoleUsagesRoleUsage["Region"].asString();
		auto allResources = value["Resources"]["Resource"];
		for (auto value : allResources)
			roleUsageObject.resources.push_back(value.asString());
		reason_.roleUsages.push_back(roleUsageObject);
	}
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();

}

std::string GetServiceLinkedRoleDeletionStatusResult::getStatus()const
{
	return status_;
}

GetServiceLinkedRoleDeletionStatusResult::Reason GetServiceLinkedRoleDeletionStatusResult::getReason()const
{
	return reason_;
}

