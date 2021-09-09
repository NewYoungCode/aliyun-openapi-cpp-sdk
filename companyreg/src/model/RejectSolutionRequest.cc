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

#include <alibabacloud/companyreg/model/RejectSolutionRequest.h>

using AlibabaCloud::Companyreg::Model::RejectSolutionRequest;

RejectSolutionRequest::RejectSolutionRequest() :
	RpcServiceRequest("companyreg", "2020-03-06", "RejectSolution")
{
	setMethod(HttpRequest::Method::Post);
}

RejectSolutionRequest::~RejectSolutionRequest()
{}

std::string RejectSolutionRequest::getNote()const
{
	return note_;
}

void RejectSolutionRequest::setNote(const std::string& note)
{
	note_ = note;
	setParameter("Note", note);
}

std::string RejectSolutionRequest::getSolutionBizId()const
{
	return solutionBizId_;
}

void RejectSolutionRequest::setSolutionBizId(const std::string& solutionBizId)
{
	solutionBizId_ = solutionBizId;
	setParameter("SolutionBizId", solutionBizId);
}

