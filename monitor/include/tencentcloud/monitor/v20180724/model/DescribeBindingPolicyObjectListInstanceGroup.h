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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTINSTANCEGROUP_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTINSTANCEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeBindingPolicyObjectList返回的是实例分组信息
                */
                class DescribeBindingPolicyObjectListInstanceGroup : public AbstractModel
                {
                public:
                    DescribeBindingPolicyObjectListInstanceGroup();
                    ~DescribeBindingPolicyObjectListInstanceGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例分组id
                     * @return InstanceGroupId 实例分组id
                     */
                    int64_t GetInstanceGroupId() const;

                    /**
                     * 设置实例分组id
                     * @param InstanceGroupId 实例分组id
                     */
                    void SetInstanceGroupId(const int64_t& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取告警策略类型名称
                     * @return ViewName 告警策略类型名称
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置告警策略类型名称
                     * @param ViewName 告警策略类型名称
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取最后编辑uin
                     * @return LastEditUin 最后编辑uin
                     */
                    std::string GetLastEditUin() const;

                    /**
                     * 设置最后编辑uin
                     * @param LastEditUin 最后编辑uin
                     */
                    void SetLastEditUin(const std::string& _lastEditUin);

                    /**
                     * 判断参数 LastEditUin 是否已赋值
                     * @return LastEditUin 是否已赋值
                     */
                    bool LastEditUinHasBeenSet() const;

                    /**
                     * 获取实例分组名称
                     * @return GroupName 实例分组名称
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置实例分组名称
                     * @param GroupName 实例分组名称
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取实例数量
                     * @return InstanceSum 实例数量
                     */
                    int64_t GetInstanceSum() const;

                    /**
                     * 设置实例数量
                     * @param InstanceSum 实例数量
                     */
                    void SetInstanceSum(const int64_t& _instanceSum);

                    /**
                     * 判断参数 InstanceSum 是否已赋值
                     * @return InstanceSum 是否已赋值
                     */
                    bool InstanceSumHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param UpdateTime 更新时间
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return InsertTime 创建时间
                     */
                    int64_t GetInsertTime() const;

                    /**
                     * 设置创建时间
                     * @param InsertTime 创建时间
                     */
                    void SetInsertTime(const int64_t& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取实例所在的地域集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Regions 实例所在的地域集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetRegions() const;

                    /**
                     * 设置实例所在的地域集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Regions 实例所在的地域集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegions(const std::vector<std::string>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     */
                    bool RegionsHasBeenSet() const;

                private:

                    /**
                     * 实例分组id
                     */
                    int64_t m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * 告警策略类型名称
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * 最后编辑uin
                     */
                    std::string m_lastEditUin;
                    bool m_lastEditUinHasBeenSet;

                    /**
                     * 实例分组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 实例数量
                     */
                    int64_t m_instanceSum;
                    bool m_instanceSumHasBeenSet;

                    /**
                     * 更新时间
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 实例所在的地域集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTINSTANCEGROUP_H_
