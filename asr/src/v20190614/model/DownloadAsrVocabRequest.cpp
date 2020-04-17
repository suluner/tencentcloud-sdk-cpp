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

#include <tencentcloud/asr/v20190614/model/DownloadAsrVocabRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asr::V20190614::Model;
using namespace rapidjson;
using namespace std;

DownloadAsrVocabRequest::DownloadAsrVocabRequest() :
    m_vocabIdHasBeenSet(false)
{
}

string DownloadAsrVocabRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vocabIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VocabId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vocabId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DownloadAsrVocabRequest::GetVocabId() const
{
    return m_vocabId;
}

void DownloadAsrVocabRequest::SetVocabId(const string& _vocabId)
{
    m_vocabId = _vocabId;
    m_vocabIdHasBeenSet = true;
}

bool DownloadAsrVocabRequest::VocabIdHasBeenSet() const
{
    return m_vocabIdHasBeenSet;
}


