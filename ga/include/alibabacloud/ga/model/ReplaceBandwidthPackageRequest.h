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

#ifndef ALIBABACLOUD_GA_MODEL_REPLACEBANDWIDTHPACKAGEREQUEST_H_
#define ALIBABACLOUD_GA_MODEL_REPLACEBANDWIDTHPACKAGEREQUEST_H_

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
			class ALIBABACLOUD_GA_EXPORT ReplaceBandwidthPackageRequest : public RpcServiceRequest
			{

			public:
				ReplaceBandwidthPackageRequest();
				~ReplaceBandwidthPackageRequest();

				std::string getBandwidthPackageId()const;
				void setBandwidthPackageId(const std::string& bandwidthPackageId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getTargetBandwidthPackageId()const;
				void setTargetBandwidthPackageId(const std::string& targetBandwidthPackageId);

            private:
				std::string bandwidthPackageId_;
				std::string regionId_;
				std::string targetBandwidthPackageId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_REPLACEBANDWIDTHPACKAGEREQUEST_H_