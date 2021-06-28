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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERISKDNSLISTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERISKDNSLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/RiskDnsList.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeRiskDnsList返回参数结构体
                */
                class DescribeRiskDnsListResponse : public AbstractModel
                {
                public:
                    DescribeRiskDnsListResponse();
                    ~DescribeRiskDnsListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取恶意请求列表数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskDnsList 恶意请求列表数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RiskDnsList> GetRiskDnsList() const;

                    /**
                     * 判断参数 RiskDnsList 是否已赋值
                     * @return RiskDnsList 是否已赋值
                     */
                    bool RiskDnsListHasBeenSet() const;

                    /**
                     * 获取总数量
                     * @return TotalCount 总数量
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 恶意请求列表数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RiskDnsList> m_riskDnsList;
                    bool m_riskDnsListHasBeenSet;

                    /**
                     * 总数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERISKDNSLISTRESPONSE_H_
