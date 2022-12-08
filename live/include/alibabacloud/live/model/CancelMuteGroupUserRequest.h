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

#ifndef ALIBABACLOUD_LIVE_MODEL_CANCELMUTEGROUPUSERREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_CANCELMUTEGROUPUSERREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT CancelMuteGroupUserRequest : public RpcServiceRequest {
public:
	CancelMuteGroupUserRequest();
	~CancelMuteGroupUserRequest();
	std::vector<std::string> getCancelMuteUserList() const;
	void setCancelMuteUserList(const std::vector<std::string> &cancelMuteUserList);
	std::string getOperatorUserId() const;
	void setOperatorUserId(const std::string &operatorUserId);
	int getBroadCastType() const;
	void setBroadCastType(int broadCastType);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getAppId() const;
	void setAppId(const std::string &appId);

private:
	std::vector<std::string> cancelMuteUserList_;
	std::string operatorUserId_;
	int broadCastType_;
	std::string groupId_;
	std::string appId_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_CANCELMUTEGROUPUSERREQUEST_H_
