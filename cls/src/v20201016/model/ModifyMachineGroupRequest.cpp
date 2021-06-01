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

#include <tencentcloud/cls/v20201016/model/ModifyMachineGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace rapidjson;
using namespace std;

ModifyMachineGroupRequest::ModifyMachineGroupRequest() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_machineGroupTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_autoUpdateHasBeenSet(false),
    m_updateStartTimeHasBeenSet(false),
    m_updateEndTimeHasBeenSet(false),
    m_serviceLoggingHasBeenSet(false)
{
}

string ModifyMachineGroupRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineGroupTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MachineGroupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_machineGroupType.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_autoUpdateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoUpdate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoUpdate, allocator);
    }

    if (m_updateStartTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_updateStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateEndTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_updateEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceLoggingHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceLogging";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serviceLogging, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMachineGroupRequest::GetGroupId() const
{
    return m_groupId;
}

void ModifyMachineGroupRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ModifyMachineGroupRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ModifyMachineGroupRequest::GetGroupName() const
{
    return m_groupName;
}

void ModifyMachineGroupRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool ModifyMachineGroupRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

MachineGroupTypeInfo ModifyMachineGroupRequest::GetMachineGroupType() const
{
    return m_machineGroupType;
}

void ModifyMachineGroupRequest::SetMachineGroupType(const MachineGroupTypeInfo& _machineGroupType)
{
    m_machineGroupType = _machineGroupType;
    m_machineGroupTypeHasBeenSet = true;
}

bool ModifyMachineGroupRequest::MachineGroupTypeHasBeenSet() const
{
    return m_machineGroupTypeHasBeenSet;
}

vector<Tag> ModifyMachineGroupRequest::GetTags() const
{
    return m_tags;
}

void ModifyMachineGroupRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ModifyMachineGroupRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool ModifyMachineGroupRequest::GetAutoUpdate() const
{
    return m_autoUpdate;
}

void ModifyMachineGroupRequest::SetAutoUpdate(const bool& _autoUpdate)
{
    m_autoUpdate = _autoUpdate;
    m_autoUpdateHasBeenSet = true;
}

bool ModifyMachineGroupRequest::AutoUpdateHasBeenSet() const
{
    return m_autoUpdateHasBeenSet;
}

string ModifyMachineGroupRequest::GetUpdateStartTime() const
{
    return m_updateStartTime;
}

void ModifyMachineGroupRequest::SetUpdateStartTime(const string& _updateStartTime)
{
    m_updateStartTime = _updateStartTime;
    m_updateStartTimeHasBeenSet = true;
}

bool ModifyMachineGroupRequest::UpdateStartTimeHasBeenSet() const
{
    return m_updateStartTimeHasBeenSet;
}

string ModifyMachineGroupRequest::GetUpdateEndTime() const
{
    return m_updateEndTime;
}

void ModifyMachineGroupRequest::SetUpdateEndTime(const string& _updateEndTime)
{
    m_updateEndTime = _updateEndTime;
    m_updateEndTimeHasBeenSet = true;
}

bool ModifyMachineGroupRequest::UpdateEndTimeHasBeenSet() const
{
    return m_updateEndTimeHasBeenSet;
}

bool ModifyMachineGroupRequest::GetServiceLogging() const
{
    return m_serviceLogging;
}

void ModifyMachineGroupRequest::SetServiceLogging(const bool& _serviceLogging)
{
    m_serviceLogging = _serviceLogging;
    m_serviceLoggingHasBeenSet = true;
}

bool ModifyMachineGroupRequest::ServiceLoggingHasBeenSet() const
{
    return m_serviceLoggingHasBeenSet;
}


