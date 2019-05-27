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

#ifndef ALIBABACLOUD_IMM_MODEL_LISTFACESEARCHGROUPIMAGESRESULT_H_
#define ALIBABACLOUD_IMM_MODEL_LISTFACESEARCHGROUPIMAGESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imm/ImmExport.h>

namespace AlibabaCloud
{
	namespace Imm
	{
		namespace Model
		{
			class ALIBABACLOUD_IMM_EXPORT ListFaceSearchGroupImagesResult : public ServiceResult
			{
			public:
				struct ImagesItem
				{
					std::string faceId;
					std::string user;
					std::string gender;
					std::string imageUri;
					float yaw;
					float quality;
					std::string imageId;
					int glasses;
					float pitch;
					int hat;
					float roll;
					std::string imageMd5;
					int age;
					std::vector<std::string> axis;
				};


				ListFaceSearchGroupImagesResult();
				explicit ListFaceSearchGroupImagesResult(const std::string &payload);
				~ListFaceSearchGroupImagesResult();
				std::string getGroupName()const;
				std::vector<ImagesItem> getImages()const;
				std::string getNextMarker()const;
				std::string getGroupId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string groupName_;
				std::vector<ImagesItem> images_;
				std::string nextMarker_;
				std::string groupId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMM_MODEL_LISTFACESEARCHGROUPIMAGESRESULT_H_