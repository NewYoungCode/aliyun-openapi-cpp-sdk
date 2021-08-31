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

#ifndef ALIBABACLOUD_EDAS_MODEL_LISTCONFIGCENTERSREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_LISTCONFIGCENTERSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT ListConfigCentersRequest : public RoaServiceRequest
			{

			public:
				ListConfigCentersRequest();
				~ListConfigCentersRequest();

				std::string getAppName()const;
				void setAppName(const std::string& appName);
				std::string getLogicalRegionId()const;
				void setLogicalRegionId(const std::string& logicalRegionId);
				std::string getDataIdPattern()const;
				void setDataIdPattern(const std::string& dataIdPattern);
				std::string getGroup()const;
				void setGroup(const std::string& group);

            private:
				std::string appName_;
				std::string logicalRegionId_;
				std::string dataIdPattern_;
				std::string group_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_LISTCONFIGCENTERSREQUEST_H_