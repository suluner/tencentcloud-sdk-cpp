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

#include <tencentcloud/cdn/v20180606/model/RuleCacheConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

RuleCacheConfig::RuleCacheConfig() :
    m_cacheHasBeenSet(false),
    m_noCacheHasBeenSet(false),
    m_followOriginHasBeenSet(false)
{
}

CoreInternalOutcome RuleCacheConfig::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Cache") && !value["Cache"].IsNull())
    {
        if (!value["Cache"].IsObject())
        {
            return CoreInternalOutcome(Error("response `RuleCacheConfig.Cache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cache.Deserialize(value["Cache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheHasBeenSet = true;
    }

    if (value.HasMember("NoCache") && !value["NoCache"].IsNull())
    {
        if (!value["NoCache"].IsObject())
        {
            return CoreInternalOutcome(Error("response `RuleCacheConfig.NoCache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_noCache.Deserialize(value["NoCache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_noCacheHasBeenSet = true;
    }

    if (value.HasMember("FollowOrigin") && !value["FollowOrigin"].IsNull())
    {
        if (!value["FollowOrigin"].IsObject())
        {
            return CoreInternalOutcome(Error("response `RuleCacheConfig.FollowOrigin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_followOrigin.Deserialize(value["FollowOrigin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_followOriginHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleCacheConfig::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_cacheHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_cache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_noCacheHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NoCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_noCache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_followOriginHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FollowOrigin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_followOrigin.ToJsonObject(value[key.c_str()], allocator);
    }

}


CacheConfigCache RuleCacheConfig::GetCache() const
{
    return m_cache;
}

void RuleCacheConfig::SetCache(const CacheConfigCache& _cache)
{
    m_cache = _cache;
    m_cacheHasBeenSet = true;
}

bool RuleCacheConfig::CacheHasBeenSet() const
{
    return m_cacheHasBeenSet;
}

CacheConfigNoCache RuleCacheConfig::GetNoCache() const
{
    return m_noCache;
}

void RuleCacheConfig::SetNoCache(const CacheConfigNoCache& _noCache)
{
    m_noCache = _noCache;
    m_noCacheHasBeenSet = true;
}

bool RuleCacheConfig::NoCacheHasBeenSet() const
{
    return m_noCacheHasBeenSet;
}

CacheConfigFollowOrigin RuleCacheConfig::GetFollowOrigin() const
{
    return m_followOrigin;
}

void RuleCacheConfig::SetFollowOrigin(const CacheConfigFollowOrigin& _followOrigin)
{
    m_followOrigin = _followOrigin;
    m_followOriginHasBeenSet = true;
}

bool RuleCacheConfig::FollowOriginHasBeenSet() const
{
    return m_followOriginHasBeenSet;
}

