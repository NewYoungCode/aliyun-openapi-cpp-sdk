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

#ifndef ALIBABACLOUD_DEVOPS_RDC_MODEL_DELETEDEVOPSORGANIZATIONMEMBERSREQUEST_H_
#define ALIBABACLOUD_DEVOPS_RDC_MODEL_DELETEDEVOPSORGANIZATIONMEMBERSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/devops-rdc/Devops_rdcExport.h>

namespace AlibabaCloud
{
	namespace Devops_rdc
	{
		namespace Model
		{
			class ALIBABACLOUD_DEVOPS_RDC_EXPORT DeleteDevopsOrganizationMembersRequest : public RpcServiceRequest
			{

			public:
				DeleteDevopsOrganizationMembersRequest();
				~DeleteDevopsOrganizationMembersRequest();

				std::string getRealPk()const;
				void setRealPk(const std::string& realPk);
				std::string getUserId()const;
				void setUserId(const std::string& userId);
				std::string getOrgId()const;
				void setOrgId(const std::string& orgId);

            private:
				std::string realPk_;
				std::string userId_;
				std::string orgId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_RDC_MODEL_DELETEDEVOPSORGANIZATIONMEMBERSREQUEST_H_