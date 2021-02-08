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

#ifndef ALIBABACLOUD_ECS_MODEL_INVOKECOMMANDREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_INVOKECOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT InvokeCommandRequest : public RpcServiceRequest
			{

			public:
				InvokeCommandRequest();
				~InvokeCommandRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getCommandId()const;
				void setCommandId(const std::string& commandId);
				std::string getFrequency()const;
				void setFrequency(const std::string& frequency);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getWindowsPasswordName()const;
				void setWindowsPasswordName(const std::string& windowsPasswordName);
				bool getTimed()const;
				void setTimed(bool timed);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::vector<std::string> getInstanceId()const;
				void setInstanceId(const std::vector<std::string>& instanceId);
				std::map<std::string, std::string> getParameters()const;
				void setParameters(const std::map<std::string, std::string>& parameters);
				std::string getUsername()const;
				void setUsername(const std::string& username);

            private:
				long resourceOwnerId_;
				std::string commandId_;
				std::string frequency_;
				std::string regionId_;
				std::string windowsPasswordName_;
				bool timed_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::vector<std::string> instanceId_;
				std::map<std::string, std::string> parameters_;
				std::string username_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_INVOKECOMMANDREQUEST_H_