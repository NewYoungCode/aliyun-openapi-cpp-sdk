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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_SETTRANSFERCALLEEPOOLCONFIGREQUEST_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_SETTRANSFERCALLEEPOOLCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dyvmsapi/DyvmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyvmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYVMSAPI_EXPORT SetTransferCalleePoolConfigRequest : public RpcServiceRequest
			{
			public:
				struct Details
				{
					std::string caller;
					std::string called;
				};

			public:
				SetTransferCalleePoolConfigRequest();
				~SetTransferCalleePoolConfigRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getPhoneNumber()const;
				void setPhoneNumber(const std::string& phoneNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::vector<Details> getDetails()const;
				void setDetails(const std::vector<Details>& details);
				std::string getCalledRouteMode()const;
				void setCalledRouteMode(const std::string& calledRouteMode);
				std::string getQualificationId()const;
				void setQualificationId(const std::string& qualificationId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				long resourceOwnerId_;
				std::string phoneNumber_;
				std::string accessKeyId_;
				std::vector<Details> details_;
				std::string calledRouteMode_;
				std::string qualificationId_;
				std::string resourceOwnerAccount_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_SETTRANSFERCALLEEPOOLCONFIGREQUEST_H_