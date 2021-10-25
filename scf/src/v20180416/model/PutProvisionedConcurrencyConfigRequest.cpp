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

#include <tencentcloud/scf/v20180416/model/PutProvisionedConcurrencyConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

PutProvisionedConcurrencyConfigRequest::PutProvisionedConcurrencyConfigRequest() :
    m_functionNameHasBeenSet(false),
    m_qualifierHasBeenSet(false),
    m_versionProvisionedConcurrencyNumHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_triggerActionsHasBeenSet(false)
{
}

string PutProvisionedConcurrencyConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_functionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_qualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qualifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_versionProvisionedConcurrencyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionProvisionedConcurrencyNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_versionProvisionedConcurrencyNum, allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerActions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_triggerActions.begin(); itr != m_triggerActions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PutProvisionedConcurrencyConfigRequest::GetFunctionName() const
{
    return m_functionName;
}

void PutProvisionedConcurrencyConfigRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool PutProvisionedConcurrencyConfigRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string PutProvisionedConcurrencyConfigRequest::GetQualifier() const
{
    return m_qualifier;
}

void PutProvisionedConcurrencyConfigRequest::SetQualifier(const string& _qualifier)
{
    m_qualifier = _qualifier;
    m_qualifierHasBeenSet = true;
}

bool PutProvisionedConcurrencyConfigRequest::QualifierHasBeenSet() const
{
    return m_qualifierHasBeenSet;
}

uint64_t PutProvisionedConcurrencyConfigRequest::GetVersionProvisionedConcurrencyNum() const
{
    return m_versionProvisionedConcurrencyNum;
}

void PutProvisionedConcurrencyConfigRequest::SetVersionProvisionedConcurrencyNum(const uint64_t& _versionProvisionedConcurrencyNum)
{
    m_versionProvisionedConcurrencyNum = _versionProvisionedConcurrencyNum;
    m_versionProvisionedConcurrencyNumHasBeenSet = true;
}

bool PutProvisionedConcurrencyConfigRequest::VersionProvisionedConcurrencyNumHasBeenSet() const
{
    return m_versionProvisionedConcurrencyNumHasBeenSet;
}

string PutProvisionedConcurrencyConfigRequest::GetNamespace() const
{
    return m_namespace;
}

void PutProvisionedConcurrencyConfigRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool PutProvisionedConcurrencyConfigRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

vector<TriggerAction> PutProvisionedConcurrencyConfigRequest::GetTriggerActions() const
{
    return m_triggerActions;
}

void PutProvisionedConcurrencyConfigRequest::SetTriggerActions(const vector<TriggerAction>& _triggerActions)
{
    m_triggerActions = _triggerActions;
    m_triggerActionsHasBeenSet = true;
}

bool PutProvisionedConcurrencyConfigRequest::TriggerActionsHasBeenSet() const
{
    return m_triggerActionsHasBeenSet;
}


