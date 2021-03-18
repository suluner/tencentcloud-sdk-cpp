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

#include <tencentcloud/tsf/v20180326/model/DescribeApplicationsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

DescribeApplicationsRequest::DescribeApplicationsRequest() :
    m_searchWordHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_microserviceTypeHasBeenSet(false),
    m_applicationResourceTypeListHasBeenSet(false),
    m_applicationIdListHasBeenSet(false)
{
}

string DescribeApplicationsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_searchWordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SearchWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_searchWord.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderType, allocator);
    }

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

    if (m_applicationTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_applicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MicroserviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_microserviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationResourceTypeListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationResourceTypeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_applicationResourceTypeList.begin(); itr != m_applicationResourceTypeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_applicationIdListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_applicationIdList.begin(); itr != m_applicationIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeApplicationsRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribeApplicationsRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribeApplicationsRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}

string DescribeApplicationsRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeApplicationsRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeApplicationsRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

int64_t DescribeApplicationsRequest::GetOrderType() const
{
    return m_orderType;
}

void DescribeApplicationsRequest::SetOrderType(const int64_t& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribeApplicationsRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

int64_t DescribeApplicationsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeApplicationsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeApplicationsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeApplicationsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeApplicationsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeApplicationsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeApplicationsRequest::GetApplicationType() const
{
    return m_applicationType;
}

void DescribeApplicationsRequest::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool DescribeApplicationsRequest::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string DescribeApplicationsRequest::GetMicroserviceType() const
{
    return m_microserviceType;
}

void DescribeApplicationsRequest::SetMicroserviceType(const string& _microserviceType)
{
    m_microserviceType = _microserviceType;
    m_microserviceTypeHasBeenSet = true;
}

bool DescribeApplicationsRequest::MicroserviceTypeHasBeenSet() const
{
    return m_microserviceTypeHasBeenSet;
}

vector<string> DescribeApplicationsRequest::GetApplicationResourceTypeList() const
{
    return m_applicationResourceTypeList;
}

void DescribeApplicationsRequest::SetApplicationResourceTypeList(const vector<string>& _applicationResourceTypeList)
{
    m_applicationResourceTypeList = _applicationResourceTypeList;
    m_applicationResourceTypeListHasBeenSet = true;
}

bool DescribeApplicationsRequest::ApplicationResourceTypeListHasBeenSet() const
{
    return m_applicationResourceTypeListHasBeenSet;
}

vector<string> DescribeApplicationsRequest::GetApplicationIdList() const
{
    return m_applicationIdList;
}

void DescribeApplicationsRequest::SetApplicationIdList(const vector<string>& _applicationIdList)
{
    m_applicationIdList = _applicationIdList;
    m_applicationIdListHasBeenSet = true;
}

bool DescribeApplicationsRequest::ApplicationIdListHasBeenSet() const
{
    return m_applicationIdListHasBeenSet;
}


