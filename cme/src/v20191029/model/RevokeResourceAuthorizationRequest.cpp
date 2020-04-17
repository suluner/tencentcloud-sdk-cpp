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

#include <tencentcloud/cme/v20191029/model/RevokeResourceAuthorizationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

RevokeResourceAuthorizationRequest::RevokeResourceAuthorizationRequest() :
    m_platformHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_authorizeesHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string RevokeResourceAuthorizationRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_owner.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_resourcesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resources.begin(); itr != m_resources.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_authorizeesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Authorizees";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_authorizees.begin(); itr != m_authorizees.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_permissionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Permissions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_permissions.begin(); itr != m_permissions.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_operatorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RevokeResourceAuthorizationRequest::GetPlatform() const
{
    return m_platform;
}

void RevokeResourceAuthorizationRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool RevokeResourceAuthorizationRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

Entity RevokeResourceAuthorizationRequest::GetOwner() const
{
    return m_owner;
}

void RevokeResourceAuthorizationRequest::SetOwner(const Entity& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool RevokeResourceAuthorizationRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

vector<Resource> RevokeResourceAuthorizationRequest::GetResources() const
{
    return m_resources;
}

void RevokeResourceAuthorizationRequest::SetResources(const vector<Resource>& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool RevokeResourceAuthorizationRequest::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

vector<Entity> RevokeResourceAuthorizationRequest::GetAuthorizees() const
{
    return m_authorizees;
}

void RevokeResourceAuthorizationRequest::SetAuthorizees(const vector<Entity>& _authorizees)
{
    m_authorizees = _authorizees;
    m_authorizeesHasBeenSet = true;
}

bool RevokeResourceAuthorizationRequest::AuthorizeesHasBeenSet() const
{
    return m_authorizeesHasBeenSet;
}

vector<string> RevokeResourceAuthorizationRequest::GetPermissions() const
{
    return m_permissions;
}

void RevokeResourceAuthorizationRequest::SetPermissions(const vector<string>& _permissions)
{
    m_permissions = _permissions;
    m_permissionsHasBeenSet = true;
}

bool RevokeResourceAuthorizationRequest::PermissionsHasBeenSet() const
{
    return m_permissionsHasBeenSet;
}

string RevokeResourceAuthorizationRequest::GetOperator() const
{
    return m_operator;
}

void RevokeResourceAuthorizationRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool RevokeResourceAuthorizationRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


