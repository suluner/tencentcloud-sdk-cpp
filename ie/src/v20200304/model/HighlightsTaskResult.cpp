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

#include <tencentcloud/ie/v20200304/model/HighlightsTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace rapidjson;
using namespace std;

HighlightsTaskResult::HighlightsTaskResult() :
    m_statusHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_itemSetHasBeenSet(false)
{
}

CoreInternalOutcome HighlightsTaskResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `HighlightsTaskResult.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `HighlightsTaskResult.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `HighlightsTaskResult.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (value.HasMember("ItemSet") && !value["ItemSet"].IsNull())
    {
        if (!value["ItemSet"].IsArray())
            return CoreInternalOutcome(Error("response `HighlightsTaskResult.ItemSet` is not array type"));

        const Value &tmpValue = value["ItemSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HighlightsTaskResultItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_itemSet.push_back(item);
        }
        m_itemSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HighlightsTaskResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_errCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errCode, allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_itemSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ItemSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_itemSet.begin(); itr != m_itemSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t HighlightsTaskResult::GetStatus() const
{
    return m_status;
}

void HighlightsTaskResult::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool HighlightsTaskResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t HighlightsTaskResult::GetErrCode() const
{
    return m_errCode;
}

void HighlightsTaskResult::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool HighlightsTaskResult::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string HighlightsTaskResult::GetErrMsg() const
{
    return m_errMsg;
}

void HighlightsTaskResult::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool HighlightsTaskResult::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

vector<HighlightsTaskResultItem> HighlightsTaskResult::GetItemSet() const
{
    return m_itemSet;
}

void HighlightsTaskResult::SetItemSet(const vector<HighlightsTaskResultItem>& _itemSet)
{
    m_itemSet = _itemSet;
    m_itemSetHasBeenSet = true;
}

bool HighlightsTaskResult::ItemSetHasBeenSet() const
{
    return m_itemSetHasBeenSet;
}

