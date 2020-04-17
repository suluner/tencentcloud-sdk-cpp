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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CLUSTER_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/OperationInfo.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 集群
                */
                class Cluster : public AbstractModel
                {
                public:
                    Cluster();
                    ~Cluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterId 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterDesc 集群描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterDesc() const;

                    /**
                     * 设置集群描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterDesc 集群描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterDesc(const std::string& _clusterDesc);

                    /**
                     * 判断参数 ClusterDesc 是否已赋值
                     * @return ClusterDesc 是否已赋值
                     */
                    bool ClusterDescHasBeenSet() const;

                    /**
                     * 获取集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterType 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterType 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取集群所属私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 集群所属私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置集群所属私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VpcId 集群所属私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterStatus 集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterStatus 集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterStatus(const std::string& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取集群CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterCIDR 集群CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterCIDR() const;

                    /**
                     * 设置集群CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterCIDR 集群CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterCIDR(const std::string& _clusterCIDR);

                    /**
                     * 判断参数 ClusterCIDR 是否已赋值
                     * @return ClusterCIDR 是否已赋值
                     */
                    bool ClusterCIDRHasBeenSet() const;

                    /**
                     * 获取集群总CPU，单位: 核
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterTotalCpu 集群总CPU，单位: 核
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetClusterTotalCpu() const;

                    /**
                     * 设置集群总CPU，单位: 核
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterTotalCpu 集群总CPU，单位: 核
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterTotalCpu(const double& _clusterTotalCpu);

                    /**
                     * 判断参数 ClusterTotalCpu 是否已赋值
                     * @return ClusterTotalCpu 是否已赋值
                     */
                    bool ClusterTotalCpuHasBeenSet() const;

                    /**
                     * 获取集群总内存，单位: G
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterTotalMem 集群总内存，单位: G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetClusterTotalMem() const;

                    /**
                     * 设置集群总内存，单位: G
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterTotalMem 集群总内存，单位: G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterTotalMem(const double& _clusterTotalMem);

                    /**
                     * 判断参数 ClusterTotalMem 是否已赋值
                     * @return ClusterTotalMem 是否已赋值
                     */
                    bool ClusterTotalMemHasBeenSet() const;

                    /**
                     * 获取集群已使用CPU，单位: 核
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterUsedCpu 集群已使用CPU，单位: 核
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetClusterUsedCpu() const;

                    /**
                     * 设置集群已使用CPU，单位: 核
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterUsedCpu 集群已使用CPU，单位: 核
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterUsedCpu(const double& _clusterUsedCpu);

                    /**
                     * 判断参数 ClusterUsedCpu 是否已赋值
                     * @return ClusterUsedCpu 是否已赋值
                     */
                    bool ClusterUsedCpuHasBeenSet() const;

                    /**
                     * 获取集群已使用内存，单位: G
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterUsedMem 集群已使用内存，单位: G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetClusterUsedMem() const;

                    /**
                     * 设置集群已使用内存，单位: G
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterUsedMem 集群已使用内存，单位: G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterUsedMem(const double& _clusterUsedMem);

                    /**
                     * 判断参数 ClusterUsedMem 是否已赋值
                     * @return ClusterUsedMem 是否已赋值
                     */
                    bool ClusterUsedMemHasBeenSet() const;

                    /**
                     * 获取集群机器实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceCount 集群机器实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置集群机器实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceCount 集群机器实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取集群可用的机器实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunInstanceCount 集群可用的机器实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRunInstanceCount() const;

                    /**
                     * 设置集群可用的机器实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RunInstanceCount 集群可用的机器实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRunInstanceCount(const int64_t& _runInstanceCount);

                    /**
                     * 判断参数 RunInstanceCount 是否已赋值
                     * @return RunInstanceCount 是否已赋值
                     */
                    bool RunInstanceCountHasBeenSet() const;

                    /**
                     * 获取集群正常状态的机器实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NormalInstanceCount 集群正常状态的机器实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetNormalInstanceCount() const;

                    /**
                     * 设置集群正常状态的机器实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NormalInstanceCount 集群正常状态的机器实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNormalInstanceCount(const int64_t& _normalInstanceCount);

                    /**
                     * 判断参数 NormalInstanceCount 是否已赋值
                     * @return NormalInstanceCount 是否已赋值
                     */
                    bool NormalInstanceCountHasBeenSet() const;

                    /**
                     * 获取删除标记：true：可以删除；false：不可删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeleteFlag 删除标记：true：可以删除；false：不可删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetDeleteFlag() const;

                    /**
                     * 设置删除标记：true：可以删除；false：不可删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeleteFlag 删除标记：true：可以删除；false：不可删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeleteFlag(const bool& _deleteFlag);

                    /**
                     * 判断参数 DeleteFlag 是否已赋值
                     * @return DeleteFlag 是否已赋值
                     */
                    bool DeleteFlagHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取集群所属TSF地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TsfRegionId 集群所属TSF地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTsfRegionId() const;

                    /**
                     * 设置集群所属TSF地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TsfRegionId 集群所属TSF地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTsfRegionId(const std::string& _tsfRegionId);

                    /**
                     * 判断参数 TsfRegionId 是否已赋值
                     * @return TsfRegionId 是否已赋值
                     */
                    bool TsfRegionIdHasBeenSet() const;

                    /**
                     * 获取集群所属TSF地域名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TsfRegionName 集群所属TSF地域名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTsfRegionName() const;

                    /**
                     * 设置集群所属TSF地域名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TsfRegionName 集群所属TSF地域名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTsfRegionName(const std::string& _tsfRegionName);

                    /**
                     * 判断参数 TsfRegionName 是否已赋值
                     * @return TsfRegionName 是否已赋值
                     */
                    bool TsfRegionNameHasBeenSet() const;

                    /**
                     * 获取集群所属TSF可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TsfZoneId 集群所属TSF可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTsfZoneId() const;

                    /**
                     * 设置集群所属TSF可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TsfZoneId 集群所属TSF可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTsfZoneId(const std::string& _tsfZoneId);

                    /**
                     * 判断参数 TsfZoneId 是否已赋值
                     * @return TsfZoneId 是否已赋值
                     */
                    bool TsfZoneIdHasBeenSet() const;

                    /**
                     * 获取集群所属TSF可用区名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TsfZoneName 集群所属TSF可用区名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTsfZoneName() const;

                    /**
                     * 设置集群所属TSF可用区名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TsfZoneName 集群所属TSF可用区名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTsfZoneName(const std::string& _tsfZoneName);

                    /**
                     * 判断参数 TsfZoneName 是否已赋值
                     * @return TsfZoneName 是否已赋值
                     */
                    bool TsfZoneNameHasBeenSet() const;

                    /**
                     * 获取集群不可删除的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeleteFlagReason 集群不可删除的原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDeleteFlagReason() const;

                    /**
                     * 设置集群不可删除的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeleteFlagReason 集群不可删除的原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeleteFlagReason(const std::string& _deleteFlagReason);

                    /**
                     * 判断参数 DeleteFlagReason 是否已赋值
                     * @return DeleteFlagReason 是否已赋值
                     */
                    bool DeleteFlagReasonHasBeenSet() const;

                    /**
                     * 获取集群最大CPU限制，单位：核
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterLimitCpu 集群最大CPU限制，单位：核
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetClusterLimitCpu() const;

                    /**
                     * 设置集群最大CPU限制，单位：核
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterLimitCpu 集群最大CPU限制，单位：核
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterLimitCpu(const double& _clusterLimitCpu);

                    /**
                     * 判断参数 ClusterLimitCpu 是否已赋值
                     * @return ClusterLimitCpu 是否已赋值
                     */
                    bool ClusterLimitCpuHasBeenSet() const;

                    /**
                     * 获取集群最大内存限制，单位：G
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterLimitMem 集群最大内存限制，单位：G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetClusterLimitMem() const;

                    /**
                     * 设置集群最大内存限制，单位：G
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterLimitMem 集群最大内存限制，单位：G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterLimitMem(const double& _clusterLimitMem);

                    /**
                     * 判断参数 ClusterLimitMem 是否已赋值
                     * @return ClusterLimitMem 是否已赋值
                     */
                    bool ClusterLimitMemHasBeenSet() const;

                    /**
                     * 获取集群可用的服务实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunServiceInstanceCount 集群可用的服务实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRunServiceInstanceCount() const;

                    /**
                     * 设置集群可用的服务实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RunServiceInstanceCount 集群可用的服务实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRunServiceInstanceCount(const int64_t& _runServiceInstanceCount);

                    /**
                     * 判断参数 RunServiceInstanceCount 是否已赋值
                     * @return RunServiceInstanceCount 是否已赋值
                     */
                    bool RunServiceInstanceCountHasBeenSet() const;

                    /**
                     * 获取集群所属子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 集群所属子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置集群所属子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubnetId 集群所属子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取返回给前端的控制信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperationInfo 返回给前端的控制信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OperationInfo GetOperationInfo() const;

                    /**
                     * 设置返回给前端的控制信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OperationInfo 返回给前端的控制信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOperationInfo(const OperationInfo& _operationInfo);

                    /**
                     * 判断参数 OperationInfo 是否已赋值
                     * @return OperationInfo 是否已赋值
                     */
                    bool OperationInfoHasBeenSet() const;

                private:

                    /**
                     * 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterDesc;
                    bool m_clusterDescHasBeenSet;

                    /**
                     * 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 集群所属私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * 集群CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterCIDR;
                    bool m_clusterCIDRHasBeenSet;

                    /**
                     * 集群总CPU，单位: 核
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_clusterTotalCpu;
                    bool m_clusterTotalCpuHasBeenSet;

                    /**
                     * 集群总内存，单位: G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_clusterTotalMem;
                    bool m_clusterTotalMemHasBeenSet;

                    /**
                     * 集群已使用CPU，单位: 核
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_clusterUsedCpu;
                    bool m_clusterUsedCpuHasBeenSet;

                    /**
                     * 集群已使用内存，单位: G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_clusterUsedMem;
                    bool m_clusterUsedMemHasBeenSet;

                    /**
                     * 集群机器实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 集群可用的机器实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_runInstanceCount;
                    bool m_runInstanceCountHasBeenSet;

                    /**
                     * 集群正常状态的机器实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_normalInstanceCount;
                    bool m_normalInstanceCountHasBeenSet;

                    /**
                     * 删除标记：true：可以删除；false：不可删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_deleteFlag;
                    bool m_deleteFlagHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 集群所属TSF地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tsfRegionId;
                    bool m_tsfRegionIdHasBeenSet;

                    /**
                     * 集群所属TSF地域名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tsfRegionName;
                    bool m_tsfRegionNameHasBeenSet;

                    /**
                     * 集群所属TSF可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tsfZoneId;
                    bool m_tsfZoneIdHasBeenSet;

                    /**
                     * 集群所属TSF可用区名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tsfZoneName;
                    bool m_tsfZoneNameHasBeenSet;

                    /**
                     * 集群不可删除的原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deleteFlagReason;
                    bool m_deleteFlagReasonHasBeenSet;

                    /**
                     * 集群最大CPU限制，单位：核
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_clusterLimitCpu;
                    bool m_clusterLimitCpuHasBeenSet;

                    /**
                     * 集群最大内存限制，单位：G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_clusterLimitMem;
                    bool m_clusterLimitMemHasBeenSet;

                    /**
                     * 集群可用的服务实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_runServiceInstanceCount;
                    bool m_runServiceInstanceCountHasBeenSet;

                    /**
                     * 集群所属子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 返回给前端的控制信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OperationInfo m_operationInfo;
                    bool m_operationInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CLUSTER_H_
