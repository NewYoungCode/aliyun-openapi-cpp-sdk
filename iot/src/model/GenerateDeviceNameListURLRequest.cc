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

#include <alibabacloud/iot/model/GenerateDeviceNameListURLRequest.h>

using AlibabaCloud::Iot::Model::GenerateDeviceNameListURLRequest;

GenerateDeviceNameListURLRequest::GenerateDeviceNameListURLRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GenerateDeviceNameListURL")
{
	setMethod(HttpRequest::Method::Post);
}

GenerateDeviceNameListURLRequest::~GenerateDeviceNameListURLRequest()
{}

std::string GenerateDeviceNameListURLRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GenerateDeviceNameListURLRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string GenerateDeviceNameListURLRequest::getApiProduct()const
{
	return apiProduct_;
}

void GenerateDeviceNameListURLRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GenerateDeviceNameListURLRequest::getApiRevision()const
{
	return apiRevision_;
}

void GenerateDeviceNameListURLRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

