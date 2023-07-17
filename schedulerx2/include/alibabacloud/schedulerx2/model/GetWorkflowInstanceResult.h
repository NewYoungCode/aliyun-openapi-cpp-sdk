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

#ifndef ALIBABACLOUD_SCHEDULERX2_MODEL_GETWORKFLOWINSTANCERESULT_H_
#define ALIBABACLOUD_SCHEDULERX2_MODEL_GETWORKFLOWINSTANCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/schedulerx2/Schedulerx2Export.h>

namespace AlibabaCloud
{
	namespace Schedulerx2
	{
		namespace Model
		{
			class ALIBABACLOUD_SCHEDULERX2_EXPORT GetWorkflowInstanceResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct WfInstanceInfo
					{
						int status;
						std::string endTime;
						std::string scheduleTime;
						std::string startTime;
						std::string dataTime;
					};
					struct WfInstanceDag
					{
						struct Node
						{
							int status;
							std::string endTime;
							std::string scheduleTime;
							int attempt;
							long jobInstanceId;
							std::string workAddr;
							std::string startTime;
							std::string dataTime;
							long jobId;
							std::string result;
						};
						struct Edge
						{
							long target;
							long source;
						};
						std::vector<Edge> edges;
						std::vector<Node> nodes;
					};
					WfInstanceInfo wfInstanceInfo;
					WfInstanceDag wfInstanceDag;
				};


				GetWorkflowInstanceResult();
				explicit GetWorkflowInstanceResult(const std::string &payload);
				~GetWorkflowInstanceResult();
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCHEDULERX2_MODEL_GETWORKFLOWINSTANCERESULT_H_