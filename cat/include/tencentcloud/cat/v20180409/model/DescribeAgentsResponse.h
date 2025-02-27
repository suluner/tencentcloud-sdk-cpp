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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEAGENTSRESPONSE_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEAGENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/CatAgent.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * DescribeAgents返回参数结构体
                */
                class DescribeAgentsResponse : public AbstractModel
                {
                public:
                    DescribeAgentsResponse();
                    ~DescribeAgentsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取本用户可选的拨测点列表
                     * @return Agents 本用户可选的拨测点列表
                     */
                    std::vector<CatAgent> GetAgents() const;

                    /**
                     * 判断参数 Agents 是否已赋值
                     * @return Agents 是否已赋值
                     */
                    bool AgentsHasBeenSet() const;

                private:

                    /**
                     * 本用户可选的拨测点列表
                     */
                    std::vector<CatAgent> m_agents;
                    bool m_agentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEAGENTSRESPONSE_H_
