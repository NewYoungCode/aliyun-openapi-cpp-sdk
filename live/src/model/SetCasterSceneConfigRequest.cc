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

#include <alibabacloud/live/model/SetCasterSceneConfigRequest.h>

using AlibabaCloud::Live::Model::SetCasterSceneConfigRequest;

SetCasterSceneConfigRequest::SetCasterSceneConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "SetCasterSceneConfig")
{}

SetCasterSceneConfigRequest::~SetCasterSceneConfigRequest()
{}

std::vector<std::string> SetCasterSceneConfigRequest::getComponentId()const
{
	return componentId_;
}

void SetCasterSceneConfigRequest::setComponentId(const std::vector<std::string>& componentId)
{
	componentId_ = componentId;
	for(int i = 0; i!= componentId.size(); i++)
		setCoreParameter("ComponentId."+ std::to_string(i), componentId.at(i));
}

std::string SetCasterSceneConfigRequest::getRegionId()const
{
	return regionId_;
}

void SetCasterSceneConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SetCasterSceneConfigRequest::getCasterId()const
{
	return casterId_;
}

void SetCasterSceneConfigRequest::setCasterId(const std::string& casterId)
{
	casterId_ = casterId;
	setCoreParameter("CasterId", casterId);
}

std::string SetCasterSceneConfigRequest::getSceneId()const
{
	return sceneId_;
}

void SetCasterSceneConfigRequest::setSceneId(const std::string& sceneId)
{
	sceneId_ = sceneId;
	setCoreParameter("SceneId", sceneId);
}

long SetCasterSceneConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetCasterSceneConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SetCasterSceneConfigRequest::getLayoutId()const
{
	return layoutId_;
}

void SetCasterSceneConfigRequest::setLayoutId(const std::string& layoutId)
{
	layoutId_ = layoutId;
	setCoreParameter("LayoutId", layoutId);
}

