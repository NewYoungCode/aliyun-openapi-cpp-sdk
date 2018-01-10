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

#include <alibabacloud/rds/model/CreateDiagnosticReportRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

CreateDiagnosticReportRequest::CreateDiagnosticReportRequest() :
	RdsRequest("CreateDiagnosticReport")
{}

CreateDiagnosticReportRequest::~CreateDiagnosticReportRequest()
{}

std::string CreateDiagnosticReportRequest::getEndTime()const
{
	return endTime_;
}

void CreateDiagnosticReportRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string CreateDiagnosticReportRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CreateDiagnosticReportRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string CreateDiagnosticReportRequest::getStartTime()const
{
	return startTime_;
}

void CreateDiagnosticReportRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string CreateDiagnosticReportRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDiagnosticReportRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

