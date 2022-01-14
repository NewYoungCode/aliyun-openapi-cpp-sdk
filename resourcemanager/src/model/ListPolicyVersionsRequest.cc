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

#include <alibabacloud/resourcemanager/model/ListPolicyVersionsRequest.h>

using AlibabaCloud::ResourceManager::Model::ListPolicyVersionsRequest;

ListPolicyVersionsRequest::ListPolicyVersionsRequest() :
	RpcServiceRequest("resourcemanager", "2020-03-31", "ListPolicyVersions")
{
	setMethod(HttpRequest::Method::Post);
}

ListPolicyVersionsRequest::~ListPolicyVersionsRequest()
{}

std::string ListPolicyVersionsRequest::getPolicyType()const
{
	return policyType_;
}

void ListPolicyVersionsRequest::setPolicyType(const std::string& policyType)
{
	policyType_ = policyType;
	setParameter("PolicyType", policyType);
}

std::string ListPolicyVersionsRequest::getPolicyName()const
{
	return policyName_;
}

void ListPolicyVersionsRequest::setPolicyName(const std::string& policyName)
{
	policyName_ = policyName;
	setParameter("PolicyName", policyName);
}

