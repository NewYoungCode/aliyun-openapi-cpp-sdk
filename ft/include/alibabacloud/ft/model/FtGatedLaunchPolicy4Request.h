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

#ifndef ALIBABACLOUD_FT_MODEL_FTGATEDLAUNCHPOLICY4REQUEST_H_
#define ALIBABACLOUD_FT_MODEL_FTGATEDLAUNCHPOLICY4REQUEST_H_

#include <alibabacloud/ft/FtExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ft {
namespace Model {
class ALIBABACLOUD_FT_EXPORT FtGatedLaunchPolicy4Request : public RpcServiceRequest {
public:
	FtGatedLaunchPolicy4Request();
	~FtGatedLaunchPolicy4Request();
	std::string getIsGatedLaunch() const;
	void setIsGatedLaunch(const std::string &isGatedLaunch);

private:
	std::string isGatedLaunch_;
};
} // namespace Model
} // namespace Ft
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_FT_MODEL_FTGATEDLAUNCHPOLICY4REQUEST_H_
