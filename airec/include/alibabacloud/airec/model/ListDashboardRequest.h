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

#ifndef ALIBABACLOUD_AIREC_MODEL_LISTDASHBOARDREQUEST_H_
#define ALIBABACLOUD_AIREC_MODEL_LISTDASHBOARDREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/airec/AirecExport.h>

namespace AlibabaCloud
{
	namespace Airec
	{
		namespace Model
		{
			class ALIBABACLOUD_AIREC_EXPORT ListDashboardRequest : public RoaServiceRequest
			{

			public:
				ListDashboardRequest();
				~ListDashboardRequest();

				std::string getTraceId()const;
				void setTraceId(const std::string& traceId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				long getEndDate()const;
				void setEndDate(long endDate);
				int getSize()const;
				void setSize(int size);
				std::string getSceneId()const;
				void setSceneId(const std::string& sceneId);
				int getPage()const;
				void setPage(int page);
				long getStartDate()const;
				void setStartDate(long startDate);

            private:
				std::string traceId_;
				std::string instanceId_;
				long endDate_;
				int size_;
				std::string sceneId_;
				int page_;
				long startDate_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AIREC_MODEL_LISTDASHBOARDREQUEST_H_