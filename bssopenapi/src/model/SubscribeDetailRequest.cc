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

#include <alibabacloud/bssopenapi/model/SubscribeDetailRequest.h>

using AlibabaCloud::BssOpenApi::Model::SubscribeDetailRequest;

SubscribeDetailRequest::SubscribeDetailRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "SubscribeDetail")
{}

SubscribeDetailRequest::~SubscribeDetailRequest()
{}

long SubscribeDetailRequest::getBucketOwnerId()const
{
	return bucketOwnerId_;
}

void SubscribeDetailRequest::setBucketOwnerId(long bucketOwnerId)
{
	bucketOwnerId_ = bucketOwnerId;
	setCoreParameter("BucketOwnerId", std::to_string(bucketOwnerId));
}

std::vector<std::string> SubscribeDetailRequest::getSubscribeType()const
{
	return subscribeType_;
}

void SubscribeDetailRequest::setSubscribeType(const std::vector<std::string>& subscribeType)
{
	subscribeType_ = subscribeType;
	for(int i = 0; i!= subscribeType.size(); i++)
		setCoreParameter("SubscribeType."+ std::to_string(i), subscribeType.at(i));
}

std::string SubscribeDetailRequest::getSubscribeBucket()const
{
	return subscribeBucket_;
}

void SubscribeDetailRequest::setSubscribeBucket(const std::string& subscribeBucket)
{
	subscribeBucket_ = subscribeBucket;
	setCoreParameter("SubscribeBucket", subscribeBucket);
}

