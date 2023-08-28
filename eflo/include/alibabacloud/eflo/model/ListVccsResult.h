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

#ifndef ALIBABACLOUD_EFLO_MODEL_LISTVCCSRESULT_H_
#define ALIBABACLOUD_EFLO_MODEL_LISTVCCSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eflo/EfloExport.h>

namespace AlibabaCloud
{
	namespace Eflo
	{
		namespace Model
		{
			class ALIBABACLOUD_EFLO_EXPORT ListVccsResult : public ServiceResult
			{
			public:
				struct Content
				{
					struct DataItem
					{
						struct VpdBaseInfo
						{
							std::string cidr;
							std::string vpdId;
							std::string createTime;
							std::string vpdName;
						};
						struct ErInfo
						{
							std::string status;
							long connections;
							std::string erName;
							std::string tenantId;
							std::string description;
							std::string message;
							std::string createTime;
							std::string gmtModified;
							std::string erId;
							std::string regionId;
							long routeMaps;
							std::string masterZoneId;
						};
						struct Tag
						{
							std::string tagKey;
							std::string tagValue;
						};
						std::string taskId;
						std::string message;
						std::string resourceGroupId;
						std::string lineOperator;
						std::string currentNode;
						std::string gmtModified;
						std::string bgpCidr;
						std::string commodityCode;
						std::string vccId;
						std::vector<DataItem::Tag> tags;
						std::string status;
						VpdBaseInfo vpdBaseInfo;
						std::string zoneId;
						std::string connectionType;
						double rate;
						std::string createTime;
						std::string bandwidthStr;
						std::string tenantId;
						std::string vpcId;
						std::string expirationDate;
						std::string vpdId;
						std::vector<DataItem::ErInfo> erInfos;
						std::string cenOwnerId;
						std::string cenId;
						std::string accessPointId;
						std::string regionId;
						std::string spec;
						std::string vccName;
						std::string portType;
					};
					long total;
					std::vector<DataItem> data;
				};


				ListVccsResult();
				explicit ListVccsResult(const std::string &payload);
				~ListVccsResult();
				std::string getMessage()const;
				Content getContent()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Content content_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EFLO_MODEL_LISTVCCSRESULT_H_