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

#include <tencentcloud/cpdp/v20190820/model/QueryAcctInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

QueryAcctInfoRequest::QueryAcctInfoRequest() :
    m_midasAppIdHasBeenSet(false),
    m_subMchIdHasBeenSet(false),
    m_midasSecretIdHasBeenSet(false),
    m_midasSignatureHasBeenSet(false)
{
}

string QueryAcctInfoRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_midasAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_subMchIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubMchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subMchId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSecretIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MidasSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_midasSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSignatureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MidasSignature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_midasSignature.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryAcctInfoRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void QueryAcctInfoRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool QueryAcctInfoRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string QueryAcctInfoRequest::GetSubMchId() const
{
    return m_subMchId;
}

void QueryAcctInfoRequest::SetSubMchId(const string& _subMchId)
{
    m_subMchId = _subMchId;
    m_subMchIdHasBeenSet = true;
}

bool QueryAcctInfoRequest::SubMchIdHasBeenSet() const
{
    return m_subMchIdHasBeenSet;
}

string QueryAcctInfoRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void QueryAcctInfoRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool QueryAcctInfoRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string QueryAcctInfoRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void QueryAcctInfoRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool QueryAcctInfoRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}


