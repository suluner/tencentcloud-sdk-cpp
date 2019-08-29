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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LISTNAMESPACESREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LISTNAMESPACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ListNamespaces请求参数结构体
                */
                class ListNamespacesRequest : public AbstractModel
                {
                public:
                    ListNamespacesRequest();
                    ~ListNamespacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回数据长度，默认值为 20
                     * @return Limit 返回数据长度，默认值为 20
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数据长度，默认值为 20
                     * @param Limit 返回数据长度，默认值为 20
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取数据的偏移量，默认值为 0
                     * @return Offset 数据的偏移量，默认值为 0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置数据的偏移量，默认值为 0
                     * @param Offset 数据的偏移量，默认值为 0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取根据哪个字段进行返回结果排序,支持以下字段：Name,Updatetime
                     * @return Orderby 根据哪个字段进行返回结果排序,支持以下字段：Name,Updatetime
                     */
                    std::string GetOrderby() const;

                    /**
                     * 设置根据哪个字段进行返回结果排序,支持以下字段：Name,Updatetime
                     * @param Orderby 根据哪个字段进行返回结果排序,支持以下字段：Name,Updatetime
                     */
                    void SetOrderby(const std::string& _orderby);

                    /**
                     * 判断参数 Orderby 是否已赋值
                     * @return Orderby 是否已赋值
                     */
                    bool OrderbyHasBeenSet() const;

                    /**
                     * 获取以升序还是降序的方式返回结果，可选值 ASC 和 DESC
                     * @return Order 以升序还是降序的方式返回结果，可选值 ASC 和 DESC
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置以升序还是降序的方式返回结果，可选值 ASC 和 DESC
                     * @param Order 以升序还是降序的方式返回结果，可选值 ASC 和 DESC
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 返回数据长度，默认值为 20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 数据的偏移量，默认值为 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 根据哪个字段进行返回结果排序,支持以下字段：Name,Updatetime
                     */
                    std::string m_orderby;
                    bool m_orderbyHasBeenSet;

                    /**
                     * 以升序还是降序的方式返回结果，可选值 ASC 和 DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LISTNAMESPACESREQUEST_H_
