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

#ifndef ALIBABACLOUD_CAMS_MODEL_CREATECHATAPPTEMPLATEREQUEST_H_
#define ALIBABACLOUD_CAMS_MODEL_CREATECHATAPPTEMPLATEREQUEST_H_

#include <alibabacloud/cams/CamsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cams {
namespace Model {
class ALIBABACLOUD_CAMS_EXPORT CreateChatappTemplateRequest : public RpcServiceRequest {
public:
	struct Components {
		std::string type;
		std::string text;
		std::string format;
		std::string url;
		std::string caption;
		std::string fileName;
		struct ButtonsItem {
			std::string type;
			std::string text;
			std::string phoneNumber;
			std::string url;
			std::string urlType;
		};
		ButtonsItem buttonsItem;
		std::vector<ButtonsItem> buttons;
		std::string thumbUrl;
		int duration;
		std::string fileType;
	};
	CreateChatappTemplateRequest();
	~CreateChatappTemplateRequest();
	std::vector<Components> getComponents() const;
	void setComponents(const std::vector<Components> &components);
	std::string getLanguage() const;
	void setLanguage(const std::string &language);
	std::string getCustWabaId() const;
	void setCustWabaId(const std::string &custWabaId);
	std::map<std::string, std::string> getExample() const;
	void setExample(const std::map<std::string, std::string> &example);
	std::string getApiCode() const;
	void setApiCode(const std::string &apiCode);
	std::string getTemplateType() const;
	void setTemplateType(const std::string &templateType);
	std::string getIsvCode() const;
	void setIsvCode(const std::string &isvCode);
	std::string getProdCode() const;
	void setProdCode(const std::string &prodCode);
	std::string getCustSpaceId() const;
	void setCustSpaceId(const std::string &custSpaceId);
	std::string getName() const;
	void setName(const std::string &name);
	bool getAllowCategoryChange() const;
	void setAllowCategoryChange(bool allowCategoryChange);
	std::string getCategory() const;
	void setCategory(const std::string &category);

private:
	std::vector<Components> components_;
	std::string language_;
	std::string custWabaId_;
	std::map<std::string, std::string> example_;
	std::string apiCode_;
	std::string templateType_;
	std::string isvCode_;
	std::string prodCode_;
	std::string custSpaceId_;
	std::string name_;
	bool allowCategoryChange_;
	std::string category_;
};
} // namespace Model
} // namespace Cams
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAMS_MODEL_CREATECHATAPPTEMPLATEREQUEST_H_
