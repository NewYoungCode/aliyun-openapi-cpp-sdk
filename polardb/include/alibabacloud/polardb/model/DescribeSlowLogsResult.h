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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBESLOWLOGSRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBESLOWLOGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeSlowLogsResult : public ServiceResult
			{
			public:
				struct SQLSlowLog
				{
					long maxLockTime;
					std::string createTime;
					long totalExecutionCounts;
					std::string dBNodeId;
					long totalLockTimes;
					long totalExecutionTimes;
					long returnMaxRowCount;
					long parseMaxRowCount;
					long maxExecutionTime;
					std::string sQLText;
					std::string sQLHASH;
					long returnTotalRowCounts;
					long parseTotalRowCounts;
					std::string dBName;
				};


				DescribeSlowLogsResult();
				explicit DescribeSlowLogsResult(const std::string &payload);
				~DescribeSlowLogsResult();
				int getTotalRecordCount()const;
				int getPageRecordCount()const;
				std::string getEndTime()const;
				int getPageNumber()const;
				std::string getDBClusterId()const;
				std::string getStartTime()const;
				std::vector<SQLSlowLog> getItems()const;
				std::string getEngine()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				int pageRecordCount_;
				std::string endTime_;
				int pageNumber_;
				std::string dBClusterId_;
				std::string startTime_;
				std::vector<SQLSlowLog> items_;
				std::string engine_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBESLOWLOGSRESULT_H_