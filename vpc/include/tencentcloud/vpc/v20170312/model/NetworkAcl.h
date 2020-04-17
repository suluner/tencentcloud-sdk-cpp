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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACL_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Subnet.h>
#include <tencentcloud/vpc/v20170312/model/NetworkAclEntry.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 网络ACL
                */
                class NetworkAcl : public AbstractModel
                {
                public:
                    NetworkAcl();
                    ~NetworkAcl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`VPC`实例`ID`。
                     * @return VpcId `VPC`实例`ID`。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置`VPC`实例`ID`。
                     * @param VpcId `VPC`实例`ID`。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取网络ACL实例`ID`。
                     * @return NetworkAclId 网络ACL实例`ID`。
                     */
                    std::string GetNetworkAclId() const;

                    /**
                     * 设置网络ACL实例`ID`。
                     * @param NetworkAclId 网络ACL实例`ID`。
                     */
                    void SetNetworkAclId(const std::string& _networkAclId);

                    /**
                     * 判断参数 NetworkAclId 是否已赋值
                     * @return NetworkAclId 是否已赋值
                     */
                    bool NetworkAclIdHasBeenSet() const;

                    /**
                     * 获取网络ACL名称，最大长度为60。
                     * @return NetworkAclName 网络ACL名称，最大长度为60。
                     */
                    std::string GetNetworkAclName() const;

                    /**
                     * 设置网络ACL名称，最大长度为60。
                     * @param NetworkAclName 网络ACL名称，最大长度为60。
                     */
                    void SetNetworkAclName(const std::string& _networkAclName);

                    /**
                     * 判断参数 NetworkAclName 是否已赋值
                     * @return NetworkAclName 是否已赋值
                     */
                    bool NetworkAclNameHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreatedTime 创建时间。
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
                     * @param CreatedTime 创建时间。
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取网络ACL关联的子网数组。
                     * @return SubnetSet 网络ACL关联的子网数组。
                     */
                    std::vector<Subnet> GetSubnetSet() const;

                    /**
                     * 设置网络ACL关联的子网数组。
                     * @param SubnetSet 网络ACL关联的子网数组。
                     */
                    void SetSubnetSet(const std::vector<Subnet>& _subnetSet);

                    /**
                     * 判断参数 SubnetSet 是否已赋值
                     * @return SubnetSet 是否已赋值
                     */
                    bool SubnetSetHasBeenSet() const;

                    /**
                     * 获取网络ACl入站规则。
                     * @return IngressEntries 网络ACl入站规则。
                     */
                    std::vector<NetworkAclEntry> GetIngressEntries() const;

                    /**
                     * 设置网络ACl入站规则。
                     * @param IngressEntries 网络ACl入站规则。
                     */
                    void SetIngressEntries(const std::vector<NetworkAclEntry>& _ingressEntries);

                    /**
                     * 判断参数 IngressEntries 是否已赋值
                     * @return IngressEntries 是否已赋值
                     */
                    bool IngressEntriesHasBeenSet() const;

                    /**
                     * 获取网络ACL出站规则。
                     * @return EgressEntries 网络ACL出站规则。
                     */
                    std::vector<NetworkAclEntry> GetEgressEntries() const;

                    /**
                     * 设置网络ACL出站规则。
                     * @param EgressEntries 网络ACL出站规则。
                     */
                    void SetEgressEntries(const std::vector<NetworkAclEntry>& _egressEntries);

                    /**
                     * 判断参数 EgressEntries 是否已赋值
                     * @return EgressEntries 是否已赋值
                     */
                    bool EgressEntriesHasBeenSet() const;

                private:

                    /**
                     * `VPC`实例`ID`。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 网络ACL实例`ID`。
                     */
                    std::string m_networkAclId;
                    bool m_networkAclIdHasBeenSet;

                    /**
                     * 网络ACL名称，最大长度为60。
                     */
                    std::string m_networkAclName;
                    bool m_networkAclNameHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 网络ACL关联的子网数组。
                     */
                    std::vector<Subnet> m_subnetSet;
                    bool m_subnetSetHasBeenSet;

                    /**
                     * 网络ACl入站规则。
                     */
                    std::vector<NetworkAclEntry> m_ingressEntries;
                    bool m_ingressEntriesHasBeenSet;

                    /**
                     * 网络ACL出站规则。
                     */
                    std::vector<NetworkAclEntry> m_egressEntries;
                    bool m_egressEntriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACL_H_
