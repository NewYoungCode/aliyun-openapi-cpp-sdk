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

#include <alibabacloud/mseap/model/GetRedisValueRequest.h>

using AlibabaCloud::Mseap::Model::GetRedisValueRequest;

GetRedisValueRequest::GetRedisValueRequest()
    : RpcServiceRequest("mseap", "2021-01-18", "GetRedisValue") {
  setMethod(HttpRequest::Method::Post);
}

GetRedisValueRequest::~GetRedisValueRequest() {}

long GetRedisValueRequest::getUserCallerParentId() const {
  return userCallerParentId_;
}

void GetRedisValueRequest::setUserCallerParentId(long userCallerParentId) {
  userCallerParentId_ = userCallerParentId;
  setParameter(std::string("UserCallerParentId"), std::to_string(userCallerParentId));
}

std::string GetRedisValueRequest::getApiType() const {
  return apiType_;
}

void GetRedisValueRequest::setApiType(const std::string &apiType) {
  apiType_ = apiType;
  setParameter(std::string("ApiType"), apiType);
}

long GetRedisValueRequest::getTimeout() const {
  return timeout_;
}

void GetRedisValueRequest::setTimeout(long timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

bool GetRedisValueRequest::getUserMfaPresent() const {
  return userMfaPresent_;
}

void GetRedisValueRequest::setUserMfaPresent(bool userMfaPresent) {
  userMfaPresent_ = userMfaPresent;
  setParameter(std::string("UserMfaPresent"), userMfaPresent ? "true" : "false");
}

std::string GetRedisValueRequest::getUserKp() const {
  return userKp_;
}

void GetRedisValueRequest::setUserKp(const std::string &userKp) {
  userKp_ = userKp;
  setParameter(std::string("UserKp"), userKp);
}

std::string GetRedisValueRequest::getLang() const {
  return lang_;
}

void GetRedisValueRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string GetRedisValueRequest::getValue() const {
  return value_;
}

void GetRedisValueRequest::setValue(const std::string &value) {
  value_ = value;
  setParameter(std::string("Value"), value);
}

std::string GetRedisValueRequest::getKey() const {
  return key_;
}

void GetRedisValueRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

std::string GetRedisValueRequest::getUserCallerType() const {
  return userCallerType_;
}

void GetRedisValueRequest::setUserCallerType(const std::string &userCallerType) {
  userCallerType_ = userCallerType;
  setParameter(std::string("UserCallerType"), userCallerType);
}

std::string GetRedisValueRequest::getUserSecurityToken() const {
  return userSecurityToken_;
}

void GetRedisValueRequest::setUserSecurityToken(const std::string &userSecurityToken) {
  userSecurityToken_ = userSecurityToken;
  setParameter(std::string("UserSecurityToken"), userSecurityToken);
}

std::string GetRedisValueRequest::getUserAccessKeyId() const {
  return userAccessKeyId_;
}

void GetRedisValueRequest::setUserAccessKeyId(const std::string &userAccessKeyId) {
  userAccessKeyId_ = userAccessKeyId;
  setParameter(std::string("UserAccessKeyId"), userAccessKeyId);
}

std::string GetRedisValueRequest::getAliyunKp() const {
  return aliyunKp_;
}

void GetRedisValueRequest::setAliyunKp(const std::string &aliyunKp) {
  aliyunKp_ = aliyunKp;
  setParameter(std::string("AliyunKp"), aliyunKp);
}

std::string GetRedisValueRequest::getUserBid() const {
  return userBid_;
}

void GetRedisValueRequest::setUserBid(const std::string &userBid) {
  userBid_ = userBid;
  setParameter(std::string("UserBid"), userBid);
}

std::string GetRedisValueRequest::getOriginalRequest() const {
  return originalRequest_;
}

void GetRedisValueRequest::setOriginalRequest(const std::string &originalRequest) {
  originalRequest_ = originalRequest;
  setParameter(std::string("OriginalRequest"), originalRequest);
}

bool GetRedisValueRequest::getUserCallerSecurityTransport() const {
  return userCallerSecurityTransport_;
}

void GetRedisValueRequest::setUserCallerSecurityTransport(bool userCallerSecurityTransport) {
  userCallerSecurityTransport_ = userCallerSecurityTransport;
  setParameter(std::string("UserCallerSecurityTransport"), userCallerSecurityTransport ? "true" : "false");
}

std::string GetRedisValueRequest::getUserClientIp() const {
  return userClientIp_;
}

void GetRedisValueRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string GetRedisValueRequest::getBid() const {
  return bid_;
}

void GetRedisValueRequest::setBid(const std::string &bid) {
  bid_ = bid;
  setParameter(std::string("Bid"), bid);
}

