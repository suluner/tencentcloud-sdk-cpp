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

#include <tencentcloud/vpc/v20170312/model/ModifyAddressAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

ModifyAddressAttributeRequest::ModifyAddressAttributeRequest() :
    m_addressIdHasBeenSet(false),
    m_addressNameHasBeenSet(false),
    m_eipDirectConnectionHasBeenSet(false)
{
}

string ModifyAddressAttributeRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_addressIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_addressId.c_str(), allocator).Move(), allocator);
    }

    if (m_addressNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_addressName.c_str(), allocator).Move(), allocator);
    }

    if (m_eipDirectConnectionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EipDirectConnection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_eipDirectConnection.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAddressAttributeRequest::GetAddressId() const
{
    return m_addressId;
}

void ModifyAddressAttributeRequest::SetAddressId(const string& _addressId)
{
    m_addressId = _addressId;
    m_addressIdHasBeenSet = true;
}

bool ModifyAddressAttributeRequest::AddressIdHasBeenSet() const
{
    return m_addressIdHasBeenSet;
}

string ModifyAddressAttributeRequest::GetAddressName() const
{
    return m_addressName;
}

void ModifyAddressAttributeRequest::SetAddressName(const string& _addressName)
{
    m_addressName = _addressName;
    m_addressNameHasBeenSet = true;
}

bool ModifyAddressAttributeRequest::AddressNameHasBeenSet() const
{
    return m_addressNameHasBeenSet;
}

string ModifyAddressAttributeRequest::GetEipDirectConnection() const
{
    return m_eipDirectConnection;
}

void ModifyAddressAttributeRequest::SetEipDirectConnection(const string& _eipDirectConnection)
{
    m_eipDirectConnection = _eipDirectConnection;
    m_eipDirectConnectionHasBeenSet = true;
}

bool ModifyAddressAttributeRequest::EipDirectConnectionHasBeenSet() const
{
    return m_eipDirectConnectionHasBeenSet;
}


