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

#include <tencentcloud/tiems/v20190416/model/DescribeRuntimesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiems::V20190416::Model;
using namespace rapidjson;
using namespace std;

DescribeRuntimesResponse::DescribeRuntimesResponse() :
    m_runtimesHasBeenSet(false),
    m_userAccessHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRuntimesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Runtimes") && !rsp["Runtimes"].IsNull())
    {
        if (!rsp["Runtimes"].IsArray())
            return CoreInternalOutcome(Error("response `Runtimes` is not array type"));

        const Value &tmpValue = rsp["Runtimes"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Runtime item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_runtimes.push_back(item);
        }
        m_runtimesHasBeenSet = true;
    }

    if (rsp.HasMember("UserAccess") && !rsp["UserAccess"].IsNull())
    {
        if (!rsp["UserAccess"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `UserAccess` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userAccess = rsp["UserAccess"].GetUint64();
        m_userAccessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<Runtime> DescribeRuntimesResponse::GetRuntimes() const
{
    return m_runtimes;
}

bool DescribeRuntimesResponse::RuntimesHasBeenSet() const
{
    return m_runtimesHasBeenSet;
}

uint64_t DescribeRuntimesResponse::GetUserAccess() const
{
    return m_userAccess;
}

bool DescribeRuntimesResponse::UserAccessHasBeenSet() const
{
    return m_userAccessHasBeenSet;
}


