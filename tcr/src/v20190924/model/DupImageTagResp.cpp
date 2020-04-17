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

#include <tencentcloud/tcr/v20190924/model/DupImageTagResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace rapidjson;
using namespace std;

DupImageTagResp::DupImageTagResp() :
    m_digestHasBeenSet(false)
{
}

CoreInternalOutcome DupImageTagResp::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Digest") && !value["Digest"].IsNull())
    {
        if (!value["Digest"].IsString())
        {
            return CoreInternalOutcome(Error("response `DupImageTagResp.Digest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_digest = string(value["Digest"].GetString());
        m_digestHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DupImageTagResp::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_digestHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Digest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_digest.c_str(), allocator).Move(), allocator);
    }

}


string DupImageTagResp::GetDigest() const
{
    return m_digest;
}

void DupImageTagResp::SetDigest(const string& _digest)
{
    m_digest = _digest;
    m_digestHasBeenSet = true;
}

bool DupImageTagResp::DigestHasBeenSet() const
{
    return m_digestHasBeenSet;
}

