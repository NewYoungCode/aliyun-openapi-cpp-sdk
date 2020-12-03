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

#include <alibabacloud/dts/model/DescribeEndpointSwitchStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeEndpointSwitchStatusResult::DescribeEndpointSwitchStatusResult() :
	ServiceResult()
{}

DescribeEndpointSwitchStatusResult::DescribeEndpointSwitchStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEndpointSwitchStatusResult::~DescribeEndpointSwitchStatusResult()
{}

void DescribeEndpointSwitchStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

std::string DescribeEndpointSwitchStatusResult::getStatus()const
{
	return status_;
}

std::string DescribeEndpointSwitchStatusResult::getErrMessage()const
{
	return errMessage_;
}

std::string DescribeEndpointSwitchStatusResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeEndpointSwitchStatusResult::getSuccess()const
{
	return success_;
}

std::string DescribeEndpointSwitchStatusResult::getErrCode()const
{
	return errCode_;
}
