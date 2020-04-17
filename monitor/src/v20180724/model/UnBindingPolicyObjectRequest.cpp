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

#include <tencentcloud/monitor/v20180724/model/UnBindingPolicyObjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace rapidjson;
using namespace std;

UnBindingPolicyObjectRequest::UnBindingPolicyObjectRequest() :
    m_moduleHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_uniqueIdHasBeenSet(false),
    m_instanceGroupIdHasBeenSet(false)
{
}

string UnBindingPolicyObjectRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupId, allocator);
    }

    if (m_uniqueIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UniqueId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_uniqueId.begin(); itr != m_uniqueId.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceGroupId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UnBindingPolicyObjectRequest::GetModule() const
{
    return m_module;
}

void UnBindingPolicyObjectRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool UnBindingPolicyObjectRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

int64_t UnBindingPolicyObjectRequest::GetGroupId() const
{
    return m_groupId;
}

void UnBindingPolicyObjectRequest::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool UnBindingPolicyObjectRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

vector<string> UnBindingPolicyObjectRequest::GetUniqueId() const
{
    return m_uniqueId;
}

void UnBindingPolicyObjectRequest::SetUniqueId(const vector<string>& _uniqueId)
{
    m_uniqueId = _uniqueId;
    m_uniqueIdHasBeenSet = true;
}

bool UnBindingPolicyObjectRequest::UniqueIdHasBeenSet() const
{
    return m_uniqueIdHasBeenSet;
}

int64_t UnBindingPolicyObjectRequest::GetInstanceGroupId() const
{
    return m_instanceGroupId;
}

void UnBindingPolicyObjectRequest::SetInstanceGroupId(const int64_t& _instanceGroupId)
{
    m_instanceGroupId = _instanceGroupId;
    m_instanceGroupIdHasBeenSet = true;
}

bool UnBindingPolicyObjectRequest::InstanceGroupIdHasBeenSet() const
{
    return m_instanceGroupIdHasBeenSet;
}


