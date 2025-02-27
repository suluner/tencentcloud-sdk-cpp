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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ENDPOINTSERVICE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ENDPOINTSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/EndPoint.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 终端节点服务对象。
                */
                class EndPointService : public AbstractModel
                {
                public:
                    EndPointService();
                    ~EndPointService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取终端节点服务ID
                     * @return EndPointServiceId 终端节点服务ID
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置终端节点服务ID
                     * @param EndPointServiceId 终端节点服务ID
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                    /**
                     * 获取VPCID。
                     * @return VpcId VPCID。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPCID。
                     * @param VpcId VPCID。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取APPID。
                     * @return ServiceOwner APPID。
                     */
                    std::string GetServiceOwner() const;

                    /**
                     * 设置APPID。
                     * @param ServiceOwner APPID。
                     */
                    void SetServiceOwner(const std::string& _serviceOwner);

                    /**
                     * 判断参数 ServiceOwner 是否已赋值
                     * @return ServiceOwner 是否已赋值
                     */
                    bool ServiceOwnerHasBeenSet() const;

                    /**
                     * 获取终端节点服务名称。
                     * @return ServiceName 终端节点服务名称。
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置终端节点服务名称。
                     * @param ServiceName 终端节点服务名称。
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取后端服务的VIP。
                     * @return ServiceVip 后端服务的VIP。
                     */
                    std::string GetServiceVip() const;

                    /**
                     * 设置后端服务的VIP。
                     * @param ServiceVip 后端服务的VIP。
                     */
                    void SetServiceVip(const std::string& _serviceVip);

                    /**
                     * 判断参数 ServiceVip 是否已赋值
                     * @return ServiceVip 是否已赋值
                     */
                    bool ServiceVipHasBeenSet() const;

                    /**
                     * 获取后端服务的ID，比如lb-xxx。
                     * @return ServiceInstanceId 后端服务的ID，比如lb-xxx。
                     */
                    std::string GetServiceInstanceId() const;

                    /**
                     * 设置后端服务的ID，比如lb-xxx。
                     * @param ServiceInstanceId 后端服务的ID，比如lb-xxx。
                     */
                    void SetServiceInstanceId(const std::string& _serviceInstanceId);

                    /**
                     * 判断参数 ServiceInstanceId 是否已赋值
                     * @return ServiceInstanceId 是否已赋值
                     */
                    bool ServiceInstanceIdHasBeenSet() const;

                    /**
                     * 获取是否自动接受。
                     * @return AutoAcceptFlag 是否自动接受。
                     */
                    bool GetAutoAcceptFlag() const;

                    /**
                     * 设置是否自动接受。
                     * @param AutoAcceptFlag 是否自动接受。
                     */
                    void SetAutoAcceptFlag(const bool& _autoAcceptFlag);

                    /**
                     * 判断参数 AutoAcceptFlag 是否已赋值
                     * @return AutoAcceptFlag 是否已赋值
                     */
                    bool AutoAcceptFlagHasBeenSet() const;

                    /**
                     * 获取关联的终端节点个数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndPointCount 关联的终端节点个数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetEndPointCount() const;

                    /**
                     * 设置关联的终端节点个数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndPointCount 关联的终端节点个数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndPointCount(const uint64_t& _endPointCount);

                    /**
                     * 判断参数 EndPointCount 是否已赋值
                     * @return EndPointCount 是否已赋值
                     */
                    bool EndPointCountHasBeenSet() const;

                    /**
                     * 获取终端节点对象数组。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndPointSet 终端节点对象数组。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EndPoint> GetEndPointSet() const;

                    /**
                     * 设置终端节点对象数组。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndPointSet 终端节点对象数组。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndPointSet(const std::vector<EndPoint>& _endPointSet);

                    /**
                     * 判断参数 EndPointSet 是否已赋值
                     * @return EndPointSet 是否已赋值
                     */
                    bool EndPointSetHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param CreateTime 创建时间。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 终端节点服务ID
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * VPCID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * APPID。
                     */
                    std::string m_serviceOwner;
                    bool m_serviceOwnerHasBeenSet;

                    /**
                     * 终端节点服务名称。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 后端服务的VIP。
                     */
                    std::string m_serviceVip;
                    bool m_serviceVipHasBeenSet;

                    /**
                     * 后端服务的ID，比如lb-xxx。
                     */
                    std::string m_serviceInstanceId;
                    bool m_serviceInstanceIdHasBeenSet;

                    /**
                     * 是否自动接受。
                     */
                    bool m_autoAcceptFlag;
                    bool m_autoAcceptFlagHasBeenSet;

                    /**
                     * 关联的终端节点个数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_endPointCount;
                    bool m_endPointCountHasBeenSet;

                    /**
                     * 终端节点对象数组。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EndPoint> m_endPointSet;
                    bool m_endPointSetHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ENDPOINTSERVICE_H_
