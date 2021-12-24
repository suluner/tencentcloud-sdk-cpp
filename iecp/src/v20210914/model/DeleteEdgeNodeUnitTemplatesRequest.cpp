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

#include <tencentcloud/iecp/v20210914/model/DeleteEdgeNodeUnitTemplatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DeleteEdgeNodeUnitTemplatesRequest::DeleteEdgeNodeUnitTemplatesRequest() :
    m_edgeUnitIdHasBeenSet(false),
    m_nodeUnitTemplateIDsHasBeenSet(false)
{
}

string DeleteEdgeNodeUnitTemplatesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_edgeUnitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeUnitId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_edgeUnitId, allocator);
    }

    if (m_nodeUnitTemplateIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUnitTemplateIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodeUnitTemplateIDs.begin(); itr != m_nodeUnitTemplateIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DeleteEdgeNodeUnitTemplatesRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void DeleteEdgeNodeUnitTemplatesRequest::SetEdgeUnitId(const uint64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool DeleteEdgeNodeUnitTemplatesRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

vector<uint64_t> DeleteEdgeNodeUnitTemplatesRequest::GetNodeUnitTemplateIDs() const
{
    return m_nodeUnitTemplateIDs;
}

void DeleteEdgeNodeUnitTemplatesRequest::SetNodeUnitTemplateIDs(const vector<uint64_t>& _nodeUnitTemplateIDs)
{
    m_nodeUnitTemplateIDs = _nodeUnitTemplateIDs;
    m_nodeUnitTemplateIDsHasBeenSet = true;
}

bool DeleteEdgeNodeUnitTemplatesRequest::NodeUnitTemplateIDsHasBeenSet() const
{
    return m_nodeUnitTemplateIDsHasBeenSet;
}


