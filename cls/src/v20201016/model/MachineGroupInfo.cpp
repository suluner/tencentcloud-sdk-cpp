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

#include <tencentcloud/cls/v20201016/model/MachineGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace rapidjson;
using namespace std;

MachineGroupInfo::MachineGroupInfo() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_machineGroupTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_autoUpdateHasBeenSet(false),
    m_updateStartTimeHasBeenSet(false),
    m_updateEndTimeHasBeenSet(false),
    m_serviceLoggingHasBeenSet(false)
{
}

CoreInternalOutcome MachineGroupInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `MachineGroupInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Error("response `MachineGroupInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("MachineGroupType") && !value["MachineGroupType"].IsNull())
    {
        if (!value["MachineGroupType"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MachineGroupInfo.MachineGroupType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineGroupType.Deserialize(value["MachineGroupType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineGroupTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `MachineGroupInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Error("response `MachineGroupInfo.Tags` is not array type"));

        const Value &tmpValue = value["Tags"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("AutoUpdate") && !value["AutoUpdate"].IsNull())
    {
        if (!value["AutoUpdate"].IsString())
        {
            return CoreInternalOutcome(Error("response `MachineGroupInfo.AutoUpdate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoUpdate = string(value["AutoUpdate"].GetString());
        m_autoUpdateHasBeenSet = true;
    }

    if (value.HasMember("UpdateStartTime") && !value["UpdateStartTime"].IsNull())
    {
        if (!value["UpdateStartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `MachineGroupInfo.UpdateStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateStartTime = string(value["UpdateStartTime"].GetString());
        m_updateStartTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateEndTime") && !value["UpdateEndTime"].IsNull())
    {
        if (!value["UpdateEndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `MachineGroupInfo.UpdateEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateEndTime = string(value["UpdateEndTime"].GetString());
        m_updateEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ServiceLogging") && !value["ServiceLogging"].IsNull())
    {
        if (!value["ServiceLogging"].IsBool())
        {
            return CoreInternalOutcome(Error("response `MachineGroupInfo.ServiceLogging` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_serviceLogging = value["ServiceLogging"].GetBool();
        m_serviceLoggingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MachineGroupInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineGroupTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MachineGroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_machineGroupType.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_autoUpdateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoUpdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_autoUpdate.c_str(), allocator).Move(), allocator);
    }

    if (m_updateStartTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateEndTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceLoggingHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceLogging";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceLogging, allocator);
    }

}


string MachineGroupInfo::GetGroupId() const
{
    return m_groupId;
}

void MachineGroupInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool MachineGroupInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string MachineGroupInfo::GetGroupName() const
{
    return m_groupName;
}

void MachineGroupInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool MachineGroupInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

MachineGroupTypeInfo MachineGroupInfo::GetMachineGroupType() const
{
    return m_machineGroupType;
}

void MachineGroupInfo::SetMachineGroupType(const MachineGroupTypeInfo& _machineGroupType)
{
    m_machineGroupType = _machineGroupType;
    m_machineGroupTypeHasBeenSet = true;
}

bool MachineGroupInfo::MachineGroupTypeHasBeenSet() const
{
    return m_machineGroupTypeHasBeenSet;
}

string MachineGroupInfo::GetCreateTime() const
{
    return m_createTime;
}

void MachineGroupInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MachineGroupInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<Tag> MachineGroupInfo::GetTags() const
{
    return m_tags;
}

void MachineGroupInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool MachineGroupInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string MachineGroupInfo::GetAutoUpdate() const
{
    return m_autoUpdate;
}

void MachineGroupInfo::SetAutoUpdate(const string& _autoUpdate)
{
    m_autoUpdate = _autoUpdate;
    m_autoUpdateHasBeenSet = true;
}

bool MachineGroupInfo::AutoUpdateHasBeenSet() const
{
    return m_autoUpdateHasBeenSet;
}

string MachineGroupInfo::GetUpdateStartTime() const
{
    return m_updateStartTime;
}

void MachineGroupInfo::SetUpdateStartTime(const string& _updateStartTime)
{
    m_updateStartTime = _updateStartTime;
    m_updateStartTimeHasBeenSet = true;
}

bool MachineGroupInfo::UpdateStartTimeHasBeenSet() const
{
    return m_updateStartTimeHasBeenSet;
}

string MachineGroupInfo::GetUpdateEndTime() const
{
    return m_updateEndTime;
}

void MachineGroupInfo::SetUpdateEndTime(const string& _updateEndTime)
{
    m_updateEndTime = _updateEndTime;
    m_updateEndTimeHasBeenSet = true;
}

bool MachineGroupInfo::UpdateEndTimeHasBeenSet() const
{
    return m_updateEndTimeHasBeenSet;
}

bool MachineGroupInfo::GetServiceLogging() const
{
    return m_serviceLogging;
}

void MachineGroupInfo::SetServiceLogging(const bool& _serviceLogging)
{
    m_serviceLogging = _serviceLogging;
    m_serviceLoggingHasBeenSet = true;
}

bool MachineGroupInfo::ServiceLoggingHasBeenSet() const
{
    return m_serviceLoggingHasBeenSet;
}

