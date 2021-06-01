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

#include <tencentcloud/cls/v20201016/model/AlarmInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace rapidjson;
using namespace std;

AlarmInfo::AlarmInfo() :
    m_nameHasBeenSet(false),
    m_alarmTargetsHasBeenSet(false),
    m_monitorTimeHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_triggerCountHasBeenSet(false),
    m_alarmPeriodHasBeenSet(false),
    m_alarmNoticeIdsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_alarmIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_messageTemplateHasBeenSet(false),
    m_callBackHasBeenSet(false)
{
}

CoreInternalOutcome AlarmInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AlarmTargets") && !value["AlarmTargets"].IsNull())
    {
        if (!value["AlarmTargets"].IsArray())
            return CoreInternalOutcome(Error("response `AlarmInfo.AlarmTargets` is not array type"));

        const Value &tmpValue = value["AlarmTargets"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmTargetInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_alarmTargets.push_back(item);
        }
        m_alarmTargetsHasBeenSet = true;
    }

    if (value.HasMember("MonitorTime") && !value["MonitorTime"].IsNull())
    {
        if (!value["MonitorTime"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AlarmInfo.MonitorTime` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_monitorTime.Deserialize(value["MonitorTime"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_monitorTimeHasBeenSet = true;
    }

    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmInfo.Condition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_condition = string(value["Condition"].GetString());
        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("TriggerCount") && !value["TriggerCount"].IsNull())
    {
        if (!value["TriggerCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AlarmInfo.TriggerCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerCount = value["TriggerCount"].GetInt64();
        m_triggerCountHasBeenSet = true;
    }

    if (value.HasMember("AlarmPeriod") && !value["AlarmPeriod"].IsNull())
    {
        if (!value["AlarmPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AlarmInfo.AlarmPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmPeriod = value["AlarmPeriod"].GetInt64();
        m_alarmPeriodHasBeenSet = true;
    }

    if (value.HasMember("AlarmNoticeIds") && !value["AlarmNoticeIds"].IsNull())
    {
        if (!value["AlarmNoticeIds"].IsArray())
            return CoreInternalOutcome(Error("response `AlarmInfo.AlarmNoticeIds` is not array type"));

        const Value &tmpValue = value["AlarmNoticeIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alarmNoticeIds.push_back((*itr).GetString());
        }
        m_alarmNoticeIdsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsBool())
        {
            return CoreInternalOutcome(Error("response `AlarmInfo.Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetBool();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AlarmId") && !value["AlarmId"].IsNull())
    {
        if (!value["AlarmId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmInfo.AlarmId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmId = string(value["AlarmId"].GetString());
        m_alarmIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("MessageTemplate") && !value["MessageTemplate"].IsNull())
    {
        if (!value["MessageTemplate"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmInfo.MessageTemplate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messageTemplate = string(value["MessageTemplate"].GetString());
        m_messageTemplateHasBeenSet = true;
    }

    if (value.HasMember("CallBack") && !value["CallBack"].IsNull())
    {
        if (!value["CallBack"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AlarmInfo.CallBack` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_callBack.Deserialize(value["CallBack"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_callBackHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmTargetsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AlarmTargets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alarmTargets.begin(); itr != m_alarmTargets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_monitorTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MonitorTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_monitorTime.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_conditionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_condition.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TriggerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerCount, allocator);
    }

    if (m_alarmPeriodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AlarmPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmPeriod, allocator);
    }

    if (m_alarmNoticeIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AlarmNoticeIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_alarmNoticeIds.begin(); itr != m_alarmNoticeIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_alarmIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AlarmId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_alarmId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_messageTemplateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MessageTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_messageTemplate.c_str(), allocator).Move(), allocator);
    }

    if (m_callBackHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CallBack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_callBack.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AlarmInfo::GetName() const
{
    return m_name;
}

void AlarmInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AlarmInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<AlarmTargetInfo> AlarmInfo::GetAlarmTargets() const
{
    return m_alarmTargets;
}

void AlarmInfo::SetAlarmTargets(const vector<AlarmTargetInfo>& _alarmTargets)
{
    m_alarmTargets = _alarmTargets;
    m_alarmTargetsHasBeenSet = true;
}

bool AlarmInfo::AlarmTargetsHasBeenSet() const
{
    return m_alarmTargetsHasBeenSet;
}

MonitorTime AlarmInfo::GetMonitorTime() const
{
    return m_monitorTime;
}

void AlarmInfo::SetMonitorTime(const MonitorTime& _monitorTime)
{
    m_monitorTime = _monitorTime;
    m_monitorTimeHasBeenSet = true;
}

bool AlarmInfo::MonitorTimeHasBeenSet() const
{
    return m_monitorTimeHasBeenSet;
}

string AlarmInfo::GetCondition() const
{
    return m_condition;
}

void AlarmInfo::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool AlarmInfo::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

int64_t AlarmInfo::GetTriggerCount() const
{
    return m_triggerCount;
}

void AlarmInfo::SetTriggerCount(const int64_t& _triggerCount)
{
    m_triggerCount = _triggerCount;
    m_triggerCountHasBeenSet = true;
}

bool AlarmInfo::TriggerCountHasBeenSet() const
{
    return m_triggerCountHasBeenSet;
}

int64_t AlarmInfo::GetAlarmPeriod() const
{
    return m_alarmPeriod;
}

void AlarmInfo::SetAlarmPeriod(const int64_t& _alarmPeriod)
{
    m_alarmPeriod = _alarmPeriod;
    m_alarmPeriodHasBeenSet = true;
}

bool AlarmInfo::AlarmPeriodHasBeenSet() const
{
    return m_alarmPeriodHasBeenSet;
}

vector<string> AlarmInfo::GetAlarmNoticeIds() const
{
    return m_alarmNoticeIds;
}

void AlarmInfo::SetAlarmNoticeIds(const vector<string>& _alarmNoticeIds)
{
    m_alarmNoticeIds = _alarmNoticeIds;
    m_alarmNoticeIdsHasBeenSet = true;
}

bool AlarmInfo::AlarmNoticeIdsHasBeenSet() const
{
    return m_alarmNoticeIdsHasBeenSet;
}

bool AlarmInfo::GetStatus() const
{
    return m_status;
}

void AlarmInfo::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AlarmInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AlarmInfo::GetAlarmId() const
{
    return m_alarmId;
}

void AlarmInfo::SetAlarmId(const string& _alarmId)
{
    m_alarmId = _alarmId;
    m_alarmIdHasBeenSet = true;
}

bool AlarmInfo::AlarmIdHasBeenSet() const
{
    return m_alarmIdHasBeenSet;
}

string AlarmInfo::GetCreateTime() const
{
    return m_createTime;
}

void AlarmInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AlarmInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AlarmInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AlarmInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AlarmInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AlarmInfo::GetMessageTemplate() const
{
    return m_messageTemplate;
}

void AlarmInfo::SetMessageTemplate(const string& _messageTemplate)
{
    m_messageTemplate = _messageTemplate;
    m_messageTemplateHasBeenSet = true;
}

bool AlarmInfo::MessageTemplateHasBeenSet() const
{
    return m_messageTemplateHasBeenSet;
}

CallBackInfo AlarmInfo::GetCallBack() const
{
    return m_callBack;
}

void AlarmInfo::SetCallBack(const CallBackInfo& _callBack)
{
    m_callBack = _callBack;
    m_callBackHasBeenSet = true;
}

bool AlarmInfo::CallBackHasBeenSet() const
{
    return m_callBackHasBeenSet;
}

