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

#ifndef ALIBABACLOUD_ICE_MODEL_LISTDNAFILESREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_LISTDNAFILESREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT ListDNAFilesRequest : public RpcServiceRequest {
public:
	ListDNAFilesRequest();
	~ListDNAFilesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getNextPageToken() const;
	void setNextPageToken(const std::string &nextPageToken);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBId() const;
	void setDBId(const std::string &dBId);

private:
	long resourceOwnerId_;
	std::string nextPageToken_;
	std::string accessKeyId_;
	int pageSize_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string dBId_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_LISTDNAFILESREQUEST_H_
