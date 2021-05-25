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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_DIAGCERT_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_DIAGCERT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Advice.h>
#include <tencentcloud/mrs/v20200910/model/DiagCertItem.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 诊断证明
                */
                class DiagCert : public AbstractModel
                {
                public:
                    DiagCert();
                    ~DiagCert() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Advice 建议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Advice GetAdvice() const;

                    /**
                     * 设置建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Advice 建议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAdvice(const Advice& _advice);

                    /**
                     * 判断参数 Advice 是否已赋值
                     * @return Advice 是否已赋值
                     */
                    bool AdviceHasBeenSet() const;

                    /**
                     * 获取诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Diagnosis 诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DiagCertItem> GetDiagnosis() const;

                    /**
                     * 设置诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Diagnosis 诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDiagnosis(const std::vector<DiagCertItem>& _diagnosis);

                    /**
                     * 判断参数 Diagnosis 是否已赋值
                     * @return Diagnosis 是否已赋值
                     */
                    bool DiagnosisHasBeenSet() const;

                private:

                    /**
                     * 建议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Advice m_advice;
                    bool m_adviceHasBeenSet;

                    /**
                     * 诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DiagCertItem> m_diagnosis;
                    bool m_diagnosisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_DIAGCERT_H_
