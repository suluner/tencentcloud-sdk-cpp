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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBECUSTOMERSRESPONSE_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBECUSTOMERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/solar/v20181011/model/CustomerInfo.h>


namespace TencentCloud
{
    namespace Solar
    {
        namespace V20181011
        {
            namespace Model
            {
                /**
                * DescribeCustomers返回参数结构体
                */
                class DescribeCustomersResponse : public AbstractModel
                {
                public:
                    DescribeCustomersResponse();
                    ~DescribeCustomersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取总记录条数
                     * @return TotalCount 总记录条数
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserList 数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CustomerInfo> GetUserList() const;

                    /**
                     * 判断参数 UserList 是否已赋值
                     * @return UserList 是否已赋值
                     */
                    bool UserListHasBeenSet() const;

                private:

                    /**
                     * 总记录条数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CustomerInfo> m_userList;
                    bool m_userListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBECUSTOMERSRESPONSE_H_
