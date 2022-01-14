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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_UPDATEACCOUNTREQUEST_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_UPDATEACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/resourcemanager/ResourceManagerExport.h>

namespace AlibabaCloud
{
	namespace ResourceManager
	{
		namespace Model
		{
			class ALIBABACLOUD_RESOURCEMANAGER_EXPORT UpdateAccountRequest : public RpcServiceRequest
			{

			public:
				UpdateAccountRequest();
				~UpdateAccountRequest();

				std::string getNewDisplayName()const;
				void setNewDisplayName(const std::string& newDisplayName);
				std::string getNewAccountType()const;
				void setNewAccountType(const std::string& newAccountType);
				std::string getAccountId()const;
				void setAccountId(const std::string& accountId);

            private:
				std::string newDisplayName_;
				std::string newAccountType_;
				std::string accountId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_UPDATEACCOUNTREQUEST_H_