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

#include <alibabacloud/live/model/ListLiveDelayConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

ListLiveDelayConfigResult::ListLiveDelayConfigResult() :
	ServiceResult()
{}

ListLiveDelayConfigResult::ListLiveDelayConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLiveDelayConfigResult::~ListLiveDelayConfigResult()
{}

void ListLiveDelayConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDelayConfigListNode = value["DelayConfigList"]["DelayConfig"];
	for (auto valueDelayConfigListDelayConfig : allDelayConfigListNode)
	{
		DelayConfig delayConfigListObject;
		if(!valueDelayConfigListDelayConfig["Stream"].isNull())
			delayConfigListObject.stream = valueDelayConfigListDelayConfig["Stream"].asString();
		if(!valueDelayConfigListDelayConfig["Domain"].isNull())
			delayConfigListObject.domain = valueDelayConfigListDelayConfig["Domain"].asString();
		if(!valueDelayConfigListDelayConfig["TaskTriggerMode"].isNull())
			delayConfigListObject.taskTriggerMode = valueDelayConfigListDelayConfig["TaskTriggerMode"].asString();
		if(!valueDelayConfigListDelayConfig["DelayTime"].isNull())
			delayConfigListObject.delayTime = valueDelayConfigListDelayConfig["DelayTime"].asString();
		if(!valueDelayConfigListDelayConfig["App"].isNull())
			delayConfigListObject.app = valueDelayConfigListDelayConfig["App"].asString();
		delayConfigList_.push_back(delayConfigListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::vector<ListLiveDelayConfigResult::DelayConfig> ListLiveDelayConfigResult::getDelayConfigList()const
{
	return delayConfigList_;
}

int ListLiveDelayConfigResult::getTotal()const
{
	return total_;
}

