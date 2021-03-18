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

#include <tencentcloud/dlc/v20210125/model/DescribeDatabasesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace rapidjson;
using namespace std;

DescribeDatabasesRequest::DescribeDatabasesRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_keyWordHasBeenSet(false)
{
}

string DescribeDatabasesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_keyWordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "KeyWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_keyWord.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeDatabasesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDatabasesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDatabasesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeDatabasesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDatabasesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDatabasesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeDatabasesRequest::GetKeyWord() const
{
    return m_keyWord;
}

void DescribeDatabasesRequest::SetKeyWord(const string& _keyWord)
{
    m_keyWord = _keyWord;
    m_keyWordHasBeenSet = true;
}

bool DescribeDatabasesRequest::KeyWordHasBeenSet() const
{
    return m_keyWordHasBeenSet;
}


