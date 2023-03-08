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

#include <alibabacloud/dataworks-public/model/GetQualityRuleRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetQualityRuleRequest;

GetQualityRuleRequest::GetQualityRuleRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetQualityRule") {
  setMethod(HttpRequest::Method::Post);
}

GetQualityRuleRequest::~GetQualityRuleRequest() {}

std::string GetQualityRuleRequest::getProjectName() const {
  return projectName_;
}

void GetQualityRuleRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

long GetQualityRuleRequest::getRuleId() const {
  return ruleId_;
}

void GetQualityRuleRequest::setRuleId(long ruleId) {
  ruleId_ = ruleId;
  setBodyParameter(std::string("RuleId"), std::to_string(ruleId));
}

long GetQualityRuleRequest::getProjectId() const {
  return projectId_;
}

void GetQualityRuleRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

