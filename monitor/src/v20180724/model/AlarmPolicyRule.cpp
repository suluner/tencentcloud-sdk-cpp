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

#include <tencentcloud/monitor/v20180724/model/AlarmPolicyRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace rapidjson;
using namespace std;

AlarmPolicyRule::AlarmPolicyRule() :
    m_metricNameHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_continuePeriodHasBeenSet(false),
    m_noticeFrequencyHasBeenSet(false),
    m_isPowerNoticeHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_ruleTypeHasBeenSet(false)
{
}

CoreInternalOutcome AlarmPolicyRule::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmPolicyRule.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AlarmPolicyRule.Period` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetInt64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmPolicyRule.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmPolicyRule.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("ContinuePeriod") && !value["ContinuePeriod"].IsNull())
    {
        if (!value["ContinuePeriod"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AlarmPolicyRule.ContinuePeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_continuePeriod = value["ContinuePeriod"].GetInt64();
        m_continuePeriodHasBeenSet = true;
    }

    if (value.HasMember("NoticeFrequency") && !value["NoticeFrequency"].IsNull())
    {
        if (!value["NoticeFrequency"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AlarmPolicyRule.NoticeFrequency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_noticeFrequency = value["NoticeFrequency"].GetInt64();
        m_noticeFrequencyHasBeenSet = true;
    }

    if (value.HasMember("IsPowerNotice") && !value["IsPowerNotice"].IsNull())
    {
        if (!value["IsPowerNotice"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AlarmPolicyRule.IsPowerNotice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isPowerNotice = value["IsPowerNotice"].GetInt64();
        m_isPowerNoticeHasBeenSet = true;
    }

    if (value.HasMember("Filter") && !value["Filter"].IsNull())
    {
        if (!value["Filter"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AlarmPolicyRule.Filter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_filter.Deserialize(value["Filter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_filterHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmPolicyRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmPolicyRule.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmPolicyRule.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmPolicyRule::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_metricNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_continuePeriodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ContinuePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_continuePeriod, allocator);
    }

    if (m_noticeFrequencyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NoticeFrequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noticeFrequency, allocator);
    }

    if (m_isPowerNoticeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsPowerNotice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPowerNotice, allocator);
    }

    if (m_filterHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_filter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

}


string AlarmPolicyRule::GetMetricName() const
{
    return m_metricName;
}

void AlarmPolicyRule::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool AlarmPolicyRule::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

int64_t AlarmPolicyRule::GetPeriod() const
{
    return m_period;
}

void AlarmPolicyRule::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool AlarmPolicyRule::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string AlarmPolicyRule::GetOperator() const
{
    return m_operator;
}

void AlarmPolicyRule::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool AlarmPolicyRule::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string AlarmPolicyRule::GetValue() const
{
    return m_value;
}

void AlarmPolicyRule::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool AlarmPolicyRule::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

int64_t AlarmPolicyRule::GetContinuePeriod() const
{
    return m_continuePeriod;
}

void AlarmPolicyRule::SetContinuePeriod(const int64_t& _continuePeriod)
{
    m_continuePeriod = _continuePeriod;
    m_continuePeriodHasBeenSet = true;
}

bool AlarmPolicyRule::ContinuePeriodHasBeenSet() const
{
    return m_continuePeriodHasBeenSet;
}

int64_t AlarmPolicyRule::GetNoticeFrequency() const
{
    return m_noticeFrequency;
}

void AlarmPolicyRule::SetNoticeFrequency(const int64_t& _noticeFrequency)
{
    m_noticeFrequency = _noticeFrequency;
    m_noticeFrequencyHasBeenSet = true;
}

bool AlarmPolicyRule::NoticeFrequencyHasBeenSet() const
{
    return m_noticeFrequencyHasBeenSet;
}

int64_t AlarmPolicyRule::GetIsPowerNotice() const
{
    return m_isPowerNotice;
}

void AlarmPolicyRule::SetIsPowerNotice(const int64_t& _isPowerNotice)
{
    m_isPowerNotice = _isPowerNotice;
    m_isPowerNoticeHasBeenSet = true;
}

bool AlarmPolicyRule::IsPowerNoticeHasBeenSet() const
{
    return m_isPowerNoticeHasBeenSet;
}

AlarmPolicyFilter AlarmPolicyRule::GetFilter() const
{
    return m_filter;
}

void AlarmPolicyRule::SetFilter(const AlarmPolicyFilter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool AlarmPolicyRule::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

string AlarmPolicyRule::GetDescription() const
{
    return m_description;
}

void AlarmPolicyRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AlarmPolicyRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AlarmPolicyRule::GetUnit() const
{
    return m_unit;
}

void AlarmPolicyRule::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool AlarmPolicyRule::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string AlarmPolicyRule::GetRuleType() const
{
    return m_ruleType;
}

void AlarmPolicyRule::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool AlarmPolicyRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

