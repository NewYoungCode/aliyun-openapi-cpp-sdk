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

#include <alibabacloud/dcdn/model/DescribeDcdnAclFieldsRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnAclFieldsRequest;

DescribeDcdnAclFieldsRequest::DescribeDcdnAclFieldsRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnAclFields")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDcdnAclFieldsRequest::~DescribeDcdnAclFieldsRequest()
{}

std::string DescribeDcdnAclFieldsRequest::getLang()const
{
	return lang_;
}

void DescribeDcdnAclFieldsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

long DescribeDcdnAclFieldsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnAclFieldsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

