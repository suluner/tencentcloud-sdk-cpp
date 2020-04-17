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

#include <tencentcloud/tcr/v20190924/model/CreateInstanceTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace rapidjson;
using namespace std;

CreateInstanceTokenRequest::CreateInstanceTokenRequest() :
    m_registryIdHasBeenSet(false),
    m_tokenTypeHasBeenSet(false),
    m_descHasBeenSet(false)
{
}

string CreateInstanceTokenRequest::ToJsonString() const
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

    if (m_tokenTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TokenType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tokenType.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_desc.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateInstanceTokenRequest::GetRegistryId() const
{
    return m_registryId;
}

void CreateInstanceTokenRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool CreateInstanceTokenRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string CreateInstanceTokenRequest::GetTokenType() const
{
    return m_tokenType;
}

void CreateInstanceTokenRequest::SetTokenType(const string& _tokenType)
{
    m_tokenType = _tokenType;
    m_tokenTypeHasBeenSet = true;
}

bool CreateInstanceTokenRequest::TokenTypeHasBeenSet() const
{
    return m_tokenTypeHasBeenSet;
}

string CreateInstanceTokenRequest::GetDesc() const
{
    return m_desc;
}

void CreateInstanceTokenRequest::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool CreateInstanceTokenRequest::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}


