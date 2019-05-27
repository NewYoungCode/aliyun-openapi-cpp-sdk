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

#include <alibabacloud/imm/model/DetectQRCodesRequest.h>

using AlibabaCloud::Imm::Model::DetectQRCodesRequest;

DetectQRCodesRequest::DetectQRCodesRequest() :
	RpcServiceRequest("imm", "2017-09-06", "DetectQRCodes")
{}

DetectQRCodesRequest::~DetectQRCodesRequest()
{}

std::string DetectQRCodesRequest::getSrcUris()const
{
	return srcUris_;
}

void DetectQRCodesRequest::setSrcUris(const std::string& srcUris)
{
	srcUris_ = srcUris;
	setCoreParameter("SrcUris", srcUris);
}

std::string DetectQRCodesRequest::getRegionId()const
{
	return regionId_;
}

void DetectQRCodesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DetectQRCodesRequest::getProject()const
{
	return project_;
}

void DetectQRCodesRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string DetectQRCodesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DetectQRCodesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

