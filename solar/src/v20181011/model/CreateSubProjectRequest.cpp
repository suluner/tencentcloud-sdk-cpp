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

#include <tencentcloud/solar/v20181011/model/CreateSubProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Solar::V20181011::Model;
using namespace rapidjson;
using namespace std;

CreateSubProjectRequest::CreateSubProjectRequest() :
    m_projectIdHasBeenSet(false),
    m_subProjectNameHasBeenSet(false)
{
}

string CreateSubProjectRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_subProjectNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubProjectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subProjectName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSubProjectRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateSubProjectRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateSubProjectRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateSubProjectRequest::GetSubProjectName() const
{
    return m_subProjectName;
}

void CreateSubProjectRequest::SetSubProjectName(const string& _subProjectName)
{
    m_subProjectName = _subProjectName;
    m_subProjectNameHasBeenSet = true;
}

bool CreateSubProjectRequest::SubProjectNameHasBeenSet() const
{
    return m_subProjectNameHasBeenSet;
}


