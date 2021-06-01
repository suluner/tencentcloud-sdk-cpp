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

#include <tencentcloud/cls/v20201016/model/ValueInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace rapidjson;
using namespace std;

ValueInfo::ValueInfo() :
    m_typeHasBeenSet(false),
    m_tokenizerHasBeenSet(false),
    m_sqlFlagHasBeenSet(false)
{
}

CoreInternalOutcome ValueInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `ValueInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Tokenizer") && !value["Tokenizer"].IsNull())
    {
        if (!value["Tokenizer"].IsString())
        {
            return CoreInternalOutcome(Error("response `ValueInfo.Tokenizer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tokenizer = string(value["Tokenizer"].GetString());
        m_tokenizerHasBeenSet = true;
    }

    if (value.HasMember("SqlFlag") && !value["SqlFlag"].IsNull())
    {
        if (!value["SqlFlag"].IsBool())
        {
            return CoreInternalOutcome(Error("response `ValueInfo.SqlFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sqlFlag = value["SqlFlag"].GetBool();
        m_sqlFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ValueInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenizerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tokenizer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tokenizer.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SqlFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sqlFlag, allocator);
    }

}


string ValueInfo::GetType() const
{
    return m_type;
}

void ValueInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ValueInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ValueInfo::GetTokenizer() const
{
    return m_tokenizer;
}

void ValueInfo::SetTokenizer(const string& _tokenizer)
{
    m_tokenizer = _tokenizer;
    m_tokenizerHasBeenSet = true;
}

bool ValueInfo::TokenizerHasBeenSet() const
{
    return m_tokenizerHasBeenSet;
}

bool ValueInfo::GetSqlFlag() const
{
    return m_sqlFlag;
}

void ValueInfo::SetSqlFlag(const bool& _sqlFlag)
{
    m_sqlFlag = _sqlFlag;
    m_sqlFlagHasBeenSet = true;
}

bool ValueInfo::SqlFlagHasBeenSet() const
{
    return m_sqlFlagHasBeenSet;
}

