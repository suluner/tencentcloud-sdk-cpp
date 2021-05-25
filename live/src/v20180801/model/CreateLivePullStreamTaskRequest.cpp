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

#include <tencentcloud/live/v20180801/model/CreateLivePullStreamTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

CreateLivePullStreamTaskRequest::CreateLivePullStreamTaskRequest() :
    m_sourceTypeHasBeenSet(false),
    m_sourceUrlsHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_pushArgsHasBeenSet(false),
    m_callbackEventsHasBeenSet(false),
    m_vodLoopTimesHasBeenSet(false),
    m_vodRefreshTypeHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_extraCmdHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

string CreateLivePullStreamTaskRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceUrlsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceUrls";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_sourceUrls.begin(); itr != m_sourceUrls.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_domainNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_streamNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_pushArgsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PushArgs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_pushArgs.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackEventsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CallbackEvents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_callbackEvents.begin(); itr != m_callbackEvents.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vodLoopTimesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VodLoopTimes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vodLoopTimes.c_str(), allocator).Move(), allocator);
    }

    if (m_vodRefreshTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VodRefreshType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vodRefreshType.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_extraCmdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExtraCmd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_extraCmd.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_comment.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLivePullStreamTaskRequest::GetSourceType() const
{
    return m_sourceType;
}

void CreateLivePullStreamTaskRequest::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool CreateLivePullStreamTaskRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

vector<string> CreateLivePullStreamTaskRequest::GetSourceUrls() const
{
    return m_sourceUrls;
}

void CreateLivePullStreamTaskRequest::SetSourceUrls(const vector<string>& _sourceUrls)
{
    m_sourceUrls = _sourceUrls;
    m_sourceUrlsHasBeenSet = true;
}

bool CreateLivePullStreamTaskRequest::SourceUrlsHasBeenSet() const
{
    return m_sourceUrlsHasBeenSet;
}

string CreateLivePullStreamTaskRequest::GetDomainName() const
{
    return m_domainName;
}

void CreateLivePullStreamTaskRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool CreateLivePullStreamTaskRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string CreateLivePullStreamTaskRequest::GetAppName() const
{
    return m_appName;
}

void CreateLivePullStreamTaskRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool CreateLivePullStreamTaskRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string CreateLivePullStreamTaskRequest::GetStreamName() const
{
    return m_streamName;
}

void CreateLivePullStreamTaskRequest::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool CreateLivePullStreamTaskRequest::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

string CreateLivePullStreamTaskRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateLivePullStreamTaskRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateLivePullStreamTaskRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CreateLivePullStreamTaskRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateLivePullStreamTaskRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateLivePullStreamTaskRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string CreateLivePullStreamTaskRequest::GetOperator() const
{
    return m_operator;
}

void CreateLivePullStreamTaskRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateLivePullStreamTaskRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateLivePullStreamTaskRequest::GetPushArgs() const
{
    return m_pushArgs;
}

void CreateLivePullStreamTaskRequest::SetPushArgs(const string& _pushArgs)
{
    m_pushArgs = _pushArgs;
    m_pushArgsHasBeenSet = true;
}

bool CreateLivePullStreamTaskRequest::PushArgsHasBeenSet() const
{
    return m_pushArgsHasBeenSet;
}

vector<string> CreateLivePullStreamTaskRequest::GetCallbackEvents() const
{
    return m_callbackEvents;
}

void CreateLivePullStreamTaskRequest::SetCallbackEvents(const vector<string>& _callbackEvents)
{
    m_callbackEvents = _callbackEvents;
    m_callbackEventsHasBeenSet = true;
}

bool CreateLivePullStreamTaskRequest::CallbackEventsHasBeenSet() const
{
    return m_callbackEventsHasBeenSet;
}

string CreateLivePullStreamTaskRequest::GetVodLoopTimes() const
{
    return m_vodLoopTimes;
}

void CreateLivePullStreamTaskRequest::SetVodLoopTimes(const string& _vodLoopTimes)
{
    m_vodLoopTimes = _vodLoopTimes;
    m_vodLoopTimesHasBeenSet = true;
}

bool CreateLivePullStreamTaskRequest::VodLoopTimesHasBeenSet() const
{
    return m_vodLoopTimesHasBeenSet;
}

string CreateLivePullStreamTaskRequest::GetVodRefreshType() const
{
    return m_vodRefreshType;
}

void CreateLivePullStreamTaskRequest::SetVodRefreshType(const string& _vodRefreshType)
{
    m_vodRefreshType = _vodRefreshType;
    m_vodRefreshTypeHasBeenSet = true;
}

bool CreateLivePullStreamTaskRequest::VodRefreshTypeHasBeenSet() const
{
    return m_vodRefreshTypeHasBeenSet;
}

string CreateLivePullStreamTaskRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void CreateLivePullStreamTaskRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool CreateLivePullStreamTaskRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string CreateLivePullStreamTaskRequest::GetExtraCmd() const
{
    return m_extraCmd;
}

void CreateLivePullStreamTaskRequest::SetExtraCmd(const string& _extraCmd)
{
    m_extraCmd = _extraCmd;
    m_extraCmdHasBeenSet = true;
}

bool CreateLivePullStreamTaskRequest::ExtraCmdHasBeenSet() const
{
    return m_extraCmdHasBeenSet;
}

string CreateLivePullStreamTaskRequest::GetComment() const
{
    return m_comment;
}

void CreateLivePullStreamTaskRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateLivePullStreamTaskRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}


