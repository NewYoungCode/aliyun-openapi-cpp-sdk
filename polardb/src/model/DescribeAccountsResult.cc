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

#include <alibabacloud/polardb/model/DescribeAccountsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeAccountsResult::DescribeAccountsResult() :
	ServiceResult()
{}

DescribeAccountsResult::DescribeAccountsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccountsResult::~DescribeAccountsResult()
{}

void DescribeAccountsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccountsNode = value["Accounts"]["DBAccount"];
	for (auto valueAccountsDBAccount : allAccountsNode)
	{
		DBAccount accountsObject;
		if(!valueAccountsDBAccount["AccountName"].isNull())
			accountsObject.accountName = valueAccountsDBAccount["AccountName"].asString();
		if(!valueAccountsDBAccount["AccountStatus"].isNull())
			accountsObject.accountStatus = valueAccountsDBAccount["AccountStatus"].asString();
		if(!valueAccountsDBAccount["AccountDescription"].isNull())
			accountsObject.accountDescription = valueAccountsDBAccount["AccountDescription"].asString();
		if(!valueAccountsDBAccount["AccountType"].isNull())
			accountsObject.accountType = valueAccountsDBAccount["AccountType"].asString();
		if(!valueAccountsDBAccount["AccountLockState"].isNull())
			accountsObject.accountLockState = valueAccountsDBAccount["AccountLockState"].asString();
		if(!valueAccountsDBAccount["PrivilegeExceeded"].isNull())
			accountsObject.privilegeExceeded = valueAccountsDBAccount["PrivilegeExceeded"].asString();
		if(!valueAccountsDBAccount["AccountPasswordValidTime"].isNull())
			accountsObject.accountPasswordValidTime = valueAccountsDBAccount["AccountPasswordValidTime"].asString();
		auto allDatabasePrivilegesNode = allAccountsNode["DatabasePrivileges"]["DatabasePrivilege"];
		for (auto allAccountsNodeDatabasePrivilegesDatabasePrivilege : allDatabasePrivilegesNode)
		{
			DBAccount::DatabasePrivilege databasePrivilegesObject;
			if(!allAccountsNodeDatabasePrivilegesDatabasePrivilege["DBName"].isNull())
				databasePrivilegesObject.dBName = allAccountsNodeDatabasePrivilegesDatabasePrivilege["DBName"].asString();
			if(!allAccountsNodeDatabasePrivilegesDatabasePrivilege["AccountPrivilege"].isNull())
				databasePrivilegesObject.accountPrivilege = allAccountsNodeDatabasePrivilegesDatabasePrivilege["AccountPrivilege"].asString();
			accountsObject.databasePrivileges.push_back(databasePrivilegesObject);
		}
		accounts_.push_back(accountsObject);
	}

}

std::vector<DescribeAccountsResult::DBAccount> DescribeAccountsResult::getAccounts()const
{
	return accounts_;
}

