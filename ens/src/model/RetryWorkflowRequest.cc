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

#include <alibabacloud/ens/model/RetryWorkflowRequest.h>

using AlibabaCloud::Ens::Model::RetryWorkflowRequest;

RetryWorkflowRequest::RetryWorkflowRequest()
    : RpcServiceRequest("ens", "2017-11-10", "RetryWorkflow") {
  setMethod(HttpRequest::Method::Post);
}

RetryWorkflowRequest::~RetryWorkflowRequest() {}

std::vector<RetryWorkflowRequest::std::string> RetryWorkflowRequest::getWorkflowIds() const {
  return workflowIds_;
}

void RetryWorkflowRequest::setWorkflowIds(const std::vector<RetryWorkflowRequest::std::string> &workflowIds) {
  workflowIds_ = workflowIds;
  for(int dep1 = 0; dep1 != workflowIds.size(); dep1++) {
    setParameter(std::string("WorkflowIds") + "." + std::to_string(dep1 + 1), workflowIds[dep1]);
  }
}

