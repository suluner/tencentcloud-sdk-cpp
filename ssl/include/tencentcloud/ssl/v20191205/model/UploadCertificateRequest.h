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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADCERTIFICATEREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADCERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * UploadCertificate请求参数结构体
                */
                class UploadCertificateRequest : public AbstractModel
                {
                public:
                    UploadCertificateRequest();
                    ~UploadCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书公钥。
                     * @return CertificatePublicKey 证书公钥。
                     */
                    std::string GetCertificatePublicKey() const;

                    /**
                     * 设置证书公钥。
                     * @param CertificatePublicKey 证书公钥。
                     */
                    void SetCertificatePublicKey(const std::string& _certificatePublicKey);

                    /**
                     * 判断参数 CertificatePublicKey 是否已赋值
                     * @return CertificatePublicKey 是否已赋值
                     */
                    bool CertificatePublicKeyHasBeenSet() const;

                    /**
                     * 获取私钥内容，证书类型为 SVR 时必填，为 CA 时可不填。
                     * @return CertificatePrivateKey 私钥内容，证书类型为 SVR 时必填，为 CA 时可不填。
                     */
                    std::string GetCertificatePrivateKey() const;

                    /**
                     * 设置私钥内容，证书类型为 SVR 时必填，为 CA 时可不填。
                     * @param CertificatePrivateKey 私钥内容，证书类型为 SVR 时必填，为 CA 时可不填。
                     */
                    void SetCertificatePrivateKey(const std::string& _certificatePrivateKey);

                    /**
                     * 判断参数 CertificatePrivateKey 是否已赋值
                     * @return CertificatePrivateKey 是否已赋值
                     */
                    bool CertificatePrivateKeyHasBeenSet() const;

                    /**
                     * 获取证书类型，默认 SVR。CA = 客户端证书，SVR = 服务器证书。
                     * @return CertificateType 证书类型，默认 SVR。CA = 客户端证书，SVR = 服务器证书。
                     */
                    std::string GetCertificateType() const;

                    /**
                     * 设置证书类型，默认 SVR。CA = 客户端证书，SVR = 服务器证书。
                     * @param CertificateType 证书类型，默认 SVR。CA = 客户端证书，SVR = 服务器证书。
                     */
                    void SetCertificateType(const std::string& _certificateType);

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取备注名称。
                     * @return Alias 备注名称。
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置备注名称。
                     * @param Alias 备注名称。
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取项目 ID。
                     * @return ProjectId 项目 ID。
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目 ID。
                     * @param ProjectId 项目 ID。
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 证书公钥。
                     */
                    std::string m_certificatePublicKey;
                    bool m_certificatePublicKeyHasBeenSet;

                    /**
                     * 私钥内容，证书类型为 SVR 时必填，为 CA 时可不填。
                     */
                    std::string m_certificatePrivateKey;
                    bool m_certificatePrivateKeyHasBeenSet;

                    /**
                     * 证书类型，默认 SVR。CA = 客户端证书，SVR = 服务器证书。
                     */
                    std::string m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * 备注名称。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 项目 ID。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADCERTIFICATEREQUEST_H_
