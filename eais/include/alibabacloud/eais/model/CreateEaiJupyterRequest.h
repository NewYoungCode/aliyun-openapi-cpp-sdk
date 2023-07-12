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

#ifndef ALIBABACLOUD_EAIS_MODEL_CREATEEAIJUPYTERREQUEST_H_
#define ALIBABACLOUD_EAIS_MODEL_CREATEEAIJUPYTERREQUEST_H_

#include <alibabacloud/eais/EaisExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eais {
namespace Model {
class ALIBABACLOUD_EAIS_EXPORT CreateEaiJupyterRequest : public RpcServiceRequest {
public:
	struct EnvironmentVar {
		std::string value;
		std::string key;
	};
	CreateEaiJupyterRequest();
	~CreateEaiJupyterRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	std::string getEaisType() const;
	void setEaisType(const std::string &eaisType);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<EnvironmentVar> getEnvironmentVar() const;
	void setEnvironmentVar(const std::vector<EnvironmentVar> &environmentVar);
	std::string getEaisName() const;
	void setEaisName(const std::string &eaisName);

private:
	std::string clientToken_;
	std::string securityGroupId_;
	std::string eaisType_;
	std::string vSwitchId_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::vector<EnvironmentVar> environmentVar_;
	std::string eaisName_;
};
} // namespace Model
} // namespace Eais
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EAIS_MODEL_CREATEEAIJUPYTERREQUEST_H_
