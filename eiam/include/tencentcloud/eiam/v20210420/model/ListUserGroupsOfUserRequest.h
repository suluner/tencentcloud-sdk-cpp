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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERGROUPSOFUSERREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERGROUPSOFUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ListUserGroupsOfUser请求参数结构体
                */
                class ListUserGroupsOfUserRequest : public AbstractModel
                {
                public:
                    ListUserGroupsOfUserRequest();
                    ~ListUserGroupsOfUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户ID，是用户的全局唯一标识。
                     * @return UserId 用户ID，是用户的全局唯一标识。
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID，是用户的全局唯一标识。
                     * @param UserId 用户ID，是用户的全局唯一标识。
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * 用户ID，是用户的全局唯一标识。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERGROUPSOFUSERREQUEST_H_
