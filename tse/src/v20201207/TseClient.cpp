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

#include <tencentcloud/tse/v20201207/TseClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tse::V20201207;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-12-07";
    const string ENDPOINT = "tse.tencentcloudapi.com";
}

TseClient::TseClient(const Credential &credential, const string &region) :
    TseClient(credential, region, ClientProfile())
{
}

TseClient::TseClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TseClient::DescribeSREInstanceAccessAddressOutcome TseClient::DescribeSREInstanceAccessAddress(const DescribeSREInstanceAccessAddressRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSREInstanceAccessAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSREInstanceAccessAddressResponse rsp = DescribeSREInstanceAccessAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSREInstanceAccessAddressOutcome(rsp);
        else
            return DescribeSREInstanceAccessAddressOutcome(o.GetError());
    }
    else
    {
        return DescribeSREInstanceAccessAddressOutcome(outcome.GetError());
    }
}

void TseClient::DescribeSREInstanceAccessAddressAsync(const DescribeSREInstanceAccessAddressRequest& request, const DescribeSREInstanceAccessAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSREInstanceAccessAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeSREInstanceAccessAddressOutcomeCallable TseClient::DescribeSREInstanceAccessAddressCallable(const DescribeSREInstanceAccessAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSREInstanceAccessAddressOutcome()>>(
        [this, request]()
        {
            return this->DescribeSREInstanceAccessAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeSREInstancesOutcome TseClient::DescribeSREInstances(const DescribeSREInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSREInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSREInstancesResponse rsp = DescribeSREInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSREInstancesOutcome(rsp);
        else
            return DescribeSREInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeSREInstancesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeSREInstancesAsync(const DescribeSREInstancesRequest& request, const DescribeSREInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSREInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeSREInstancesOutcomeCallable TseClient::DescribeSREInstancesCallable(const DescribeSREInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSREInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSREInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

