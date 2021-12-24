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

#include <tencentcloud/iecp/v20210914/model/OperationLogsCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

OperationLogsCondition::OperationLogsCondition() :
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome OperationLogsCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OperationLogsCondition.Status` is not array type"));

        const rapidjson::Value &tmpValue = value["Status"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_status.push_back((*itr).GetInt64());
        }
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OperationLogsCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


vector<int64_t> OperationLogsCondition::GetStatus() const
{
    return m_status;
}

void OperationLogsCondition::SetStatus(const vector<int64_t>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OperationLogsCondition::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

