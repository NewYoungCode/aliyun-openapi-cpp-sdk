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

#ifndef ALIBABACLOUD_ICE_MODEL_LISTPUBLICMEDIABASICINFOSREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_LISTPUBLICMEDIABASICINFOSREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT ListPublicMediaBasicInfosRequest : public RpcServiceRequest {
public:
	ListPublicMediaBasicInfosRequest();
	~ListPublicMediaBasicInfosRequest();
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getPageNo() const;
	void setPageNo(int pageNo);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	bool getIncludeFileBasicInfo() const;
	void setIncludeFileBasicInfo(bool includeFileBasicInfo);
	std::string getMediaTagId() const;
	void setMediaTagId(const std::string &mediaTagId);

private:
	std::string nextToken_;
	int pageNo_;
	int pageSize_;
	int maxResults_;
	bool includeFileBasicInfo_;
	std::string mediaTagId_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_LISTPUBLICMEDIABASICINFOSREQUEST_H_
