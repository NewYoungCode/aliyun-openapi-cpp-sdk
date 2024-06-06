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

#include <alibabacloud/csas/model/ListIdpDepartmentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListIdpDepartmentsResult::ListIdpDepartmentsResult() :
	ServiceResult()
{}

ListIdpDepartmentsResult::ListIdpDepartmentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIdpDepartmentsResult::~ListIdpDepartmentsResult()
{}

void ListIdpDepartmentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalNum"].isNull())
		data_.totalNum = std::stol(dataNode["TotalNum"].asString());
	auto allDataListNode = dataNode["DataList"]["DataListItem"];
	for (auto dataNodeDataListDataListItem : allDataListNode)
	{
		Data::DataListItem dataListItemObject;
		if(!dataNodeDataListDataListItem["Id"].isNull())
			dataListItemObject.id = dataNodeDataListDataListItem["Id"].asString();
		if(!dataNodeDataListDataListItem["Name"].isNull())
			dataListItemObject.name = dataNodeDataListDataListItem["Name"].asString();
		if(!dataNodeDataListDataListItem["IdpConfigId"].isNull())
			dataListItemObject.idpConfigId = dataNodeDataListDataListItem["IdpConfigId"].asString();
		data_.dataList.push_back(dataListItemObject);
	}

}

ListIdpDepartmentsResult::Data ListIdpDepartmentsResult::getData()const
{
	return data_;
}

