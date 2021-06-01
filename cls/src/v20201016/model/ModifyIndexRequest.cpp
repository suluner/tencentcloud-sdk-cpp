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

#include <tencentcloud/cls/v20201016/model/ModifyIndexRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace rapidjson;
using namespace std;

ModifyIndexRequest::ModifyIndexRequest() :
    m_topicIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ruleHasBeenSet(false)
{
}

string ModifyIndexRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_ruleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_rule.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyIndexRequest::GetTopicId() const
{
    return m_topicId;
}

void ModifyIndexRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ModifyIndexRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

bool ModifyIndexRequest::GetStatus() const
{
    return m_status;
}

void ModifyIndexRequest::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyIndexRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

RuleInfo ModifyIndexRequest::GetRule() const
{
    return m_rule;
}

void ModifyIndexRequest::SetRule(const RuleInfo& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool ModifyIndexRequest::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}


