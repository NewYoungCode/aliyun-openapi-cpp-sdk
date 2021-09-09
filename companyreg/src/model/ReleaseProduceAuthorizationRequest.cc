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

#include <alibabacloud/companyreg/model/ReleaseProduceAuthorizationRequest.h>

using AlibabaCloud::Companyreg::Model::ReleaseProduceAuthorizationRequest;

ReleaseProduceAuthorizationRequest::ReleaseProduceAuthorizationRequest() :
	RpcServiceRequest("companyreg", "2020-03-06", "ReleaseProduceAuthorization")
{
	setMethod(HttpRequest::Method::Post);
}

ReleaseProduceAuthorizationRequest::~ReleaseProduceAuthorizationRequest()
{}

std::string ReleaseProduceAuthorizationRequest::getBizType()const
{
	return bizType_;
}

void ReleaseProduceAuthorizationRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setBodyParameter("BizType", bizType);
}

std::string ReleaseProduceAuthorizationRequest::getAuthorizedUserId()const
{
	return authorizedUserId_;
}

void ReleaseProduceAuthorizationRequest::setAuthorizedUserId(const std::string& authorizedUserId)
{
	authorizedUserId_ = authorizedUserId;
	setBodyParameter("AuthorizedUserId", authorizedUserId);
}

std::string ReleaseProduceAuthorizationRequest::getBizId()const
{
	return bizId_;
}

void ReleaseProduceAuthorizationRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setBodyParameter("BizId", bizId);
}

