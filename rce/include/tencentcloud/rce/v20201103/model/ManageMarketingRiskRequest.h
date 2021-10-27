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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_MANAGEMARKETINGRISKREQUEST_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_MANAGEMARKETINGRISKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20201103/model/InputManageMarketingRisk.h>
#include <tencentcloud/rce/v20201103/model/InputCryptoManageMarketingRisk.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * ManageMarketingRisk请求参数结构体
                */
                class ManageMarketingRiskRequest : public AbstractModel
                {
                public:
                    ManageMarketingRiskRequest();
                    ~ManageMarketingRiskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务入参
                     * @return BusinessSecurityData 业务入参
                     */
                    InputManageMarketingRisk GetBusinessSecurityData() const;

                    /**
                     * 设置业务入参
                     * @param BusinessSecurityData 业务入参
                     */
                    void SetBusinessSecurityData(const InputManageMarketingRisk& _businessSecurityData);

                    /**
                     * 判断参数 BusinessSecurityData 是否已赋值
                     * @return BusinessSecurityData 是否已赋值
                     */
                    bool BusinessSecurityDataHasBeenSet() const;

                    /**
                     * 获取业务入参
                     * @return BusinessCryptoData 业务入参
                     */
                    InputCryptoManageMarketingRisk GetBusinessCryptoData() const;

                    /**
                     * 设置业务入参
                     * @param BusinessCryptoData 业务入参
                     */
                    void SetBusinessCryptoData(const InputCryptoManageMarketingRisk& _businessCryptoData);

                    /**
                     * 判断参数 BusinessCryptoData 是否已赋值
                     * @return BusinessCryptoData 是否已赋值
                     */
                    bool BusinessCryptoDataHasBeenSet() const;

                private:

                    /**
                     * 业务入参
                     */
                    InputManageMarketingRisk m_businessSecurityData;
                    bool m_businessSecurityDataHasBeenSet;

                    /**
                     * 业务入参
                     */
                    InputCryptoManageMarketingRisk m_businessCryptoData;
                    bool m_businessCryptoDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_MANAGEMARKETINGRISKREQUEST_H_
