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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYAUTOSNAPSHOTPOLICYEXREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYAUTOSNAPSHOTPOLICYEXREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT ModifyAutoSnapshotPolicyExRequest : public RpcServiceRequest
			{

			public:
				ModifyAutoSnapshotPolicyExRequest();
				~ModifyAutoSnapshotPolicyExRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getAutoSnapshotPolicyId()const;
				void setAutoSnapshotPolicyId(const std::string& autoSnapshotPolicyId);
				int getCopiedSnapshotsRetentionDays()const;
				void setCopiedSnapshotsRetentionDays(int copiedSnapshotsRetentionDays);
				std::string getTimePoints()const;
				void setTimePoints(const std::string& timePoints);
				std::string getRepeatWeekdays()const;
				void setRepeatWeekdays(const std::string& repeatWeekdays);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				bool getEnableCrossRegionCopy()const;
				void setEnableCrossRegionCopy(bool enableCrossRegionCopy);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAutoSnapshotPolicyName()const;
				void setAutoSnapshotPolicyName(const std::string& autoSnapshotPolicyName);
				int getRetentionDays()const;
				void setRetentionDays(int retentionDays);
				std::string getTargetCopyRegions()const;
				void setTargetCopyRegions(const std::string& targetCopyRegions);

            private:
				long resourceOwnerId_;
				std::string autoSnapshotPolicyId_;
				int copiedSnapshotsRetentionDays_;
				std::string timePoints_;
				std::string repeatWeekdays_;
				std::string regionId_;
				bool enableCrossRegionCopy_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string autoSnapshotPolicyName_;
				int retentionDays_;
				std::string targetCopyRegions_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYAUTOSNAPSHOTPOLICYEXREQUEST_H_