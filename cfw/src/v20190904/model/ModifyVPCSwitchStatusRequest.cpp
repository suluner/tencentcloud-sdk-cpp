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

#include <tencentcloud/cfw/v20190904/model/ModifyVPCSwitchStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ModifyVPCSwitchStatusRequest::ModifyVPCSwitchStatusRequest() :
    m_firewallVpcIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ModifyVPCSwitchStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_firewallVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirewallVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_firewallVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyVPCSwitchStatusRequest::GetFirewallVpcId() const
{
    return m_firewallVpcId;
}

void ModifyVPCSwitchStatusRequest::SetFirewallVpcId(const string& _firewallVpcId)
{
    m_firewallVpcId = _firewallVpcId;
    m_firewallVpcIdHasBeenSet = true;
}

bool ModifyVPCSwitchStatusRequest::FirewallVpcIdHasBeenSet() const
{
    return m_firewallVpcIdHasBeenSet;
}

int64_t ModifyVPCSwitchStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyVPCSwitchStatusRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyVPCSwitchStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


