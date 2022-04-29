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

#ifndef ALIBABACLOUD_NAS_MODEL_LISTRECYCLEDDIRECTORIESANDFILESREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_LISTRECYCLEDDIRECTORIESANDFILESREQUEST_H_

#include <alibabacloud/nas/NASExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace NAS {
namespace Model {
class ALIBABACLOUD_NAS_EXPORT ListRecycledDirectoriesAndFilesRequest : public RpcServiceRequest {
public:
	ListRecycledDirectoriesAndFilesRequest();
	~ListRecycledDirectoriesAndFilesRequest();
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getFileSystemId() const;
	void setFileSystemId(const std::string &fileSystemId);
	std::string getFileId() const;
	void setFileId(const std::string &fileId);
	long getMaxResults() const;
	void setMaxResults(long maxResults);

private:
	std::string nextToken_;
	std::string fileSystemId_;
	std::string fileId_;
	long maxResults_;
};
} // namespace Model
} // namespace NAS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NAS_MODEL_LISTRECYCLEDDIRECTORIESANDFILESREQUEST_H_
