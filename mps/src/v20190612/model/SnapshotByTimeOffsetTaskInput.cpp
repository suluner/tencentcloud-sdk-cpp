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

#include <tencentcloud/mps/v20190612/model/SnapshotByTimeOffsetTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

SnapshotByTimeOffsetTaskInput::SnapshotByTimeOffsetTaskInput() :
    m_definitionHasBeenSet(false),
    m_timeOffsetSetHasBeenSet(false),
    m_watermarkSetHasBeenSet(false),
    m_outputStorageHasBeenSet(false),
    m_outputObjectPathHasBeenSet(false),
    m_objectNumberFormatHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotByTimeOffsetTaskInput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SnapshotByTimeOffsetTaskInput.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("TimeOffsetSet") && !value["TimeOffsetSet"].IsNull())
    {
        if (!value["TimeOffsetSet"].IsArray())
            return CoreInternalOutcome(Error("response `SnapshotByTimeOffsetTaskInput.TimeOffsetSet` is not array type"));

        const Value &tmpValue = value["TimeOffsetSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_timeOffsetSet.push_back((*itr).GetDouble());
        }
        m_timeOffsetSetHasBeenSet = true;
    }

    if (value.HasMember("WatermarkSet") && !value["WatermarkSet"].IsNull())
    {
        if (!value["WatermarkSet"].IsArray())
            return CoreInternalOutcome(Error("response `SnapshotByTimeOffsetTaskInput.WatermarkSet` is not array type"));

        const Value &tmpValue = value["WatermarkSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WatermarkInput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_watermarkSet.push_back(item);
        }
        m_watermarkSetHasBeenSet = true;
    }

    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Error("response `SnapshotByTimeOffsetTaskInput.OutputStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputStorage.Deserialize(value["OutputStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputStorageHasBeenSet = true;
    }

    if (value.HasMember("OutputObjectPath") && !value["OutputObjectPath"].IsNull())
    {
        if (!value["OutputObjectPath"].IsString())
        {
            return CoreInternalOutcome(Error("response `SnapshotByTimeOffsetTaskInput.OutputObjectPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputObjectPath = string(value["OutputObjectPath"].GetString());
        m_outputObjectPathHasBeenSet = true;
    }

    if (value.HasMember("ObjectNumberFormat") && !value["ObjectNumberFormat"].IsNull())
    {
        if (!value["ObjectNumberFormat"].IsObject())
        {
            return CoreInternalOutcome(Error("response `SnapshotByTimeOffsetTaskInput.ObjectNumberFormat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_objectNumberFormat.Deserialize(value["ObjectNumberFormat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_objectNumberFormatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotByTimeOffsetTaskInput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_timeOffsetSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeOffsetSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_timeOffsetSet.begin(); itr != m_timeOffsetSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetDouble(*itr), allocator);
        }
    }

    if (m_watermarkSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WatermarkSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_watermarkSet.begin(); itr != m_watermarkSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputStorageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputObjectPathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OutputObjectPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_outputObjectPath.c_str(), allocator).Move(), allocator);
    }

    if (m_objectNumberFormatHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ObjectNumberFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_objectNumberFormat.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t SnapshotByTimeOffsetTaskInput::GetDefinition() const
{
    return m_definition;
}

void SnapshotByTimeOffsetTaskInput::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool SnapshotByTimeOffsetTaskInput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

vector<double> SnapshotByTimeOffsetTaskInput::GetTimeOffsetSet() const
{
    return m_timeOffsetSet;
}

void SnapshotByTimeOffsetTaskInput::SetTimeOffsetSet(const vector<double>& _timeOffsetSet)
{
    m_timeOffsetSet = _timeOffsetSet;
    m_timeOffsetSetHasBeenSet = true;
}

bool SnapshotByTimeOffsetTaskInput::TimeOffsetSetHasBeenSet() const
{
    return m_timeOffsetSetHasBeenSet;
}

vector<WatermarkInput> SnapshotByTimeOffsetTaskInput::GetWatermarkSet() const
{
    return m_watermarkSet;
}

void SnapshotByTimeOffsetTaskInput::SetWatermarkSet(const vector<WatermarkInput>& _watermarkSet)
{
    m_watermarkSet = _watermarkSet;
    m_watermarkSetHasBeenSet = true;
}

bool SnapshotByTimeOffsetTaskInput::WatermarkSetHasBeenSet() const
{
    return m_watermarkSetHasBeenSet;
}

TaskOutputStorage SnapshotByTimeOffsetTaskInput::GetOutputStorage() const
{
    return m_outputStorage;
}

void SnapshotByTimeOffsetTaskInput::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool SnapshotByTimeOffsetTaskInput::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

string SnapshotByTimeOffsetTaskInput::GetOutputObjectPath() const
{
    return m_outputObjectPath;
}

void SnapshotByTimeOffsetTaskInput::SetOutputObjectPath(const string& _outputObjectPath)
{
    m_outputObjectPath = _outputObjectPath;
    m_outputObjectPathHasBeenSet = true;
}

bool SnapshotByTimeOffsetTaskInput::OutputObjectPathHasBeenSet() const
{
    return m_outputObjectPathHasBeenSet;
}

NumberFormat SnapshotByTimeOffsetTaskInput::GetObjectNumberFormat() const
{
    return m_objectNumberFormat;
}

void SnapshotByTimeOffsetTaskInput::SetObjectNumberFormat(const NumberFormat& _objectNumberFormat)
{
    m_objectNumberFormat = _objectNumberFormat;
    m_objectNumberFormatHasBeenSet = true;
}

bool SnapshotByTimeOffsetTaskInput::ObjectNumberFormatHasBeenSet() const
{
    return m_objectNumberFormatHasBeenSet;
}

