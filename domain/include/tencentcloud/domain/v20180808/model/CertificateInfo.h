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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_CERTIFICATEINFO_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_CERTIFICATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 认证资料信息
                */
                class CertificateInfo : public AbstractModel
                {
                public:
                    CertificateInfo();
                    ~CertificateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证件号码。
                     * @return CertificateCode 证件号码。
                     */
                    std::string GetCertificateCode() const;

                    /**
                     * 设置证件号码。
                     * @param CertificateCode 证件号码。
                     */
                    void SetCertificateCode(const std::string& _certificateCode);

                    /**
                     * 判断参数 CertificateCode 是否已赋值
                     * @return CertificateCode 是否已赋值
                     */
                    bool CertificateCodeHasBeenSet() const;

                    /**
                     * 获取证件类型。
SFZ: 身份证。
HZ: 护照。
TXZ: 港澳居民来往内地通行证。
TWSFZ: 台湾居民来往大陆通行证。
GWSFZ: 外国人永久居留身份证。
ORG: 组织机构代码证
YYZZ: 工商营业执照。
TYDMZ: 统一社会信用代码证书。
BDDH: 部队代号
JDXKZ: 军队单位对外有偿服务许可证。
SYZS: 事业单位法人证书。
GWCZDJZ: 外国企业常驻代表机构登记证。
STDJZ: 社会团体法人登记证书。
ZJDJZ: 宗教活动场所登记证。
MBDJZ: 民办非企业单位登记证书。
JJDJZ: 基金会法人登记证书。
LSXKZ: 律师事务所执业许可证。
GWZHDJZ: 外国在华文化中心登记证。
GWLYDJZ: 外国政府旅游部门常驻代表机构批准登记证。
SFXKZ: 司法鉴定许可证
GWJGZJ: 外国机构证件。
SHFWJGZ: 社会服务机构登记证书。
MBXXXKZ: 民办学校办学许可证。
YLJGXKZ: 医疗机构执业许可证。
GAJZZ: 港澳居住证
TWJZZ: 台湾居住证。
QTTYDM: 其他-统一社会信用代码证书。
GZJGZY: 公证机构执业证。
                     * @return CertificateType 证件类型。
SFZ: 身份证。
HZ: 护照。
TXZ: 港澳居民来往内地通行证。
TWSFZ: 台湾居民来往大陆通行证。
GWSFZ: 外国人永久居留身份证。
ORG: 组织机构代码证
YYZZ: 工商营业执照。
TYDMZ: 统一社会信用代码证书。
BDDH: 部队代号
JDXKZ: 军队单位对外有偿服务许可证。
SYZS: 事业单位法人证书。
GWCZDJZ: 外国企业常驻代表机构登记证。
STDJZ: 社会团体法人登记证书。
ZJDJZ: 宗教活动场所登记证。
MBDJZ: 民办非企业单位登记证书。
JJDJZ: 基金会法人登记证书。
LSXKZ: 律师事务所执业许可证。
GWZHDJZ: 外国在华文化中心登记证。
GWLYDJZ: 外国政府旅游部门常驻代表机构批准登记证。
SFXKZ: 司法鉴定许可证
GWJGZJ: 外国机构证件。
SHFWJGZ: 社会服务机构登记证书。
MBXXXKZ: 民办学校办学许可证。
YLJGXKZ: 医疗机构执业许可证。
GAJZZ: 港澳居住证
TWJZZ: 台湾居住证。
QTTYDM: 其他-统一社会信用代码证书。
GZJGZY: 公证机构执业证。
                     */
                    std::string GetCertificateType() const;

                    /**
                     * 设置证件类型。
SFZ: 身份证。
HZ: 护照。
TXZ: 港澳居民来往内地通行证。
TWSFZ: 台湾居民来往大陆通行证。
GWSFZ: 外国人永久居留身份证。
ORG: 组织机构代码证
YYZZ: 工商营业执照。
TYDMZ: 统一社会信用代码证书。
BDDH: 部队代号
JDXKZ: 军队单位对外有偿服务许可证。
SYZS: 事业单位法人证书。
GWCZDJZ: 外国企业常驻代表机构登记证。
STDJZ: 社会团体法人登记证书。
ZJDJZ: 宗教活动场所登记证。
MBDJZ: 民办非企业单位登记证书。
JJDJZ: 基金会法人登记证书。
LSXKZ: 律师事务所执业许可证。
GWZHDJZ: 外国在华文化中心登记证。
GWLYDJZ: 外国政府旅游部门常驻代表机构批准登记证。
SFXKZ: 司法鉴定许可证
GWJGZJ: 外国机构证件。
SHFWJGZ: 社会服务机构登记证书。
MBXXXKZ: 民办学校办学许可证。
YLJGXKZ: 医疗机构执业许可证。
GAJZZ: 港澳居住证
TWJZZ: 台湾居住证。
QTTYDM: 其他-统一社会信用代码证书。
GZJGZY: 公证机构执业证。
                     * @param CertificateType 证件类型。
SFZ: 身份证。
HZ: 护照。
TXZ: 港澳居民来往内地通行证。
TWSFZ: 台湾居民来往大陆通行证。
GWSFZ: 外国人永久居留身份证。
ORG: 组织机构代码证
YYZZ: 工商营业执照。
TYDMZ: 统一社会信用代码证书。
BDDH: 部队代号
JDXKZ: 军队单位对外有偿服务许可证。
SYZS: 事业单位法人证书。
GWCZDJZ: 外国企业常驻代表机构登记证。
STDJZ: 社会团体法人登记证书。
ZJDJZ: 宗教活动场所登记证。
MBDJZ: 民办非企业单位登记证书。
JJDJZ: 基金会法人登记证书。
LSXKZ: 律师事务所执业许可证。
GWZHDJZ: 外国在华文化中心登记证。
GWLYDJZ: 外国政府旅游部门常驻代表机构批准登记证。
SFXKZ: 司法鉴定许可证
GWJGZJ: 外国机构证件。
SHFWJGZ: 社会服务机构登记证书。
MBXXXKZ: 民办学校办学许可证。
YLJGXKZ: 医疗机构执业许可证。
GAJZZ: 港澳居住证
TWJZZ: 台湾居住证。
QTTYDM: 其他-统一社会信用代码证书。
GZJGZY: 公证机构执业证。
                     */
                    void SetCertificateType(const std::string& _certificateType);

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取证件照片地址。
                     * @return ImgUrl 证件照片地址。
                     */
                    std::string GetImgUrl() const;

                    /**
                     * 设置证件照片地址。
                     * @param ImgUrl 证件照片地址。
                     */
                    void SetImgUrl(const std::string& _imgUrl);

                    /**
                     * 判断参数 ImgUrl 是否已赋值
                     * @return ImgUrl 是否已赋值
                     */
                    bool ImgUrlHasBeenSet() const;

                private:

                    /**
                     * 证件号码。
                     */
                    std::string m_certificateCode;
                    bool m_certificateCodeHasBeenSet;

                    /**
                     * 证件类型。
SFZ: 身份证。
HZ: 护照。
TXZ: 港澳居民来往内地通行证。
TWSFZ: 台湾居民来往大陆通行证。
GWSFZ: 外国人永久居留身份证。
ORG: 组织机构代码证
YYZZ: 工商营业执照。
TYDMZ: 统一社会信用代码证书。
BDDH: 部队代号
JDXKZ: 军队单位对外有偿服务许可证。
SYZS: 事业单位法人证书。
GWCZDJZ: 外国企业常驻代表机构登记证。
STDJZ: 社会团体法人登记证书。
ZJDJZ: 宗教活动场所登记证。
MBDJZ: 民办非企业单位登记证书。
JJDJZ: 基金会法人登记证书。
LSXKZ: 律师事务所执业许可证。
GWZHDJZ: 外国在华文化中心登记证。
GWLYDJZ: 外国政府旅游部门常驻代表机构批准登记证。
SFXKZ: 司法鉴定许可证
GWJGZJ: 外国机构证件。
SHFWJGZ: 社会服务机构登记证书。
MBXXXKZ: 民办学校办学许可证。
YLJGXKZ: 医疗机构执业许可证。
GAJZZ: 港澳居住证
TWJZZ: 台湾居住证。
QTTYDM: 其他-统一社会信用代码证书。
GZJGZY: 公证机构执业证。
                     */
                    std::string m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * 证件照片地址。
                     */
                    std::string m_imgUrl;
                    bool m_imgUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_CERTIFICATEINFO_H_
