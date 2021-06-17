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

#ifndef ALIBABACLOUD_GA_MODEL_ATTACHLOGSTORETOENDPOINTGROUPREQUEST_H_
#define ALIBABACLOUD_GA_MODEL_ATTACHLOGSTORETOENDPOINTGROUPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ga/GaExport.h>

namespace AlibabaCloud
{
	namespace Ga
	{
		namespace Model
		{
			class ALIBABACLOUD_GA_EXPORT AttachLogStoreToEndpointGroupRequest : public RpcServiceRequest
			{

			public:
				AttachLogStoreToEndpointGroupRequest();
				~AttachLogStoreToEndpointGroupRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getSlsLogStoreName()const;
				void setSlsLogStoreName(const std::string& slsLogStoreName);
				std::string getListenerId()const;
				void setListenerId(const std::string& listenerId);
				std::vector<std::string> getEndpointGroupIds()const;
				void setEndpointGroupIds(const std::vector<std::string>& endpointGroupIds);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getSlsProjectName()const;
				void setSlsProjectName(const std::string& slsProjectName);
				std::string getSlsRegionId()const;
				void setSlsRegionId(const std::string& slsRegionId);
				std::string getAcceleratorId()const;
				void setAcceleratorId(const std::string& acceleratorId);

            private:
				std::string clientToken_;
				std::string slsLogStoreName_;
				std::string listenerId_;
				std::vector<std::string> endpointGroupIds_;
				std::string regionId_;
				std::string slsProjectName_;
				std::string slsRegionId_;
				std::string acceleratorId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_ATTACHLOGSTORETOENDPOINTGROUPREQUEST_H_