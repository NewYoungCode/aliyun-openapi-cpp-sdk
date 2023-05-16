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

#ifndef ALIBABACLOUD_COMPUTENEST_MODEL_LISTSERVICEINSTANCERESOURCESRESULT_H_
#define ALIBABACLOUD_COMPUTENEST_MODEL_LISTSERVICEINSTANCERESOURCESRESULT_H_

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
			class ALIBABACLOUD_COMPUTENEST_EXPORT ListServiceInstanceResourcesResult : public ServiceResult
			{
			public:
				struct ResourcesItem
				{
					std::string resourceARN;
					std::string productCode;
					std::string renewalPeriodUnit;
					std::string createTime;
					std::string productType;
					std::string payType;
					std::string expireTime;
					std::string renewStatus;
					int renewalPeriod;
				};


				ListServiceInstanceResourcesResult();
				explicit ListServiceInstanceResourcesResult(const std::string &payload);
				~ListServiceInstanceResourcesResult();
				std::string getNextToken()const;
				std::string getMaxResults()const;
				std::vector<ResourcesItem> getResources()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::string maxResults_;
				std::vector<ResourcesItem> resources_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPUTENEST_MODEL_LISTSERVICEINSTANCERESOURCESRESULT_H_