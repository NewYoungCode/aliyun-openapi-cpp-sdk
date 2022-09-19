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

#ifndef ALIBABACLOUD_VIAPI_REGEN_MODEL_LISTDATASETDATASREQUEST_H_
#define ALIBABACLOUD_VIAPI_REGEN_MODEL_LISTDATASETDATASREQUEST_H_

#include <alibabacloud/viapi-regen/Viapi_regenExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Viapi_regen {
namespace Model {
class ALIBABACLOUD_VIAPI_REGEN_EXPORT ListDatasetDatasRequest : public RpcServiceRequest {
public:
	ListDatasetDatasRequest();
	~ListDatasetDatasRequest();
	std::string getIdentity() const;
	void setIdentity(const std::string &identity);
	long getPageSize() const;
	void setPageSize(long pageSize);
	long getCurrentPage() const;
	void setCurrentPage(long currentPage);
	long getDatasetId() const;
	void setDatasetId(long datasetId);

private:
	std::string identity_;
	long pageSize_;
	long currentPage_;
	long datasetId_;
};
} // namespace Model
} // namespace Viapi_regen
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VIAPI_REGEN_MODEL_LISTDATASETDATASREQUEST_H_
