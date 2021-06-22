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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_MODIFYSMSSIGNREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_MODIFYSMSSIGNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * ModifySmsSign请求参数结构体
                */
                class ModifySmsSignRequest : public AbstractModel
                {
                public:
                    ModifySmsSignRequest();
                    ~ModifySmsSignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待修改的签名 ID。
                     * @return SignId 待修改的签名 ID。
                     */
                    uint64_t GetSignId() const;

                    /**
                     * 设置待修改的签名 ID。
                     * @param SignId 待修改的签名 ID。
                     */
                    void SetSignId(const uint64_t& _signId);

                    /**
                     * 判断参数 SignId 是否已赋值
                     * @return SignId 是否已赋值
                     */
                    bool SignIdHasBeenSet() const;

                    /**
                     * 获取签名名称。
                     * @return SignName 签名名称。
                     */
                    std::string GetSignName() const;

                    /**
                     * 设置签名名称。
                     * @param SignName 签名名称。
                     */
                    void SetSignName(const std::string& _signName);

                    /**
                     * 判断参数 SignName 是否已赋值
                     * @return SignName 是否已赋值
                     */
                    bool SignNameHasBeenSet() const;

                    /**
                     * 获取签名类型。其中每种类型后面标注了其可选的 DocumentType（证明类型）：
0：公司，可选 DocumentType 有（0，1，2，3）。
1：APP，可选 DocumentType 有（0，1，2，3，4） 。
2：网站，可选 DocumentType 有（0，1，2，3，5）。
3：公众号或者小程序，可选 DocumentType 有（0，1，2，3，6）。
4：商标，可选 DocumentType 有（7）。
5：政府/机关事业单位/其他机构，可选 DocumentType 有（2，3）。
注：必须按照对应关系选择证明类型，否则会审核失败。
                     * @return SignType 签名类型。其中每种类型后面标注了其可选的 DocumentType（证明类型）：
0：公司，可选 DocumentType 有（0，1，2，3）。
1：APP，可选 DocumentType 有（0，1，2，3，4） 。
2：网站，可选 DocumentType 有（0，1，2，3，5）。
3：公众号或者小程序，可选 DocumentType 有（0，1，2，3，6）。
4：商标，可选 DocumentType 有（7）。
5：政府/机关事业单位/其他机构，可选 DocumentType 有（2，3）。
注：必须按照对应关系选择证明类型，否则会审核失败。
                     */
                    uint64_t GetSignType() const;

                    /**
                     * 设置签名类型。其中每种类型后面标注了其可选的 DocumentType（证明类型）：
0：公司，可选 DocumentType 有（0，1，2，3）。
1：APP，可选 DocumentType 有（0，1，2，3，4） 。
2：网站，可选 DocumentType 有（0，1，2，3，5）。
3：公众号或者小程序，可选 DocumentType 有（0，1，2，3，6）。
4：商标，可选 DocumentType 有（7）。
5：政府/机关事业单位/其他机构，可选 DocumentType 有（2，3）。
注：必须按照对应关系选择证明类型，否则会审核失败。
                     * @param SignType 签名类型。其中每种类型后面标注了其可选的 DocumentType（证明类型）：
0：公司，可选 DocumentType 有（0，1，2，3）。
1：APP，可选 DocumentType 有（0，1，2，3，4） 。
2：网站，可选 DocumentType 有（0，1，2，3，5）。
3：公众号或者小程序，可选 DocumentType 有（0，1，2，3，6）。
4：商标，可选 DocumentType 有（7）。
5：政府/机关事业单位/其他机构，可选 DocumentType 有（2，3）。
注：必须按照对应关系选择证明类型，否则会审核失败。
                     */
                    void SetSignType(const uint64_t& _signType);

                    /**
                     * 判断参数 SignType 是否已赋值
                     * @return SignType 是否已赋值
                     */
                    bool SignTypeHasBeenSet() const;

                    /**
                     * 获取证明类型：
0：三证合一。
1：企业营业执照。
2：组织机构代码证书。
3：社会信用代码证书。
4：应用后台管理截图（个人开发APP）。
5：网站备案后台截图（个人开发网站）。
6：小程序设置页面截图（个人认证小程序）。
7：商标注册书。
注：必选按照 SignType 选择对应的DocumentType。
                     * @return DocumentType 证明类型：
0：三证合一。
1：企业营业执照。
2：组织机构代码证书。
3：社会信用代码证书。
4：应用后台管理截图（个人开发APP）。
5：网站备案后台截图（个人开发网站）。
6：小程序设置页面截图（个人认证小程序）。
7：商标注册书。
注：必选按照 SignType 选择对应的DocumentType。
                     */
                    uint64_t GetDocumentType() const;

                    /**
                     * 设置证明类型：
0：三证合一。
1：企业营业执照。
2：组织机构代码证书。
3：社会信用代码证书。
4：应用后台管理截图（个人开发APP）。
5：网站备案后台截图（个人开发网站）。
6：小程序设置页面截图（个人认证小程序）。
7：商标注册书。
注：必选按照 SignType 选择对应的DocumentType。
                     * @param DocumentType 证明类型：
0：三证合一。
1：企业营业执照。
2：组织机构代码证书。
3：社会信用代码证书。
4：应用后台管理截图（个人开发APP）。
5：网站备案后台截图（个人开发网站）。
6：小程序设置页面截图（个人认证小程序）。
7：商标注册书。
注：必选按照 SignType 选择对应的DocumentType。
                     */
                    void SetDocumentType(const uint64_t& _documentType);

                    /**
                     * 判断参数 DocumentType 是否已赋值
                     * @return DocumentType 是否已赋值
                     */
                    bool DocumentTypeHasBeenSet() const;

                    /**
                     * 获取是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
注：需要和待修改签名International值保持一致，该参数不能直接修改国内签名到国际签名。
                     * @return International 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
注：需要和待修改签名International值保持一致，该参数不能直接修改国内签名到国际签名。
                     */
                    uint64_t GetInternational() const;

                    /**
                     * 设置是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
注：需要和待修改签名International值保持一致，该参数不能直接修改国内签名到国际签名。
                     * @param International 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
注：需要和待修改签名International值保持一致，该参数不能直接修改国内签名到国际签名。
                     */
                    void SetInternational(const uint64_t& _international);

                    /**
                     * 判断参数 International 是否已赋值
                     * @return International 是否已赋值
                     */
                    bool InternationalHasBeenSet() const;

                    /**
                     * 获取签名用途：
0：自用。
1：他用。
                     * @return SignPurpose 签名用途：
0：自用。
1：他用。
                     */
                    uint64_t GetSignPurpose() const;

                    /**
                     * 设置签名用途：
0：自用。
1：他用。
                     * @param SignPurpose 签名用途：
0：自用。
1：他用。
                     */
                    void SetSignPurpose(const uint64_t& _signPurpose);

                    /**
                     * 判断参数 SignPurpose 是否已赋值
                     * @return SignPurpose 是否已赋值
                     */
                    bool SignPurposeHasBeenSet() const;

                    /**
                     * 获取签名对应的资质证明图片需先进行 base64 编码格式转换，将转换后的字符串去掉前缀`data:image/jpeg;base64,`再赋值给该参数。
                     * @return ProofImage 签名对应的资质证明图片需先进行 base64 编码格式转换，将转换后的字符串去掉前缀`data:image/jpeg;base64,`再赋值给该参数。
                     */
                    std::string GetProofImage() const;

                    /**
                     * 设置签名对应的资质证明图片需先进行 base64 编码格式转换，将转换后的字符串去掉前缀`data:image/jpeg;base64,`再赋值给该参数。
                     * @param ProofImage 签名对应的资质证明图片需先进行 base64 编码格式转换，将转换后的字符串去掉前缀`data:image/jpeg;base64,`再赋值给该参数。
                     */
                    void SetProofImage(const std::string& _proofImage);

                    /**
                     * 判断参数 ProofImage 是否已赋值
                     * @return ProofImage 是否已赋值
                     */
                    bool ProofImageHasBeenSet() const;

                    /**
                     * 获取委托授权证明。选择 SignPurpose 为他用之后需要提交委托的授权证明。
图片需先进行 base64 编码格式转换，将转换后的字符串去掉前缀`data:image/jpeg;base64,`再赋值给该参数。
注：只有 SignPurpose 在选择为 1（他用）时，这个字段才会生效。
                     * @return CommissionImage 委托授权证明。选择 SignPurpose 为他用之后需要提交委托的授权证明。
图片需先进行 base64 编码格式转换，将转换后的字符串去掉前缀`data:image/jpeg;base64,`再赋值给该参数。
注：只有 SignPurpose 在选择为 1（他用）时，这个字段才会生效。
                     */
                    std::string GetCommissionImage() const;

                    /**
                     * 设置委托授权证明。选择 SignPurpose 为他用之后需要提交委托的授权证明。
图片需先进行 base64 编码格式转换，将转换后的字符串去掉前缀`data:image/jpeg;base64,`再赋值给该参数。
注：只有 SignPurpose 在选择为 1（他用）时，这个字段才会生效。
                     * @param CommissionImage 委托授权证明。选择 SignPurpose 为他用之后需要提交委托的授权证明。
图片需先进行 base64 编码格式转换，将转换后的字符串去掉前缀`data:image/jpeg;base64,`再赋值给该参数。
注：只有 SignPurpose 在选择为 1（他用）时，这个字段才会生效。
                     */
                    void SetCommissionImage(const std::string& _commissionImage);

                    /**
                     * 判断参数 CommissionImage 是否已赋值
                     * @return CommissionImage 是否已赋值
                     */
                    bool CommissionImageHasBeenSet() const;

                    /**
                     * 获取签名的申请备注。
                     * @return Remark 签名的申请备注。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置签名的申请备注。
                     * @param Remark 签名的申请备注。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 待修改的签名 ID。
                     */
                    uint64_t m_signId;
                    bool m_signIdHasBeenSet;

                    /**
                     * 签名名称。
                     */
                    std::string m_signName;
                    bool m_signNameHasBeenSet;

                    /**
                     * 签名类型。其中每种类型后面标注了其可选的 DocumentType（证明类型）：
0：公司，可选 DocumentType 有（0，1，2，3）。
1：APP，可选 DocumentType 有（0，1，2，3，4） 。
2：网站，可选 DocumentType 有（0，1，2，3，5）。
3：公众号或者小程序，可选 DocumentType 有（0，1，2，3，6）。
4：商标，可选 DocumentType 有（7）。
5：政府/机关事业单位/其他机构，可选 DocumentType 有（2，3）。
注：必须按照对应关系选择证明类型，否则会审核失败。
                     */
                    uint64_t m_signType;
                    bool m_signTypeHasBeenSet;

                    /**
                     * 证明类型：
0：三证合一。
1：企业营业执照。
2：组织机构代码证书。
3：社会信用代码证书。
4：应用后台管理截图（个人开发APP）。
5：网站备案后台截图（个人开发网站）。
6：小程序设置页面截图（个人认证小程序）。
7：商标注册书。
注：必选按照 SignType 选择对应的DocumentType。
                     */
                    uint64_t m_documentType;
                    bool m_documentTypeHasBeenSet;

                    /**
                     * 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
注：需要和待修改签名International值保持一致，该参数不能直接修改国内签名到国际签名。
                     */
                    uint64_t m_international;
                    bool m_internationalHasBeenSet;

                    /**
                     * 签名用途：
0：自用。
1：他用。
                     */
                    uint64_t m_signPurpose;
                    bool m_signPurposeHasBeenSet;

                    /**
                     * 签名对应的资质证明图片需先进行 base64 编码格式转换，将转换后的字符串去掉前缀`data:image/jpeg;base64,`再赋值给该参数。
                     */
                    std::string m_proofImage;
                    bool m_proofImageHasBeenSet;

                    /**
                     * 委托授权证明。选择 SignPurpose 为他用之后需要提交委托的授权证明。
图片需先进行 base64 编码格式转换，将转换后的字符串去掉前缀`data:image/jpeg;base64,`再赋值给该参数。
注：只有 SignPurpose 在选择为 1（他用）时，这个字段才会生效。
                     */
                    std::string m_commissionImage;
                    bool m_commissionImageHasBeenSet;

                    /**
                     * 签名的申请备注。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_MODIFYSMSSIGNREQUEST_H_
