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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYACCOUNTMASKINGPRIVILEGEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYACCOUNTMASKINGPRIVILEGEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT ModifyAccountMaskingPrivilegeRequest : public RpcServiceRequest {
public:
	ModifyAccountMaskingPrivilegeRequest();
	~ModifyAccountMaskingPrivilegeRequest();
	std::string getDBInstanceName() const;
	void setDBInstanceName(const std::string &dBInstanceName);
	std::string getExpireTime() const;
	void setExpireTime(const std::string &expireTime);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getPrivilege() const;
	void setPrivilege(const std::string &privilege);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	std::string getUserName() const;
	void setUserName(const std::string &userName);

private:
	std::string dBInstanceName_;
	std::string expireTime_;
	long resourceOwnerId_;
	std::string resourceOwnerAccount_;
	std::string privilege_;
	std::string ownerId_;
	std::string userName_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYACCOUNTMASKINGPRIVILEGEREQUEST_H_
