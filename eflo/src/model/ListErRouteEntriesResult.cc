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

#include <alibabacloud/eflo/model/ListErRouteEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

ListErRouteEntriesResult::ListErRouteEntriesResult() :
	ServiceResult()
{}

ListErRouteEntriesResult::ListErRouteEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListErRouteEntriesResult::~ListErRouteEntriesResult()
{}

void ListErRouteEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["Total"].isNull())
		content_.total = std::stol(contentNode["Total"].asString());
	auto allDataNode = contentNode["Data"]["DataItem"];
	for (auto contentNodeDataDataItem : allDataNode)
	{
		Content::DataItem dataItemObject;
		if(!contentNodeDataDataItem["ErId"].isNull())
			dataItemObject.erId = contentNodeDataDataItem["ErId"].asString();
		if(!contentNodeDataDataItem["TenantId"].isNull())
			dataItemObject.tenantId = contentNodeDataDataItem["TenantId"].asString();
		if(!contentNodeDataDataItem["ResourceTenantId"].isNull())
			dataItemObject.resourceTenantId = contentNodeDataDataItem["ResourceTenantId"].asString();
		if(!contentNodeDataDataItem["RegionId"].isNull())
			dataItemObject.regionId = contentNodeDataDataItem["RegionId"].asString();
		if(!contentNodeDataDataItem["ErRouteEntryId"].isNull())
			dataItemObject.erRouteEntryId = contentNodeDataDataItem["ErRouteEntryId"].asString();
		if(!contentNodeDataDataItem["DestinationCidrBlock"].isNull())
			dataItemObject.destinationCidrBlock = contentNodeDataDataItem["DestinationCidrBlock"].asString();
		if(!contentNodeDataDataItem["NextHopType"].isNull())
			dataItemObject.nextHopType = contentNodeDataDataItem["NextHopType"].asString();
		if(!contentNodeDataDataItem["NextHopId"].isNull())
			dataItemObject.nextHopId = contentNodeDataDataItem["NextHopId"].asString();
		if(!contentNodeDataDataItem["RouteType"].isNull())
			dataItemObject.routeType = contentNodeDataDataItem["RouteType"].asString();
		if(!contentNodeDataDataItem["Status"].isNull())
			dataItemObject.status = contentNodeDataDataItem["Status"].asString();
		if(!contentNodeDataDataItem["GmtModified"].isNull())
			dataItemObject.gmtModified = contentNodeDataDataItem["GmtModified"].asString();
		content_.data.push_back(dataItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListErRouteEntriesResult::getMessage()const
{
	return message_;
}

ListErRouteEntriesResult::Content ListErRouteEntriesResult::getContent()const
{
	return content_;
}

int ListErRouteEntriesResult::getCode()const
{
	return code_;
}

