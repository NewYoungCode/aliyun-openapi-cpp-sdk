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

#ifndef ALIBABACLOUD_DCDN_MODEL_LISTDCDNKVREQUEST_H_
#define ALIBABACLOUD_DCDN_MODEL_LISTDCDNKVREQUEST_H_

#include <alibabacloud/dcdn/DcdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dcdn {
namespace Model {
class ALIBABACLOUD_DCDN_EXPORT ListDcdnKvRequest : public RpcServiceRequest {
public:
	ListDcdnKvRequest();
	~ListDcdnKvRequest();
	std::string getPrefix() const;
	void setPrefix(const std::string &prefix);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);

private:
	std::string prefix_;
	std::string _namespace_;
	int pageSize_;
	int pageNumber_;
};
} // namespace Model
} // namespace Dcdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DCDN_MODEL_LISTDCDNKVREQUEST_H_
