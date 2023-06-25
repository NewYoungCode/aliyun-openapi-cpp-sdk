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

#ifndef ALIBABACLOUD_DDOSBGP_MODEL_LISTTAGKEYSREQUEST_H_
#define ALIBABACLOUD_DDOSBGP_MODEL_LISTTAGKEYSREQUEST_H_

#include <alibabacloud/ddosbgp/DdosbgpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ddosbgp {
namespace Model {
class ALIBABACLOUD_DDOSBGP_EXPORT ListTagKeysRequest : public RpcServiceRequest {
public:
	ListTagKeysRequest();
	~ListTagKeysRequest();
	std::string getTagOwnerUid() const;
	void setTagOwnerUid(const std::string &tagOwnerUid);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getScope() const;
	void setScope(const std::string &scope);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getTagOwnerBid() const;
	void setTagOwnerBid(const std::string &tagOwnerBid);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);

private:
	std::string tagOwnerUid_;
	std::string resourceGroupId_;
	std::string sourceIp_;
	std::string regionId_;
	std::string scope_;
	int pageSize_;
	std::string tagOwnerBid_;
	int currentPage_;
	std::string resourceType_;
};
} // namespace Model
} // namespace Ddosbgp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDOSBGP_MODEL_LISTTAGKEYSREQUEST_H_
