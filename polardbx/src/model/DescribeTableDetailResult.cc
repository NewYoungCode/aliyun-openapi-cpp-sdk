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

#include <alibabacloud/polardbx/model/DescribeTableDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

DescribeTableDetailResult::DescribeTableDetailResult() :
	ServiceResult()
{}

DescribeTableDetailResult::DescribeTableDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTableDetailResult::~DescribeTableDetailResult()
{}

void DescribeTableDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allFieldsNode = dataNode["Fields"]["Field"];
	for (auto dataNodeFieldsField : allFieldsNode)
	{
		Data::Field fieldObject;
		if(!dataNodeFieldsField["Column"].isNull())
			fieldObject.column = dataNodeFieldsField["Column"].asString();
		if(!dataNodeFieldsField["DataType"].isNull())
			fieldObject.dataType = dataNodeFieldsField["DataType"].asString();
		if(!dataNodeFieldsField["Key"].isNull())
			fieldObject.key = dataNodeFieldsField["Key"].asString();
		if(!dataNodeFieldsField["Extra"].isNull())
			fieldObject.extra = dataNodeFieldsField["Extra"].asString();
		data_.fields.push_back(fieldObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeTableDetailResult::getMessage()const
{
	return message_;
}

DescribeTableDetailResult::Data DescribeTableDetailResult::getData()const
{
	return data_;
}

bool DescribeTableDetailResult::getSuccess()const
{
	return success_;
}
