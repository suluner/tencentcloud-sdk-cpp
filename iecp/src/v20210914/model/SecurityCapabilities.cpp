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

#include <tencentcloud/iecp/v20210914/model/SecurityCapabilities.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

SecurityCapabilities::SecurityCapabilities() :
    m_addHasBeenSet(false),
    m_dropHasBeenSet(false)
{
}

CoreInternalOutcome SecurityCapabilities::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Add") && !value["Add"].IsNull())
    {
        if (!value["Add"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityCapabilities.Add` is not array type"));

        const rapidjson::Value &tmpValue = value["Add"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_add.push_back((*itr).GetString());
        }
        m_addHasBeenSet = true;
    }

    if (value.HasMember("Drop") && !value["Drop"].IsNull())
    {
        if (!value["Drop"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityCapabilities.Drop` is not array type"));

        const rapidjson::Value &tmpValue = value["Drop"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_drop.push_back((*itr).GetString());
        }
        m_dropHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityCapabilities::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Add";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_add.begin(); itr != m_add.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dropHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Drop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_drop.begin(); itr != m_drop.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> SecurityCapabilities::GetAdd() const
{
    return m_add;
}

void SecurityCapabilities::SetAdd(const vector<string>& _add)
{
    m_add = _add;
    m_addHasBeenSet = true;
}

bool SecurityCapabilities::AddHasBeenSet() const
{
    return m_addHasBeenSet;
}

vector<string> SecurityCapabilities::GetDrop() const
{
    return m_drop;
}

void SecurityCapabilities::SetDrop(const vector<string>& _drop)
{
    m_drop = _drop;
    m_dropHasBeenSet = true;
}

bool SecurityCapabilities::DropHasBeenSet() const
{
    return m_dropHasBeenSet;
}

