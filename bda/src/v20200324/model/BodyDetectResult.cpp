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

#include <tencentcloud/bda/v20200324/model/BodyDetectResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace rapidjson;
using namespace std;

BodyDetectResult::BodyDetectResult() :
    m_confidenceHasBeenSet(false),
    m_bodyRectHasBeenSet(false)
{
}

CoreInternalOutcome BodyDetectResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `BodyDetectResult.Confidence` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("BodyRect") && !value["BodyRect"].IsNull())
    {
        if (!value["BodyRect"].IsObject())
        {
            return CoreInternalOutcome(Error("response `BodyDetectResult.BodyRect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bodyRect.Deserialize(value["BodyRect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bodyRectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BodyDetectResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_confidenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_bodyRectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BodyRect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_bodyRect.ToJsonObject(value[key.c_str()], allocator);
    }

}


double BodyDetectResult::GetConfidence() const
{
    return m_confidence;
}

void BodyDetectResult::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool BodyDetectResult::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

BodyRect BodyDetectResult::GetBodyRect() const
{
    return m_bodyRect;
}

void BodyDetectResult::SetBodyRect(const BodyRect& _bodyRect)
{
    m_bodyRect = _bodyRect;
    m_bodyRectHasBeenSet = true;
}

bool BodyDetectResult::BodyRectHasBeenSet() const
{
    return m_bodyRectHasBeenSet;
}

