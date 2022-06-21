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

#ifndef ALIBABACLOUD_AMPTEST_MODEL_HUICHENGTESTGRAYNINERESULT_H_
#define ALIBABACLOUD_AMPTEST_MODEL_HUICHENGTESTGRAYNINERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/amptest/AmpTestExport.h>

namespace AlibabaCloud
{
	namespace AmpTest
	{
		namespace Model
		{
			class ALIBABACLOUD_AMPTEST_EXPORT HuichengTestGrayNineResult : public ServiceResult
			{
			public:


				HuichengTestGrayNineResult();
				explicit HuichengTestGrayNineResult(const std::string &payload);
				~HuichengTestGrayNineResult();
				int getSize()const;
				std::string getValue()const;

			protected:
				void parse(const std::string &payload);
			private:
				int size_;
				std::string value_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AMPTEST_MODEL_HUICHENGTESTGRAYNINERESULT_H_