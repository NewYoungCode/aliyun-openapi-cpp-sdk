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

#include <alibabacloud/bssopenapi/model/ChangeConsumeAmountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

ChangeConsumeAmountResult::ChangeConsumeAmountResult() :
	ServiceResult()
{}

ChangeConsumeAmountResult::ChangeConsumeAmountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ChangeConsumeAmountResult::~ChangeConsumeAmountResult()
{}

void ChangeConsumeAmountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();

}

std::string ChangeConsumeAmountResult::getMessage()const
{
	return message_;
}

std::string ChangeConsumeAmountResult::getData()const
{
	return data_;
}

std::string ChangeConsumeAmountResult::getCode()const
{
	return code_;
}

bool ChangeConsumeAmountResult::getSuccess()const
{
	return success_;
}

