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

#include <tencentcloud/vod/v20180717/model/ParseStreamingManifestRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

ParseStreamingManifestRequest::ParseStreamingManifestRequest() :
    m_mediaManifestContentHasBeenSet(false),
    m_manifestTypeHasBeenSet(false)
{
}

string ParseStreamingManifestRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mediaManifestContentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MediaManifestContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mediaManifestContent.c_str(), allocator).Move(), allocator);
    }

    if (m_manifestTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ManifestType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_manifestType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ParseStreamingManifestRequest::GetMediaManifestContent() const
{
    return m_mediaManifestContent;
}

void ParseStreamingManifestRequest::SetMediaManifestContent(const string& _mediaManifestContent)
{
    m_mediaManifestContent = _mediaManifestContent;
    m_mediaManifestContentHasBeenSet = true;
}

bool ParseStreamingManifestRequest::MediaManifestContentHasBeenSet() const
{
    return m_mediaManifestContentHasBeenSet;
}

string ParseStreamingManifestRequest::GetManifestType() const
{
    return m_manifestType;
}

void ParseStreamingManifestRequest::SetManifestType(const string& _manifestType)
{
    m_manifestType = _manifestType;
    m_manifestTypeHasBeenSet = true;
}

bool ParseStreamingManifestRequest::ManifestTypeHasBeenSet() const
{
    return m_manifestTypeHasBeenSet;
}


