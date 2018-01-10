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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBERESOURCEBYTAGSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBERESOURCEBYTAGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeResourceByTagsResult : public ServiceResult
			{
			public:
				struct Resource
				{
					std::string resourceId;
					std::string resourceType;
					std::string regionId;
				};


				DescribeResourceByTagsResult();
				explicit DescribeResourceByTagsResult(const std::string &payload);
				~DescribeResourceByTagsResult();
				int getTotalCount()const;
				void setTotalCount(int totalCount);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::vector<Resource> getResources()const;
				void setResources(const std::vector<Resource>& resources);

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Resource> resources_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBERESOURCEBYTAGSRESULT_H_