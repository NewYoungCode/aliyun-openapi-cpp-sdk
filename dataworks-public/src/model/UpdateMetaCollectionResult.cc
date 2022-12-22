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

#include <alibabacloud/dataworks-public/model/UpdateMetaCollectionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

UpdateMetaCollectionResult::UpdateMetaCollectionResult() :
	ServiceResult()
{}

UpdateMetaCollectionResult::UpdateMetaCollectionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateMetaCollectionResult::~UpdateMetaCollectionResult()
{}

void UpdateMetaCollectionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString() == "true";
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool UpdateMetaCollectionResult::getStatus()const
{
	return status_;
}

int UpdateMetaCollectionResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string UpdateMetaCollectionResult::getErrorCode()const
{
	return errorCode_;
}

std::string UpdateMetaCollectionResult::getErrorMessage()const
{
	return errorMessage_;
}

bool UpdateMetaCollectionResult::getSuccess()const
{
	return success_;
}

