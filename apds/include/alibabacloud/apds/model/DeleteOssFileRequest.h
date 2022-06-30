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

#ifndef ALIBABACLOUD_APDS_MODEL_DELETEOSSFILEREQUEST_H_
#define ALIBABACLOUD_APDS_MODEL_DELETEOSSFILEREQUEST_H_

#include <alibabacloud/apds/ApdsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Apds {
namespace Model {
class ALIBABACLOUD_APDS_EXPORT DeleteOssFileRequest : public RoaServiceRequest {
public:
	DeleteOssFileRequest();
	~DeleteOssFileRequest();
	string getObjectName() const;
	void setObjectName(string objectName);
	string getRegionId() const;
	void setRegionId(string regionId);

private:
	string objectName_;
	string regionId_;
};
} // namespace Model
} // namespace Apds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_APDS_MODEL_DELETEOSSFILEREQUEST_H_
