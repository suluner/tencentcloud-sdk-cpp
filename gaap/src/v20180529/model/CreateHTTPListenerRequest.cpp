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

#include <tencentcloud/gaap/v20180529/model/CreateHTTPListenerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

CreateHTTPListenerRequest::CreateHTTPListenerRequest() :
    m_listenerNameHasBeenSet(false),
    m_portHasBeenSet(false),
    m_proxyIdHasBeenSet(false)
{
}

string CreateHTTPListenerRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_listenerNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateHTTPListenerRequest::GetListenerName() const
{
    return m_listenerName;
}

void CreateHTTPListenerRequest::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool CreateHTTPListenerRequest::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

uint64_t CreateHTTPListenerRequest::GetPort() const
{
    return m_port;
}

void CreateHTTPListenerRequest::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CreateHTTPListenerRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string CreateHTTPListenerRequest::GetProxyId() const
{
    return m_proxyId;
}

void CreateHTTPListenerRequest::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool CreateHTTPListenerRequest::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}


