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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTJOBSRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTJOBSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT ListJobsResult : public ServiceResult
			{
			public:
				struct Job
				{
					std::string status;
					std::string jobDescription;
					std::string endTime;
					std::string ownerUid;
					std::string createTime;
					int taskCount;
					std::string jobName;
					std::string startTime;
					int executorCount;
					std::string jobId;
					bool taskSustainable;
				};


				ListJobsResult();
				explicit ListJobsResult(const std::string &payload);
				~ListJobsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Job> getJobList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Job> jobList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTJOBSRESULT_H_