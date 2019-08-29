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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterInstances请求参数结构体
                */
                class DescribeClusterInstancesRequest : public AbstractModel
                {
                public:
                    DescribeClusterInstancesRequest();
                    ~DescribeClusterInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param ClusterId 集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @return Offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @param Offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @return Limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @param Limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取需要获取的节点实例Id列表。如果为空，表示拉取集群下所有节点实例。
                     * @return InstanceIds 需要获取的节点实例Id列表。如果为空，表示拉取集群下所有节点实例。
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置需要获取的节点实例Id列表。如果为空，表示拉取集群下所有节点实例。
                     * @param InstanceIds 需要获取的节点实例Id列表。如果为空，表示拉取集群下所有节点实例。
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取节点角色, MASTER, WORKER, ETCD, MASTER_ETCD,ALL, 默认为WORKER。默认为WORKER类型。
                     * @return InstanceRole 节点角色, MASTER, WORKER, ETCD, MASTER_ETCD,ALL, 默认为WORKER。默认为WORKER类型。
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置节点角色, MASTER, WORKER, ETCD, MASTER_ETCD,ALL, 默认为WORKER。默认为WORKER类型。
                     * @param InstanceRole 节点角色, MASTER, WORKER, ETCD, MASTER_ETCD,ALL, 默认为WORKER。默认为WORKER类型。
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     */
                    bool InstanceRoleHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 需要获取的节点实例Id列表。如果为空，表示拉取集群下所有节点实例。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 节点角色, MASTER, WORKER, ETCD, MASTER_ETCD,ALL, 默认为WORKER。默认为WORKER类型。
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERINSTANCESREQUEST_H_
