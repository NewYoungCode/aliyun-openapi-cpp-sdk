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

#ifndef ALIBABACLOUD_EDAS_MODEL_GETSCALINGRULESRESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_GETSCALINGRULESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT GetScalingRulesResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Rule
					{
						std::string multiAzPolicy;
						std::string cond;
						int rt;
						std::string resourceFrom;
						std::string vSwitchIds;
						int instNum;
						std::string mode;
						std::string metricType;
						long createTime;
						int cpu;
						int loadNum;
						int templateVersion;
						int duration;
						int step;
						std::string specId;
						std::string groupId;
						std::string appId;
						std::string vpcId;
						long updateTime;
						bool enable;
						std::string templateId;
					};
					std::vector<Rule> ruleList;
					int oversoldFactor;
					std::string vpcId;
					long updateTime;
					int clusterType;
				};


				GetScalingRulesResult();
				explicit GetScalingRulesResult(const std::string &payload);
				~GetScalingRulesResult();
				std::string getMessage()const;
				long getUpdateTime()const;
				Data getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				long updateTime_;
				Data data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_GETSCALINGRULESRESULT_H_