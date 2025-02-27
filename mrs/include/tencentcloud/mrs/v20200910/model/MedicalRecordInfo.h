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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_MEDICALRECORDINFO_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_MEDICALRECORDINFO_H_

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
                * 门诊病历信息
                */
                class MedicalRecordInfo : public AbstractModel
                {
                public:
                    MedicalRecordInfo();
                    ~MedicalRecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取就诊日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiagnosisTime 就诊日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDiagnosisTime() const;

                    /**
                     * 设置就诊日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DiagnosisTime 就诊日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDiagnosisTime(const std::string& _diagnosisTime);

                    /**
                     * 判断参数 DiagnosisTime 是否已赋值
                     * @return DiagnosisTime 是否已赋值
                     */
                    bool DiagnosisTimeHasBeenSet() const;

                    /**
                     * 获取就诊科室
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiagnosisDepartmentName 就诊科室
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDiagnosisDepartmentName() const;

                    /**
                     * 设置就诊科室
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DiagnosisDepartmentName 就诊科室
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDiagnosisDepartmentName(const std::string& _diagnosisDepartmentName);

                    /**
                     * 判断参数 DiagnosisDepartmentName 是否已赋值
                     * @return DiagnosisDepartmentName 是否已赋值
                     */
                    bool DiagnosisDepartmentNameHasBeenSet() const;

                    /**
                     * 获取就诊医生
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiagnosisDoctorName 就诊医生
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDiagnosisDoctorName() const;

                    /**
                     * 设置就诊医生
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DiagnosisDoctorName 就诊医生
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDiagnosisDoctorName(const std::string& _diagnosisDoctorName);

                    /**
                     * 判断参数 DiagnosisDoctorName 是否已赋值
                     * @return DiagnosisDoctorName 是否已赋值
                     */
                    bool DiagnosisDoctorNameHasBeenSet() const;

                    /**
                     * 获取临床诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClinicalDiagnosis 临床诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClinicalDiagnosis() const;

                    /**
                     * 设置临床诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClinicalDiagnosis 临床诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClinicalDiagnosis(const std::string& _clinicalDiagnosis);

                    /**
                     * 判断参数 ClinicalDiagnosis 是否已赋值
                     * @return ClinicalDiagnosis 是否已赋值
                     */
                    bool ClinicalDiagnosisHasBeenSet() const;

                    /**
                     * 获取主述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MainNarration 主述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMainNarration() const;

                    /**
                     * 设置主述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MainNarration 主述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMainNarration(const std::string& _mainNarration);

                    /**
                     * 判断参数 MainNarration 是否已赋值
                     * @return MainNarration 是否已赋值
                     */
                    bool MainNarrationHasBeenSet() const;

                    /**
                     * 获取体格检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhysicalExamination 体格检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPhysicalExamination() const;

                    /**
                     * 设置体格检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PhysicalExamination 体格检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPhysicalExamination(const std::string& _physicalExamination);

                    /**
                     * 判断参数 PhysicalExamination 是否已赋值
                     * @return PhysicalExamination 是否已赋值
                     */
                    bool PhysicalExaminationHasBeenSet() const;

                    /**
                     * 获取检查结论
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InspectionFindings 检查结论
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInspectionFindings() const;

                    /**
                     * 设置检查结论
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InspectionFindings 检查结论
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInspectionFindings(const std::string& _inspectionFindings);

                    /**
                     * 判断参数 InspectionFindings 是否已赋值
                     * @return InspectionFindings 是否已赋值
                     */
                    bool InspectionFindingsHasBeenSet() const;

                    /**
                     * 获取治疗意见
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TreatmentOpinion 治疗意见
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTreatmentOpinion() const;

                    /**
                     * 设置治疗意见
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TreatmentOpinion 治疗意见
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTreatmentOpinion(const std::string& _treatmentOpinion);

                    /**
                     * 判断参数 TreatmentOpinion 是否已赋值
                     * @return TreatmentOpinion 是否已赋值
                     */
                    bool TreatmentOpinionHasBeenSet() const;

                private:

                    /**
                     * 就诊日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diagnosisTime;
                    bool m_diagnosisTimeHasBeenSet;

                    /**
                     * 就诊科室
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diagnosisDepartmentName;
                    bool m_diagnosisDepartmentNameHasBeenSet;

                    /**
                     * 就诊医生
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diagnosisDoctorName;
                    bool m_diagnosisDoctorNameHasBeenSet;

                    /**
                     * 临床诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clinicalDiagnosis;
                    bool m_clinicalDiagnosisHasBeenSet;

                    /**
                     * 主述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mainNarration;
                    bool m_mainNarrationHasBeenSet;

                    /**
                     * 体格检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_physicalExamination;
                    bool m_physicalExaminationHasBeenSet;

                    /**
                     * 检查结论
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inspectionFindings;
                    bool m_inspectionFindingsHasBeenSet;

                    /**
                     * 治疗意见
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_treatmentOpinion;
                    bool m_treatmentOpinionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_MEDICALRECORDINFO_H_
