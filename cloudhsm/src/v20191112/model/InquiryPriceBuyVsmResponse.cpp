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

#include <tencentcloud/cloudhsm/v20191112/model/InquiryPriceBuyVsmResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudhsm::V20191112::Model;
using namespace rapidjson;
using namespace std;

InquiryPriceBuyVsmResponse::InquiryPriceBuyVsmResponse() :
    m_totalCostHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_originalCostHasBeenSet(false)
{
}

CoreInternalOutcome InquiryPriceBuyVsmResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("TotalCost") && !rsp["TotalCost"].IsNull())
    {
        if (!rsp["TotalCost"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `TotalCost` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = rsp["TotalCost"].GetDouble();
        m_totalCostHasBeenSet = true;
    }

    if (rsp.HasMember("GoodsNum") && !rsp["GoodsNum"].IsNull())
    {
        if (!rsp["GoodsNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `GoodsNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_goodsNum = rsp["GoodsNum"].GetInt64();
        m_goodsNumHasBeenSet = true;
    }

    if (rsp.HasMember("TimeSpan") && !rsp["TimeSpan"].IsNull())
    {
        if (!rsp["TimeSpan"].IsString())
        {
            return CoreInternalOutcome(Error("response `TimeSpan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = string(rsp["TimeSpan"].GetString());
        m_timeSpanHasBeenSet = true;
    }

    if (rsp.HasMember("TimeUnit") && !rsp["TimeUnit"].IsNull())
    {
        if (!rsp["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Error("response `TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(rsp["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (rsp.HasMember("OriginalCost") && !rsp["OriginalCost"].IsNull())
    {
        if (!rsp["OriginalCost"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `OriginalCost` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalCost = rsp["OriginalCost"].GetDouble();
        m_originalCostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


double InquiryPriceBuyVsmResponse::GetTotalCost() const
{
    return m_totalCost;
}

bool InquiryPriceBuyVsmResponse::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

int64_t InquiryPriceBuyVsmResponse::GetGoodsNum() const
{
    return m_goodsNum;
}

bool InquiryPriceBuyVsmResponse::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

string InquiryPriceBuyVsmResponse::GetTimeSpan() const
{
    return m_timeSpan;
}

bool InquiryPriceBuyVsmResponse::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string InquiryPriceBuyVsmResponse::GetTimeUnit() const
{
    return m_timeUnit;
}

bool InquiryPriceBuyVsmResponse::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

double InquiryPriceBuyVsmResponse::GetOriginalCost() const
{
    return m_originalCost;
}

bool InquiryPriceBuyVsmResponse::OriginalCostHasBeenSet() const
{
    return m_originalCostHasBeenSet;
}


