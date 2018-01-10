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

#ifndef ALIBABACLOUD_ECS_MODEL_ATTACHDISKREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_ATTACHDISKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/ecs/EcsRequest.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT AttachDiskRequest : public EcsRequest
			{

			public:
				AttachDiskRequest();
				~AttachDiskRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDiskId()const;
				void setDiskId(const std::string& diskId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getDevice()const;
				void setDevice(const std::string& device);
				bool getDeleteWithInstance()const;
				void setDeleteWithInstance(bool deleteWithInstance);

            private:
				long resourceOwnerId_;
				std::string instanceId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string diskId_;
				long ownerId_;
				std::string device_;
				bool deleteWithInstance_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_ATTACHDISKREQUEST_H_