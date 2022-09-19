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

#ifndef ALIBABACLOUD_VIAPI_REGEN_MODEL_CUSTOMIZECLASSIFYIMAGEREQUEST_H_
#define ALIBABACLOUD_VIAPI_REGEN_MODEL_CUSTOMIZECLASSIFYIMAGEREQUEST_H_

#include <alibabacloud/viapi-regen/Viapi_regenExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Viapi_regen {
namespace Model {
class ALIBABACLOUD_VIAPI_REGEN_EXPORT CustomizeClassifyImageRequest : public RpcServiceRequest {
public:
	CustomizeClassifyImageRequest();
	~CustomizeClassifyImageRequest();
	std::string getImageUrl() const;
	void setImageUrl(const std::string &imageUrl);
	std::string getServiceId() const;
	void setServiceId(const std::string &serviceId);

private:
	std::string imageUrl_;
	std::string serviceId_;
};
} // namespace Model
} // namespace Viapi_regen
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VIAPI_REGEN_MODEL_CUSTOMIZECLASSIFYIMAGEREQUEST_H_
