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

#ifndef ALIBABACLOUD_ALB_MODEL_LISTHEALTHCHECKTEMPLATESREQUEST_H_
#define ALIBABACLOUD_ALB_MODEL_LISTHEALTHCHECKTEMPLATESREQUEST_H_

#include <alibabacloud/alb/AlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alb {
namespace Model {
class ALIBABACLOUD_ALB_EXPORT ListHealthCheckTemplatesRequest : public RpcServiceRequest {
public:
	ListHealthCheckTemplatesRequest();
	~ListHealthCheckTemplatesRequest();
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::vector<std::string> getHealthCheckTemplateNames() const;
	void setHealthCheckTemplateNames(const std::vector<std::string> &healthCheckTemplateNames);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::vector<std::string> getHealthCheckTemplateIds() const;
	void setHealthCheckTemplateIds(const std::vector<std::string> &healthCheckTemplateIds);

private:
	std::string nextToken_;
	std::vector<std::string> healthCheckTemplateNames_;
	int maxResults_;
	std::vector<std::string> healthCheckTemplateIds_;
};
} // namespace Model
} // namespace Alb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALB_MODEL_LISTHEALTHCHECKTEMPLATESREQUEST_H_
