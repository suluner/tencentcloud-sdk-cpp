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

#include <tencentcloud/cam/v20190116/model/ListPoliciesGrantingServiceAccessRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

ListPoliciesGrantingServiceAccessRequest::ListPoliciesGrantingServiceAccessRequest() :
    m_targetUinHasBeenSet(false),
    m_roleIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_serviceTypeHasBeenSet(false)
{
}

string ListPoliciesGrantingServiceAccessRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_targetUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_targetUin, allocator);
    }

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roleId, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupId, allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ListPoliciesGrantingServiceAccessRequest::GetTargetUin() const
{
    return m_targetUin;
}

void ListPoliciesGrantingServiceAccessRequest::SetTargetUin(const uint64_t& _targetUin)
{
    m_targetUin = _targetUin;
    m_targetUinHasBeenSet = true;
}

bool ListPoliciesGrantingServiceAccessRequest::TargetUinHasBeenSet() const
{
    return m_targetUinHasBeenSet;
}

uint64_t ListPoliciesGrantingServiceAccessRequest::GetRoleId() const
{
    return m_roleId;
}

void ListPoliciesGrantingServiceAccessRequest::SetRoleId(const uint64_t& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool ListPoliciesGrantingServiceAccessRequest::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

uint64_t ListPoliciesGrantingServiceAccessRequest::GetGroupId() const
{
    return m_groupId;
}

void ListPoliciesGrantingServiceAccessRequest::SetGroupId(const uint64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ListPoliciesGrantingServiceAccessRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ListPoliciesGrantingServiceAccessRequest::GetServiceType() const
{
    return m_serviceType;
}

void ListPoliciesGrantingServiceAccessRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool ListPoliciesGrantingServiceAccessRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}


