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

#include <tencentcloud/eiam/v20210420/model/DescribeOrgNodeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

DescribeOrgNodeResponse::DescribeOrgNodeResponse() :
    m_displayNameHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_customizedOrgNodeIdHasBeenSet(false),
    m_parentOrgNodeIdHasBeenSet(false),
    m_orgNodeIdHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_orgNodeChildInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOrgNodeResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("LastModifiedDate") && !rsp["LastModifiedDate"].IsNull())
    {
        if (!rsp["LastModifiedDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `LastModifiedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedDate = string(rsp["LastModifiedDate"].GetString());
        m_lastModifiedDateHasBeenSet = true;
    }

    if (rsp.HasMember("CustomizedOrgNodeId") && !rsp["CustomizedOrgNodeId"].IsNull())
    {
        if (!rsp["CustomizedOrgNodeId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CustomizedOrgNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customizedOrgNodeId = string(rsp["CustomizedOrgNodeId"].GetString());
        m_customizedOrgNodeIdHasBeenSet = true;
    }

    if (rsp.HasMember("ParentOrgNodeId") && !rsp["ParentOrgNodeId"].IsNull())
    {
        if (!rsp["ParentOrgNodeId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ParentOrgNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentOrgNodeId = string(rsp["ParentOrgNodeId"].GetString());
        m_parentOrgNodeIdHasBeenSet = true;
    }

    if (rsp.HasMember("OrgNodeId") && !rsp["OrgNodeId"].IsNull())
    {
        if (!rsp["OrgNodeId"].IsString())
        {
            return CoreInternalOutcome(Error("response `OrgNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgNodeId = string(rsp["OrgNodeId"].GetString());
        m_orgNodeIdHasBeenSet = true;
    }

    if (rsp.HasMember("DataSource") && !rsp["DataSource"].IsNull())
    {
        if (!rsp["DataSource"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSource = string(rsp["DataSource"].GetString());
        m_dataSourceHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedDate") && !rsp["CreatedDate"].IsNull())
    {
        if (!rsp["CreatedDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreatedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdDate = string(rsp["CreatedDate"].GetString());
        m_createdDateHasBeenSet = true;
    }

    if (rsp.HasMember("OrgNodeChildInfo") && !rsp["OrgNodeChildInfo"].IsNull())
    {
        if (!rsp["OrgNodeChildInfo"].IsArray())
            return CoreInternalOutcome(Error("response `OrgNodeChildInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OrgNodeChildInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OrgNodeChildInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_orgNodeChildInfo.push_back(item);
        }
        m_orgNodeChildInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeOrgNodeResponse::GetDisplayName() const
{
    return m_displayName;
}

bool DescribeOrgNodeResponse::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string DescribeOrgNodeResponse::GetLastModifiedDate() const
{
    return m_lastModifiedDate;
}

bool DescribeOrgNodeResponse::LastModifiedDateHasBeenSet() const
{
    return m_lastModifiedDateHasBeenSet;
}

string DescribeOrgNodeResponse::GetCustomizedOrgNodeId() const
{
    return m_customizedOrgNodeId;
}

bool DescribeOrgNodeResponse::CustomizedOrgNodeIdHasBeenSet() const
{
    return m_customizedOrgNodeIdHasBeenSet;
}

string DescribeOrgNodeResponse::GetParentOrgNodeId() const
{
    return m_parentOrgNodeId;
}

bool DescribeOrgNodeResponse::ParentOrgNodeIdHasBeenSet() const
{
    return m_parentOrgNodeIdHasBeenSet;
}

string DescribeOrgNodeResponse::GetOrgNodeId() const
{
    return m_orgNodeId;
}

bool DescribeOrgNodeResponse::OrgNodeIdHasBeenSet() const
{
    return m_orgNodeIdHasBeenSet;
}

string DescribeOrgNodeResponse::GetDataSource() const
{
    return m_dataSource;
}

bool DescribeOrgNodeResponse::DataSourceHasBeenSet() const
{
    return m_dataSourceHasBeenSet;
}

string DescribeOrgNodeResponse::GetCreatedDate() const
{
    return m_createdDate;
}

bool DescribeOrgNodeResponse::CreatedDateHasBeenSet() const
{
    return m_createdDateHasBeenSet;
}

vector<OrgNodeChildInfo> DescribeOrgNodeResponse::GetOrgNodeChildInfo() const
{
    return m_orgNodeChildInfo;
}

bool DescribeOrgNodeResponse::OrgNodeChildInfoHasBeenSet() const
{
    return m_orgNodeChildInfoHasBeenSet;
}


