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

#ifndef ALIBABACLOUD_ENS_MODEL_TERMINATEWORKFLOWREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_TERMINATEWORKFLOWREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT TerminateWorkflowRequest : public RpcServiceRequest {
public:
	TerminateWorkflowRequest();
	~TerminateWorkflowRequest();
	std::vector<std::string> getWorkflowIds() const;
	void setWorkflowIds(const std::vector<std::string> &workflowIds);

private:
	std::vector<std::string> workflowIds_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_TERMINATEWORKFLOWREQUEST_H_
