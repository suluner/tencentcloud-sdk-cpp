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

#include <tencentcloud/antiddos/v20200309/model/DescribeBlackWhiteIpListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DescribeBlackWhiteIpListResponse::DescribeBlackWhiteIpListResponse() :
    m_blackIpListHasBeenSet(false),
    m_whiteIpListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBlackWhiteIpListResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("BlackIpList") && !rsp["BlackIpList"].IsNull())
    {
        if (!rsp["BlackIpList"].IsArray())
            return CoreInternalOutcome(Error("response `BlackIpList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BlackIpList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_blackIpList.push_back((*itr).GetString());
        }
        m_blackIpListHasBeenSet = true;
    }

    if (rsp.HasMember("WhiteIpList") && !rsp["WhiteIpList"].IsNull())
    {
        if (!rsp["WhiteIpList"].IsArray())
            return CoreInternalOutcome(Error("response `WhiteIpList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WhiteIpList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_whiteIpList.push_back((*itr).GetString());
        }
        m_whiteIpListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<string> DescribeBlackWhiteIpListResponse::GetBlackIpList() const
{
    return m_blackIpList;
}

bool DescribeBlackWhiteIpListResponse::BlackIpListHasBeenSet() const
{
    return m_blackIpListHasBeenSet;
}

vector<string> DescribeBlackWhiteIpListResponse::GetWhiteIpList() const
{
    return m_whiteIpList;
}

bool DescribeBlackWhiteIpListResponse::WhiteIpListHasBeenSet() const
{
    return m_whiteIpListHasBeenSet;
}


