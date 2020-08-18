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

#include <alibabacloud/onsmqtt/model/BatchQuerySessionByClientIdsRequest.h>

using AlibabaCloud::OnsMqtt::Model::BatchQuerySessionByClientIdsRequest;

BatchQuerySessionByClientIdsRequest::BatchQuerySessionByClientIdsRequest() :
	RpcServiceRequest("onsmqtt", "2020-04-20", "BatchQuerySessionByClientIds")
{
	setMethod(HttpRequest::Method::Post);
}

BatchQuerySessionByClientIdsRequest::~BatchQuerySessionByClientIdsRequest()
{}

std::vector<std::string> BatchQuerySessionByClientIdsRequest::getClientIdList()const
{
	return clientIdList_;
}

void BatchQuerySessionByClientIdsRequest::setClientIdList(const std::vector<std::string>& clientIdList)
{
	clientIdList_ = clientIdList;
	for(int dep1 = 0; dep1!= clientIdList.size(); dep1++) {
		setParameter("ClientIdList."+ std::to_string(dep1), clientIdList.at(dep1));
	}
}

std::string BatchQuerySessionByClientIdsRequest::getInstanceId()const
{
	return instanceId_;
}

void BatchQuerySessionByClientIdsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

