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

#include <alibabacloud/domain/model/CheckDomainStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

CheckDomainStatusResult::CheckDomainStatusResult() :
	ServiceResult()
{}

CheckDomainStatusResult::CheckDomainStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CheckDomainStatusResult::~CheckDomainStatusResult()
{}

void CheckDomainStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto moduleNode = value["Module"];
	if(!moduleNode["Domain"].isNull())
		module_.domain = moduleNode["Domain"].asString();
	if(!moduleNode["Price"].isNull())
		module_.price = std::stof(moduleNode["Price"].asString());
	if(!moduleNode["RegDate"].isNull())
		module_.regDate = std::stol(moduleNode["RegDate"].asString());
	if(!moduleNode["DeadDate"].isNull())
		module_.deadDate = std::stol(moduleNode["DeadDate"].asString());
	if(!moduleNode["EndTime"].isNull())
		module_.endTime = std::stol(moduleNode["EndTime"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int CheckDomainStatusResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CheckDomainStatusResult::getErrorCode()const
{
	return errorCode_;
}

CheckDomainStatusResult::Module CheckDomainStatusResult::getModule()const
{
	return module_;
}

bool CheckDomainStatusResult::getSuccess()const
{
	return success_;
}

