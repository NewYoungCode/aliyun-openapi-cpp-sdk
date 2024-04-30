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

#include <alibabacloud/dcdn/model/DescribeDcdnWafUsageDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnWafUsageDataRequest;

DescribeDcdnWafUsageDataRequest::DescribeDcdnWafUsageDataRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnWafUsageData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnWafUsageDataRequest::~DescribeDcdnWafUsageDataRequest() {}

std::string DescribeDcdnWafUsageDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnWafUsageDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDcdnWafUsageDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnWafUsageDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnWafUsageDataRequest::getInterval() const {
  return interval_;
}

void DescribeDcdnWafUsageDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeDcdnWafUsageDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnWafUsageDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDcdnWafUsageDataRequest::getSplitBy() const {
  return splitBy_;
}

void DescribeDcdnWafUsageDataRequest::setSplitBy(const std::string &splitBy) {
  splitBy_ = splitBy;
  setParameter(std::string("SplitBy"), splitBy);
}

