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

#include <alibabacloud/sae/model/StopApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

StopApplicationResult::StopApplicationResult() :
	ServiceResult()
{}

StopApplicationResult::StopApplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StopApplicationResult::~StopApplicationResult()
{}

void StopApplicationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ChangeOrderId"].isNull())
		data_.changeOrderId = dataNode["ChangeOrderId"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string StopApplicationResult::getMessage()const
{
	return message_;
}

std::string StopApplicationResult::getTraceId()const
{
	return traceId_;
}

StopApplicationResult::Data StopApplicationResult::getData()const
{
	return data_;
}

std::string StopApplicationResult::getErrorCode()const
{
	return errorCode_;
}

std::string StopApplicationResult::getCode()const
{
	return code_;
}

bool StopApplicationResult::getSuccess()const
{
	return success_;
}

