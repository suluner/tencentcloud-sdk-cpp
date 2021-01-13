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

#include <tencentcloud/vm/v20200709/model/CreateBizConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vm::V20200709::Model;
using namespace rapidjson;
using namespace std;

CreateBizConfigRequest::CreateBizConfigRequest() :
    m_bizTypeHasBeenSet(false),
    m_mediaModerationHasBeenSet(false),
    m_bizNameHasBeenSet(false),
    m_moderationCategoriesHasBeenSet(false)
{
}

string CreateBizConfigRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bizTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_bizType.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaModerationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MediaModeration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_mediaModeration.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_bizNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BizName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_bizName.c_str(), allocator).Move(), allocator);
    }

    if (m_moderationCategoriesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModerationCategories";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_moderationCategories.begin(); itr != m_moderationCategories.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBizConfigRequest::GetBizType() const
{
    return m_bizType;
}

void CreateBizConfigRequest::SetBizType(const string& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool CreateBizConfigRequest::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

MediaModerationConfig CreateBizConfigRequest::GetMediaModeration() const
{
    return m_mediaModeration;
}

void CreateBizConfigRequest::SetMediaModeration(const MediaModerationConfig& _mediaModeration)
{
    m_mediaModeration = _mediaModeration;
    m_mediaModerationHasBeenSet = true;
}

bool CreateBizConfigRequest::MediaModerationHasBeenSet() const
{
    return m_mediaModerationHasBeenSet;
}

string CreateBizConfigRequest::GetBizName() const
{
    return m_bizName;
}

void CreateBizConfigRequest::SetBizName(const string& _bizName)
{
    m_bizName = _bizName;
    m_bizNameHasBeenSet = true;
}

bool CreateBizConfigRequest::BizNameHasBeenSet() const
{
    return m_bizNameHasBeenSet;
}

vector<string> CreateBizConfigRequest::GetModerationCategories() const
{
    return m_moderationCategories;
}

void CreateBizConfigRequest::SetModerationCategories(const vector<string>& _moderationCategories)
{
    m_moderationCategories = _moderationCategories;
    m_moderationCategoriesHasBeenSet = true;
}

bool CreateBizConfigRequest::ModerationCategoriesHasBeenSet() const
{
    return m_moderationCategoriesHasBeenSet;
}


