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

#include <tencentcloud/cfw/v20190904/model/CreateSecurityGroupApiRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace rapidjson;
using namespace std;

CreateSecurityGroupApiRulesRequest::CreateSecurityGroupApiRulesRequest() :
    m_dataHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_areaHasBeenSet(false)
{
}

string CreateSecurityGroupApiRulesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_directionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_direction, allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_areaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_area.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<SecurityGroupApiRuleData> CreateSecurityGroupApiRulesRequest::GetData() const
{
    return m_data;
}

void CreateSecurityGroupApiRulesRequest::SetData(const vector<SecurityGroupApiRuleData>& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool CreateSecurityGroupApiRulesRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

uint64_t CreateSecurityGroupApiRulesRequest::GetDirection() const
{
    return m_direction;
}

void CreateSecurityGroupApiRulesRequest::SetDirection(const uint64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool CreateSecurityGroupApiRulesRequest::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

uint64_t CreateSecurityGroupApiRulesRequest::GetType() const
{
    return m_type;
}

void CreateSecurityGroupApiRulesRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateSecurityGroupApiRulesRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateSecurityGroupApiRulesRequest::GetArea() const
{
    return m_area;
}

void CreateSecurityGroupApiRulesRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool CreateSecurityGroupApiRulesRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}


