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

#include <alibabacloud/outboundbot/model/DownloadRecordingRequest.h>

using AlibabaCloud::OutboundBot::Model::DownloadRecordingRequest;

DownloadRecordingRequest::DownloadRecordingRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "DownloadRecording") {
  setMethod(HttpRequest::Method::Post);
}

DownloadRecordingRequest::~DownloadRecordingRequest() {}

bool DownloadRecordingRequest::getNeedVoiceSliceRecording() const {
  return needVoiceSliceRecording_;
}

void DownloadRecordingRequest::setNeedVoiceSliceRecording(bool needVoiceSliceRecording) {
  needVoiceSliceRecording_ = needVoiceSliceRecording;
  setParameter(std::string("NeedVoiceSliceRecording"), needVoiceSliceRecording ? "true" : "false");
}

std::string DownloadRecordingRequest::getInstanceId() const {
  return instanceId_;
}

void DownloadRecordingRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DownloadRecordingRequest::getTaskId() const {
  return taskId_;
}

void DownloadRecordingRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

