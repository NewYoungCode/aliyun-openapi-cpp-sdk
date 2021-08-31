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

#include <alibabacloud/edas/model/UpdateJvmConfigurationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

UpdateJvmConfigurationResult::UpdateJvmConfigurationResult() :
	ServiceResult()
{}

UpdateJvmConfigurationResult::UpdateJvmConfigurationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateJvmConfigurationResult::~UpdateJvmConfigurationResult()
{}

void UpdateJvmConfigurationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jvmConfigurationNode = value["JvmConfiguration"];
	if(!jvmConfigurationNode["MaxHeapSize"].isNull())
		jvmConfiguration_.maxHeapSize = std::stoi(jvmConfigurationNode["MaxHeapSize"].asString());
	if(!jvmConfigurationNode["MaxPermSize"].isNull())
		jvmConfiguration_.maxPermSize = std::stoi(jvmConfigurationNode["MaxPermSize"].asString());
	if(!jvmConfigurationNode["MinHeapSize"].isNull())
		jvmConfiguration_.minHeapSize = std::stoi(jvmConfigurationNode["MinHeapSize"].asString());
	if(!jvmConfigurationNode["Options"].isNull())
		jvmConfiguration_.options = jvmConfigurationNode["Options"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string UpdateJvmConfigurationResult::getMessage()const
{
	return message_;
}

UpdateJvmConfigurationResult::JvmConfiguration UpdateJvmConfigurationResult::getJvmConfiguration()const
{
	return jvmConfiguration_;
}

int UpdateJvmConfigurationResult::getCode()const
{
	return code_;
}

