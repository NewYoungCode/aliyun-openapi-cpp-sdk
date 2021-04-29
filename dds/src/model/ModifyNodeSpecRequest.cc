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

#include <alibabacloud/dds/model/ModifyNodeSpecRequest.h>

using AlibabaCloud::Dds::Model::ModifyNodeSpecRequest;

ModifyNodeSpecRequest::ModifyNodeSpecRequest() :
	RpcServiceRequest("dds", "2015-12-01", "ModifyNodeSpec")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyNodeSpecRequest::~ModifyNodeSpecRequest()
{}

long ModifyNodeSpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyNodeSpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyNodeSpecRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyNodeSpecRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

int ModifyNodeSpecRequest::getReadonlyReplicas()const
{
	return readonlyReplicas_;
}

void ModifyNodeSpecRequest::setReadonlyReplicas(int readonlyReplicas)
{
	readonlyReplicas_ = readonlyReplicas;
	setParameter("ReadonlyReplicas", std::to_string(readonlyReplicas));
}

std::string ModifyNodeSpecRequest::getCouponNo()const
{
	return couponNo_;
}

void ModifyNodeSpecRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setParameter("CouponNo", couponNo);
}

std::string ModifyNodeSpecRequest::getNodeClass()const
{
	return nodeClass_;
}

void ModifyNodeSpecRequest::setNodeClass(const std::string& nodeClass)
{
	nodeClass_ = nodeClass;
	setParameter("NodeClass", nodeClass);
}

std::string ModifyNodeSpecRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyNodeSpecRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyNodeSpecRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyNodeSpecRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyNodeSpecRequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void ModifyNodeSpecRequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setParameter("EffectiveTime", effectiveTime);
}

std::string ModifyNodeSpecRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyNodeSpecRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string ModifyNodeSpecRequest::getSwitchTime()const
{
	return switchTime_;
}

void ModifyNodeSpecRequest::setSwitchTime(const std::string& switchTime)
{
	switchTime_ = switchTime;
	setParameter("SwitchTime", switchTime);
}

std::string ModifyNodeSpecRequest::getNodeId()const
{
	return nodeId_;
}

void ModifyNodeSpecRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setParameter("NodeId", nodeId);
}

std::string ModifyNodeSpecRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void ModifyNodeSpecRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setParameter("BusinessInfo", businessInfo);
}

bool ModifyNodeSpecRequest::getAutoPay()const
{
	return autoPay_;
}

void ModifyNodeSpecRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", autoPay ? "true" : "false");
}

std::string ModifyNodeSpecRequest::getFromApp()const
{
	return fromApp_;
}

void ModifyNodeSpecRequest::setFromApp(const std::string& fromApp)
{
	fromApp_ = fromApp;
	setParameter("FromApp", fromApp);
}

std::string ModifyNodeSpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyNodeSpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int ModifyNodeSpecRequest::getNodeStorage()const
{
	return nodeStorage_;
}

void ModifyNodeSpecRequest::setNodeStorage(int nodeStorage)
{
	nodeStorage_ = nodeStorage;
	setParameter("NodeStorage", std::to_string(nodeStorage));
}

std::string ModifyNodeSpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyNodeSpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyNodeSpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyNodeSpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyNodeSpecRequest::getOrderType()const
{
	return orderType_;
}

void ModifyNodeSpecRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setParameter("OrderType", orderType);
}

