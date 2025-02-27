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

#include <tencentcloud/zj/v20190121/model/SmsCampaignStatisticsCrowdData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Zj::V20190121::Model;
using namespace std;

SmsCampaignStatisticsCrowdData::SmsCampaignStatisticsCrowdData() :
    m_crowdIdHasBeenSet(false),
    m_crowdNameHasBeenSet(false),
    m_crowdCountHasBeenSet(false),
    m_templateListHasBeenSet(false)
{
}

CoreInternalOutcome SmsCampaignStatisticsCrowdData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CrowdId") && !value["CrowdId"].IsNull())
    {
        if (!value["CrowdId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmsCampaignStatisticsCrowdData.CrowdId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_crowdId = value["CrowdId"].GetUint64();
        m_crowdIdHasBeenSet = true;
    }

    if (value.HasMember("CrowdName") && !value["CrowdName"].IsNull())
    {
        if (!value["CrowdName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmsCampaignStatisticsCrowdData.CrowdName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crowdName = string(value["CrowdName"].GetString());
        m_crowdNameHasBeenSet = true;
    }

    if (value.HasMember("CrowdCount") && !value["CrowdCount"].IsNull())
    {
        if (!value["CrowdCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmsCampaignStatisticsCrowdData.CrowdCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_crowdCount = value["CrowdCount"].GetUint64();
        m_crowdCountHasBeenSet = true;
    }

    if (value.HasMember("TemplateList") && !value["TemplateList"].IsNull())
    {
        if (!value["TemplateList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SmsCampaignStatisticsCrowdData.TemplateList` is not array type"));

        const rapidjson::Value &tmpValue = value["TemplateList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SmsCampaignStatisticsTemplateData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_templateList.push_back(item);
        }
        m_templateListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmsCampaignStatisticsCrowdData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_crowdIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrowdId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crowdId, allocator);
    }

    if (m_crowdNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrowdName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crowdName.c_str(), allocator).Move(), allocator);
    }

    if (m_crowdCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrowdCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crowdCount, allocator);
    }

    if (m_templateListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_templateList.begin(); itr != m_templateList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t SmsCampaignStatisticsCrowdData::GetCrowdId() const
{
    return m_crowdId;
}

void SmsCampaignStatisticsCrowdData::SetCrowdId(const uint64_t& _crowdId)
{
    m_crowdId = _crowdId;
    m_crowdIdHasBeenSet = true;
}

bool SmsCampaignStatisticsCrowdData::CrowdIdHasBeenSet() const
{
    return m_crowdIdHasBeenSet;
}

string SmsCampaignStatisticsCrowdData::GetCrowdName() const
{
    return m_crowdName;
}

void SmsCampaignStatisticsCrowdData::SetCrowdName(const string& _crowdName)
{
    m_crowdName = _crowdName;
    m_crowdNameHasBeenSet = true;
}

bool SmsCampaignStatisticsCrowdData::CrowdNameHasBeenSet() const
{
    return m_crowdNameHasBeenSet;
}

uint64_t SmsCampaignStatisticsCrowdData::GetCrowdCount() const
{
    return m_crowdCount;
}

void SmsCampaignStatisticsCrowdData::SetCrowdCount(const uint64_t& _crowdCount)
{
    m_crowdCount = _crowdCount;
    m_crowdCountHasBeenSet = true;
}

bool SmsCampaignStatisticsCrowdData::CrowdCountHasBeenSet() const
{
    return m_crowdCountHasBeenSet;
}

vector<SmsCampaignStatisticsTemplateData> SmsCampaignStatisticsCrowdData::GetTemplateList() const
{
    return m_templateList;
}

void SmsCampaignStatisticsCrowdData::SetTemplateList(const vector<SmsCampaignStatisticsTemplateData>& _templateList)
{
    m_templateList = _templateList;
    m_templateListHasBeenSet = true;
}

bool SmsCampaignStatisticsCrowdData::TemplateListHasBeenSet() const
{
    return m_templateListHasBeenSet;
}

