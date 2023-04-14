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

#include <alibabacloud/cams/model/ModifyChatappTemplateRequest.h>

using AlibabaCloud::Cams::Model::ModifyChatappTemplateRequest;

ModifyChatappTemplateRequest::ModifyChatappTemplateRequest()
    : RpcServiceRequest("cams", "2020-06-06", "ModifyChatappTemplate") {
  setMethod(HttpRequest::Method::Post);
}

ModifyChatappTemplateRequest::~ModifyChatappTemplateRequest() {}

std::vector<ModifyChatappTemplateRequest::Components> ModifyChatappTemplateRequest::getComponents() const {
  return components_;
}

void ModifyChatappTemplateRequest::setComponents(const std::vector<ModifyChatappTemplateRequest::Components> &components) {
  components_ = components;
  for(int dep1 = 0; dep1 != components.size(); dep1++) {
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Type", components[dep1].type);
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Text", components[dep1].text);
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Format", components[dep1].format);
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Url", components[dep1].url);
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Caption", components[dep1].caption);
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".FileName", components[dep1].fileName);
    for(int dep2 = 0; dep2 != components[dep1].buttons.size(); dep2++) {
      setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Buttons." + std::to_string(dep2 + 1) + ".Type", components[dep1].buttons[dep2].type);
      setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Buttons." + std::to_string(dep2 + 1) + ".Text", components[dep1].buttons[dep2].text);
      setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Buttons." + std::to_string(dep2 + 1) + ".PhoneNumber", components[dep1].buttons[dep2].phoneNumber);
      setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Buttons." + std::to_string(dep2 + 1) + ".Url", components[dep1].buttons[dep2].url);
      setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Buttons." + std::to_string(dep2 + 1) + ".UrlType", components[dep1].buttons[dep2].urlType);
    }
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".ThumbUrl", components[dep1].thumbUrl);
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Duration", std::to_string(components[dep1].duration));
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".FileType", components[dep1].fileType);
  }
}

std::string ModifyChatappTemplateRequest::getLanguage() const {
  return language_;
}

void ModifyChatappTemplateRequest::setLanguage(const std::string &language) {
  language_ = language;
  setBodyParameter(std::string("Language"), language);
}

std::string ModifyChatappTemplateRequest::getCustWabaId() const {
  return custWabaId_;
}

void ModifyChatappTemplateRequest::setCustWabaId(const std::string &custWabaId) {
  custWabaId_ = custWabaId;
  setBodyParameter(std::string("CustWabaId"), custWabaId);
}

std::map<std::string, std::string> ModifyChatappTemplateRequest::getExample() const {
  return example_;
}

void ModifyChatappTemplateRequest::setExample(const std::map<std::string, std::string> &example) {
  example_ = example;
  for(auto const &iter1 : example) {
    setBodyParameter(std::string("Example") + "." + iter1.first, iter1.second);
  }
}

std::string ModifyChatappTemplateRequest::getApiCode() const {
  return apiCode_;
}

void ModifyChatappTemplateRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string ModifyChatappTemplateRequest::getTemplateType() const {
  return templateType_;
}

void ModifyChatappTemplateRequest::setTemplateType(const std::string &templateType) {
  templateType_ = templateType;
  setBodyParameter(std::string("TemplateType"), templateType);
}

std::string ModifyChatappTemplateRequest::getIsvCode() const {
  return isvCode_;
}

void ModifyChatappTemplateRequest::setIsvCode(const std::string &isvCode) {
  isvCode_ = isvCode;
  setBodyParameter(std::string("IsvCode"), isvCode);
}

std::string ModifyChatappTemplateRequest::getProdCode() const {
  return prodCode_;
}

void ModifyChatappTemplateRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string ModifyChatappTemplateRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void ModifyChatappTemplateRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setBodyParameter(std::string("CustSpaceId"), custSpaceId);
}

std::string ModifyChatappTemplateRequest::getCategory() const {
  return category_;
}

void ModifyChatappTemplateRequest::setCategory(const std::string &category) {
  category_ = category;
  setBodyParameter(std::string("Category"), category);
}

std::string ModifyChatappTemplateRequest::getTemplateCode() const {
  return templateCode_;
}

void ModifyChatappTemplateRequest::setTemplateCode(const std::string &templateCode) {
  templateCode_ = templateCode;
  setBodyParameter(std::string("TemplateCode"), templateCode);
}

