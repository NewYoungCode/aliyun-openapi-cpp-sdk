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

#ifndef ALIBABACLOUD_CCC_MODEL_STARTBACK2BACKCALLRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_STARTBACK2BACKCALLRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT StartBack2BackCallResult : public ServiceResult
			{
			public:


				StartBack2BackCallResult();
				explicit StartBack2BackCallResult(const std::string &payload);
				~StartBack2BackCallResult();
				std::string getStatusDesc()const;
				std::string getTaskId()const;
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				std::string getStatusCode()const;
				bool getSuccess()const;
				std::string getTimeStamp()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string statusDesc_;
				std::string taskId_;
				std::string message_;
				int httpStatusCode_;
				std::string code_;
				std::string statusCode_;
				bool success_;
				std::string timeStamp_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_STARTBACK2BACKCALLRESULT_H_