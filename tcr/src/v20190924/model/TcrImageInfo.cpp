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

#include <tencentcloud/tcr/v20190924/model/TcrImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace rapidjson;
using namespace std;

TcrImageInfo::TcrImageInfo() :
    m_digestHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_imageVersionHasBeenSet(false)
{
}

CoreInternalOutcome TcrImageInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Digest") && !value["Digest"].IsNull())
    {
        if (!value["Digest"].IsString())
        {
            return CoreInternalOutcome(Error("response `TcrImageInfo.Digest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_digest = string(value["Digest"].GetString());
        m_digestHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TcrImageInfo.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("ImageVersion") && !value["ImageVersion"].IsNull())
    {
        if (!value["ImageVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `TcrImageInfo.ImageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageVersion = string(value["ImageVersion"].GetString());
        m_imageVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TcrImageInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_digestHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Digest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_digest.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_imageVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_imageVersion.c_str(), allocator).Move(), allocator);
    }

}


string TcrImageInfo::GetDigest() const
{
    return m_digest;
}

void TcrImageInfo::SetDigest(const string& _digest)
{
    m_digest = _digest;
    m_digestHasBeenSet = true;
}

bool TcrImageInfo::DigestHasBeenSet() const
{
    return m_digestHasBeenSet;
}

int64_t TcrImageInfo::GetSize() const
{
    return m_size;
}

void TcrImageInfo::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool TcrImageInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string TcrImageInfo::GetImageVersion() const
{
    return m_imageVersion;
}

void TcrImageInfo::SetImageVersion(const string& _imageVersion)
{
    m_imageVersion = _imageVersion;
    m_imageVersionHasBeenSet = true;
}

bool TcrImageInfo::ImageVersionHasBeenSet() const
{
    return m_imageVersionHasBeenSet;
}

