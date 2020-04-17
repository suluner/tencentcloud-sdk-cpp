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

#include <tencentcloud/postgres/v20170312/model/CloseServerlessDBExtranetAccessRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace rapidjson;
using namespace std;

CloseServerlessDBExtranetAccessRequest::CloseServerlessDBExtranetAccessRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_dBInstanceNameHasBeenSet(false)
{
}

string CloseServerlessDBExtranetAccessRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dBInstanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBInstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dBInstanceName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CloseServerlessDBExtranetAccessRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void CloseServerlessDBExtranetAccessRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool CloseServerlessDBExtranetAccessRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

string CloseServerlessDBExtranetAccessRequest::GetDBInstanceName() const
{
    return m_dBInstanceName;
}

void CloseServerlessDBExtranetAccessRequest::SetDBInstanceName(const string& _dBInstanceName)
{
    m_dBInstanceName = _dBInstanceName;
    m_dBInstanceNameHasBeenSet = true;
}

bool CloseServerlessDBExtranetAccessRequest::DBInstanceNameHasBeenSet() const
{
    return m_dBInstanceNameHasBeenSet;
}


