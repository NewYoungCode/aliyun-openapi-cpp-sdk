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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYDEPLOYMENTSETATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYDEPLOYMENTSETATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/ecs/EcsRequest.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT ModifyDeploymentSetAttributeRequest : public EcsRequest
			{

			public:
				ModifyDeploymentSetAttributeRequest();
				~ModifyDeploymentSetAttributeRequest();

				std::string getDeploymentSetId()const;
				void setDeploymentSetId(const std::string& deploymentSetId);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getDeploymentSetName()const;
				void setDeploymentSetName(const std::string& deploymentSetName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				std::string deploymentSetId_;
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string regionId_;
				std::string ownerAccount_;
				std::string description_;
				std::string deploymentSetName_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYDEPLOYMENTSETATTRIBUTEREQUEST_H_