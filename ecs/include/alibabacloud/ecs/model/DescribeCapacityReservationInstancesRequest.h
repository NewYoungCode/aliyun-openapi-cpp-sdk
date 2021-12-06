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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBECAPACITYRESERVATIONINSTANCESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBECAPACITYRESERVATIONINSTANCESREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeCapacityReservationInstancesRequest : public RpcServiceRequest {
public:
	DescribeCapacityReservationInstancesRequest();
	~DescribeCapacityReservationInstancesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getPrivatePoolOptionsId() const;
	void setPrivatePoolOptionsId(const std::string &privatePoolOptionsId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getPackageType() const;
	void setPackageType(const std::string &packageType);

private:
	long resourceOwnerId_;
	std::string regionId_;
	std::string nextToken_;
	std::string privatePoolOptionsId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	int maxResults_;
	std::string packageType_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBECAPACITYRESERVATIONINSTANCESREQUEST_H_
