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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCLIMITSRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCLIMITSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/VpcLimit.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeVpcLimits返回参数结构体
                */
                class DescribeVpcLimitsResponse : public AbstractModel
                {
                public:
                    DescribeVpcLimitsResponse();
                    ~DescribeVpcLimitsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取私有网络配额
                     * @return VpcLimitSet 私有网络配额
                     */
                    std::vector<VpcLimit> GetVpcLimitSet() const;

                    /**
                     * 判断参数 VpcLimitSet 是否已赋值
                     * @return VpcLimitSet 是否已赋值
                     */
                    bool VpcLimitSetHasBeenSet() const;

                private:

                    /**
                     * 私有网络配额
                     */
                    std::vector<VpcLimit> m_vpcLimitSet;
                    bool m_vpcLimitSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCLIMITSRESPONSE_H_
