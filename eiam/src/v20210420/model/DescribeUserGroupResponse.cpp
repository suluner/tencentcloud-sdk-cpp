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

#include <tencentcloud/eiam/v20210420/model/DescribeUserGroupResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

DescribeUserGroupResponse::DescribeUserGroupResponse() :
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_userGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUserGroupResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DisplayName") && !rsp["DisplayName"].IsNull())
    {
        if (!rsp["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(rsp["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("UserGroupId") && !rsp["UserGroupId"].IsNull())
    {
        if (!rsp["UserGroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroupId = string(rsp["UserGroupId"].GetString());
        m_userGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeUserGroupResponse::GetDisplayName() const
{
    return m_displayName;
}

bool DescribeUserGroupResponse::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string DescribeUserGroupResponse::GetDescription() const
{
    return m_description;
}

bool DescribeUserGroupResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeUserGroupResponse::GetUserGroupId() const
{
    return m_userGroupId;
}

bool DescribeUserGroupResponse::UserGroupIdHasBeenSet() const
{
    return m_userGroupIdHasBeenSet;
}


