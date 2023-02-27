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

#include <alibabacloud/ice/model/UpdateLiveRecordTemplateRequest.h>

using AlibabaCloud::ICE::Model::UpdateLiveRecordTemplateRequest;

UpdateLiveRecordTemplateRequest::UpdateLiveRecordTemplateRequest()
    : RpcServiceRequest("ice", "2020-11-09", "UpdateLiveRecordTemplate") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLiveRecordTemplateRequest::~UpdateLiveRecordTemplateRequest() {}

std::string UpdateLiveRecordTemplateRequest::getTemplateId() const {
  return templateId_;
}

void UpdateLiveRecordTemplateRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setBodyParameter(std::string("TemplateId"), templateId);
}

std::vector<UpdateLiveRecordTemplateRequest::RecordFormat> UpdateLiveRecordTemplateRequest::getRecordFormat() const {
  return recordFormat_;
}

void UpdateLiveRecordTemplateRequest::setRecordFormat(const std::vector<UpdateLiveRecordTemplateRequest::RecordFormat> &recordFormat) {
  recordFormat_ = recordFormat;
  for(int dep1 = 0; dep1 != recordFormat.size(); dep1++) {
    setBodyParameter(std::string("RecordFormat") + "." + std::to_string(dep1 + 1) + ".SliceOssObjectPrefix", recordFormat[dep1].sliceOssObjectPrefix);
    setBodyParameter(std::string("RecordFormat") + "." + std::to_string(dep1 + 1) + ".SliceDuration", std::to_string(recordFormat[dep1].sliceDuration));
    setBodyParameter(std::string("RecordFormat") + "." + std::to_string(dep1 + 1) + ".Format", recordFormat[dep1].format);
    setBodyParameter(std::string("RecordFormat") + "." + std::to_string(dep1 + 1) + ".OssObjectPrefix", recordFormat[dep1].ossObjectPrefix);
    setBodyParameter(std::string("RecordFormat") + "." + std::to_string(dep1 + 1) + ".CycleDuration", std::to_string(recordFormat[dep1].cycleDuration));
  }
}

std::string UpdateLiveRecordTemplateRequest::getName() const {
  return name_;
}

void UpdateLiveRecordTemplateRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

