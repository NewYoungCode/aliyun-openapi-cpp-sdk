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

#ifndef ALIBABACLOUD_DYPLSAPI_MODEL_CREATEPICKUPWAYBILLRESULT_H_
#define ALIBABACLOUD_DYPLSAPI_MODEL_CREATEPICKUPWAYBILLRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dyplsapi/DyplsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyplsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYPLSAPI_EXPORT CreatePickUpWaybillResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string cpCode;
					std::string mailNo;
					std::string errorMsg;
					std::string errorCode;
					std::string success;
					std::string gotCode;
				};


				CreatePickUpWaybillResult();
				explicit CreatePickUpWaybillResult(const std::string &payload);
				~CreatePickUpWaybillResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYPLSAPI_MODEL_CREATEPICKUPWAYBILLRESULT_H_