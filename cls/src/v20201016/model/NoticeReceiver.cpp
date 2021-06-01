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

#include <tencentcloud/cls/v20201016/model/NoticeReceiver.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace rapidjson;
using namespace std;

NoticeReceiver::NoticeReceiver() :
    m_receiverTypeHasBeenSet(false),
    m_receiverIdsHasBeenSet(false),
    m_receiverChannelsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_indexHasBeenSet(false)
{
}

CoreInternalOutcome NoticeReceiver::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ReceiverType") && !value["ReceiverType"].IsNull())
    {
        if (!value["ReceiverType"].IsString())
        {
            return CoreInternalOutcome(Error("response `NoticeReceiver.ReceiverType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiverType = string(value["ReceiverType"].GetString());
        m_receiverTypeHasBeenSet = true;
    }

    if (value.HasMember("ReceiverIds") && !value["ReceiverIds"].IsNull())
    {
        if (!value["ReceiverIds"].IsArray())
            return CoreInternalOutcome(Error("response `NoticeReceiver.ReceiverIds` is not array type"));

        const Value &tmpValue = value["ReceiverIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_receiverIds.push_back((*itr).GetInt64());
        }
        m_receiverIdsHasBeenSet = true;
    }

    if (value.HasMember("ReceiverChannels") && !value["ReceiverChannels"].IsNull())
    {
        if (!value["ReceiverChannels"].IsArray())
            return CoreInternalOutcome(Error("response `NoticeReceiver.ReceiverChannels` is not array type"));

        const Value &tmpValue = value["ReceiverChannels"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_receiverChannels.push_back((*itr).GetString());
        }
        m_receiverChannelsHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `NoticeReceiver.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `NoticeReceiver.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `NoticeReceiver.Index` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetInt64();
        m_indexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NoticeReceiver::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_receiverTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReceiverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_receiverType.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReceiverIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_receiverIds.begin(); itr != m_receiverIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_receiverChannelsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReceiverChannels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_receiverChannels.begin(); itr != m_receiverChannels.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

}


string NoticeReceiver::GetReceiverType() const
{
    return m_receiverType;
}

void NoticeReceiver::SetReceiverType(const string& _receiverType)
{
    m_receiverType = _receiverType;
    m_receiverTypeHasBeenSet = true;
}

bool NoticeReceiver::ReceiverTypeHasBeenSet() const
{
    return m_receiverTypeHasBeenSet;
}

vector<int64_t> NoticeReceiver::GetReceiverIds() const
{
    return m_receiverIds;
}

void NoticeReceiver::SetReceiverIds(const vector<int64_t>& _receiverIds)
{
    m_receiverIds = _receiverIds;
    m_receiverIdsHasBeenSet = true;
}

bool NoticeReceiver::ReceiverIdsHasBeenSet() const
{
    return m_receiverIdsHasBeenSet;
}

vector<string> NoticeReceiver::GetReceiverChannels() const
{
    return m_receiverChannels;
}

void NoticeReceiver::SetReceiverChannels(const vector<string>& _receiverChannels)
{
    m_receiverChannels = _receiverChannels;
    m_receiverChannelsHasBeenSet = true;
}

bool NoticeReceiver::ReceiverChannelsHasBeenSet() const
{
    return m_receiverChannelsHasBeenSet;
}

string NoticeReceiver::GetStartTime() const
{
    return m_startTime;
}

void NoticeReceiver::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool NoticeReceiver::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string NoticeReceiver::GetEndTime() const
{
    return m_endTime;
}

void NoticeReceiver::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool NoticeReceiver::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t NoticeReceiver::GetIndex() const
{
    return m_index;
}

void NoticeReceiver::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool NoticeReceiver::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

