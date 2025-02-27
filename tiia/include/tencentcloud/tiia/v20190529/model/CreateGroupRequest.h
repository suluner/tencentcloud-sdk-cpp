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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_CREATEGROUPREQUEST_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_CREATEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * CreateGroup请求参数结构体
                */
                class CreateGroupRequest : public AbstractModel
                {
                public:
                    CreateGroupRequest();
                    ~CreateGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图库ID，不可重复，仅支持字母、数字和下划线。
                     * @return GroupId 图库ID，不可重复，仅支持字母、数字和下划线。
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置图库ID，不可重复，仅支持字母、数字和下划线。
                     * @param GroupId 图库ID，不可重复，仅支持字母、数字和下划线。
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取图库名称描述。
                     * @return GroupName 图库名称描述。
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置图库名称描述。
                     * @param GroupName 图库名称描述。
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取该库的容量限制。
                     * @return MaxCapacity 该库的容量限制。
                     */
                    uint64_t GetMaxCapacity() const;

                    /**
                     * 设置该库的容量限制。
                     * @param MaxCapacity 该库的容量限制。
                     */
                    void SetMaxCapacity(const uint64_t& _maxCapacity);

                    /**
                     * 判断参数 MaxCapacity 是否已赋值
                     * @return MaxCapacity 是否已赋值
                     */
                    bool MaxCapacityHasBeenSet() const;

                    /**
                     * 获取简介。
                     * @return Brief 简介。
                     */
                    std::string GetBrief() const;

                    /**
                     * 设置简介。
                     * @param Brief 简介。
                     */
                    void SetBrief(const std::string& _brief);

                    /**
                     * 判断参数 Brief 是否已赋值
                     * @return Brief 是否已赋值
                     */
                    bool BriefHasBeenSet() const;

                    /**
                     * 获取该库的访问限频 ，默认10。
                     * @return MaxQps 该库的访问限频 ，默认10。
                     */
                    uint64_t GetMaxQps() const;

                    /**
                     * 设置该库的访问限频 ，默认10。
                     * @param MaxQps 该库的访问限频 ，默认10。
                     */
                    void SetMaxQps(const uint64_t& _maxQps);

                    /**
                     * 判断参数 MaxQps 是否已赋值
                     * @return MaxQps 是否已赋值
                     */
                    bool MaxQpsHasBeenSet() const;

                    /**
                     * 获取图库类型， 默认为通用。
类型： 
1: 通用图库，以用户输入图提取特征。
2: 灰度图库，输入图和搜索图均转为灰度图提取特征。
3: 针对电商（通用品类）和logo优化。
4: 通用图库v2。
5: 电商模型。
                     * @return GroupType 图库类型， 默认为通用。
类型： 
1: 通用图库，以用户输入图提取特征。
2: 灰度图库，输入图和搜索图均转为灰度图提取特征。
3: 针对电商（通用品类）和logo优化。
4: 通用图库v2。
5: 电商模型。
                     */
                    uint64_t GetGroupType() const;

                    /**
                     * 设置图库类型， 默认为通用。
类型： 
1: 通用图库，以用户输入图提取特征。
2: 灰度图库，输入图和搜索图均转为灰度图提取特征。
3: 针对电商（通用品类）和logo优化。
4: 通用图库v2。
5: 电商模型。
                     * @param GroupType 图库类型， 默认为通用。
类型： 
1: 通用图库，以用户输入图提取特征。
2: 灰度图库，输入图和搜索图均转为灰度图提取特征。
3: 针对电商（通用品类）和logo优化。
4: 通用图库v2。
5: 电商模型。
                     */
                    void SetGroupType(const uint64_t& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     */
                    bool GroupTypeHasBeenSet() const;

                private:

                    /**
                     * 图库ID，不可重复，仅支持字母、数字和下划线。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 图库名称描述。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 该库的容量限制。
                     */
                    uint64_t m_maxCapacity;
                    bool m_maxCapacityHasBeenSet;

                    /**
                     * 简介。
                     */
                    std::string m_brief;
                    bool m_briefHasBeenSet;

                    /**
                     * 该库的访问限频 ，默认10。
                     */
                    uint64_t m_maxQps;
                    bool m_maxQpsHasBeenSet;

                    /**
                     * 图库类型， 默认为通用。
类型： 
1: 通用图库，以用户输入图提取特征。
2: 灰度图库，输入图和搜索图均转为灰度图提取特征。
3: 针对电商（通用品类）和logo优化。
4: 通用图库v2。
5: 电商模型。
                     */
                    uint64_t m_groupType;
                    bool m_groupTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_CREATEGROUPREQUEST_H_
