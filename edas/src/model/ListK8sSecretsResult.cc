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

#include <alibabacloud/edas/model/ListK8sSecretsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListK8sSecretsResult::ListK8sSecretsResult() :
	ServiceResult()
{}

ListK8sSecretsResult::ListK8sSecretsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListK8sSecretsResult::~ListK8sSecretsResult()
{}

void ListK8sSecretsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["Total"].isNull())
			resultObject.total = std::stoi(valueResultResultItem["Total"].asString());
		auto allSecretsNode = valueResultResultItem["Secrets"]["SecretsItem"];
		for (auto valueResultResultItemSecretsSecretsItem : allSecretsNode)
		{
			ResultItem::SecretsItem secretsObject;
			if(!valueResultResultItemSecretsSecretsItem["Name"].isNull())
				secretsObject.name = valueResultResultItemSecretsSecretsItem["Name"].asString();
			if(!valueResultResultItemSecretsSecretsItem["Namespace"].isNull())
				secretsObject._namespace = valueResultResultItemSecretsSecretsItem["Namespace"].asString();
			if(!valueResultResultItemSecretsSecretsItem["CreationTime"].isNull())
				secretsObject.creationTime = valueResultResultItemSecretsSecretsItem["CreationTime"].asString();
			if(!valueResultResultItemSecretsSecretsItem["Type"].isNull())
				secretsObject.type = valueResultResultItemSecretsSecretsItem["Type"].asString();
			if(!valueResultResultItemSecretsSecretsItem["ClusterId"].isNull())
				secretsObject.clusterId = valueResultResultItemSecretsSecretsItem["ClusterId"].asString();
			if(!valueResultResultItemSecretsSecretsItem["ClusterName"].isNull())
				secretsObject.clusterName = valueResultResultItemSecretsSecretsItem["ClusterName"].asString();
			if(!valueResultResultItemSecretsSecretsItem["CertId"].isNull())
				secretsObject.certId = valueResultResultItemSecretsSecretsItem["CertId"].asString();
			if(!valueResultResultItemSecretsSecretsItem["CertRegionId"].isNull())
				secretsObject.certRegionId = valueResultResultItemSecretsSecretsItem["CertRegionId"].asString();
			auto allDataNode = valueResultResultItemSecretsSecretsItem["Data"]["DataItem"];
			for (auto valueResultResultItemSecretsSecretsItemDataDataItem : allDataNode)
			{
				ResultItem::SecretsItem::DataItem dataObject;
				if(!valueResultResultItemSecretsSecretsItemDataDataItem["Key"].isNull())
					dataObject.key = valueResultResultItemSecretsSecretsItemDataDataItem["Key"].asString();
				if(!valueResultResultItemSecretsSecretsItemDataDataItem["Value"].isNull())
					dataObject.value = valueResultResultItemSecretsSecretsItemDataDataItem["Value"].asString();
				secretsObject.data.push_back(dataObject);
			}
			auto allRelatedAppsNode = valueResultResultItemSecretsSecretsItem["RelatedApps"]["RelatedAppsItem"];
			for (auto valueResultResultItemSecretsSecretsItemRelatedAppsRelatedAppsItem : allRelatedAppsNode)
			{
				ResultItem::SecretsItem::RelatedAppsItem relatedAppsObject;
				if(!valueResultResultItemSecretsSecretsItemRelatedAppsRelatedAppsItem["AppName"].isNull())
					relatedAppsObject.appName = valueResultResultItemSecretsSecretsItemRelatedAppsRelatedAppsItem["AppName"].asString();
				if(!valueResultResultItemSecretsSecretsItemRelatedAppsRelatedAppsItem["AppId"].isNull())
					relatedAppsObject.appId = valueResultResultItemSecretsSecretsItemRelatedAppsRelatedAppsItem["AppId"].asString();
				secretsObject.relatedApps.push_back(relatedAppsObject);
			}
			resultObject.secrets.push_back(secretsObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListK8sSecretsResult::getMessage()const
{
	return message_;
}

int ListK8sSecretsResult::getCode()const
{
	return code_;
}

std::vector<ListK8sSecretsResult::ResultItem> ListK8sSecretsResult::getResult()const
{
	return result_;
}

