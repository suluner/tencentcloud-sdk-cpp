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

#include <tencentcloud/bda/v20200324/model/ModifyPersonInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bda::V20200324::Model;
using namespace rapidjson;
using namespace std;

ModifyPersonInfoRequest::ModifyPersonInfoRequest() :
    m_personIdHasBeenSet(false),
    m_personNameHasBeenSet(false)
{
}

string ModifyPersonInfoRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_personIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_personNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PersonName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_personName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPersonInfoRequest::GetPersonId() const
{
    return m_personId;
}

void ModifyPersonInfoRequest::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool ModifyPersonInfoRequest::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

string ModifyPersonInfoRequest::GetPersonName() const
{
    return m_personName;
}

void ModifyPersonInfoRequest::SetPersonName(const string& _personName)
{
    m_personName = _personName;
    m_personNameHasBeenSet = true;
}

bool ModifyPersonInfoRequest::PersonNameHasBeenSet() const
{
    return m_personNameHasBeenSet;
}


