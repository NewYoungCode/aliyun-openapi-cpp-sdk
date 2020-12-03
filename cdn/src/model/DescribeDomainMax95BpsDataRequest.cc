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

#include <alibabacloud/cdn/model/DescribeDomainMax95BpsDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainMax95BpsDataRequest;

DescribeDomainMax95BpsDataRequest::DescribeDomainMax95BpsDataRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainMax95BpsData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDomainMax95BpsDataRequest::~DescribeDomainMax95BpsDataRequest()
{}

std::string DescribeDomainMax95BpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainMax95BpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDomainMax95BpsDataRequest::getCycle()const
{
	return cycle_;
}

void DescribeDomainMax95BpsDataRequest::setCycle(const std::string& cycle)
{
	cycle_ = cycle;
	setParameter("Cycle", cycle);
}

std::string DescribeDomainMax95BpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainMax95BpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainMax95BpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainMax95BpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeDomainMax95BpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainMax95BpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainMax95BpsDataRequest::getTimePoint()const
{
	return timePoint_;
}

void DescribeDomainMax95BpsDataRequest::setTimePoint(const std::string& timePoint)
{
	timePoint_ = timePoint;
	setParameter("TimePoint", timePoint);
}

