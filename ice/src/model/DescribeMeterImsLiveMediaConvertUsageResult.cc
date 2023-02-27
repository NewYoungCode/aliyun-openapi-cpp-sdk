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

#include <alibabacloud/ice/model/DescribeMeterImsLiveMediaConvertUsageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

DescribeMeterImsLiveMediaConvertUsageResult::DescribeMeterImsLiveMediaConvertUsageResult() :
	ServiceResult()
{}

DescribeMeterImsLiveMediaConvertUsageResult::DescribeMeterImsLiveMediaConvertUsageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMeterImsLiveMediaConvertUsageResult::~DescribeMeterImsLiveMediaConvertUsageResult()
{}

void DescribeMeterImsLiveMediaConvertUsageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Time"].isNull())
			dataObject.time = std::stol(valueDataDataItem["Time"].asString());
		if(!valueDataDataItem["Duration"].isNull())
			dataObject.duration = std::stol(valueDataDataItem["Duration"].asString());
		if(!valueDataDataItem["Specification"].isNull())
			dataObject.specification = valueDataDataItem["Specification"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<DescribeMeterImsLiveMediaConvertUsageResult::DataItem> DescribeMeterImsLiveMediaConvertUsageResult::getData()const
{
	return data_;
}

