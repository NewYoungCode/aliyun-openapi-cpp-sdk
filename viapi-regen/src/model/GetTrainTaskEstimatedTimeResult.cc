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

#include <alibabacloud/viapi-regen/model/GetTrainTaskEstimatedTimeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Viapi_regen;
using namespace AlibabaCloud::Viapi_regen::Model;

GetTrainTaskEstimatedTimeResult::GetTrainTaskEstimatedTimeResult() :
	ServiceResult()
{}

GetTrainTaskEstimatedTimeResult::GetTrainTaskEstimatedTimeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTrainTaskEstimatedTimeResult::~GetTrainTaskEstimatedTimeResult()
{}

void GetTrainTaskEstimatedTimeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["EstimatedTime"].isNull())
		data_.estimatedTime = dataNode["EstimatedTime"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string GetTrainTaskEstimatedTimeResult::getMessage()const
{
	return message_;
}

GetTrainTaskEstimatedTimeResult::Data GetTrainTaskEstimatedTimeResult::getData()const
{
	return data_;
}

std::string GetTrainTaskEstimatedTimeResult::getCode()const
{
	return code_;
}

