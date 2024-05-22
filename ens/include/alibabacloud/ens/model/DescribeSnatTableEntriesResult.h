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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBESNATTABLEENTRIESRESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBESNATTABLEENTRIESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT DescribeSnatTableEntriesResult : public ServiceResult
			{
			public:
				struct SnatTableEntry
				{
					struct SnatIp
					{
						std::string ip;
						std::string isp;
						std::string ensRegionId;
						bool standby;
					};
					std::string status;
					std::string type;
					std::string destCIDR;
					std::string snatEntryName;
					std::string sourceCIDR;
					std::vector<SnatTableEntry::SnatIp> snatIps;
					std::string snatEntryId;
					int idleTimeout;
					std::string snatIp;
					std::string standbyStatus;
					std::string natGatewayId;
					std::string standbySnatIp;
				};


				DescribeSnatTableEntriesResult();
				explicit DescribeSnatTableEntriesResult(const std::string &payload);
				~DescribeSnatTableEntriesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<SnatTableEntry> getSnatTableEntries()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<SnatTableEntry> snatTableEntries_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBESNATTABLEENTRIESRESULT_H_