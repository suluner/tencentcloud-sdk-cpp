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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBESECRETREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBESECRETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeSecret请求参数结构体
                */
                class DescribeSecretRequest : public AbstractModel
                {
                public:
                    DescribeSecretRequest();
                    ~DescribeSecretRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取边缘单元ID
                     * @return EdgeUnitID 边缘单元ID
                     */
                    uint64_t GetEdgeUnitID() const;

                    /**
                     * 设置边缘单元ID
                     * @param EdgeUnitID 边缘单元ID
                     */
                    void SetEdgeUnitID(const uint64_t& _edgeUnitID);

                    /**
                     * 判断参数 EdgeUnitID 是否已赋值
                     * @return EdgeUnitID 是否已赋值
                     */
                    bool EdgeUnitIDHasBeenSet() const;

                    /**
                     * 获取secret名
                     * @return SecretName secret名
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置secret名
                     * @param SecretName secret名
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取命名空间(默认值:default）
                     * @return SecretNamespace 命名空间(默认值:default）
                     */
                    std::string GetSecretNamespace() const;

                    /**
                     * 设置命名空间(默认值:default）
                     * @param SecretNamespace 命名空间(默认值:default）
                     */
                    void SetSecretNamespace(const std::string& _secretNamespace);

                    /**
                     * 判断参数 SecretNamespace 是否已赋值
                     * @return SecretNamespace 是否已赋值
                     */
                    bool SecretNamespaceHasBeenSet() const;

                private:

                    /**
                     * 边缘单元ID
                     */
                    uint64_t m_edgeUnitID;
                    bool m_edgeUnitIDHasBeenSet;

                    /**
                     * secret名
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * 命名空间(默认值:default）
                     */
                    std::string m_secretNamespace;
                    bool m_secretNamespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBESECRETREQUEST_H_
