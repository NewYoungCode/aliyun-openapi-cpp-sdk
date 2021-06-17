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

#ifndef ALIBABACLOUD_GA_MODEL_CREATEBANDWIDTHPACKAGEREQUEST_H_
#define ALIBABACLOUD_GA_MODEL_CREATEBANDWIDTHPACKAGEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ga/GaExport.h>

namespace AlibabaCloud
{
	namespace Ga
	{
		namespace Model
		{
			class ALIBABACLOUD_GA_EXPORT CreateBandwidthPackageRequest : public RpcServiceRequest
			{

			public:
				CreateBandwidthPackageRequest();
				~CreateBandwidthPackageRequest();

				std::string getBandwidthType()const;
				void setBandwidthType(const std::string& bandwidthType);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getAutoUseCoupon()const;
				void setAutoUseCoupon(const std::string& autoUseCoupon);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getDuration()const;
				void setDuration(const std::string& duration);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				std::string getPromotionOptionNo()const;
				void setPromotionOptionNo(const std::string& promotionOptionNo);
				int getBandwidth()const;
				void setBandwidth(int bandwidth);
				std::string getCbnGeographicRegionIdB()const;
				void setCbnGeographicRegionIdB(const std::string& cbnGeographicRegionIdB);
				std::string getCbnGeographicRegionIdA()const;
				void setCbnGeographicRegionIdA(const std::string& cbnGeographicRegionIdA);
				std::string getBillingType()const;
				void setBillingType(const std::string& billingType);
				std::string getChargeType()const;
				void setChargeType(const std::string& chargeType);
				std::string getPricingCycle()const;
				void setPricingCycle(const std::string& pricingCycle);
				int getRatio()const;
				void setRatio(int ratio);

            private:
				std::string bandwidthType_;
				std::string clientToken_;
				std::string autoUseCoupon_;
				std::string type_;
				std::string duration_;
				std::string regionId_;
				bool autoPay_;
				std::string promotionOptionNo_;
				int bandwidth_;
				std::string cbnGeographicRegionIdB_;
				std::string cbnGeographicRegionIdA_;
				std::string billingType_;
				std::string chargeType_;
				std::string pricingCycle_;
				int ratio_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_CREATEBANDWIDTHPACKAGEREQUEST_H_