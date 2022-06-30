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

#include <alibabacloud/apds/model/CreateSurveyJobOfflineRequest.h>

using AlibabaCloud::Apds::Model::CreateSurveyJobOfflineRequest;

CreateSurveyJobOfflineRequest::CreateSurveyJobOfflineRequest()
    : RoaServiceRequest("apds", "2022-03-31") {
  setResourcePath("/okss-services/winback/add-import-survey-job"};
  setMethod(HttpRequest::Method::Post);
}

CreateSurveyJobOfflineRequest::~CreateSurveyJobOfflineRequest() {}

std::string CreateSurveyJobOfflineRequest::getBody() const {
  return body_;
}

void CreateSurveyJobOfflineRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

string CreateSurveyJobOfflineRequest::getRegionId() const {
  return regionId_;
}

void CreateSurveyJobOfflineRequest::setRegionId(string regionId) {
  regionId_ = regionId;
  setParameter(std::string("regionId"), std::to_string(regionId));
}

