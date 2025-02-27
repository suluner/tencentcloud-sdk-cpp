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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSTEMPLATESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeAddressTemplates请求参数结构体
                */
                class DescribeAddressTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeAddressTemplatesRequest();
                    ~DescribeAddressTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件。
<li>address-template-name - IP地址模板名称。</li>
<li>address-template-id - IP地址模板实例ID，例如：ipm-mdunqeb6。</li>
<li>address-ip - IP地址。</li>
                     * @return Filters 过滤条件。
<li>address-template-name - IP地址模板名称。</li>
<li>address-template-id - IP地址模板实例ID，例如：ipm-mdunqeb6。</li>
<li>address-ip - IP地址。</li>
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>address-template-name - IP地址模板名称。</li>
<li>address-template-id - IP地址模板实例ID，例如：ipm-mdunqeb6。</li>
<li>address-ip - IP地址。</li>
                     * @param Filters 过滤条件。
<li>address-template-name - IP地址模板名称。</li>
<li>address-template-id - IP地址模板实例ID，例如：ipm-mdunqeb6。</li>
<li>address-ip - IP地址。</li>
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param Offset 偏移量，默认为0。
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param Limit 返回数量，默认为20，最大值为100。
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 过滤条件。
<li>address-template-name - IP地址模板名称。</li>
<li>address-template-id - IP地址模板实例ID，例如：ipm-mdunqeb6。</li>
<li>address-ip - IP地址。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSTEMPLATESREQUEST_H_
