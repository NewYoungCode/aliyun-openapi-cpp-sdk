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

#ifndef ALIBABACLOUD_EDAS_MODEL_DESCRIBEAPPLICATIONSCALINGRULESRESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_DESCRIBEAPPLICATIONSCALINGRULESRESULT_H_

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
			class ALIBABACLOUD_EDAS_EXPORT DescribeApplicationScalingRulesResult : public ServiceResult
			{
			public:
				struct AppScalingRules
				{
					struct Rule
					{
						struct Metric
						{
							struct Metric1
							{
								std::string metricType;
								int metricTargetAverageUtilization;
							};
							std::vector<Metric1> metrics;
							int minReplicas;
							int maxReplicas;
						};
						struct Trigger
						{
							struct Trigger2
							{
								std::string type;
								std::string metaData;
								std::string name;
							};
							int minReplicas;
							int maxReplicas;
							std::vector<Trigger2> triggers;
						};
						bool scaleRuleEnabled;
						Trigger trigger;
						std::string appId;
						long lastDisableTime;
						int minReplicas;
						int maxReplicas;
						long createTime;
						long updateTime;
						Metric metric;
						std::string scaleRuleName;
						std::string scaleRuleType;
					};
					int pageSize;
					int currentPage;
					long totalSize;
					std::vector<Rule> result;
				};


				DescribeApplicationScalingRulesResult();
				explicit DescribeApplicationScalingRulesResult(const std::string &payload);
				~DescribeApplicationScalingRulesResult();
				AppScalingRules getAppScalingRules()const;
				std::string getMessage()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				AppScalingRules appScalingRules_;
				std::string message_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_DESCRIBEAPPLICATIONSCALINGRULESRESULT_H_