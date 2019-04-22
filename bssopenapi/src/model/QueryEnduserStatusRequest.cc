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

#include <alibabacloud/bssopenapi/model/QueryEnduserStatusRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryEnduserStatusRequest;

QueryEnduserStatusRequest::QueryEnduserStatusRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "QueryEnduserStatus")
{}

QueryEnduserStatusRequest::~QueryEnduserStatusRequest()
{}

long QueryEnduserStatusRequest::getUid()const
{
	return uid_;
}

void QueryEnduserStatusRequest::setUid(long uid)
{
	uid_ = uid;
	setCoreParameter("Uid", std::to_string(uid));
}

std::string QueryEnduserStatusRequest::getPrimaryAccount()const
{
	return primaryAccount_;
}

void QueryEnduserStatusRequest::setPrimaryAccount(const std::string& primaryAccount)
{
	primaryAccount_ = primaryAccount;
	setCoreParameter("PrimaryAccount", primaryAccount);
}

std::string QueryEnduserStatusRequest::getStatus()const
{
	return status_;
}

void QueryEnduserStatusRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

std::string QueryEnduserStatusRequest::getBusinessType()const
{
	return businessType_;
}

void QueryEnduserStatusRequest::setBusinessType(const std::string& businessType)
{
	businessType_ = businessType;
	setCoreParameter("BusinessType", businessType);
}

