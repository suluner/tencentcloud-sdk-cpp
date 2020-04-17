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

#include <tencentcloud/postgres/v20170312/model/CreateServerlessDBInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace rapidjson;
using namespace std;

CreateServerlessDBInstanceRequest::CreateServerlessDBInstanceRequest() :
    m_zoneHasBeenSet(false),
    m_dBInstanceNameHasBeenSet(false),
    m_dBVersionHasBeenSet(false),
    m_dBCharsetHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

string CreateServerlessDBInstanceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_dBInstanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBInstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dBInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_dBVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dBVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dBCharsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBCharset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dBCharset.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateServerlessDBInstanceRequest::GetZone() const
{
    return m_zone;
}

void CreateServerlessDBInstanceRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateServerlessDBInstanceRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateServerlessDBInstanceRequest::GetDBInstanceName() const
{
    return m_dBInstanceName;
}

void CreateServerlessDBInstanceRequest::SetDBInstanceName(const string& _dBInstanceName)
{
    m_dBInstanceName = _dBInstanceName;
    m_dBInstanceNameHasBeenSet = true;
}

bool CreateServerlessDBInstanceRequest::DBInstanceNameHasBeenSet() const
{
    return m_dBInstanceNameHasBeenSet;
}

string CreateServerlessDBInstanceRequest::GetDBVersion() const
{
    return m_dBVersion;
}

void CreateServerlessDBInstanceRequest::SetDBVersion(const string& _dBVersion)
{
    m_dBVersion = _dBVersion;
    m_dBVersionHasBeenSet = true;
}

bool CreateServerlessDBInstanceRequest::DBVersionHasBeenSet() const
{
    return m_dBVersionHasBeenSet;
}

string CreateServerlessDBInstanceRequest::GetDBCharset() const
{
    return m_dBCharset;
}

void CreateServerlessDBInstanceRequest::SetDBCharset(const string& _dBCharset)
{
    m_dBCharset = _dBCharset;
    m_dBCharsetHasBeenSet = true;
}

bool CreateServerlessDBInstanceRequest::DBCharsetHasBeenSet() const
{
    return m_dBCharsetHasBeenSet;
}

uint64_t CreateServerlessDBInstanceRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateServerlessDBInstanceRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateServerlessDBInstanceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateServerlessDBInstanceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateServerlessDBInstanceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateServerlessDBInstanceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateServerlessDBInstanceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateServerlessDBInstanceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateServerlessDBInstanceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}


