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

#include <tencentcloud/mongodb/v20190725/model/SecurityGroupBound.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace rapidjson;
using namespace std;

SecurityGroupBound::SecurityGroupBound() :
    m_actionHasBeenSet(false),
    m_cidrIpHasBeenSet(false),
    m_portRangeHasBeenSet(false),
    m_ipProtocolHasBeenSet(false),
    m_idHasBeenSet(false),
    m_addressModuleHasBeenSet(false),
    m_serviceModuleHasBeenSet(false),
    m_descHasBeenSet(false)
{
}

CoreInternalOutcome SecurityGroupBound::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupBound.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("CidrIp") && !value["CidrIp"].IsNull())
    {
        if (!value["CidrIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupBound.CidrIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrIp = string(value["CidrIp"].GetString());
        m_cidrIpHasBeenSet = true;
    }

    if (value.HasMember("PortRange") && !value["PortRange"].IsNull())
    {
        if (!value["PortRange"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupBound.PortRange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portRange = string(value["PortRange"].GetString());
        m_portRangeHasBeenSet = true;
    }

    if (value.HasMember("IpProtocol") && !value["IpProtocol"].IsNull())
    {
        if (!value["IpProtocol"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupBound.IpProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipProtocol = string(value["IpProtocol"].GetString());
        m_ipProtocolHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupBound.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AddressModule") && !value["AddressModule"].IsNull())
    {
        if (!value["AddressModule"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupBound.AddressModule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressModule = string(value["AddressModule"].GetString());
        m_addressModuleHasBeenSet = true;
    }

    if (value.HasMember("ServiceModule") && !value["ServiceModule"].IsNull())
    {
        if (!value["ServiceModule"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupBound.ServiceModule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceModule = string(value["ServiceModule"].GetString());
        m_serviceModuleHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupBound.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityGroupBound::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_actionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CidrIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cidrIp.c_str(), allocator).Move(), allocator);
    }

    if (m_portRangeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PortRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_portRange.c_str(), allocator).Move(), allocator);
    }

    if (m_ipProtocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IpProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ipProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_addressModuleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressModule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addressModule.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceModuleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceModule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_serviceModule.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_desc.c_str(), allocator).Move(), allocator);
    }

}


string SecurityGroupBound::GetAction() const
{
    return m_action;
}

void SecurityGroupBound::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool SecurityGroupBound::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string SecurityGroupBound::GetCidrIp() const
{
    return m_cidrIp;
}

void SecurityGroupBound::SetCidrIp(const string& _cidrIp)
{
    m_cidrIp = _cidrIp;
    m_cidrIpHasBeenSet = true;
}

bool SecurityGroupBound::CidrIpHasBeenSet() const
{
    return m_cidrIpHasBeenSet;
}

string SecurityGroupBound::GetPortRange() const
{
    return m_portRange;
}

void SecurityGroupBound::SetPortRange(const string& _portRange)
{
    m_portRange = _portRange;
    m_portRangeHasBeenSet = true;
}

bool SecurityGroupBound::PortRangeHasBeenSet() const
{
    return m_portRangeHasBeenSet;
}

string SecurityGroupBound::GetIpProtocol() const
{
    return m_ipProtocol;
}

void SecurityGroupBound::SetIpProtocol(const string& _ipProtocol)
{
    m_ipProtocol = _ipProtocol;
    m_ipProtocolHasBeenSet = true;
}

bool SecurityGroupBound::IpProtocolHasBeenSet() const
{
    return m_ipProtocolHasBeenSet;
}

string SecurityGroupBound::GetId() const
{
    return m_id;
}

void SecurityGroupBound::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SecurityGroupBound::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string SecurityGroupBound::GetAddressModule() const
{
    return m_addressModule;
}

void SecurityGroupBound::SetAddressModule(const string& _addressModule)
{
    m_addressModule = _addressModule;
    m_addressModuleHasBeenSet = true;
}

bool SecurityGroupBound::AddressModuleHasBeenSet() const
{
    return m_addressModuleHasBeenSet;
}

string SecurityGroupBound::GetServiceModule() const
{
    return m_serviceModule;
}

void SecurityGroupBound::SetServiceModule(const string& _serviceModule)
{
    m_serviceModule = _serviceModule;
    m_serviceModuleHasBeenSet = true;
}

bool SecurityGroupBound::ServiceModuleHasBeenSet() const
{
    return m_serviceModuleHasBeenSet;
}

string SecurityGroupBound::GetDesc() const
{
    return m_desc;
}

void SecurityGroupBound::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool SecurityGroupBound::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

