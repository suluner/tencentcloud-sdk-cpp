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

#include <tencentcloud/iotexplorer/v20190423/model/ControlDeviceDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace rapidjson;
using namespace std;

ControlDeviceDataRequest::ControlDeviceDataRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_deviceIdHasBeenSet(false)
{
}

string ControlDeviceDataRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_data.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ControlDeviceDataRequest::GetProductId() const
{
    return m_productId;
}

void ControlDeviceDataRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ControlDeviceDataRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ControlDeviceDataRequest::GetDeviceName() const
{
    return m_deviceName;
}

void ControlDeviceDataRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool ControlDeviceDataRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string ControlDeviceDataRequest::GetData() const
{
    return m_data;
}

void ControlDeviceDataRequest::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool ControlDeviceDataRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

string ControlDeviceDataRequest::GetMethod() const
{
    return m_method;
}

void ControlDeviceDataRequest::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ControlDeviceDataRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string ControlDeviceDataRequest::GetDeviceId() const
{
    return m_deviceId;
}

void ControlDeviceDataRequest::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool ControlDeviceDataRequest::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}


