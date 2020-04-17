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

#include <tencentcloud/as/v20180419/model/LifecycleHook.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace rapidjson;
using namespace std;

LifecycleHook::LifecycleHook() :
    m_lifecycleHookIdHasBeenSet(false),
    m_lifecycleHookNameHasBeenSet(false),
    m_autoScalingGroupIdHasBeenSet(false),
    m_defaultResultHasBeenSet(false),
    m_heartbeatTimeoutHasBeenSet(false),
    m_lifecycleTransitionHasBeenSet(false),
    m_notificationMetadataHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_notificationTargetHasBeenSet(false),
    m_lifecycleTransitionTypeHasBeenSet(false)
{
}

CoreInternalOutcome LifecycleHook::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("LifecycleHookId") && !value["LifecycleHookId"].IsNull())
    {
        if (!value["LifecycleHookId"].IsString())
        {
            return CoreInternalOutcome(Error("response `LifecycleHook.LifecycleHookId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifecycleHookId = string(value["LifecycleHookId"].GetString());
        m_lifecycleHookIdHasBeenSet = true;
    }

    if (value.HasMember("LifecycleHookName") && !value["LifecycleHookName"].IsNull())
    {
        if (!value["LifecycleHookName"].IsString())
        {
            return CoreInternalOutcome(Error("response `LifecycleHook.LifecycleHookName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifecycleHookName = string(value["LifecycleHookName"].GetString());
        m_lifecycleHookNameHasBeenSet = true;
    }

    if (value.HasMember("AutoScalingGroupId") && !value["AutoScalingGroupId"].IsNull())
    {
        if (!value["AutoScalingGroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `LifecycleHook.AutoScalingGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingGroupId = string(value["AutoScalingGroupId"].GetString());
        m_autoScalingGroupIdHasBeenSet = true;
    }

    if (value.HasMember("DefaultResult") && !value["DefaultResult"].IsNull())
    {
        if (!value["DefaultResult"].IsString())
        {
            return CoreInternalOutcome(Error("response `LifecycleHook.DefaultResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultResult = string(value["DefaultResult"].GetString());
        m_defaultResultHasBeenSet = true;
    }

    if (value.HasMember("HeartbeatTimeout") && !value["HeartbeatTimeout"].IsNull())
    {
        if (!value["HeartbeatTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `LifecycleHook.HeartbeatTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_heartbeatTimeout = value["HeartbeatTimeout"].GetInt64();
        m_heartbeatTimeoutHasBeenSet = true;
    }

    if (value.HasMember("LifecycleTransition") && !value["LifecycleTransition"].IsNull())
    {
        if (!value["LifecycleTransition"].IsString())
        {
            return CoreInternalOutcome(Error("response `LifecycleHook.LifecycleTransition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifecycleTransition = string(value["LifecycleTransition"].GetString());
        m_lifecycleTransitionHasBeenSet = true;
    }

    if (value.HasMember("NotificationMetadata") && !value["NotificationMetadata"].IsNull())
    {
        if (!value["NotificationMetadata"].IsString())
        {
            return CoreInternalOutcome(Error("response `LifecycleHook.NotificationMetadata` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notificationMetadata = string(value["NotificationMetadata"].GetString());
        m_notificationMetadataHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `LifecycleHook.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("NotificationTarget") && !value["NotificationTarget"].IsNull())
    {
        if (!value["NotificationTarget"].IsObject())
        {
            return CoreInternalOutcome(Error("response `LifecycleHook.NotificationTarget` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_notificationTarget.Deserialize(value["NotificationTarget"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_notificationTargetHasBeenSet = true;
    }

    if (value.HasMember("LifecycleTransitionType") && !value["LifecycleTransitionType"].IsNull())
    {
        if (!value["LifecycleTransitionType"].IsString())
        {
            return CoreInternalOutcome(Error("response `LifecycleHook.LifecycleTransitionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifecycleTransitionType = string(value["LifecycleTransitionType"].GetString());
        m_lifecycleTransitionTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LifecycleHook::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_lifecycleHookIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LifecycleHookId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_lifecycleHookId.c_str(), allocator).Move(), allocator);
    }

    if (m_lifecycleHookNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LifecycleHookName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_lifecycleHookName.c_str(), allocator).Move(), allocator);
    }

    if (m_autoScalingGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultResultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DefaultResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_defaultResult.c_str(), allocator).Move(), allocator);
    }

    if (m_heartbeatTimeoutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HeartbeatTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_heartbeatTimeout, allocator);
    }

    if (m_lifecycleTransitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LifecycleTransition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_lifecycleTransition.c_str(), allocator).Move(), allocator);
    }

    if (m_notificationMetadataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NotificationMetadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_notificationMetadata.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_notificationTargetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NotificationTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_notificationTarget.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lifecycleTransitionTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LifecycleTransitionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_lifecycleTransitionType.c_str(), allocator).Move(), allocator);
    }

}


string LifecycleHook::GetLifecycleHookId() const
{
    return m_lifecycleHookId;
}

void LifecycleHook::SetLifecycleHookId(const string& _lifecycleHookId)
{
    m_lifecycleHookId = _lifecycleHookId;
    m_lifecycleHookIdHasBeenSet = true;
}

bool LifecycleHook::LifecycleHookIdHasBeenSet() const
{
    return m_lifecycleHookIdHasBeenSet;
}

string LifecycleHook::GetLifecycleHookName() const
{
    return m_lifecycleHookName;
}

void LifecycleHook::SetLifecycleHookName(const string& _lifecycleHookName)
{
    m_lifecycleHookName = _lifecycleHookName;
    m_lifecycleHookNameHasBeenSet = true;
}

bool LifecycleHook::LifecycleHookNameHasBeenSet() const
{
    return m_lifecycleHookNameHasBeenSet;
}

string LifecycleHook::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

void LifecycleHook::SetAutoScalingGroupId(const string& _autoScalingGroupId)
{
    m_autoScalingGroupId = _autoScalingGroupId;
    m_autoScalingGroupIdHasBeenSet = true;
}

bool LifecycleHook::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}

string LifecycleHook::GetDefaultResult() const
{
    return m_defaultResult;
}

void LifecycleHook::SetDefaultResult(const string& _defaultResult)
{
    m_defaultResult = _defaultResult;
    m_defaultResultHasBeenSet = true;
}

bool LifecycleHook::DefaultResultHasBeenSet() const
{
    return m_defaultResultHasBeenSet;
}

int64_t LifecycleHook::GetHeartbeatTimeout() const
{
    return m_heartbeatTimeout;
}

void LifecycleHook::SetHeartbeatTimeout(const int64_t& _heartbeatTimeout)
{
    m_heartbeatTimeout = _heartbeatTimeout;
    m_heartbeatTimeoutHasBeenSet = true;
}

bool LifecycleHook::HeartbeatTimeoutHasBeenSet() const
{
    return m_heartbeatTimeoutHasBeenSet;
}

string LifecycleHook::GetLifecycleTransition() const
{
    return m_lifecycleTransition;
}

void LifecycleHook::SetLifecycleTransition(const string& _lifecycleTransition)
{
    m_lifecycleTransition = _lifecycleTransition;
    m_lifecycleTransitionHasBeenSet = true;
}

bool LifecycleHook::LifecycleTransitionHasBeenSet() const
{
    return m_lifecycleTransitionHasBeenSet;
}

string LifecycleHook::GetNotificationMetadata() const
{
    return m_notificationMetadata;
}

void LifecycleHook::SetNotificationMetadata(const string& _notificationMetadata)
{
    m_notificationMetadata = _notificationMetadata;
    m_notificationMetadataHasBeenSet = true;
}

bool LifecycleHook::NotificationMetadataHasBeenSet() const
{
    return m_notificationMetadataHasBeenSet;
}

string LifecycleHook::GetCreatedTime() const
{
    return m_createdTime;
}

void LifecycleHook::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool LifecycleHook::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

NotificationTarget LifecycleHook::GetNotificationTarget() const
{
    return m_notificationTarget;
}

void LifecycleHook::SetNotificationTarget(const NotificationTarget& _notificationTarget)
{
    m_notificationTarget = _notificationTarget;
    m_notificationTargetHasBeenSet = true;
}

bool LifecycleHook::NotificationTargetHasBeenSet() const
{
    return m_notificationTargetHasBeenSet;
}

string LifecycleHook::GetLifecycleTransitionType() const
{
    return m_lifecycleTransitionType;
}

void LifecycleHook::SetLifecycleTransitionType(const string& _lifecycleTransitionType)
{
    m_lifecycleTransitionType = _lifecycleTransitionType;
    m_lifecycleTransitionTypeHasBeenSet = true;
}

bool LifecycleHook::LifecycleTransitionTypeHasBeenSet() const
{
    return m_lifecycleTransitionTypeHasBeenSet;
}

