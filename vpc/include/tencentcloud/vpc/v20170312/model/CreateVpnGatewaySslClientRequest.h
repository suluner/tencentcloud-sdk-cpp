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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYSSLCLIENTREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYSSLCLIENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateVpnGatewaySslClient请求参数结构体
                */
                class CreateVpnGatewaySslClientRequest : public AbstractModel
                {
                public:
                    CreateVpnGatewaySslClientRequest();
                    ~CreateVpnGatewaySslClientRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SSL-VPN-SERVER 实例ID。
                     * @return SslVpnServerId SSL-VPN-SERVER 实例ID。
                     */
                    std::string GetSslVpnServerId() const;

                    /**
                     * 设置SSL-VPN-SERVER 实例ID。
                     * @param SslVpnServerId SSL-VPN-SERVER 实例ID。
                     */
                    void SetSslVpnServerId(const std::string& _sslVpnServerId);

                    /**
                     * 判断参数 SslVpnServerId 是否已赋值
                     * @return SslVpnServerId 是否已赋值
                     */
                    bool SslVpnServerIdHasBeenSet() const;

                    /**
                     * 获取name
                     * @return SslVpnClientName name
                     */
                    std::string GetSslVpnClientName() const;

                    /**
                     * 设置name
                     * @param SslVpnClientName name
                     */
                    void SetSslVpnClientName(const std::string& _sslVpnClientName);

                    /**
                     * 判断参数 SslVpnClientName 是否已赋值
                     * @return SslVpnClientName 是否已赋值
                     */
                    bool SslVpnClientNameHasBeenSet() const;

                private:

                    /**
                     * SSL-VPN-SERVER 实例ID。
                     */
                    std::string m_sslVpnServerId;
                    bool m_sslVpnServerIdHasBeenSet;

                    /**
                     * name
                     */
                    std::string m_sslVpnClientName;
                    bool m_sslVpnClientNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYSSLCLIENTREQUEST_H_
