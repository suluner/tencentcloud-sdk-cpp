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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_VALUE_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_VALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 值
                */
                class Value : public AbstractModel
                {
                public:
                    Value();
                    ~Value() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Grade “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGrade() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Grade “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGrade(const std::string& _grade);

                    /**
                     * 判断参数 Grade 是否已赋值
                     * @return Grade 是否已赋值
                     */
                    bool GradeHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Percent “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<double> GetPercent() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Percent “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPercent(const std::vector<double>& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取阳性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Positive 阳性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPositive() const;

                    /**
                     * 设置阳性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Positive 阳性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPositive(const std::string& _positive);

                    /**
                     * 判断参数 Positive 是否已赋值
                     * @return Positive 是否已赋值
                     */
                    bool PositiveHasBeenSet() const;

                private:

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_grade;
                    bool m_gradeHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<double> m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 阳性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_positive;
                    bool m_positiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_VALUE_H_
