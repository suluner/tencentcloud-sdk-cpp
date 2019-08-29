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

#include <tencentcloud/mps/v20190612/model/ModifyAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

ModifyAnimatedGraphicsTemplateRequest::ModifyAnimatedGraphicsTemplateRequest() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_qualityHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

string ModifyAnimatedGraphicsTemplateRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_definitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_definition, allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

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

    if (m_formatHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_fpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fps, allocator);
    }

    if (m_qualityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Quality";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_quality, allocator);
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


uint64_t ModifyAnimatedGraphicsTemplateRequest::GetDefinition() const
{
    return m_definition;
}

void ModifyAnimatedGraphicsTemplateRequest::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ModifyAnimatedGraphicsTemplateRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ModifyAnimatedGraphicsTemplateRequest::GetName() const
{
    return m_name;
}

void ModifyAnimatedGraphicsTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyAnimatedGraphicsTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ModifyAnimatedGraphicsTemplateRequest::GetWidth() const
{
    return m_width;
}

void ModifyAnimatedGraphicsTemplateRequest::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ModifyAnimatedGraphicsTemplateRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t ModifyAnimatedGraphicsTemplateRequest::GetHeight() const
{
    return m_height;
}

void ModifyAnimatedGraphicsTemplateRequest::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ModifyAnimatedGraphicsTemplateRequest::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string ModifyAnimatedGraphicsTemplateRequest::GetFormat() const
{
    return m_format;
}

void ModifyAnimatedGraphicsTemplateRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool ModifyAnimatedGraphicsTemplateRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

uint64_t ModifyAnimatedGraphicsTemplateRequest::GetFps() const
{
    return m_fps;
}

void ModifyAnimatedGraphicsTemplateRequest::SetFps(const uint64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool ModifyAnimatedGraphicsTemplateRequest::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

double ModifyAnimatedGraphicsTemplateRequest::GetQuality() const
{
    return m_quality;
}

void ModifyAnimatedGraphicsTemplateRequest::SetQuality(const double& _quality)
{
    m_quality = _quality;
    m_qualityHasBeenSet = true;
}

bool ModifyAnimatedGraphicsTemplateRequest::QualityHasBeenSet() const
{
    return m_qualityHasBeenSet;
}

string ModifyAnimatedGraphicsTemplateRequest::GetComment() const
{
    return m_comment;
}

void ModifyAnimatedGraphicsTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifyAnimatedGraphicsTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}


