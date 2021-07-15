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

#include <alibabacloud/alb/model/UpdateServerGroupAttributeRequest.h>

using AlibabaCloud::Alb::Model::UpdateServerGroupAttributeRequest;

UpdateServerGroupAttributeRequest::UpdateServerGroupAttributeRequest()
    : RpcServiceRequest("alb", "2020-06-16", "UpdateServerGroupAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateServerGroupAttributeRequest::~UpdateServerGroupAttributeRequest() {}

std::string UpdateServerGroupAttributeRequest::getServerGroupName() const {
  return serverGroupName_;
}

void UpdateServerGroupAttributeRequest::setServerGroupName(const std::string &serverGroupName) {
  serverGroupName_ = serverGroupName;
  setParameter(std::string("ServerGroupName"), serverGroupName);
}

std::string UpdateServerGroupAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateServerGroupAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

UpdateServerGroupAttributeRequest::HealthCheckConfig UpdateServerGroupAttributeRequest::getHealthCheckConfig() const {
  return healthCheckConfig_;
}

void UpdateServerGroupAttributeRequest::setHealthCheckConfig(const UpdateServerGroupAttributeRequest::HealthCheckConfig &healthCheckConfig) {
  healthCheckConfig_ = healthCheckConfig;
  for(int dep1 = 0; dep1 != healthCheckConfig.healthCheckCodes.size(); dep1++) {
    setParameter(std::string("HealthCheckConfig") + ".HealthCheckCodes." + std::to_string(dep1 + 1), healthCheckConfig.healthCheckCodes[dep1]);
  }
  setParameter(std::string("HealthCheckConfig") + ".HealthCheckEnabled", healthCheckConfig.healthCheckEnabled ? "true" : "false");
  setParameter(std::string("HealthCheckConfig") + ".HealthCheckTimeout", std::to_string(healthCheckConfig.healthCheckTimeout));
  setParameter(std::string("HealthCheckConfig") + ".HealthCheckMethod", healthCheckConfig.healthCheckMethod);
  setParameter(std::string("HealthCheckConfig") + ".HealthCheckHost", healthCheckConfig.healthCheckHost);
  setParameter(std::string("HealthCheckConfig") + ".HealthCheckProtocol", healthCheckConfig.healthCheckProtocol);
  setParameter(std::string("HealthCheckConfig") + ".UnhealthyThreshold", std::to_string(healthCheckConfig.unhealthyThreshold));
  setParameter(std::string("HealthCheckConfig") + ".HealthyThreshold", std::to_string(healthCheckConfig.healthyThreshold));
  setParameter(std::string("HealthCheckConfig") + ".HealthCheckTcpFastCloseEnabled", healthCheckConfig.healthCheckTcpFastCloseEnabled ? "true" : "false");
  setParameter(std::string("HealthCheckConfig") + ".HealthCheckPath", healthCheckConfig.healthCheckPath);
  setParameter(std::string("HealthCheckConfig") + ".HealthCheckInterval", std::to_string(healthCheckConfig.healthCheckInterval));
  for(int dep1 = 0; dep1 != healthCheckConfig.healthCheckHttpCodes.size(); dep1++) {
    setParameter(std::string("HealthCheckConfig") + ".HealthCheckHttpCodes." + std::to_string(dep1 + 1), healthCheckConfig.healthCheckHttpCodes[dep1]);
  }
  setParameter(std::string("HealthCheckConfig") + ".HealthCheckHttpVersion", healthCheckConfig.healthCheckHttpVersion);
  setParameter(std::string("HealthCheckConfig") + ".HealthCheckConnectPort", std::to_string(healthCheckConfig.healthCheckConnectPort));
}

std::string UpdateServerGroupAttributeRequest::getScheduler() const {
  return scheduler_;
}

void UpdateServerGroupAttributeRequest::setScheduler(const std::string &scheduler) {
  scheduler_ = scheduler;
  setParameter(std::string("Scheduler"), scheduler);
}

std::string UpdateServerGroupAttributeRequest::getServerGroupId() const {
  return serverGroupId_;
}

void UpdateServerGroupAttributeRequest::setServerGroupId(const std::string &serverGroupId) {
  serverGroupId_ = serverGroupId;
  setParameter(std::string("ServerGroupId"), serverGroupId);
}

UpdateServerGroupAttributeRequest::StickySessionConfig UpdateServerGroupAttributeRequest::getStickySessionConfig() const {
  return stickySessionConfig_;
}

void UpdateServerGroupAttributeRequest::setStickySessionConfig(const UpdateServerGroupAttributeRequest::StickySessionConfig &stickySessionConfig) {
  stickySessionConfig_ = stickySessionConfig;
  setParameter(std::string("StickySessionConfig") + ".StickySessionEnabled", stickySessionConfig.stickySessionEnabled ? "true" : "false");
  setParameter(std::string("StickySessionConfig") + ".Cookie", stickySessionConfig.cookie);
  setParameter(std::string("StickySessionConfig") + ".CookieTimeout", std::to_string(stickySessionConfig.cookieTimeout));
  setParameter(std::string("StickySessionConfig") + ".StickySessionType", stickySessionConfig.stickySessionType);
}

bool UpdateServerGroupAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateServerGroupAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

