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

#include <tencentcloud/iotvideo/v20201215/model/CreateCloudStorageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace rapidjson;
using namespace std;

CreateCloudStorageRequest::CreateCloudStorageRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_overrideHasBeenSet(false)
{
}

string CreateCloudStorageRequest::ToJsonString() const
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

    if (m_packageIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_overrideHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Override";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_override, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloudStorageRequest::GetProductId() const
{
    return m_productId;
}

void CreateCloudStorageRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateCloudStorageRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CreateCloudStorageRequest::GetDeviceName() const
{
    return m_deviceName;
}

void CreateCloudStorageRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool CreateCloudStorageRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string CreateCloudStorageRequest::GetPackageId() const
{
    return m_packageId;
}

void CreateCloudStorageRequest::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool CreateCloudStorageRequest::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

uint64_t CreateCloudStorageRequest::GetOverride() const
{
    return m_override;
}

void CreateCloudStorageRequest::SetOverride(const uint64_t& _override)
{
    m_override = _override;
    m_overrideHasBeenSet = true;
}

bool CreateCloudStorageRequest::OverrideHasBeenSet() const
{
    return m_overrideHasBeenSet;
}


