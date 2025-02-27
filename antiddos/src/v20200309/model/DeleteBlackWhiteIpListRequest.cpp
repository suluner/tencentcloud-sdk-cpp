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

#include <tencentcloud/antiddos/v20200309/model/DeleteBlackWhiteIpListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DeleteBlackWhiteIpListRequest::DeleteBlackWhiteIpListRequest() :
    m_instanceIdHasBeenSet(false),
    m_ipListHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string DeleteBlackWhiteIpListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipList.begin(); itr != m_ipList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteBlackWhiteIpListRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DeleteBlackWhiteIpListRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeleteBlackWhiteIpListRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> DeleteBlackWhiteIpListRequest::GetIpList() const
{
    return m_ipList;
}

void DeleteBlackWhiteIpListRequest::SetIpList(const vector<string>& _ipList)
{
    m_ipList = _ipList;
    m_ipListHasBeenSet = true;
}

bool DeleteBlackWhiteIpListRequest::IpListHasBeenSet() const
{
    return m_ipListHasBeenSet;
}

string DeleteBlackWhiteIpListRequest::GetType() const
{
    return m_type;
}

void DeleteBlackWhiteIpListRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DeleteBlackWhiteIpListRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


