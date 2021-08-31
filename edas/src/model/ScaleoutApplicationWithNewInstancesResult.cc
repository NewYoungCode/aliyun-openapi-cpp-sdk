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

#include <alibabacloud/edas/model/ScaleoutApplicationWithNewInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ScaleoutApplicationWithNewInstancesResult::ScaleoutApplicationWithNewInstancesResult() :
	ServiceResult()
{}

ScaleoutApplicationWithNewInstancesResult::ScaleoutApplicationWithNewInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ScaleoutApplicationWithNewInstancesResult::~ScaleoutApplicationWithNewInstancesResult()
{}

void ScaleoutApplicationWithNewInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceIds = value["InstanceIds"]["InstanceId"];
	for (const auto &item : allInstanceIds)
		instanceIds_.push_back(item.asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ChangeOrderId"].isNull())
		changeOrderId_ = value["ChangeOrderId"].asString();

}

std::string ScaleoutApplicationWithNewInstancesResult::getMessage()const
{
	return message_;
}

std::string ScaleoutApplicationWithNewInstancesResult::getChangeOrderId()const
{
	return changeOrderId_;
}

std::vector<std::string> ScaleoutApplicationWithNewInstancesResult::getInstanceIds()const
{
	return instanceIds_;
}

int ScaleoutApplicationWithNewInstancesResult::getCode()const
{
	return code_;
}

