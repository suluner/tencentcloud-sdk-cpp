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

#include <tencentcloud/tcr/v20190924/model/DeleteTagRetentionRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace rapidjson;
using namespace std;

DeleteTagRetentionRuleRequest::DeleteTagRetentionRuleRequest() :
    m_registryIdHasBeenSet(false),
    m_retentionIdHasBeenSet(false)
{
}

string DeleteTagRetentionRuleRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_retentionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RetentionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retentionId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteTagRetentionRuleRequest::GetRegistryId() const
{
    return m_registryId;
}

void DeleteTagRetentionRuleRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool DeleteTagRetentionRuleRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

int64_t DeleteTagRetentionRuleRequest::GetRetentionId() const
{
    return m_retentionId;
}

void DeleteTagRetentionRuleRequest::SetRetentionId(const int64_t& _retentionId)
{
    m_retentionId = _retentionId;
    m_retentionIdHasBeenSet = true;
}

bool DeleteTagRetentionRuleRequest::RetentionIdHasBeenSet() const
{
    return m_retentionIdHasBeenSet;
}


