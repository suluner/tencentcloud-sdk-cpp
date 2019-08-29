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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEPROXYGROUPREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEPROXYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/TagPair.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateProxyGroup请求参数结构体
                */
                class CreateProxyGroupRequest : public AbstractModel
                {
                public:
                    CreateProxyGroupRequest();
                    ~CreateProxyGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通道组所属项目ID
                     * @return ProjectId 通道组所属项目ID
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置通道组所属项目ID
                     * @param ProjectId 通道组所属项目ID
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取通道组别名
                     * @return GroupName 通道组别名
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置通道组别名
                     * @param GroupName 通道组别名
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取源站地域，参考接口DescribeDestRegions 返回参数RegionDetail中的RegionId
                     * @return RealServerRegion 源站地域，参考接口DescribeDestRegions 返回参数RegionDetail中的RegionId
                     */
                    std::string GetRealServerRegion() const;

                    /**
                     * 设置源站地域，参考接口DescribeDestRegions 返回参数RegionDetail中的RegionId
                     * @param RealServerRegion 源站地域，参考接口DescribeDestRegions 返回参数RegionDetail中的RegionId
                     */
                    void SetRealServerRegion(const std::string& _realServerRegion);

                    /**
                     * 判断参数 RealServerRegion 是否已赋值
                     * @return RealServerRegion 是否已赋值
                     */
                    bool RealServerRegionHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return TagSet 标签列表
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置标签列表
                     * @param TagSet 标签列表
                     */
                    void SetTagSet(const std::vector<TagPair>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * 通道组所属项目ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 通道组别名
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 源站地域，参考接口DescribeDestRegions 返回参数RegionDetail中的RegionId
                     */
                    std::string m_realServerRegion;
                    bool m_realServerRegionHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEPROXYGROUPREQUEST_H_
