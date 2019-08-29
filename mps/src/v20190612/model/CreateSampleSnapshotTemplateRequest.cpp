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

#include <tencentcloud/mps/v20190612/model/CreateSampleSnapshotTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

CreateSampleSnapshotTemplateRequest::CreateSampleSnapshotTemplateRequest() :
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_sampleTypeHasBeenSet(false),
    m_sampleIntervalHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

string CreateSampleSnapshotTemplateRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_widthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_height, allocator);
    }

    if (m_sampleTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SampleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sampleType.c_str(), allocator).Move(), allocator);
    }

    if (m_sampleIntervalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SampleInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sampleInterval, allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_format.c_str(), allocator).Move(), allocator);
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


uint64_t CreateSampleSnapshotTemplateRequest::GetWidth() const
{
    return m_width;
}

void CreateSampleSnapshotTemplateRequest::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool CreateSampleSnapshotTemplateRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t CreateSampleSnapshotTemplateRequest::GetHeight() const
{
    return m_height;
}

void CreateSampleSnapshotTemplateRequest::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool CreateSampleSnapshotTemplateRequest::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string CreateSampleSnapshotTemplateRequest::GetSampleType() const
{
    return m_sampleType;
}

void CreateSampleSnapshotTemplateRequest::SetSampleType(const string& _sampleType)
{
    m_sampleType = _sampleType;
    m_sampleTypeHasBeenSet = true;
}

bool CreateSampleSnapshotTemplateRequest::SampleTypeHasBeenSet() const
{
    return m_sampleTypeHasBeenSet;
}

uint64_t CreateSampleSnapshotTemplateRequest::GetSampleInterval() const
{
    return m_sampleInterval;
}

void CreateSampleSnapshotTemplateRequest::SetSampleInterval(const uint64_t& _sampleInterval)
{
    m_sampleInterval = _sampleInterval;
    m_sampleIntervalHasBeenSet = true;
}

bool CreateSampleSnapshotTemplateRequest::SampleIntervalHasBeenSet() const
{
    return m_sampleIntervalHasBeenSet;
}

string CreateSampleSnapshotTemplateRequest::GetName() const
{
    return m_name;
}

void CreateSampleSnapshotTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateSampleSnapshotTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateSampleSnapshotTemplateRequest::GetFormat() const
{
    return m_format;
}

void CreateSampleSnapshotTemplateRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool CreateSampleSnapshotTemplateRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string CreateSampleSnapshotTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateSampleSnapshotTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateSampleSnapshotTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}


