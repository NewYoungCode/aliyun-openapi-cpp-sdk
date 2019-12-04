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

#include <alibabacloud/bssopenapi/model/ModifyCostUnitResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

ModifyCostUnitResult::ModifyCostUnitResult() :
	ServiceResult()
{}

ModifyCostUnitResult::ModifyCostUnitResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyCostUnitResult::~ModifyCostUnitResult()
{}

void ModifyCostUnitResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["OwnerUid"].isNull())
			dataObject.ownerUid = std::stol(valueDataDataItem["OwnerUid"].asString());
		if(!valueDataDataItem["UnitId"].isNull())
			dataObject.unitId = std::stol(valueDataDataItem["UnitId"].asString());
		if(!valueDataDataItem["IsSuccess"].isNull())
			dataObject.isSuccess = valueDataDataItem["IsSuccess"].asString() == "true";
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ModifyCostUnitResult::getMessage()const
{
	return message_;
}

std::vector<ModifyCostUnitResult::DataItem> ModifyCostUnitResult::getData()const
{
	return data_;
}

std::string ModifyCostUnitResult::getCode()const
{
	return code_;
}

bool ModifyCostUnitResult::getSuccess()const
{
	return success_;
}
