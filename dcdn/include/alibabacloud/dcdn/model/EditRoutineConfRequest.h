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

#ifndef ALIBABACLOUD_DCDN_MODEL_EDITROUTINECONFREQUEST_H_
#define ALIBABACLOUD_DCDN_MODEL_EDITROUTINECONFREQUEST_H_

#include <alibabacloud/dcdn/DcdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dcdn {
namespace Model {
class ALIBABACLOUD_DCDN_EXPORT EditRoutineConfRequest : public RpcServiceRequest {
public:
	EditRoutineConfRequest();
	~EditRoutineConfRequest();
	std::string getEnvConf() const;
	void setEnvConf(const std::string &envConf);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getDescription() const;
	void setDescription(const std::string &description);

private:
	std::string envConf_;
	std::string name_;
	std::string description_;
};
} // namespace Model
} // namespace Dcdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DCDN_MODEL_EDITROUTINECONFREQUEST_H_
