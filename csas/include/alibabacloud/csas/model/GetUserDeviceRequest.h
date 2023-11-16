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

#ifndef ALIBABACLOUD_CSAS_MODEL_GETUSERDEVICEREQUEST_H_
#define ALIBABACLOUD_CSAS_MODEL_GETUSERDEVICEREQUEST_H_

#include <alibabacloud/csas/CsasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Csas {
namespace Model {
class ALIBABACLOUD_CSAS_EXPORT GetUserDeviceRequest : public RpcServiceRequest {
public:
	GetUserDeviceRequest();
	~GetUserDeviceRequest();
	std::string getDeviceTag() const;
	void setDeviceTag(const std::string &deviceTag);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);

private:
	std::string deviceTag_;
	std::string sourceIp_;
};
} // namespace Model
} // namespace Csas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CSAS_MODEL_GETUSERDEVICEREQUEST_H_
