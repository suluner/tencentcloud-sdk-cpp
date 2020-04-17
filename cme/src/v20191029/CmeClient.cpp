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

#include <tencentcloud/cme/v20191029/CmeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cme::V20191029;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-10-29";
    const string ENDPOINT = "cme.tencentcloudapi.com";
}

CmeClient::CmeClient(const Credential &credential, const string &region) :
    CmeClient(credential, region, ClientProfile())
{
}

CmeClient::CmeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CmeClient::AddTeamMemberOutcome CmeClient::AddTeamMember(const AddTeamMemberRequest &request)
{
    auto outcome = MakeRequest(request, "AddTeamMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddTeamMemberResponse rsp = AddTeamMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddTeamMemberOutcome(rsp);
        else
            return AddTeamMemberOutcome(o.GetError());
    }
    else
    {
        return AddTeamMemberOutcome(outcome.GetError());
    }
}

void CmeClient::AddTeamMemberAsync(const AddTeamMemberRequest& request, const AddTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddTeamMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::AddTeamMemberOutcomeCallable CmeClient::AddTeamMemberCallable(const AddTeamMemberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddTeamMemberOutcome()>>(
        [this, request]()
        {
            return this->AddTeamMember(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::CreateClassOutcome CmeClient::CreateClass(const CreateClassRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClass");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClassResponse rsp = CreateClassResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClassOutcome(rsp);
        else
            return CreateClassOutcome(o.GetError());
    }
    else
    {
        return CreateClassOutcome(outcome.GetError());
    }
}

void CmeClient::CreateClassAsync(const CreateClassRequest& request, const CreateClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClass(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::CreateClassOutcomeCallable CmeClient::CreateClassCallable(const CreateClassRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClassOutcome()>>(
        [this, request]()
        {
            return this->CreateClass(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::CreateLinkOutcome CmeClient::CreateLink(const CreateLinkRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLink");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLinkResponse rsp = CreateLinkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLinkOutcome(rsp);
        else
            return CreateLinkOutcome(o.GetError());
    }
    else
    {
        return CreateLinkOutcome(outcome.GetError());
    }
}

void CmeClient::CreateLinkAsync(const CreateLinkRequest& request, const CreateLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLink(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::CreateLinkOutcomeCallable CmeClient::CreateLinkCallable(const CreateLinkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLinkOutcome()>>(
        [this, request]()
        {
            return this->CreateLink(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::CreateProjectOutcome CmeClient::CreateProject(const CreateProjectRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProjectResponse rsp = CreateProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProjectOutcome(rsp);
        else
            return CreateProjectOutcome(o.GetError());
    }
    else
    {
        return CreateProjectOutcome(outcome.GetError());
    }
}

void CmeClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::CreateProjectOutcomeCallable CmeClient::CreateProjectCallable(const CreateProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProjectOutcome()>>(
        [this, request]()
        {
            return this->CreateProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::CreateTeamOutcome CmeClient::CreateTeam(const CreateTeamRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTeam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTeamResponse rsp = CreateTeamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTeamOutcome(rsp);
        else
            return CreateTeamOutcome(o.GetError());
    }
    else
    {
        return CreateTeamOutcome(outcome.GetError());
    }
}

void CmeClient::CreateTeamAsync(const CreateTeamRequest& request, const CreateTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTeam(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::CreateTeamOutcomeCallable CmeClient::CreateTeamCallable(const CreateTeamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTeamOutcome()>>(
        [this, request]()
        {
            return this->CreateTeam(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::DeleteClassOutcome CmeClient::DeleteClass(const DeleteClassRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClass");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClassResponse rsp = DeleteClassResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClassOutcome(rsp);
        else
            return DeleteClassOutcome(o.GetError());
    }
    else
    {
        return DeleteClassOutcome(outcome.GetError());
    }
}

void CmeClient::DeleteClassAsync(const DeleteClassRequest& request, const DeleteClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteClass(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::DeleteClassOutcomeCallable CmeClient::DeleteClassCallable(const DeleteClassRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClassOutcome()>>(
        [this, request]()
        {
            return this->DeleteClass(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::DeleteLoginStatusOutcome CmeClient::DeleteLoginStatus(const DeleteLoginStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoginStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoginStatusResponse rsp = DeleteLoginStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoginStatusOutcome(rsp);
        else
            return DeleteLoginStatusOutcome(o.GetError());
    }
    else
    {
        return DeleteLoginStatusOutcome(outcome.GetError());
    }
}

void CmeClient::DeleteLoginStatusAsync(const DeleteLoginStatusRequest& request, const DeleteLoginStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLoginStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::DeleteLoginStatusOutcomeCallable CmeClient::DeleteLoginStatusCallable(const DeleteLoginStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLoginStatusOutcome()>>(
        [this, request]()
        {
            return this->DeleteLoginStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::DeleteMaterialOutcome CmeClient::DeleteMaterial(const DeleteMaterialRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMaterial");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMaterialResponse rsp = DeleteMaterialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMaterialOutcome(rsp);
        else
            return DeleteMaterialOutcome(o.GetError());
    }
    else
    {
        return DeleteMaterialOutcome(outcome.GetError());
    }
}

void CmeClient::DeleteMaterialAsync(const DeleteMaterialRequest& request, const DeleteMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMaterial(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::DeleteMaterialOutcomeCallable CmeClient::DeleteMaterialCallable(const DeleteMaterialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMaterialOutcome()>>(
        [this, request]()
        {
            return this->DeleteMaterial(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::DeleteProjectOutcome CmeClient::DeleteProject(const DeleteProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProjectResponse rsp = DeleteProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProjectOutcome(rsp);
        else
            return DeleteProjectOutcome(o.GetError());
    }
    else
    {
        return DeleteProjectOutcome(outcome.GetError());
    }
}

void CmeClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::DeleteProjectOutcomeCallable CmeClient::DeleteProjectCallable(const DeleteProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteProjectOutcome()>>(
        [this, request]()
        {
            return this->DeleteProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::DeleteTeamOutcome CmeClient::DeleteTeam(const DeleteTeamRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTeam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTeamResponse rsp = DeleteTeamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTeamOutcome(rsp);
        else
            return DeleteTeamOutcome(o.GetError());
    }
    else
    {
        return DeleteTeamOutcome(outcome.GetError());
    }
}

void CmeClient::DeleteTeamAsync(const DeleteTeamRequest& request, const DeleteTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTeam(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::DeleteTeamOutcomeCallable CmeClient::DeleteTeamCallable(const DeleteTeamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTeamOutcome()>>(
        [this, request]()
        {
            return this->DeleteTeam(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::DeleteTeamMembersOutcome CmeClient::DeleteTeamMembers(const DeleteTeamMembersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTeamMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTeamMembersResponse rsp = DeleteTeamMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTeamMembersOutcome(rsp);
        else
            return DeleteTeamMembersOutcome(o.GetError());
    }
    else
    {
        return DeleteTeamMembersOutcome(outcome.GetError());
    }
}

void CmeClient::DeleteTeamMembersAsync(const DeleteTeamMembersRequest& request, const DeleteTeamMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTeamMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::DeleteTeamMembersOutcomeCallable CmeClient::DeleteTeamMembersCallable(const DeleteTeamMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTeamMembersOutcome()>>(
        [this, request]()
        {
            return this->DeleteTeamMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::DescribeClassOutcome CmeClient::DescribeClass(const DescribeClassRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClass");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClassResponse rsp = DescribeClassResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClassOutcome(rsp);
        else
            return DescribeClassOutcome(o.GetError());
    }
    else
    {
        return DescribeClassOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeClassAsync(const DescribeClassRequest& request, const DescribeClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClass(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::DescribeClassOutcomeCallable CmeClient::DescribeClassCallable(const DescribeClassRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClassOutcome()>>(
        [this, request]()
        {
            return this->DescribeClass(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::DescribeJoinTeamsOutcome CmeClient::DescribeJoinTeams(const DescribeJoinTeamsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJoinTeams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJoinTeamsResponse rsp = DescribeJoinTeamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJoinTeamsOutcome(rsp);
        else
            return DescribeJoinTeamsOutcome(o.GetError());
    }
    else
    {
        return DescribeJoinTeamsOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeJoinTeamsAsync(const DescribeJoinTeamsRequest& request, const DescribeJoinTeamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJoinTeams(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::DescribeJoinTeamsOutcomeCallable CmeClient::DescribeJoinTeamsCallable(const DescribeJoinTeamsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeJoinTeamsOutcome()>>(
        [this, request]()
        {
            return this->DescribeJoinTeams(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::DescribeLoginStatusOutcome CmeClient::DescribeLoginStatus(const DescribeLoginStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoginStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoginStatusResponse rsp = DescribeLoginStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoginStatusOutcome(rsp);
        else
            return DescribeLoginStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeLoginStatusOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeLoginStatusAsync(const DescribeLoginStatusRequest& request, const DescribeLoginStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLoginStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::DescribeLoginStatusOutcomeCallable CmeClient::DescribeLoginStatusCallable(const DescribeLoginStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLoginStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeLoginStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::DescribeMaterialsOutcome CmeClient::DescribeMaterials(const DescribeMaterialsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMaterials");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMaterialsResponse rsp = DescribeMaterialsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMaterialsOutcome(rsp);
        else
            return DescribeMaterialsOutcome(o.GetError());
    }
    else
    {
        return DescribeMaterialsOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeMaterialsAsync(const DescribeMaterialsRequest& request, const DescribeMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMaterials(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::DescribeMaterialsOutcomeCallable CmeClient::DescribeMaterialsCallable(const DescribeMaterialsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMaterialsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMaterials(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::DescribeProjectsOutcome CmeClient::DescribeProjects(const DescribeProjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectsResponse rsp = DescribeProjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectsOutcome(rsp);
        else
            return DescribeProjectsOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectsOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeProjectsAsync(const DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjects(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::DescribeProjectsOutcomeCallable CmeClient::DescribeProjectsCallable(const DescribeProjectsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProjects(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::DescribeResourceAuthorizationOutcome CmeClient::DescribeResourceAuthorization(const DescribeResourceAuthorizationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceAuthorization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceAuthorizationResponse rsp = DescribeResourceAuthorizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceAuthorizationOutcome(rsp);
        else
            return DescribeResourceAuthorizationOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceAuthorizationOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeResourceAuthorizationAsync(const DescribeResourceAuthorizationRequest& request, const DescribeResourceAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceAuthorization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::DescribeResourceAuthorizationOutcomeCallable CmeClient::DescribeResourceAuthorizationCallable(const DescribeResourceAuthorizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceAuthorizationOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceAuthorization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::DescribeSharedSpaceOutcome CmeClient::DescribeSharedSpace(const DescribeSharedSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSharedSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSharedSpaceResponse rsp = DescribeSharedSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSharedSpaceOutcome(rsp);
        else
            return DescribeSharedSpaceOutcome(o.GetError());
    }
    else
    {
        return DescribeSharedSpaceOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeSharedSpaceAsync(const DescribeSharedSpaceRequest& request, const DescribeSharedSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSharedSpace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::DescribeSharedSpaceOutcomeCallable CmeClient::DescribeSharedSpaceCallable(const DescribeSharedSpaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSharedSpaceOutcome()>>(
        [this, request]()
        {
            return this->DescribeSharedSpace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::DescribeTaskDetailOutcome CmeClient::DescribeTaskDetail(const DescribeTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskDetailResponse rsp = DescribeTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskDetailOutcome(rsp);
        else
            return DescribeTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskDetailOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeTaskDetailAsync(const DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::DescribeTaskDetailOutcomeCallable CmeClient::DescribeTaskDetailCallable(const DescribeTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::DescribeTasksOutcome CmeClient::DescribeTasks(const DescribeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksResponse rsp = DescribeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksOutcome(rsp);
        else
            return DescribeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::DescribeTasksOutcomeCallable CmeClient::DescribeTasksCallable(const DescribeTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::DescribeTeamMembersOutcome CmeClient::DescribeTeamMembers(const DescribeTeamMembersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTeamMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTeamMembersResponse rsp = DescribeTeamMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTeamMembersOutcome(rsp);
        else
            return DescribeTeamMembersOutcome(o.GetError());
    }
    else
    {
        return DescribeTeamMembersOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeTeamMembersAsync(const DescribeTeamMembersRequest& request, const DescribeTeamMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTeamMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::DescribeTeamMembersOutcomeCallable CmeClient::DescribeTeamMembersCallable(const DescribeTeamMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTeamMembersOutcome()>>(
        [this, request]()
        {
            return this->DescribeTeamMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::DescribeTeamsOutcome CmeClient::DescribeTeams(const DescribeTeamsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTeams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTeamsResponse rsp = DescribeTeamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTeamsOutcome(rsp);
        else
            return DescribeTeamsOutcome(o.GetError());
    }
    else
    {
        return DescribeTeamsOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeTeamsAsync(const DescribeTeamsRequest& request, const DescribeTeamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTeams(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::DescribeTeamsOutcomeCallable CmeClient::DescribeTeamsCallable(const DescribeTeamsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTeamsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTeams(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::ExportVideoEditProjectOutcome CmeClient::ExportVideoEditProject(const ExportVideoEditProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVideoEditProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVideoEditProjectResponse rsp = ExportVideoEditProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVideoEditProjectOutcome(rsp);
        else
            return ExportVideoEditProjectOutcome(o.GetError());
    }
    else
    {
        return ExportVideoEditProjectOutcome(outcome.GetError());
    }
}

void CmeClient::ExportVideoEditProjectAsync(const ExportVideoEditProjectRequest& request, const ExportVideoEditProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportVideoEditProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::ExportVideoEditProjectOutcomeCallable CmeClient::ExportVideoEditProjectCallable(const ExportVideoEditProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportVideoEditProjectOutcome()>>(
        [this, request]()
        {
            return this->ExportVideoEditProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::FlattenListMediaOutcome CmeClient::FlattenListMedia(const FlattenListMediaRequest &request)
{
    auto outcome = MakeRequest(request, "FlattenListMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FlattenListMediaResponse rsp = FlattenListMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FlattenListMediaOutcome(rsp);
        else
            return FlattenListMediaOutcome(o.GetError());
    }
    else
    {
        return FlattenListMediaOutcome(outcome.GetError());
    }
}

void CmeClient::FlattenListMediaAsync(const FlattenListMediaRequest& request, const FlattenListMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FlattenListMedia(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::FlattenListMediaOutcomeCallable CmeClient::FlattenListMediaCallable(const FlattenListMediaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FlattenListMediaOutcome()>>(
        [this, request]()
        {
            return this->FlattenListMedia(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::GrantResourceAuthorizationOutcome CmeClient::GrantResourceAuthorization(const GrantResourceAuthorizationRequest &request)
{
    auto outcome = MakeRequest(request, "GrantResourceAuthorization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GrantResourceAuthorizationResponse rsp = GrantResourceAuthorizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GrantResourceAuthorizationOutcome(rsp);
        else
            return GrantResourceAuthorizationOutcome(o.GetError());
    }
    else
    {
        return GrantResourceAuthorizationOutcome(outcome.GetError());
    }
}

void CmeClient::GrantResourceAuthorizationAsync(const GrantResourceAuthorizationRequest& request, const GrantResourceAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GrantResourceAuthorization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::GrantResourceAuthorizationOutcomeCallable CmeClient::GrantResourceAuthorizationCallable(const GrantResourceAuthorizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GrantResourceAuthorizationOutcome()>>(
        [this, request]()
        {
            return this->GrantResourceAuthorization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::ImportMaterialOutcome CmeClient::ImportMaterial(const ImportMaterialRequest &request)
{
    auto outcome = MakeRequest(request, "ImportMaterial");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportMaterialResponse rsp = ImportMaterialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportMaterialOutcome(rsp);
        else
            return ImportMaterialOutcome(o.GetError());
    }
    else
    {
        return ImportMaterialOutcome(outcome.GetError());
    }
}

void CmeClient::ImportMaterialAsync(const ImportMaterialRequest& request, const ImportMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportMaterial(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::ImportMaterialOutcomeCallable CmeClient::ImportMaterialCallable(const ImportMaterialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportMaterialOutcome()>>(
        [this, request]()
        {
            return this->ImportMaterial(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::ImportMediaToProjectOutcome CmeClient::ImportMediaToProject(const ImportMediaToProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ImportMediaToProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportMediaToProjectResponse rsp = ImportMediaToProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportMediaToProjectOutcome(rsp);
        else
            return ImportMediaToProjectOutcome(o.GetError());
    }
    else
    {
        return ImportMediaToProjectOutcome(outcome.GetError());
    }
}

void CmeClient::ImportMediaToProjectAsync(const ImportMediaToProjectRequest& request, const ImportMediaToProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportMediaToProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::ImportMediaToProjectOutcomeCallable CmeClient::ImportMediaToProjectCallable(const ImportMediaToProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportMediaToProjectOutcome()>>(
        [this, request]()
        {
            return this->ImportMediaToProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::ListMediaOutcome CmeClient::ListMedia(const ListMediaRequest &request)
{
    auto outcome = MakeRequest(request, "ListMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListMediaResponse rsp = ListMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListMediaOutcome(rsp);
        else
            return ListMediaOutcome(o.GetError());
    }
    else
    {
        return ListMediaOutcome(outcome.GetError());
    }
}

void CmeClient::ListMediaAsync(const ListMediaRequest& request, const ListMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListMedia(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::ListMediaOutcomeCallable CmeClient::ListMediaCallable(const ListMediaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListMediaOutcome()>>(
        [this, request]()
        {
            return this->ListMedia(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::ModifyMaterialOutcome CmeClient::ModifyMaterial(const ModifyMaterialRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMaterial");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMaterialResponse rsp = ModifyMaterialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMaterialOutcome(rsp);
        else
            return ModifyMaterialOutcome(o.GetError());
    }
    else
    {
        return ModifyMaterialOutcome(outcome.GetError());
    }
}

void CmeClient::ModifyMaterialAsync(const ModifyMaterialRequest& request, const ModifyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMaterial(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::ModifyMaterialOutcomeCallable CmeClient::ModifyMaterialCallable(const ModifyMaterialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMaterialOutcome()>>(
        [this, request]()
        {
            return this->ModifyMaterial(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::ModifyProjectOutcome CmeClient::ModifyProject(const ModifyProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProjectResponse rsp = ModifyProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProjectOutcome(rsp);
        else
            return ModifyProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyProjectOutcome(outcome.GetError());
    }
}

void CmeClient::ModifyProjectAsync(const ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::ModifyProjectOutcomeCallable CmeClient::ModifyProjectCallable(const ModifyProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyProjectOutcome()>>(
        [this, request]()
        {
            return this->ModifyProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::ModifyTeamOutcome CmeClient::ModifyTeam(const ModifyTeamRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTeam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTeamResponse rsp = ModifyTeamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTeamOutcome(rsp);
        else
            return ModifyTeamOutcome(o.GetError());
    }
    else
    {
        return ModifyTeamOutcome(outcome.GetError());
    }
}

void CmeClient::ModifyTeamAsync(const ModifyTeamRequest& request, const ModifyTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTeam(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::ModifyTeamOutcomeCallable CmeClient::ModifyTeamCallable(const ModifyTeamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTeamOutcome()>>(
        [this, request]()
        {
            return this->ModifyTeam(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::ModifyTeamMemberOutcome CmeClient::ModifyTeamMember(const ModifyTeamMemberRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTeamMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTeamMemberResponse rsp = ModifyTeamMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTeamMemberOutcome(rsp);
        else
            return ModifyTeamMemberOutcome(o.GetError());
    }
    else
    {
        return ModifyTeamMemberOutcome(outcome.GetError());
    }
}

void CmeClient::ModifyTeamMemberAsync(const ModifyTeamMemberRequest& request, const ModifyTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTeamMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::ModifyTeamMemberOutcomeCallable CmeClient::ModifyTeamMemberCallable(const ModifyTeamMemberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTeamMemberOutcome()>>(
        [this, request]()
        {
            return this->ModifyTeamMember(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::MoveClassOutcome CmeClient::MoveClass(const MoveClassRequest &request)
{
    auto outcome = MakeRequest(request, "MoveClass");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MoveClassResponse rsp = MoveClassResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MoveClassOutcome(rsp);
        else
            return MoveClassOutcome(o.GetError());
    }
    else
    {
        return MoveClassOutcome(outcome.GetError());
    }
}

void CmeClient::MoveClassAsync(const MoveClassRequest& request, const MoveClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MoveClass(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::MoveClassOutcomeCallable CmeClient::MoveClassCallable(const MoveClassRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MoveClassOutcome()>>(
        [this, request]()
        {
            return this->MoveClass(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::RevokeResourceAuthorizationOutcome CmeClient::RevokeResourceAuthorization(const RevokeResourceAuthorizationRequest &request)
{
    auto outcome = MakeRequest(request, "RevokeResourceAuthorization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevokeResourceAuthorizationResponse rsp = RevokeResourceAuthorizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevokeResourceAuthorizationOutcome(rsp);
        else
            return RevokeResourceAuthorizationOutcome(o.GetError());
    }
    else
    {
        return RevokeResourceAuthorizationOutcome(outcome.GetError());
    }
}

void CmeClient::RevokeResourceAuthorizationAsync(const RevokeResourceAuthorizationRequest& request, const RevokeResourceAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RevokeResourceAuthorization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::RevokeResourceAuthorizationOutcomeCallable CmeClient::RevokeResourceAuthorizationCallable(const RevokeResourceAuthorizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RevokeResourceAuthorizationOutcome()>>(
        [this, request]()
        {
            return this->RevokeResourceAuthorization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmeClient::SearchMaterialOutcome CmeClient::SearchMaterial(const SearchMaterialRequest &request)
{
    auto outcome = MakeRequest(request, "SearchMaterial");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchMaterialResponse rsp = SearchMaterialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchMaterialOutcome(rsp);
        else
            return SearchMaterialOutcome(o.GetError());
    }
    else
    {
        return SearchMaterialOutcome(outcome.GetError());
    }
}

void CmeClient::SearchMaterialAsync(const SearchMaterialRequest& request, const SearchMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchMaterial(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmeClient::SearchMaterialOutcomeCallable CmeClient::SearchMaterialCallable(const SearchMaterialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchMaterialOutcome()>>(
        [this, request]()
        {
            return this->SearchMaterial(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

