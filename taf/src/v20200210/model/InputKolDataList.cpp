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

#include <tencentcloud/taf/v20200210/model/InputKolDataList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Taf::V20200210::Model;
using namespace std;

InputKolDataList::InputKolDataList() :
    m_typeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_agentInfoHasBeenSet(false),
    m_isAuthorizedHasBeenSet(false)
{
}

CoreInternalOutcome InputKolDataList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InputKolDataList.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputKolDataList.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputKolDataList.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputKolDataList.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("AgentInfo") && !value["AgentInfo"].IsNull())
    {
        if (!value["AgentInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputKolDataList.AgentInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentInfo = string(value["AgentInfo"].GetString());
        m_agentInfoHasBeenSet = true;
    }

    if (value.HasMember("IsAuthorized") && !value["IsAuthorized"].IsNull())
    {
        if (!value["IsAuthorized"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InputKolDataList.IsAuthorized` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAuthorized = value["IsAuthorized"].GetUint64();
        m_isAuthorizedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputKolDataList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_agentInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_isAuthorizedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuthorized";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAuthorized, allocator);
    }

}


uint64_t InputKolDataList::GetType() const
{
    return m_type;
}

void InputKolDataList::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InputKolDataList::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string InputKolDataList::GetId() const
{
    return m_id;
}

void InputKolDataList::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool InputKolDataList::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string InputKolDataList::GetName() const
{
    return m_name;
}

void InputKolDataList::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool InputKolDataList::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string InputKolDataList::GetPhone() const
{
    return m_phone;
}

void InputKolDataList::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool InputKolDataList::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string InputKolDataList::GetAgentInfo() const
{
    return m_agentInfo;
}

void InputKolDataList::SetAgentInfo(const string& _agentInfo)
{
    m_agentInfo = _agentInfo;
    m_agentInfoHasBeenSet = true;
}

bool InputKolDataList::AgentInfoHasBeenSet() const
{
    return m_agentInfoHasBeenSet;
}

uint64_t InputKolDataList::GetIsAuthorized() const
{
    return m_isAuthorized;
}

void InputKolDataList::SetIsAuthorized(const uint64_t& _isAuthorized)
{
    m_isAuthorized = _isAuthorized;
    m_isAuthorizedHasBeenSet = true;
}

bool InputKolDataList::IsAuthorizedHasBeenSet() const
{
    return m_isAuthorizedHasBeenSet;
}

