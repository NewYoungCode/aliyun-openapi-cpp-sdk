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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainBpsDataByLayerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainBpsDataByLayerResult::DescribeDcdnDomainBpsDataByLayerResult() :
	ServiceResult()
{}

DescribeDcdnDomainBpsDataByLayerResult::DescribeDcdnDomainBpsDataByLayerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainBpsDataByLayerResult::~DescribeDcdnDomainBpsDataByLayerResult()
{}

void DescribeDcdnDomainBpsDataByLayerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBpsDataIntervalNode = value["BpsDataInterval"]["DataModule"];
	for (auto valueBpsDataIntervalDataModule : allBpsDataIntervalNode)
	{
		DataModule bpsDataIntervalObject;
		if(!valueBpsDataIntervalDataModule["Value"].isNull())
			bpsDataIntervalObject.value = valueBpsDataIntervalDataModule["Value"].asString();
		if(!valueBpsDataIntervalDataModule["TrafficValue"].isNull())
			bpsDataIntervalObject.trafficValue = valueBpsDataIntervalDataModule["TrafficValue"].asString();
		if(!valueBpsDataIntervalDataModule["TimeStamp"].isNull())
			bpsDataIntervalObject.timeStamp = valueBpsDataIntervalDataModule["TimeStamp"].asString();
		if(!valueBpsDataIntervalDataModule["DynamicValue"].isNull())
			bpsDataIntervalObject.dynamicValue = valueBpsDataIntervalDataModule["DynamicValue"].asString();
		if(!valueBpsDataIntervalDataModule["StaticValue"].isNull())
			bpsDataIntervalObject.staticValue = valueBpsDataIntervalDataModule["StaticValue"].asString();
		if(!valueBpsDataIntervalDataModule["DynamicTrafficValue"].isNull())
			bpsDataIntervalObject.dynamicTrafficValue = valueBpsDataIntervalDataModule["DynamicTrafficValue"].asString();
		if(!valueBpsDataIntervalDataModule["StaticTrafficValue"].isNull())
			bpsDataIntervalObject.staticTrafficValue = valueBpsDataIntervalDataModule["StaticTrafficValue"].asString();
		bpsDataInterval_.push_back(bpsDataIntervalObject);
	}
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::vector<DescribeDcdnDomainBpsDataByLayerResult::DataModule> DescribeDcdnDomainBpsDataByLayerResult::getBpsDataInterval()const
{
	return bpsDataInterval_;
}

std::string DescribeDcdnDomainBpsDataByLayerResult::getDataInterval()const
{
	return dataInterval_;
}

