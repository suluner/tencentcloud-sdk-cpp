/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/sqlserver/v20180328/model/AccountPrivilege.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

AccountPrivilege::AccountPrivilege() :
    m_userNameHasBeenSet(false),
    m_privilegeHasBeenSet(false)
{
}

CoreInternalOutcome AccountPrivilege::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountPrivilege.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Privilege") && !value["Privilege"].IsNull())
    {
        if (!value["Privilege"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountPrivilege.Privilege` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privilege = string(value["Privilege"].GetString());
        m_privilegeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountPrivilege::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_privilegeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privilege";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privilege.c_str(), allocator).Move(), allocator);
    }

}


string AccountPrivilege::GetUserName() const
{
    return m_userName;
}

void AccountPrivilege::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool AccountPrivilege::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string AccountPrivilege::GetPrivilege() const
{
    return m_privilege;
}

void AccountPrivilege::SetPrivilege(const string& _privilege)
{
    m_privilege = _privilege;
    m_privilegeHasBeenSet = true;
}

bool AccountPrivilege::PrivilegeHasBeenSet() const
{
    return m_privilegeHasBeenSet;
}

