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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETAUTHORITYTEMPLATERESULT_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETAUTHORITYTEMPLATERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>

namespace AlibabaCloud
{
	namespace Dms_enterprise
	{
		namespace Model
		{
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT GetAuthorityTemplateResult : public ServiceResult
			{
			public:
				struct AuthorityTemplateView
				{
					struct AuthorityTemplateItem
					{
						std::string tableName;
						long instanceId;
						std::string attribute;
						long dbId;
						std::string resourceType;
						long itemId;
						long templateId;
						long modifierId;
					};
					std::string description;
					long creatorId;
					std::string createTime;
					std::vector<AuthorityTemplateItem> authorityTemplateItemList;
					long templateId;
					std::string name;
				};


				GetAuthorityTemplateResult();
				explicit GetAuthorityTemplateResult(const std::string &payload);
				~GetAuthorityTemplateResult();
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;
				long getTid()const;
				AuthorityTemplateView getAuthorityTemplateView()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;
				long tid_;
				AuthorityTemplateView authorityTemplateView_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETAUTHORITYTEMPLATERESULT_H_