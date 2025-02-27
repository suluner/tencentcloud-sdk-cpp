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

#include <tencentcloud/nlp/v20190408/model/SentimentAnalysisRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

SentimentAnalysisRequest::SentimentAnalysisRequest() :
    m_textHasBeenSet(false),
    m_flagHasBeenSet(false),
    m_modeHasBeenSet(false)
{
}

string SentimentAnalysisRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_flagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_flag, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SentimentAnalysisRequest::GetText() const
{
    return m_text;
}

void SentimentAnalysisRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool SentimentAnalysisRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

uint64_t SentimentAnalysisRequest::GetFlag() const
{
    return m_flag;
}

void SentimentAnalysisRequest::SetFlag(const uint64_t& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool SentimentAnalysisRequest::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}

string SentimentAnalysisRequest::GetMode() const
{
    return m_mode;
}

void SentimentAnalysisRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool SentimentAnalysisRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}


