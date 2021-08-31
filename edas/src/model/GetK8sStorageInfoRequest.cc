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

#include <alibabacloud/edas/model/GetK8sStorageInfoRequest.h>

using AlibabaCloud::Edas::Model::GetK8sStorageInfoRequest;

GetK8sStorageInfoRequest::GetK8sStorageInfoRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/acs/k8s_storage");
	setMethod(HttpRequest::Method::Get);
}

GetK8sStorageInfoRequest::~GetK8sStorageInfoRequest()
{}

std::string GetK8sStorageInfoRequest::getClusterId()const
{
	return clusterId_;
}

void GetK8sStorageInfoRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

