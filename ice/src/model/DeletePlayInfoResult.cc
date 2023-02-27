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

#include <alibabacloud/ice/model/DeletePlayInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

DeletePlayInfoResult::DeletePlayInfoResult() :
	ServiceResult()
{}

DeletePlayInfoResult::DeletePlayInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeletePlayInfoResult::~DeletePlayInfoResult()
{}

void DeletePlayInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIgnoredList = value["IgnoredList"]["ignoredUrl"];
	for (const auto &item : allIgnoredList)
		ignoredList_.push_back(item.asString());
	auto allForbiddenList = value["ForbiddenList"]["forbiddenUrl"];
	for (const auto &item : allForbiddenList)
		forbiddenList_.push_back(item.asString());

}

std::vector<std::string> DeletePlayInfoResult::getIgnoredList()const
{
	return ignoredList_;
}

std::vector<std::string> DeletePlayInfoResult::getForbiddenList()const
{
	return forbiddenList_;
}

