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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYSSLSERVERREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYSSLSERVERREQUEST_H_

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
                * CreateVpnGatewaySslServer请求参数结构体
                */
                class CreateVpnGatewaySslServerRequest : public AbstractModel
                {
                public:
                    CreateVpnGatewaySslServerRequest();
                    ~CreateVpnGatewaySslServerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPN实例ID
                     * @return VpnGatewayId VPN实例ID
                     */
                    std::string GetVpnGatewayId() const;

                    /**
                     * 设置VPN实例ID
                     * @param VpnGatewayId VPN实例ID
                     */
                    void SetVpnGatewayId(const std::string& _vpnGatewayId);

                    /**
                     * 判断参数 VpnGatewayId 是否已赋值
                     * @return VpnGatewayId 是否已赋值
                     */
                    bool VpnGatewayIdHasBeenSet() const;

                    /**
                     * 获取SSL_VPN_SERVER 实例名
                     * @return SslVpnServerName SSL_VPN_SERVER 实例名
                     */
                    std::string GetSslVpnServerName() const;

                    /**
                     * 设置SSL_VPN_SERVER 实例名
                     * @param SslVpnServerName SSL_VPN_SERVER 实例名
                     */
                    void SetSslVpnServerName(const std::string& _sslVpnServerName);

                    /**
                     * 判断参数 SslVpnServerName 是否已赋值
                     * @return SslVpnServerName 是否已赋值
                     */
                    bool SslVpnServerNameHasBeenSet() const;

                    /**
                     * 获取本端地址网段
                     * @return LocalAddress 本端地址网段
                     */
                    std::vector<std::string> GetLocalAddress() const;

                    /**
                     * 设置本端地址网段
                     * @param LocalAddress 本端地址网段
                     */
                    void SetLocalAddress(const std::vector<std::string>& _localAddress);

                    /**
                     * 判断参数 LocalAddress 是否已赋值
                     * @return LocalAddress 是否已赋值
                     */
                    bool LocalAddressHasBeenSet() const;

                    /**
                     * 获取客户端地址网段
                     * @return RemoteAddress 客户端地址网段
                     */
                    std::string GetRemoteAddress() const;

                    /**
                     * 设置客户端地址网段
                     * @param RemoteAddress 客户端地址网段
                     */
                    void SetRemoteAddress(const std::string& _remoteAddress);

                    /**
                     * 判断参数 RemoteAddress 是否已赋值
                     * @return RemoteAddress 是否已赋值
                     */
                    bool RemoteAddressHasBeenSet() const;

                    /**
                     * 获取SSL VPN服务端监听协议。当前仅支持 UDP。默认UDP
                     * @return SslVpnProtocol SSL VPN服务端监听协议。当前仅支持 UDP。默认UDP
                     */
                    std::string GetSslVpnProtocol() const;

                    /**
                     * 设置SSL VPN服务端监听协议。当前仅支持 UDP。默认UDP
                     * @param SslVpnProtocol SSL VPN服务端监听协议。当前仅支持 UDP。默认UDP
                     */
                    void SetSslVpnProtocol(const std::string& _sslVpnProtocol);

                    /**
                     * 判断参数 SslVpnProtocol 是否已赋值
                     * @return SslVpnProtocol 是否已赋值
                     */
                    bool SslVpnProtocolHasBeenSet() const;

                    /**
                     * 获取SSL VPN服务端监听协议端口。默认1194。
                     * @return SslVpnPort SSL VPN服务端监听协议端口。默认1194。
                     */
                    int64_t GetSslVpnPort() const;

                    /**
                     * 设置SSL VPN服务端监听协议端口。默认1194。
                     * @param SslVpnPort SSL VPN服务端监听协议端口。默认1194。
                     */
                    void SetSslVpnPort(const int64_t& _sslVpnPort);

                    /**
                     * 判断参数 SslVpnPort 是否已赋值
                     * @return SslVpnPort 是否已赋值
                     */
                    bool SslVpnPortHasBeenSet() const;

                    /**
                     * 获取认证算法。可选 'SHA1', 'MD5', 'NONE'。默认NONE
                     * @return IntegrityAlgorithm 认证算法。可选 'SHA1', 'MD5', 'NONE'。默认NONE
                     */
                    std::string GetIntegrityAlgorithm() const;

                    /**
                     * 设置认证算法。可选 'SHA1', 'MD5', 'NONE'。默认NONE
                     * @param IntegrityAlgorithm 认证算法。可选 'SHA1', 'MD5', 'NONE'。默认NONE
                     */
                    void SetIntegrityAlgorithm(const std::string& _integrityAlgorithm);

                    /**
                     * 判断参数 IntegrityAlgorithm 是否已赋值
                     * @return IntegrityAlgorithm 是否已赋值
                     */
                    bool IntegrityAlgorithmHasBeenSet() const;

                    /**
                     * 获取加密算法。可选 'AES-128-CBC', 'AES-192-CBC', 'AES-256-CBC', 'NONE'。默认NONE
                     * @return EncryptAlgorithm 加密算法。可选 'AES-128-CBC', 'AES-192-CBC', 'AES-256-CBC', 'NONE'。默认NONE
                     */
                    std::string GetEncryptAlgorithm() const;

                    /**
                     * 设置加密算法。可选 'AES-128-CBC', 'AES-192-CBC', 'AES-256-CBC', 'NONE'。默认NONE
                     * @param EncryptAlgorithm 加密算法。可选 'AES-128-CBC', 'AES-192-CBC', 'AES-256-CBC', 'NONE'。默认NONE
                     */
                    void SetEncryptAlgorithm(const std::string& _encryptAlgorithm);

                    /**
                     * 判断参数 EncryptAlgorithm 是否已赋值
                     * @return EncryptAlgorithm 是否已赋值
                     */
                    bool EncryptAlgorithmHasBeenSet() const;

                    /**
                     * 获取是否支持压缩。当前仅支持不支持压缩。默认False
                     * @return Compress 是否支持压缩。当前仅支持不支持压缩。默认False
                     */
                    bool GetCompress() const;

                    /**
                     * 设置是否支持压缩。当前仅支持不支持压缩。默认False
                     * @param Compress 是否支持压缩。当前仅支持不支持压缩。默认False
                     */
                    void SetCompress(const bool& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     */
                    bool CompressHasBeenSet() const;

                private:

                    /**
                     * VPN实例ID
                     */
                    std::string m_vpnGatewayId;
                    bool m_vpnGatewayIdHasBeenSet;

                    /**
                     * SSL_VPN_SERVER 实例名
                     */
                    std::string m_sslVpnServerName;
                    bool m_sslVpnServerNameHasBeenSet;

                    /**
                     * 本端地址网段
                     */
                    std::vector<std::string> m_localAddress;
                    bool m_localAddressHasBeenSet;

                    /**
                     * 客户端地址网段
                     */
                    std::string m_remoteAddress;
                    bool m_remoteAddressHasBeenSet;

                    /**
                     * SSL VPN服务端监听协议。当前仅支持 UDP。默认UDP
                     */
                    std::string m_sslVpnProtocol;
                    bool m_sslVpnProtocolHasBeenSet;

                    /**
                     * SSL VPN服务端监听协议端口。默认1194。
                     */
                    int64_t m_sslVpnPort;
                    bool m_sslVpnPortHasBeenSet;

                    /**
                     * 认证算法。可选 'SHA1', 'MD5', 'NONE'。默认NONE
                     */
                    std::string m_integrityAlgorithm;
                    bool m_integrityAlgorithmHasBeenSet;

                    /**
                     * 加密算法。可选 'AES-128-CBC', 'AES-192-CBC', 'AES-256-CBC', 'NONE'。默认NONE
                     */
                    std::string m_encryptAlgorithm;
                    bool m_encryptAlgorithmHasBeenSet;

                    /**
                     * 是否支持压缩。当前仅支持不支持压缩。默认False
                     */
                    bool m_compress;
                    bool m_compressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYSSLSERVERREQUEST_H_
