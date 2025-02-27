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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESERVERLESSGROUPSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESERVERLESSGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeServerlessGroups请求参数结构体
                */
                class DescribeServerlessGroupsRequest : public AbstractModel
                {
                public:
                    DescribeServerlessGroupsRequest();
                    ~DescribeServerlessGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索字段，模糊搜索groupName字段
                     * @return SearchWord 搜索字段，模糊搜索groupName字段
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索字段，模糊搜索groupName字段
                     * @param SearchWord 搜索字段，模糊搜索groupName字段
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取分组所属应用ID
                     * @return ApplicationId 分组所属应用ID
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置分组所属应用ID
                     * @param ApplicationId 分组所属应用ID
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取排序字段，默认为 createTime字段，支持id， name， createTime
                     * @return OrderBy 排序字段，默认为 createTime字段，支持id， name， createTime
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，默认为 createTime字段，支持id， name， createTime
                     * @param OrderBy 排序字段，默认为 createTime字段，支持id， name， createTime
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序方式，默认为1：倒序排序，0：正序，1：倒序
                     * @return OrderType 排序方式，默认为1：倒序排序，0：正序，1：倒序
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置排序方式，默认为1：倒序排序，0：正序，1：倒序
                     * @param OrderType 排序方式，默认为1：倒序排序，0：正序，1：倒序
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取偏移量，取值从0开始
                     * @return Offset 偏移量，取值从0开始
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，取值从0开始
                     * @param Offset 偏移量，取值从0开始
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页个数，默认为20， 取值应为1~50
                     * @return Limit 分页个数，默认为20， 取值应为1~50
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页个数，默认为20， 取值应为1~50
                     * @param Limit 分页个数，默认为20， 取值应为1~50
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分组所属名字空间ID
                     * @return NamespaceId 分组所属名字空间ID
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置分组所属名字空间ID
                     * @param NamespaceId 分组所属名字空间ID
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取分组所属集群ID
                     * @return ClusterId 分组所属集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置分组所属集群ID
                     * @param ClusterId 分组所属集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取无
                     * @return GroupIdList 无
                     */
                    std::vector<std::string> GetGroupIdList() const;

                    /**
                     * 设置无
                     * @param GroupIdList 无
                     */
                    void SetGroupIdList(const std::vector<std::string>& _groupIdList);

                    /**
                     * 判断参数 GroupIdList 是否已赋值
                     * @return GroupIdList 是否已赋值
                     */
                    bool GroupIdListHasBeenSet() const;

                private:

                    /**
                     * 搜索字段，模糊搜索groupName字段
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 分组所属应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 排序字段，默认为 createTime字段，支持id， name， createTime
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式，默认为1：倒序排序，0：正序，1：倒序
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 偏移量，取值从0开始
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页个数，默认为20， 取值应为1~50
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分组所属名字空间ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 分组所属集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<std::string> m_groupIdList;
                    bool m_groupIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESERVERLESSGROUPSREQUEST_H_
