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

#include <alibabacloud/ice/model/GetEditingProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetEditingProjectResult::GetEditingProjectResult() :
	ServiceResult()
{}

GetEditingProjectResult::GetEditingProjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEditingProjectResult::~GetEditingProjectResult()
{}

void GetEditingProjectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto projectNode = value["Project"];
	if(!projectNode["ProjectId"].isNull())
		project_.projectId = projectNode["ProjectId"].asString();
	if(!projectNode["Title"].isNull())
		project_.title = projectNode["Title"].asString();
	if(!projectNode["Timeline"].isNull())
		project_.timeline = projectNode["Timeline"].asString();
	if(!projectNode["TemplateId"].isNull())
		project_.templateId = projectNode["TemplateId"].asString();
	if(!projectNode["ClipsParam"].isNull())
		project_.clipsParam = projectNode["ClipsParam"].asString();
	if(!projectNode["Description"].isNull())
		project_.description = projectNode["Description"].asString();
	if(!projectNode["CoverURL"].isNull())
		project_.coverURL = projectNode["CoverURL"].asString();
	if(!projectNode["CreateTime"].isNull())
		project_.createTime = projectNode["CreateTime"].asString();
	if(!projectNode["ModifiedTime"].isNull())
		project_.modifiedTime = projectNode["ModifiedTime"].asString();
	if(!projectNode["Duration"].isNull())
		project_.duration = std::stol(projectNode["Duration"].asString());
	if(!projectNode["Status"].isNull())
		project_.status = projectNode["Status"].asString();
	if(!projectNode["CreateSource"].isNull())
		project_.createSource = projectNode["CreateSource"].asString();
	if(!projectNode["TemplateType"].isNull())
		project_.templateType = projectNode["TemplateType"].asString();
	if(!projectNode["FEExtend"].isNull())
		project_.fEExtend = projectNode["FEExtend"].asString();
	if(!projectNode["ModifiedSource"].isNull())
		project_.modifiedSource = projectNode["ModifiedSource"].asString();
	if(!projectNode["ProjectType"].isNull())
		project_.projectType = projectNode["ProjectType"].asString();
	if(!projectNode["BusinessConfig"].isNull())
		project_.businessConfig = projectNode["BusinessConfig"].asString();
	if(!projectNode["BusinessStatus"].isNull())
		project_.businessStatus = projectNode["BusinessStatus"].asString();
	if(!projectNode["TimelineConvertStatus"].isNull())
		project_.timelineConvertStatus = projectNode["TimelineConvertStatus"].asString();
	if(!projectNode["TimelineConvertErrorMessage"].isNull())
		project_.timelineConvertErrorMessage = projectNode["TimelineConvertErrorMessage"].asString();

}

GetEditingProjectResult::Project GetEditingProjectResult::getProject()const
{
	return project_;
}

