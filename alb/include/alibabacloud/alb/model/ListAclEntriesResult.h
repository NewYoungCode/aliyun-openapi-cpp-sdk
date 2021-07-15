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

#ifndef ALIBABACLOUD_ALB_MODEL_LISTACLENTRIESRESULT_H_
#define ALIBABACLOUD_ALB_MODEL_LISTACLENTRIESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alb/AlbExport.h>

namespace AlibabaCloud
{
	namespace Alb
	{
		namespace Model
		{
			class ALIBABACLOUD_ALB_EXPORT ListAclEntriesResult : public ServiceResult
			{
			public:
				struct AclEntry
				{
					std::string status;
					std::string entry;
					std::string description;
				};


				ListAclEntriesResult();
				explicit ListAclEntriesResult(const std::string &payload);
				~ListAclEntriesResult();
				std::vector<AclEntry> getAclEntries()const;
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<AclEntry> aclEntries_;
				int totalCount_;
				std::string nextToken_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALB_MODEL_LISTACLENTRIESRESULT_H_