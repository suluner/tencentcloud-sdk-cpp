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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PODLIMITSINSTANCE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PODLIMITSINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/PodLimitsByType.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 机型信息和其可支持的最大VPC-CNI模式Pod数量信息
                */
                class PodLimitsInstance : public AbstractModel
                {
                public:
                    PodLimitsInstance();
                    ~PodLimitsInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机型所在可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone 机型所在可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetZone() const;

                    /**
                     * 设置机型所在可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Zone 机型所在可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取机型所属机型族
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceFamily 机型所属机型族
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置机型所属机型族
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceFamily 机型所属机型族
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取实例机型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType 实例机型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例机型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceType 实例机型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取机型可支持的最大VPC-CNI模式Pod数量信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodLimits 机型可支持的最大VPC-CNI模式Pod数量信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PodLimitsByType GetPodLimits() const;

                    /**
                     * 设置机型可支持的最大VPC-CNI模式Pod数量信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PodLimits 机型可支持的最大VPC-CNI模式Pod数量信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPodLimits(const PodLimitsByType& _podLimits);

                    /**
                     * 判断参数 PodLimits 是否已赋值
                     * @return PodLimits 是否已赋值
                     */
                    bool PodLimitsHasBeenSet() const;

                private:

                    /**
                     * 机型所在可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 机型所属机型族
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * 实例机型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 机型可支持的最大VPC-CNI模式Pod数量信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PodLimitsByType m_podLimits;
                    bool m_podLimitsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PODLIMITSINSTANCE_H_
