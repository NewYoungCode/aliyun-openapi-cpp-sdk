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

#ifndef ALIBABACLOUD_ICE_MODEL_ADDTEMPLATEREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_ADDTEMPLATEREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT AddTemplateRequest : public RpcServiceRequest {
public:
	AddTemplateRequest();
	~AddTemplateRequest();
	std::string getSource() const;
	void setSource(const std::string &source);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getRelatedMediaids() const;
	void setRelatedMediaids(const std::string &relatedMediaids);
	std::string getCoverUrl() const;
	void setCoverUrl(const std::string &coverUrl);
	std::string getPreviewMedia() const;
	void setPreviewMedia(const std::string &previewMedia);
	std::string getTemplateId() const;
	void setTemplateId(const std::string &templateId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getConfig() const;
	void setConfig(const std::string &config);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string source_;
	std::string type_;
	std::string relatedMediaids_;
	std::string coverUrl_;
	std::string previewMedia_;
	std::string templateId_;
	std::string name_;
	std::string config_;
	std::string status_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_ADDTEMPLATEREQUEST_H_
