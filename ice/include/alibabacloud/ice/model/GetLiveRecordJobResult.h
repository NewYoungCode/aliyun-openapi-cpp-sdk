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

#ifndef ALIBABACLOUD_ICE_MODEL_GETLIVERECORDJOBRESULT_H_
#define ALIBABACLOUD_ICE_MODEL_GETLIVERECORDJOBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ice/ICEExport.h>

namespace AlibabaCloud
{
	namespace ICE
	{
		namespace Model
		{
			class ALIBABACLOUD_ICE_EXPORT GetLiveRecordJobResult : public ServiceResult
			{
			public:
				struct RecordJob
				{
					struct StreamInput
					{
						std::string type;
						std::string url;
					};
					struct RecordOutput
					{
						std::string type;
						std::string endpoint;
						std::string bucket;
					};
					std::string status;
					std::string notifyUrl;
					std::string createTime;
					StreamInput streamInput;
					std::string templateName;
					RecordOutput recordOutput;
					std::string templateId;
					std::string jobId;
					std::string name;
				};


				GetLiveRecordJobResult();
				explicit GetLiveRecordJobResult(const std::string &payload);
				~GetLiveRecordJobResult();
				RecordJob getRecordJob()const;

			protected:
				void parse(const std::string &payload);
			private:
				RecordJob recordJob_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_GETLIVERECORDJOBRESULT_H_