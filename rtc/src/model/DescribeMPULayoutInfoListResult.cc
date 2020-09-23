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

#include <alibabacloud/rtc/model/DescribeMPULayoutInfoListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

DescribeMPULayoutInfoListResult::DescribeMPULayoutInfoListResult() :
	ServiceResult()
{}

DescribeMPULayoutInfoListResult::DescribeMPULayoutInfoListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMPULayoutInfoListResult::~DescribeMPULayoutInfoListResult()
{}

void DescribeMPULayoutInfoListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLayoutsNode = value["Layouts"]["Layout"];
	for (auto valueLayoutsLayout : allLayoutsNode)
	{
		Layout layoutsObject;
		if(!valueLayoutsLayout["LayoutId"].isNull())
			layoutsObject.layoutId = std::stol(valueLayoutsLayout["LayoutId"].asString());
		if(!valueLayoutsLayout["Name"].isNull())
			layoutsObject.name = valueLayoutsLayout["Name"].asString();
		if(!valueLayoutsLayout["AudioMixCount"].isNull())
			layoutsObject.audioMixCount = std::stoi(valueLayoutsLayout["AudioMixCount"].asString());
		auto allPanesNode = allLayoutsNode["Panes"]["PanesItem"];
		for (auto allLayoutsNodePanesPanesItem : allPanesNode)
		{
			Layout::PanesItem panesObject;
			if(!allLayoutsNodePanesPanesItem["PaneId"].isNull())
				panesObject.paneId = std::stoi(allLayoutsNodePanesPanesItem["PaneId"].asString());
			if(!allLayoutsNodePanesPanesItem["MajorPane"].isNull())
				panesObject.majorPane = std::stoi(allLayoutsNodePanesPanesItem["MajorPane"].asString());
			if(!allLayoutsNodePanesPanesItem["X"].isNull())
				panesObject.x = std::stof(allLayoutsNodePanesPanesItem["X"].asString());
			if(!allLayoutsNodePanesPanesItem["Y"].isNull())
				panesObject.y = std::stof(allLayoutsNodePanesPanesItem["Y"].asString());
			if(!allLayoutsNodePanesPanesItem["Width"].isNull())
				panesObject.width = std::stof(allLayoutsNodePanesPanesItem["Width"].asString());
			if(!allLayoutsNodePanesPanesItem["Height"].isNull())
				panesObject.height = std::stof(allLayoutsNodePanesPanesItem["Height"].asString());
			if(!allLayoutsNodePanesPanesItem["ZOrder"].isNull())
				panesObject.zOrder = std::stoi(allLayoutsNodePanesPanesItem["ZOrder"].asString());
			layoutsObject.panes.push_back(panesObject);
		}
		layouts_.push_back(layoutsObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stol(value["TotalNum"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stol(value["TotalPage"].asString());

}

long DescribeMPULayoutInfoListResult::getTotalNum()const
{
	return totalNum_;
}

std::vector<DescribeMPULayoutInfoListResult::Layout> DescribeMPULayoutInfoListResult::getLayouts()const
{
	return layouts_;
}

long DescribeMPULayoutInfoListResult::getTotalPage()const
{
	return totalPage_;
}
