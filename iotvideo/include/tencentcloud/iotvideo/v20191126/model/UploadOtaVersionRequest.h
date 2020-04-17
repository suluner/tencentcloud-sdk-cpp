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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_UPLOADOTAVERSIONREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_UPLOADOTAVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * UploadOtaVersion请求参数结构体
                */
                class UploadOtaVersionRequest : public AbstractModel
                {
                public:
                    UploadOtaVersionRequest();
                    ~UploadOtaVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param ProductId 产品ID
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取固件版本号，格式为x.y.z， x，y 范围0-63，z范围1~524288
                     * @return OtaVersion 固件版本号，格式为x.y.z， x，y 范围0-63，z范围1~524288
                     */
                    std::string GetOtaVersion() const;

                    /**
                     * 设置固件版本号，格式为x.y.z， x，y 范围0-63，z范围1~524288
                     * @param OtaVersion 固件版本号，格式为x.y.z， x，y 范围0-63，z范围1~524288
                     */
                    void SetOtaVersion(const std::string& _otaVersion);

                    /**
                     * 判断参数 OtaVersion 是否已赋值
                     * @return OtaVersion 是否已赋值
                     */
                    bool OtaVersionHasBeenSet() const;

                    /**
                     * 获取固件版本URL
                     * @return VersionUrl 固件版本URL
                     */
                    std::string GetVersionUrl() const;

                    /**
                     * 设置固件版本URL
                     * @param VersionUrl 固件版本URL
                     */
                    void SetVersionUrl(const std::string& _versionUrl);

                    /**
                     * 判断参数 VersionUrl 是否已赋值
                     * @return VersionUrl 是否已赋值
                     */
                    bool VersionUrlHasBeenSet() const;

                    /**
                     * 获取文件大小，单位：byte
                     * @return FileSize 文件大小，单位：byte
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置文件大小，单位：byte
                     * @param FileSize 文件大小，单位：byte
                     */
                    void SetFileSize(const uint64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取文件md5校验码（32字符）
                     * @return Md5 文件md5校验码（32字符）
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置文件md5校验码（32字符）
                     * @param Md5 文件md5校验码（32字符）
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取操作人
                     * @return Operator 操作人
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人
                     * @param Operator 操作人
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 固件版本号，格式为x.y.z， x，y 范围0-63，z范围1~524288
                     */
                    std::string m_otaVersion;
                    bool m_otaVersionHasBeenSet;

                    /**
                     * 固件版本URL
                     */
                    std::string m_versionUrl;
                    bool m_versionUrlHasBeenSet;

                    /**
                     * 文件大小，单位：byte
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 文件md5校验码（32字符）
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * 操作人
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_UPLOADOTAVERSIONREQUEST_H_
