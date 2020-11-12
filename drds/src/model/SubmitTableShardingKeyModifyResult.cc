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

#include <alibabacloud/drds/model/SubmitTableShardingKeyModifyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

SubmitTableShardingKeyModifyResult::SubmitTableShardingKeyModifyResult() :
	ServiceResult()
{}

SubmitTableShardingKeyModifyResult::SubmitTableShardingKeyModifyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitTableShardingKeyModifyResult::~SubmitTableShardingKeyModifyResult()
{}

void SubmitTableShardingKeyModifyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Data"].isNull())
		data_ = value["Data"].asString() == "true";

}

bool SubmitTableShardingKeyModifyResult::getData()const
{
	return data_;
}

bool SubmitTableShardingKeyModifyResult::getSuccess()const
{
	return success_;
}
