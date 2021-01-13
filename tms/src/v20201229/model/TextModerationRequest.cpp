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

#include <tencentcloud/tms/v20201229/model/TextModerationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tms::V20201229::Model;
using namespace rapidjson;
using namespace std;

TextModerationRequest::TextModerationRequest() :
    m_contentHasBeenSet(false),
    m_bizTypeHasBeenSet(false),
    m_dataIdHasBeenSet(false),
    m_userHasBeenSet(false),
    m_deviceHasBeenSet(false)
{
}

string TextModerationRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_contentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_bizTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_bizType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dataId.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_user.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_deviceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Device";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_device.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TextModerationRequest::GetContent() const
{
    return m_content;
}

void TextModerationRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool TextModerationRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string TextModerationRequest::GetBizType() const
{
    return m_bizType;
}

void TextModerationRequest::SetBizType(const string& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool TextModerationRequest::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string TextModerationRequest::GetDataId() const
{
    return m_dataId;
}

void TextModerationRequest::SetDataId(const string& _dataId)
{
    m_dataId = _dataId;
    m_dataIdHasBeenSet = true;
}

bool TextModerationRequest::DataIdHasBeenSet() const
{
    return m_dataIdHasBeenSet;
}

User TextModerationRequest::GetUser() const
{
    return m_user;
}

void TextModerationRequest::SetUser(const User& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool TextModerationRequest::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

Device TextModerationRequest::GetDevice() const
{
    return m_device;
}

void TextModerationRequest::SetDevice(const Device& _device)
{
    m_device = _device;
    m_deviceHasBeenSet = true;
}

bool TextModerationRequest::DeviceHasBeenSet() const
{
    return m_deviceHasBeenSet;
}


