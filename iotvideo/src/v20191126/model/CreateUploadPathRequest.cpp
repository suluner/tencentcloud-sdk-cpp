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

#include <tencentcloud/iotvideo/v20191126/model/CreateUploadPathRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace rapidjson;
using namespace std;

CreateUploadPathRequest::CreateUploadPathRequest() :
    m_productIdHasBeenSet(false),
    m_fileNameHasBeenSet(false)
{
}

string CreateUploadPathRequest::ToJsonString() const
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

    if (m_fileNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateUploadPathRequest::GetProductId() const
{
    return m_productId;
}

void CreateUploadPathRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateUploadPathRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CreateUploadPathRequest::GetFileName() const
{
    return m_fileName;
}

void CreateUploadPathRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool CreateUploadPathRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}


