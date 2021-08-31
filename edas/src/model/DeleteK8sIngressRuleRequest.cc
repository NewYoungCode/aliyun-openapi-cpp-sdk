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

#include <alibabacloud/edas/model/DeleteK8sIngressRuleRequest.h>

using AlibabaCloud::Edas::Model::DeleteK8sIngressRuleRequest;

DeleteK8sIngressRuleRequest::DeleteK8sIngressRuleRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/acs/k8s_ingress");
	setMethod(HttpRequest::Method::Delete);
}

DeleteK8sIngressRuleRequest::~DeleteK8sIngressRuleRequest()
{}

std::string DeleteK8sIngressRuleRequest::get_Namespace()const
{
	return _namespace_;
}

void DeleteK8sIngressRuleRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string DeleteK8sIngressRuleRequest::getName()const
{
	return name_;
}

void DeleteK8sIngressRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string DeleteK8sIngressRuleRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteK8sIngressRuleRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

