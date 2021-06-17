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

#include <alibabacloud/ga/model/DescribeAcceleratorResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

DescribeAcceleratorResult::DescribeAcceleratorResult() :
	ServiceResult()
{}

DescribeAcceleratorResult::DescribeAcceleratorResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAcceleratorResult::~DescribeAcceleratorResult()
{}

void DescribeAcceleratorResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto basicBandwidthPackageNode = value["BasicBandwidthPackage"];
	if(!basicBandwidthPackageNode["BandwidthType"].isNull())
		basicBandwidthPackage_.bandwidthType = basicBandwidthPackageNode["BandwidthType"].asString();
	if(!basicBandwidthPackageNode["InstanceId"].isNull())
		basicBandwidthPackage_.instanceId = basicBandwidthPackageNode["InstanceId"].asString();
	if(!basicBandwidthPackageNode["Bandwidth"].isNull())
		basicBandwidthPackage_.bandwidth = std::stoi(basicBandwidthPackageNode["Bandwidth"].asString());
	auto crossDomainBandwidthPackageNode = value["CrossDomainBandwidthPackage"];
	if(!crossDomainBandwidthPackageNode["InstanceId"].isNull())
		crossDomainBandwidthPackage_.instanceId = crossDomainBandwidthPackageNode["InstanceId"].asString();
	if(!crossDomainBandwidthPackageNode["Bandwidth"].isNull())
		crossDomainBandwidthPackage_.bandwidth = std::stoi(crossDomainBandwidthPackageNode["Bandwidth"].asString());
	if(!value["DdosId"].isNull())
		ddosId_ = value["DdosId"].asString();
	if(!value["DnsName"].isNull())
		dnsName_ = value["DnsName"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["InstanceChargeType"].isNull())
		instanceChargeType_ = value["InstanceChargeType"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["SecondDnsName"].isNull())
		secondDnsName_ = value["SecondDnsName"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["ExpiredTime"].isNull())
		expiredTime_ = std::stol(value["ExpiredTime"].asString());
	if(!value["CenId"].isNull())
		cenId_ = value["CenId"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["Spec"].isNull())
		spec_ = value["Spec"].asString();
	if(!value["AcceleratorId"].isNull())
		acceleratorId_ = value["AcceleratorId"].asString();

}

std::string DescribeAcceleratorResult::getDdosId()const
{
	return ddosId_;
}

std::string DescribeAcceleratorResult::getDnsName()const
{
	return dnsName_;
}

std::string DescribeAcceleratorResult::getDescription()const
{
	return description_;
}

std::string DescribeAcceleratorResult::getInstanceChargeType()const
{
	return instanceChargeType_;
}

long DescribeAcceleratorResult::getCreateTime()const
{
	return createTime_;
}

DescribeAcceleratorResult::CrossDomainBandwidthPackage DescribeAcceleratorResult::getCrossDomainBandwidthPackage()const
{
	return crossDomainBandwidthPackage_;
}

std::string DescribeAcceleratorResult::getSecondDnsName()const
{
	return secondDnsName_;
}

std::string DescribeAcceleratorResult::getName()const
{
	return name_;
}

DescribeAcceleratorResult::BasicBandwidthPackage DescribeAcceleratorResult::getBasicBandwidthPackage()const
{
	return basicBandwidthPackage_;
}

std::string DescribeAcceleratorResult::getState()const
{
	return state_;
}

long DescribeAcceleratorResult::getExpiredTime()const
{
	return expiredTime_;
}

std::string DescribeAcceleratorResult::getCenId()const
{
	return cenId_;
}

std::string DescribeAcceleratorResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeAcceleratorResult::getSpec()const
{
	return spec_;
}

std::string DescribeAcceleratorResult::getAcceleratorId()const
{
	return acceleratorId_;
}

