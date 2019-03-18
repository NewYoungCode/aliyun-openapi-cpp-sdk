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

#ifndef ALIBABACLOUD_ARMS4FINANCE_MODEL_ARMSQUERYDATASETRESULT_H_
#define ALIBABACLOUD_ARMS4FINANCE_MODEL_ARMSQUERYDATASETRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms4finance/ARMS4FINANCEExport.h>

namespace AlibabaCloud
{
	namespace ARMS4FINANCE
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS4FINANCE_EXPORT ARMSQueryDataSetResult : public ServiceResult
			{
			public:


				ARMSQueryDataSetResult();
				explicit ARMSQueryDataSetResult(const std::string &payload);
				~ARMSQueryDataSetResult();
				std::string getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS4FINANCE_MODEL_ARMSQUERYDATASETRESULT_H_