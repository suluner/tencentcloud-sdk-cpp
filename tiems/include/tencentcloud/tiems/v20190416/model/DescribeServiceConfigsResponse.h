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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_DESCRIBESERVICECONFIGSRESPONSE_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_DESCRIBESERVICECONFIGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiems/v20190416/model/ServiceConfig.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * DescribeServiceConfigs返回参数结构体
                */
                class DescribeServiceConfigsResponse : public AbstractModel
                {
                public:
                    DescribeServiceConfigsResponse();
                    ~DescribeServiceConfigsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取服务配置
                     * @return ServiceConfigs 服务配置
                     */
                    std::vector<ServiceConfig> GetServiceConfigs() const;

                    /**
                     * 判断参数 ServiceConfigs 是否已赋值
                     * @return ServiceConfigs 是否已赋值
                     */
                    bool ServiceConfigsHasBeenSet() const;

                    /**
                     * 获取服务配置总数
                     * @return TotalCount 服务配置总数
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 服务配置
                     */
                    std::vector<ServiceConfig> m_serviceConfigs;
                    bool m_serviceConfigsHasBeenSet;

                    /**
                     * 服务配置总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_DESCRIBESERVICECONFIGSRESPONSE_H_
