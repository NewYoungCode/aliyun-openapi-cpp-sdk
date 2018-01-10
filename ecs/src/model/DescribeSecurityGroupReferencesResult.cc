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

#include <alibabacloud/ecs/model/DescribeSecurityGroupReferencesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeSecurityGroupReferencesResult::DescribeSecurityGroupReferencesResult() :
	ServiceResult()
{}

DescribeSecurityGroupReferencesResult::DescribeSecurityGroupReferencesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSecurityGroupReferencesResult::~DescribeSecurityGroupReferencesResult()
{}

void DescribeSecurityGroupReferencesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allSecurityGroupReferences = value["SecurityGroupReferences"]["SecurityGroupReference"];
	for (auto value : allSecurityGroupReferences)
	{
		SecurityGroupReference securityGroupReferenceObject;
		securityGroupReferenceObject.securityGroupId = value["SecurityGroupId"].asString();
		auto allReferencingSecurityGroups = value["ReferencingSecurityGroups"]["ReferencingSecurityGroup"];
		for (auto value : allReferencingSecurityGroups)
		{
			SecurityGroupReference::ReferencingSecurityGroup referencingSecurityGroupObject;
			referencingSecurityGroupObject.aliUid = value["AliUid"].asString();
			referencingSecurityGroupObject.securityGroupId = value["SecurityGroupId"].asString();
			securityGroupReferenceObject.referencingSecurityGroups.push_back(referencingSecurityGroupObject);
		}
		securityGroupReferences_.push_back(securityGroupReferenceObject);
	}

}

