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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_TRIGGERINVOKEPARA_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_TRIGGERINVOKEPARA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 触发器触发参数
                */
                class TriggerInvokePara : public AbstractModel
                {
                public:
                    TriggerInvokePara();
                    ~TriggerInvokePara() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId AppId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AppId AppId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取TKE集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId TKE集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置TKE集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterId TKE集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取TKE集群命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace TKE集群命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置TKE集群命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Namespace TKE集群命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取TKE集群工作负载名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName TKE集群工作负载名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置TKE集群工作负载名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServiceName TKE集群工作负载名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取TKE集群工作负载中容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerName TKE集群工作负载中容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置TKE集群工作负载中容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ContainerName TKE集群工作负载中容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取TKE集群地域数字ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterRegion TKE集群地域数字ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetClusterRegion() const;

                    /**
                     * 设置TKE集群地域数字ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterRegion TKE集群地域数字ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterRegion(const int64_t& _clusterRegion);

                    /**
                     * 判断参数 ClusterRegion 是否已赋值
                     * @return ClusterRegion 是否已赋值
                     */
                    bool ClusterRegionHasBeenSet() const;

                private:

                    /**
                     * AppId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * TKE集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * TKE集群命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * TKE集群工作负载名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * TKE集群工作负载中容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * TKE集群地域数字ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_clusterRegion;
                    bool m_clusterRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_TRIGGERINVOKEPARA_H_
