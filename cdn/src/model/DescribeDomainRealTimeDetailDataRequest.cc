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

#include <alibabacloud/cdn/model/DescribeDomainRealTimeDetailDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainRealTimeDetailDataRequest;

DescribeDomainRealTimeDetailDataRequest::DescribeDomainRealTimeDetailDataRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainRealTimeDetailData") {
  setMethod(HttpRequest::Method::Get);
}

DescribeDomainRealTimeDetailDataRequest::~DescribeDomainRealTimeDetailDataRequest() {}

std::string DescribeDomainRealTimeDetailDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeDomainRealTimeDetailDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeDomainRealTimeDetailDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainRealTimeDetailDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDomainRealTimeDetailDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeDomainRealTimeDetailDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

std::string DescribeDomainRealTimeDetailDataRequest::getMerge() const {
  return merge_;
}

void DescribeDomainRealTimeDetailDataRequest::setMerge(const std::string &merge) {
  merge_ = merge;
  setParameter(std::string("Merge"), merge);
}

std::string DescribeDomainRealTimeDetailDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainRealTimeDetailDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainRealTimeDetailDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainRealTimeDetailDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDomainRealTimeDetailDataRequest::getMergeLocIsp() const {
  return mergeLocIsp_;
}

void DescribeDomainRealTimeDetailDataRequest::setMergeLocIsp(const std::string &mergeLocIsp) {
  mergeLocIsp_ = mergeLocIsp;
  setParameter(std::string("MergeLocIsp"), mergeLocIsp);
}

long DescribeDomainRealTimeDetailDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainRealTimeDetailDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDomainRealTimeDetailDataRequest::getField() const {
  return field_;
}

void DescribeDomainRealTimeDetailDataRequest::setField(const std::string &field) {
  field_ = field;
  setParameter(std::string("Field"), field);
}

