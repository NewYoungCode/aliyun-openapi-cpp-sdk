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

#include <alibabacloud/ecs/model/DescribeSnapshotPackageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeSnapshotPackageResult::DescribeSnapshotPackageResult() :
	ServiceResult()
{}

DescribeSnapshotPackageResult::DescribeSnapshotPackageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSnapshotPackageResult::~DescribeSnapshotPackageResult()
{}

void DescribeSnapshotPackageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allSnapshotPackages = value["SnapshotPackages"]["SnapshotPackage"];
	for (auto value : allSnapshotPackages)
	{
		SnapshotPackage snapshotPackageObject;
		snapshotPackageObject.startTime = value["StartTime"].asString();
		snapshotPackageObject.endTime = value["EndTime"].asString();
		snapshotPackageObject.initCapacity = std::stol(value["InitCapacity"].asString());
		snapshotPackageObject.displayName = value["DisplayName"].asString();
		snapshotPackages_.push_back(snapshotPackageObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeSnapshotPackageResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeSnapshotPackageResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeSnapshotPackageResult::getPageSize()const
{
	return pageSize_;
}

void DescribeSnapshotPackageResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeSnapshotPackageResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSnapshotPackageResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

