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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeParamTemplates请求参数结构体
                */
                class DescribeParamTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeParamTemplatesRequest();
                    ~DescribeParamTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品类型数组。产品类型：1 – Redis2.8内存版（集群架构），2 – Redis2.8内存版（标准架构），3 – CKV 3.2内存版(标准架构)，4 – CKV 3.2内存版(集群架构)，5 – Redis2.8内存版（单机），6 – Redis4.0内存版（标准架构），7 – Redis4.0内存版（集群架构），8 – Redis5.0内存版（标准架构），9 – Redis5.0内存版（集群架构）
                     * @return ProductTypes 产品类型数组。产品类型：1 – Redis2.8内存版（集群架构），2 – Redis2.8内存版（标准架构），3 – CKV 3.2内存版(标准架构)，4 – CKV 3.2内存版(集群架构)，5 – Redis2.8内存版（单机），6 – Redis4.0内存版（标准架构），7 – Redis4.0内存版（集群架构），8 – Redis5.0内存版（标准架构），9 – Redis5.0内存版（集群架构）
                     */
                    std::vector<int64_t> GetProductTypes() const;

                    /**
                     * 设置产品类型数组。产品类型：1 – Redis2.8内存版（集群架构），2 – Redis2.8内存版（标准架构），3 – CKV 3.2内存版(标准架构)，4 – CKV 3.2内存版(集群架构)，5 – Redis2.8内存版（单机），6 – Redis4.0内存版（标准架构），7 – Redis4.0内存版（集群架构），8 – Redis5.0内存版（标准架构），9 – Redis5.0内存版（集群架构）
                     * @param ProductTypes 产品类型数组。产品类型：1 – Redis2.8内存版（集群架构），2 – Redis2.8内存版（标准架构），3 – CKV 3.2内存版(标准架构)，4 – CKV 3.2内存版(集群架构)，5 – Redis2.8内存版（单机），6 – Redis4.0内存版（标准架构），7 – Redis4.0内存版（集群架构），8 – Redis5.0内存版（标准架构），9 – Redis5.0内存版（集群架构）
                     */
                    void SetProductTypes(const std::vector<int64_t>& _productTypes);

                    /**
                     * 判断参数 ProductTypes 是否已赋值
                     * @return ProductTypes 是否已赋值
                     */
                    bool ProductTypesHasBeenSet() const;

                    /**
                     * 获取模板名称数组。
                     * @return TemplateNames 模板名称数组。
                     */
                    std::vector<std::string> GetTemplateNames() const;

                    /**
                     * 设置模板名称数组。
                     * @param TemplateNames 模板名称数组。
                     */
                    void SetTemplateNames(const std::vector<std::string>& _templateNames);

                    /**
                     * 判断参数 TemplateNames 是否已赋值
                     * @return TemplateNames 是否已赋值
                     */
                    bool TemplateNamesHasBeenSet() const;

                    /**
                     * 获取模板ID数组。
                     * @return TemplateIds 模板ID数组。
                     */
                    std::vector<std::string> GetTemplateIds() const;

                    /**
                     * 设置模板ID数组。
                     * @param TemplateIds 模板ID数组。
                     */
                    void SetTemplateIds(const std::vector<std::string>& _templateIds);

                    /**
                     * 判断参数 TemplateIds 是否已赋值
                     * @return TemplateIds 是否已赋值
                     */
                    bool TemplateIdsHasBeenSet() const;

                private:

                    /**
                     * 产品类型数组。产品类型：1 – Redis2.8内存版（集群架构），2 – Redis2.8内存版（标准架构），3 – CKV 3.2内存版(标准架构)，4 – CKV 3.2内存版(集群架构)，5 – Redis2.8内存版（单机），6 – Redis4.0内存版（标准架构），7 – Redis4.0内存版（集群架构），8 – Redis5.0内存版（标准架构），9 – Redis5.0内存版（集群架构）
                     */
                    std::vector<int64_t> m_productTypes;
                    bool m_productTypesHasBeenSet;

                    /**
                     * 模板名称数组。
                     */
                    std::vector<std::string> m_templateNames;
                    bool m_templateNamesHasBeenSet;

                    /**
                     * 模板ID数组。
                     */
                    std::vector<std::string> m_templateIds;
                    bool m_templateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_
