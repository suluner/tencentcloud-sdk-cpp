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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBETABLESREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBETABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SelectedTableInfoNew.h>
#include <tencentcloud/tcaplusdb/v20190823/model/Filter.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DescribeTables请求参数结构体
                */
                class DescribeTablesRequest : public AbstractModel
                {
                public:
                    DescribeTablesRequest();
                    ~DescribeTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待查询表格所属集群ID
                     * @return ClusterId 待查询表格所属集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置待查询表格所属集群ID
                     * @param ClusterId 待查询表格所属集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取待查询表格所属表格组ID列表
                     * @return TableGroupIds 待查询表格所属表格组ID列表
                     */
                    std::vector<std::string> GetTableGroupIds() const;

                    /**
                     * 设置待查询表格所属表格组ID列表
                     * @param TableGroupIds 待查询表格所属表格组ID列表
                     */
                    void SetTableGroupIds(const std::vector<std::string>& _tableGroupIds);

                    /**
                     * 判断参数 TableGroupIds 是否已赋值
                     * @return TableGroupIds 是否已赋值
                     */
                    bool TableGroupIdsHasBeenSet() const;

                    /**
                     * 获取待查询表格信息列表
                     * @return SelectedTables 待查询表格信息列表
                     */
                    std::vector<SelectedTableInfoNew> GetSelectedTables() const;

                    /**
                     * 设置待查询表格信息列表
                     * @param SelectedTables 待查询表格信息列表
                     */
                    void SetSelectedTables(const std::vector<SelectedTableInfoNew>& _selectedTables);

                    /**
                     * 判断参数 SelectedTables 是否已赋值
                     * @return SelectedTables 是否已赋值
                     */
                    bool SelectedTablesHasBeenSet() const;

                    /**
                     * 获取过滤条件，本接口支持：TableName，TableInstanceId
                     * @return Filters 过滤条件，本接口支持：TableName，TableInstanceId
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，本接口支持：TableName，TableInstanceId
                     * @param Filters 过滤条件，本接口支持：TableName，TableInstanceId
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取查询结果偏移量
                     * @return Offset 查询结果偏移量
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询结果偏移量
                     * @param Offset 查询结果偏移量
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询结果返回记录数量
                     * @return Limit 查询结果返回记录数量
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询结果返回记录数量
                     * @param Limit 查询结果返回记录数量
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 待查询表格所属集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 待查询表格所属表格组ID列表
                     */
                    std::vector<std::string> m_tableGroupIds;
                    bool m_tableGroupIdsHasBeenSet;

                    /**
                     * 待查询表格信息列表
                     */
                    std::vector<SelectedTableInfoNew> m_selectedTables;
                    bool m_selectedTablesHasBeenSet;

                    /**
                     * 过滤条件，本接口支持：TableName，TableInstanceId
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 查询结果偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询结果返回记录数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBETABLESREQUEST_H_
