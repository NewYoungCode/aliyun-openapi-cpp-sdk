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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_CREATECLOUDACCOUNTREQUEST_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_CREATECLOUDACCOUNTREQUEST_H_

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
			class ALIBABACLOUD_RESOURCEMANAGER_EXPORT CreateCloudAccountRequest : public RpcServiceRequest
			{

			public:
				CreateCloudAccountRequest();
				~CreateCloudAccountRequest();

				std::string getParentFolderId()const;
				void setParentFolderId(const std::string& parentFolderId);
				std::string getDisplayName()const;
				void setDisplayName(const std::string& displayName);
				std::string getEmail()const;
				void setEmail(const std::string& email);
				std::string getPayerAccountId()const;
				void setPayerAccountId(const std::string& payerAccountId);

            private:
				std::string parentFolderId_;
				std::string displayName_;
				std::string email_;
				std::string payerAccountId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_CREATECLOUDACCOUNTREQUEST_H_