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

#include <tencentcloud/asr/v20190614/model/DownloadAsrVocabResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace rapidjson;
using namespace std;

DownloadAsrVocabResponse::DownloadAsrVocabResponse() :
    m_vocabIdHasBeenSet(false),
    m_wordWeightStrHasBeenSet(false)
{
}

CoreInternalOutcome DownloadAsrVocabResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("VocabId") && !rsp["VocabId"].IsNull())
    {
        if (!rsp["VocabId"].IsString())
        {
            return CoreInternalOutcome(Error("response `VocabId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vocabId = string(rsp["VocabId"].GetString());
        m_vocabIdHasBeenSet = true;
    }

    if (rsp.HasMember("WordWeightStr") && !rsp["WordWeightStr"].IsNull())
    {
        if (!rsp["WordWeightStr"].IsString())
        {
            return CoreInternalOutcome(Error("response `WordWeightStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wordWeightStr = string(rsp["WordWeightStr"].GetString());
        m_wordWeightStrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DownloadAsrVocabResponse::GetVocabId() const
{
    return m_vocabId;
}

bool DownloadAsrVocabResponse::VocabIdHasBeenSet() const
{
    return m_vocabIdHasBeenSet;
}

string DownloadAsrVocabResponse::GetWordWeightStr() const
{
    return m_wordWeightStr;
}

bool DownloadAsrVocabResponse::WordWeightStrHasBeenSet() const
{
    return m_wordWeightStrHasBeenSet;
}


