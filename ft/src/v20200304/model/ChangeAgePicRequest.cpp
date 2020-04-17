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

#include <tencentcloud/ft/v20200304/model/ChangeAgePicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ft::V20200304::Model;
using namespace rapidjson;
using namespace std;

ChangeAgePicRequest::ChangeAgePicRequest() :
    m_ageInfosHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

string ChangeAgePicRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ageInfosHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AgeInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ageInfos.begin(); itr != m_ageInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_imageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_url.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<AgeInfo> ChangeAgePicRequest::GetAgeInfos() const
{
    return m_ageInfos;
}

void ChangeAgePicRequest::SetAgeInfos(const vector<AgeInfo>& _ageInfos)
{
    m_ageInfos = _ageInfos;
    m_ageInfosHasBeenSet = true;
}

bool ChangeAgePicRequest::AgeInfosHasBeenSet() const
{
    return m_ageInfosHasBeenSet;
}

string ChangeAgePicRequest::GetImage() const
{
    return m_image;
}

void ChangeAgePicRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool ChangeAgePicRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string ChangeAgePicRequest::GetUrl() const
{
    return m_url;
}

void ChangeAgePicRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ChangeAgePicRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}


