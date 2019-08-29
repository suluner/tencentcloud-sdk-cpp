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

#include <tencentcloud/chdfs/v20190718/model/DescribeFileSystemResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chdfs::V20190718::Model;
using namespace rapidjson;
using namespace std;

DescribeFileSystemResponse::DescribeFileSystemResponse() :
    m_fileSystemHasBeenSet(false),
    m_fileSystemCapacityUsedHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFileSystemResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FileSystem") && !rsp["FileSystem"].IsNull())
    {
        if (!rsp["FileSystem"].IsObject())
        {
            return CoreInternalOutcome(Error("response `FileSystem` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileSystem.Deserialize(rsp["FileSystem"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileSystemHasBeenSet = true;
    }

    if (rsp.HasMember("FileSystemCapacityUsed") && !rsp["FileSystemCapacityUsed"].IsNull())
    {
        if (!rsp["FileSystemCapacityUsed"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `FileSystemCapacityUsed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemCapacityUsed = rsp["FileSystemCapacityUsed"].GetUint64();
        m_fileSystemCapacityUsedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


FileSystem DescribeFileSystemResponse::GetFileSystem() const
{
    return m_fileSystem;
}

bool DescribeFileSystemResponse::FileSystemHasBeenSet() const
{
    return m_fileSystemHasBeenSet;
}

uint64_t DescribeFileSystemResponse::GetFileSystemCapacityUsed() const
{
    return m_fileSystemCapacityUsed;
}

bool DescribeFileSystemResponse::FileSystemCapacityUsedHasBeenSet() const
{
    return m_fileSystemCapacityUsedHasBeenSet;
}


