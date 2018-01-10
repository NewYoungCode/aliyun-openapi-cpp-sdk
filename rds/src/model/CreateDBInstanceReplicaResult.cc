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

#include <alibabacloud/rds/model/CreateDBInstanceReplicaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

CreateDBInstanceReplicaResult::CreateDBInstanceReplicaResult() :
	ServiceResult()
{}

CreateDBInstanceReplicaResult::CreateDBInstanceReplicaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateDBInstanceReplicaResult::~CreateDBInstanceReplicaResult()
{}

void CreateDBInstanceReplicaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	dBInstanceId_ = value["DBInstanceId"].asString();
	orderId_ = std::stol(value["OrderId"].asString());
	replicaId_ = value["ReplicaId"].asString();
	workflowId_ = value["WorkflowId"].asString();

}

std::string CreateDBInstanceReplicaResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CreateDBInstanceReplicaResult::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
}

long CreateDBInstanceReplicaResult::getOrderId()const
{
	return orderId_;
}

void CreateDBInstanceReplicaResult::setOrderId(long orderId)
{
	orderId_ = orderId;
}

std::string CreateDBInstanceReplicaResult::getWorkflowId()const
{
	return workflowId_;
}

void CreateDBInstanceReplicaResult::setWorkflowId(const std::string& workflowId)
{
	workflowId_ = workflowId;
}

std::string CreateDBInstanceReplicaResult::getReplicaId()const
{
	return replicaId_;
}

void CreateDBInstanceReplicaResult::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
}

