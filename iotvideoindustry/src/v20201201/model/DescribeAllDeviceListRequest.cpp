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

#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeAllDeviceListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace rapidjson;
using namespace std;

DescribeAllDeviceListRequest::DescribeAllDeviceListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_deviceIdsHasBeenSet(false)
{
}

string DescribeAllDeviceListRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_deviceIds.begin(); itr != m_deviceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAllDeviceListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAllDeviceListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAllDeviceListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeAllDeviceListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAllDeviceListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAllDeviceListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeAllDeviceListRequest::GetNickName() const
{
    return m_nickName;
}

void DescribeAllDeviceListRequest::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool DescribeAllDeviceListRequest::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

vector<string> DescribeAllDeviceListRequest::GetDeviceIds() const
{
    return m_deviceIds;
}

void DescribeAllDeviceListRequest::SetDeviceIds(const vector<string>& _deviceIds)
{
    m_deviceIds = _deviceIds;
    m_deviceIdsHasBeenSet = true;
}

bool DescribeAllDeviceListRequest::DeviceIdsHasBeenSet() const
{
    return m_deviceIdsHasBeenSet;
}


