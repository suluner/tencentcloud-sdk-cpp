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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_CANDIDATE_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_CANDIDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20180301/model/PersonGroupInfo.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 识别出的最相似候选人
                */
                class Candidate : public AbstractModel
                {
                public:
                    Candidate();
                    ~Candidate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人员ID
                     * @return PersonId 人员ID
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置人员ID
                     * @param PersonId 人员ID
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取人脸ID
                     * @return FaceId 人脸ID
                     */
                    std::string GetFaceId() const;

                    /**
                     * 设置人脸ID
                     * @param FaceId 人脸ID
                     */
                    void SetFaceId(const std::string& _faceId);

                    /**
                     * 判断参数 FaceId 是否已赋值
                     * @return FaceId 是否已赋值
                     */
                    bool FaceIdHasBeenSet() const;

                    /**
                     * 获取候选者的匹配得分。 
10万大小人脸库，若人脸均为类似抓拍照（人脸质量较差）， 
误识率百分之一对应分数为70分，误识率千分之一对应分数为80分，误识率万分之一对应分数为90分； 
若人脸均为类似自拍照（人脸质量较好）， 
误识率百分之一对应分数为60分，误识率千分之一对应分数为70分，误识率万分之一对应分数为80分。 
建议分数不要超过90分。您可以根据实际情况选择合适的分数。
                     * @return Score 候选者的匹配得分。 
10万大小人脸库，若人脸均为类似抓拍照（人脸质量较差）， 
误识率百分之一对应分数为70分，误识率千分之一对应分数为80分，误识率万分之一对应分数为90分； 
若人脸均为类似自拍照（人脸质量较好）， 
误识率百分之一对应分数为60分，误识率千分之一对应分数为70分，误识率万分之一对应分数为80分。 
建议分数不要超过90分。您可以根据实际情况选择合适的分数。
                     */
                    double GetScore() const;

                    /**
                     * 设置候选者的匹配得分。 
10万大小人脸库，若人脸均为类似抓拍照（人脸质量较差）， 
误识率百分之一对应分数为70分，误识率千分之一对应分数为80分，误识率万分之一对应分数为90分； 
若人脸均为类似自拍照（人脸质量较好）， 
误识率百分之一对应分数为60分，误识率千分之一对应分数为70分，误识率万分之一对应分数为80分。 
建议分数不要超过90分。您可以根据实际情况选择合适的分数。
                     * @param Score 候选者的匹配得分。 
10万大小人脸库，若人脸均为类似抓拍照（人脸质量较差）， 
误识率百分之一对应分数为70分，误识率千分之一对应分数为80分，误识率万分之一对应分数为90分； 
若人脸均为类似自拍照（人脸质量较好）， 
误识率百分之一对应分数为60分，误识率千分之一对应分数为70分，误识率万分之一对应分数为80分。 
建议分数不要超过90分。您可以根据实际情况选择合适的分数。
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取人员名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PersonName 人员名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPersonName() const;

                    /**
                     * 设置人员名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PersonName 人员名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPersonName(const std::string& _personName);

                    /**
                     * 判断参数 PersonName 是否已赋值
                     * @return PersonName 是否已赋值
                     */
                    bool PersonNameHasBeenSet() const;

                    /**
                     * 获取人员性别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Gender 人员性别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置人员性别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Gender 人员性别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取包含此人员的人员库及描述字段内容列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PersonGroupInfos 包含此人员的人员库及描述字段内容列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PersonGroupInfo> GetPersonGroupInfos() const;

                    /**
                     * 设置包含此人员的人员库及描述字段内容列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PersonGroupInfos 包含此人员的人员库及描述字段内容列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPersonGroupInfos(const std::vector<PersonGroupInfo>& _personGroupInfos);

                    /**
                     * 判断参数 PersonGroupInfos 是否已赋值
                     * @return PersonGroupInfos 是否已赋值
                     */
                    bool PersonGroupInfosHasBeenSet() const;

                private:

                    /**
                     * 人员ID
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 人脸ID
                     */
                    std::string m_faceId;
                    bool m_faceIdHasBeenSet;

                    /**
                     * 候选者的匹配得分。 
10万大小人脸库，若人脸均为类似抓拍照（人脸质量较差）， 
误识率百分之一对应分数为70分，误识率千分之一对应分数为80分，误识率万分之一对应分数为90分； 
若人脸均为类似自拍照（人脸质量较好）， 
误识率百分之一对应分数为60分，误识率千分之一对应分数为70分，误识率万分之一对应分数为80分。 
建议分数不要超过90分。您可以根据实际情况选择合适的分数。
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 人员名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_personName;
                    bool m_personNameHasBeenSet;

                    /**
                     * 人员性别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 包含此人员的人员库及描述字段内容列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PersonGroupInfo> m_personGroupInfos;
                    bool m_personGroupInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_CANDIDATE_H_
