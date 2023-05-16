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

#ifndef ALIBABACLOUD_COMPUTENEST_MODEL_LISTSERVICEINSTANCELOGSRESULT_H_
#define ALIBABACLOUD_COMPUTENEST_MODEL_LISTSERVICEINSTANCELOGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/computenest/ComputeNestExport.h>

namespace AlibabaCloud
{
	namespace ComputeNest
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPUTENEST_EXPORT ListServiceInstanceLogsResult : public ServiceResult
			{
			public:
				struct ServiceInstanceLogs
				{
					std::string status;
					std::string serviceInstanceId;
					std::string resourceId;
					std::string content;
					std::string logType;
					std::string resourceType;
					std::string timestamp;
					std::string source;
				};


				ListServiceInstanceLogsResult();
				explicit ListServiceInstanceLogsResult(const std::string &payload);
				~ListServiceInstanceLogsResult();
				std::string getNextToken()const;
				std::string getMaxResults()const;
				std::vector<ServiceInstanceLogs> getServiceInstancesLogs()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::string maxResults_;
				std::vector<ServiceInstanceLogs> serviceInstancesLogs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPUTENEST_MODEL_LISTSERVICEINSTANCELOGSRESULT_H_