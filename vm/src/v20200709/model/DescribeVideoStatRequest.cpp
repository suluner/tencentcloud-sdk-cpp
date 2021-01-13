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

#include <tencentcloud/vm/v20200709/model/DescribeVideoStatRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vm::V20200709::Model;
using namespace rapidjson;
using namespace std;

DescribeVideoStatRequest::DescribeVideoStatRequest() :
    m_auditTypeHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeVideoStatRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_auditTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AuditType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_auditType, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeVideoStatRequest::GetAuditType() const
{
    return m_auditType;
}

void DescribeVideoStatRequest::SetAuditType(const int64_t& _auditType)
{
    m_auditType = _auditType;
    m_auditTypeHasBeenSet = true;
}

bool DescribeVideoStatRequest::AuditTypeHasBeenSet() const
{
    return m_auditTypeHasBeenSet;
}

vector<Filters> DescribeVideoStatRequest::GetFilters() const
{
    return m_filters;
}

void DescribeVideoStatRequest::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeVideoStatRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


