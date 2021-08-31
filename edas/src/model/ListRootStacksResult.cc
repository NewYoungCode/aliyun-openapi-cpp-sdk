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

#include <alibabacloud/edas/model/ListRootStacksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListRootStacksResult::ListRootStacksResult() :
	ServiceResult()
{}

ListRootStacksResult::ListRootStacksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRootStacksResult::~ListRootStacksResult()
{}

void ListRootStacksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	auto allResultNode = dataNode["Result"]["RootStack"];
	for (auto dataNodeResultRootStack : allResultNode)
	{
		Data::RootStack rootStackObject;
		auto allChildrenNode = dataNodeResultRootStack["Children"]["ChildStack"];
		for (auto dataNodeResultRootStackChildrenChildStack : allChildrenNode)
		{
			Data::RootStack::ChildStack childrenObject;
			if(!dataNodeResultRootStackChildrenChildStack["Id"].isNull())
				childrenObject.id = std::stol(dataNodeResultRootStackChildrenChildStack["Id"].asString());
			if(!dataNodeResultRootStackChildrenChildStack["Name"].isNull())
				childrenObject.name = dataNodeResultRootStackChildrenChildStack["Name"].asString();
			if(!dataNodeResultRootStackChildrenChildStack["Icon"].isNull())
				childrenObject.icon = dataNodeResultRootStackChildrenChildStack["Icon"].asString();
			if(!dataNodeResultRootStackChildrenChildStack["Comment"].isNull())
				childrenObject.comment = dataNodeResultRootStackChildrenChildStack["Comment"].asString();
			rootStackObject.children.push_back(childrenObject);
		}
		auto rootNode = value["Root"];
		if(!rootNode["Id"].isNull())
			rootStackObject.root.id = std::stol(rootNode["Id"].asString());
		if(!rootNode["Name"].isNull())
			rootStackObject.root.name = rootNode["Name"].asString();
		data_.result.push_back(rootStackObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());

}

std::string ListRootStacksResult::getMessage()const
{
	return message_;
}

ListRootStacksResult::Data ListRootStacksResult::getData()const
{
	return data_;
}

int ListRootStacksResult::getCode()const
{
	return code_;
}

