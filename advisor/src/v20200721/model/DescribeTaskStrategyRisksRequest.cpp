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

#include <tencentcloud/advisor/v20200721/model/DescribeTaskStrategyRisksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Advisor::V20200721::Model;
using namespace std;

DescribeTaskStrategyRisksRequest::DescribeTaskStrategyRisksRequest() :
    m_strategyIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeTaskStrategyRisksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_strategyId, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeTaskStrategyRisksRequest::GetStrategyId() const
{
    return m_strategyId;
}

void DescribeTaskStrategyRisksRequest::SetStrategyId(const uint64_t& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool DescribeTaskStrategyRisksRequest::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

uint64_t DescribeTaskStrategyRisksRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTaskStrategyRisksRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTaskStrategyRisksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeTaskStrategyRisksRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTaskStrategyRisksRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTaskStrategyRisksRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


