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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPRESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeGroup.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeGroup的返回
                */
                class GroupResponse : public AbstractModel
                {
                public:
                    GroupResponse();
                    ~GroupResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 计数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置计数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TotalCount 计数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取GroupList
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupList GroupList
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeGroup> GetGroupList() const;

                    /**
                     * 设置GroupList
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupList GroupList
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupList(const std::vector<DescribeGroup>& _groupList);

                    /**
                     * 判断参数 GroupList 是否已赋值
                     * @return GroupList 是否已赋值
                     */
                    bool GroupListHasBeenSet() const;

                private:

                    /**
                     * 计数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * GroupList
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeGroup> m_groupList;
                    bool m_groupListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPRESPONSE_H_
