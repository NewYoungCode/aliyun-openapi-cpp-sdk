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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_LISTBOOKKEEPINGSUBJECTBALANCESRESULT_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_LISTBOOKKEEPINGSUBJECTBALANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/companyreg/CompanyregExport.h>

namespace AlibabaCloud
{
	namespace Companyreg
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPANYREG_EXPORT ListBookkeepingSubjectBalancesResult : public ServiceResult
			{
			public:
				struct BookkeepingSubjectBalancesItem
				{
					float currentDebitValue;
					float startDebitValue;
					float yearCreditValue;
					std::string subjectName;
					std::string parentSubjectCode;
					float currentCreditValue;
					std::string parentBizId;
					float startCreditValue;
					float yearDebitValue;
					std::string subjectCode;
					float endDebitValue;
					float endCreditValue;
					std::string subjectLevel;
					std::string bizId;
				};


				ListBookkeepingSubjectBalancesResult();
				explicit ListBookkeepingSubjectBalancesResult(const std::string &payload);
				~ListBookkeepingSubjectBalancesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::string getErrorMsg()const;
				std::vector<BookkeepingSubjectBalancesItem> getBookkeepingSubjectBalances()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::string errorMsg_;
				std::vector<BookkeepingSubjectBalancesItem> bookkeepingSubjectBalances_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_LISTBOOKKEEPINGSUBJECTBALANCESRESULT_H_