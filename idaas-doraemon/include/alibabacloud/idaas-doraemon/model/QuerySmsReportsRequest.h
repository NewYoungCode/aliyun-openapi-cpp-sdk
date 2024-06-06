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

#ifndef ALIBABACLOUD_IDAAS_DORAEMON_MODEL_QUERYSMSREPORTSREQUEST_H_
#define ALIBABACLOUD_IDAAS_DORAEMON_MODEL_QUERYSMSREPORTSREQUEST_H_

#include <alibabacloud/idaas-doraemon/Idaas_doraemonExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Idaas_doraemon {
namespace Model {
class ALIBABACLOUD_IDAAS_DORAEMON_EXPORT QuerySmsReportsRequest : public RpcServiceRequest {
public:
	QuerySmsReportsRequest();
	~QuerySmsReportsRequest();
	std::string getEventId() const;
	void setEventId(const std::string &eventId);
	std::string getAppId() const;
	void setAppId(const std::string &appId);

private:
	std::string eventId_;
	std::string appId_;
};
} // namespace Model
} // namespace Idaas_doraemon
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IDAAS_DORAEMON_MODEL_QUERYSMSREPORTSREQUEST_H_
