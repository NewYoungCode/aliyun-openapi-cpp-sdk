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

#ifndef ALIBABACLOUD_GA_MODEL_LISTBANDWIDTHPACKAGESRESULT_H_
#define ALIBABACLOUD_GA_MODEL_LISTBANDWIDTHPACKAGESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ga/GaExport.h>

namespace AlibabaCloud
{
	namespace Ga
	{
		namespace Model
		{
			class ALIBABACLOUD_GA_EXPORT ListBandwidthPackagesResult : public ServiceResult
			{
			public:
				struct BandwidthPackage
				{
					std::string cbnGeographicRegionIdB;
					std::string description;
					std::string cbnGeographicRegionIdA;
					std::string createTime;
					std::string name;
					std::string bandwidthType;
					std::string type;
					std::vector<std::string> accelerators;
					std::string chargeType;
					std::string state;
					std::string expiredTime;
					int bandwidth;
					std::string bandwidthPackageId;
					int ratio;
					std::string regionId;
					std::string billingType;
				};


				ListBandwidthPackagesResult();
				explicit ListBandwidthPackagesResult(const std::string &payload);
				~ListBandwidthPackagesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<BandwidthPackage> getBandwidthPackages()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<BandwidthPackage> bandwidthPackages_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_LISTBANDWIDTHPACKAGESRESULT_H_