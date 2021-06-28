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

#include <tencentcloud/eiam/v20210420/model/DescribeApplicationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

DescribeApplicationResponse::DescribeApplicationResponse() :
    m_keyIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_tokenExpiredHasBeenSet(false),
    m_clientSecretHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_authorizeUrlHasBeenSet(false)
{
}

CoreInternalOutcome DescribeApplicationResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("KeyId") && !rsp["KeyId"].IsNull())
    {
        if (!rsp["KeyId"].IsString())
        {
            return CoreInternalOutcome(Error("response `KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(rsp["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (rsp.HasMember("DisplayName") && !rsp["DisplayName"].IsNull())
    {
        if (!rsp["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(rsp["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (rsp.HasMember("LastModifiedDate") && !rsp["LastModifiedDate"].IsNull())
    {
        if (!rsp["LastModifiedDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `LastModifiedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedDate = string(rsp["LastModifiedDate"].GetString());
        m_lastModifiedDateHasBeenSet = true;
    }

    if (rsp.HasMember("ClientId") && !rsp["ClientId"].IsNull())
    {
        if (!rsp["ClientId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(rsp["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (rsp.HasMember("ApplicationType") && !rsp["ApplicationType"].IsNull())
    {
        if (!rsp["ApplicationType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApplicationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = string(rsp["ApplicationType"].GetString());
        m_applicationTypeHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedDate") && !rsp["CreatedDate"].IsNull())
    {
        if (!rsp["CreatedDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreatedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdDate = string(rsp["CreatedDate"].GetString());
        m_createdDateHasBeenSet = true;
    }

    if (rsp.HasMember("ApplicationId") && !rsp["ApplicationId"].IsNull())
    {
        if (!rsp["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(rsp["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (rsp.HasMember("TokenExpired") && !rsp["TokenExpired"].IsNull())
    {
        if (!rsp["TokenExpired"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TokenExpired` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tokenExpired = rsp["TokenExpired"].GetInt64();
        m_tokenExpiredHasBeenSet = true;
    }

    if (rsp.HasMember("ClientSecret") && !rsp["ClientSecret"].IsNull())
    {
        if (!rsp["ClientSecret"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClientSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientSecret = string(rsp["ClientSecret"].GetString());
        m_clientSecretHasBeenSet = true;
    }

    if (rsp.HasMember("PublicKey") && !rsp["PublicKey"].IsNull())
    {
        if (!rsp["PublicKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `PublicKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicKey = string(rsp["PublicKey"].GetString());
        m_publicKeyHasBeenSet = true;
    }

    if (rsp.HasMember("AuthorizeUrl") && !rsp["AuthorizeUrl"].IsNull())
    {
        if (!rsp["AuthorizeUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `AuthorizeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizeUrl = string(rsp["AuthorizeUrl"].GetString());
        m_authorizeUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeApplicationResponse::GetKeyId() const
{
    return m_keyId;
}

bool DescribeApplicationResponse::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string DescribeApplicationResponse::GetDisplayName() const
{
    return m_displayName;
}

bool DescribeApplicationResponse::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string DescribeApplicationResponse::GetLastModifiedDate() const
{
    return m_lastModifiedDate;
}

bool DescribeApplicationResponse::LastModifiedDateHasBeenSet() const
{
    return m_lastModifiedDateHasBeenSet;
}

string DescribeApplicationResponse::GetClientId() const
{
    return m_clientId;
}

bool DescribeApplicationResponse::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string DescribeApplicationResponse::GetApplicationType() const
{
    return m_applicationType;
}

bool DescribeApplicationResponse::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string DescribeApplicationResponse::GetCreatedDate() const
{
    return m_createdDate;
}

bool DescribeApplicationResponse::CreatedDateHasBeenSet() const
{
    return m_createdDateHasBeenSet;
}

string DescribeApplicationResponse::GetApplicationId() const
{
    return m_applicationId;
}

bool DescribeApplicationResponse::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

int64_t DescribeApplicationResponse::GetTokenExpired() const
{
    return m_tokenExpired;
}

bool DescribeApplicationResponse::TokenExpiredHasBeenSet() const
{
    return m_tokenExpiredHasBeenSet;
}

string DescribeApplicationResponse::GetClientSecret() const
{
    return m_clientSecret;
}

bool DescribeApplicationResponse::ClientSecretHasBeenSet() const
{
    return m_clientSecretHasBeenSet;
}

string DescribeApplicationResponse::GetPublicKey() const
{
    return m_publicKey;
}

bool DescribeApplicationResponse::PublicKeyHasBeenSet() const
{
    return m_publicKeyHasBeenSet;
}

string DescribeApplicationResponse::GetAuthorizeUrl() const
{
    return m_authorizeUrl;
}

bool DescribeApplicationResponse::AuthorizeUrlHasBeenSet() const
{
    return m_authorizeUrlHasBeenSet;
}


