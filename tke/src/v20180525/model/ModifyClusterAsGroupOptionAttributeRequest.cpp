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

#include <tencentcloud/tke/v20180525/model/ModifyClusterAsGroupOptionAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace rapidjson;
using namespace std;

ModifyClusterAsGroupOptionAttributeRequest::ModifyClusterAsGroupOptionAttributeRequest() :
    m_clusterIdHasBeenSet(false),
    m_clusterAsGroupOptionHasBeenSet(false)
{
}

string ModifyClusterAsGroupOptionAttributeRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterAsGroupOptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterAsGroupOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_clusterAsGroupOption.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyClusterAsGroupOptionAttributeRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyClusterAsGroupOptionAttributeRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyClusterAsGroupOptionAttributeRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

ClusterAsGroupOption ModifyClusterAsGroupOptionAttributeRequest::GetClusterAsGroupOption() const
{
    return m_clusterAsGroupOption;
}

void ModifyClusterAsGroupOptionAttributeRequest::SetClusterAsGroupOption(const ClusterAsGroupOption& _clusterAsGroupOption)
{
    m_clusterAsGroupOption = _clusterAsGroupOption;
    m_clusterAsGroupOptionHasBeenSet = true;
}

bool ModifyClusterAsGroupOptionAttributeRequest::ClusterAsGroupOptionHasBeenSet() const
{
    return m_clusterAsGroupOptionHasBeenSet;
}


