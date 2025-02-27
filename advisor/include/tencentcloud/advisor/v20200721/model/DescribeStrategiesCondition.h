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

#ifndef TENCENTCLOUD_ADVISOR_V20200721_MODEL_DESCRIBESTRATEGIESCONDITION_H_
#define TENCENTCLOUD_ADVISOR_V20200721_MODEL_DESCRIBESTRATEGIESCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Advisor
    {
        namespace V20200721
        {
            namespace Model
            {
                /**
                * 评估项警告条件
                */
                class DescribeStrategiesCondition : public AbstractModel
                {
                public:
                    DescribeStrategiesCondition();
                    ~DescribeStrategiesCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取警告条件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConditionId 警告条件ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetConditionId() const;

                    /**
                     * 设置警告条件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConditionId 警告条件ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConditionId(const uint64_t& _conditionId);

                    /**
                     * 判断参数 ConditionId 是否已赋值
                     * @return ConditionId 是否已赋值
                     */
                    bool ConditionIdHasBeenSet() const;

                    /**
                     * 获取警告级别，2:中风险，3:高风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 警告级别，2:中风险，3:高风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置警告级别，2:中风险，3:高风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Level 警告级别，2:中风险，3:高风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取警告级别描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LevelDesc 警告级别描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLevelDesc() const;

                    /**
                     * 设置警告级别描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LevelDesc 警告级别描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLevelDesc(const std::string& _levelDesc);

                    /**
                     * 判断参数 LevelDesc 是否已赋值
                     * @return LevelDesc 是否已赋值
                     */
                    bool LevelDescHasBeenSet() const;

                    /**
                     * 获取警告条件描述
                     * @return Desc 警告条件描述
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置警告条件描述
                     * @param Desc 警告条件描述
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * 警告条件ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_conditionId;
                    bool m_conditionIdHasBeenSet;

                    /**
                     * 警告级别，2:中风险，3:高风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 警告级别描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_levelDesc;
                    bool m_levelDescHasBeenSet;

                    /**
                     * 警告条件描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADVISOR_V20200721_MODEL_DESCRIBESTRATEGIESCONDITION_H_
