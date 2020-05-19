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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_BINDACCTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_BINDACCTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * BindAcct请求参数结构体
                */
                class BindAcctRequest : public AbstractModel
                {
                public:
                    BindAcctRequest();
                    ~BindAcctRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取聚鑫分配的支付主MidasAppId
                     * @return MidasAppId 聚鑫分配的支付主MidasAppId
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 设置聚鑫分配的支付主MidasAppId
                     * @param MidasAppId 聚鑫分配的支付主MidasAppId
                     */
                    void SetMidasAppId(const std::string& _midasAppId);

                    /**
                     * 判断参数 MidasAppId 是否已赋值
                     * @return MidasAppId 是否已赋值
                     */
                    bool MidasAppIdHasBeenSet() const;

                    /**
                     * 获取聚鑫计费SubAppId，代表子商户
                     * @return SubAppId 聚鑫计费SubAppId，代表子商户
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置聚鑫计费SubAppId，代表子商户
                     * @param SubAppId 聚鑫计费SubAppId，代表子商户
                     */
                    void SetSubAppId(const std::string& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取1 – 小额转账验证
2 – 短信验证
3 - 一分钱转账验证，无需再调CheckAcct验证绑卡
4 - 银行四要素验证，无需再调CheckAcct验证绑卡
每个结算账户每天只能使用一次小额转账验证
                     * @return BindType 1 – 小额转账验证
2 – 短信验证
3 - 一分钱转账验证，无需再调CheckAcct验证绑卡
4 - 银行四要素验证，无需再调CheckAcct验证绑卡
每个结算账户每天只能使用一次小额转账验证
                     */
                    int64_t GetBindType() const;

                    /**
                     * 设置1 – 小额转账验证
2 – 短信验证
3 - 一分钱转账验证，无需再调CheckAcct验证绑卡
4 - 银行四要素验证，无需再调CheckAcct验证绑卡
每个结算账户每天只能使用一次小额转账验证
                     * @param BindType 1 – 小额转账验证
2 – 短信验证
3 - 一分钱转账验证，无需再调CheckAcct验证绑卡
4 - 银行四要素验证，无需再调CheckAcct验证绑卡
每个结算账户每天只能使用一次小额转账验证
                     */
                    void SetBindType(const int64_t& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     */
                    bool BindTypeHasBeenSet() const;

                    /**
                     * 获取用于提现
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     * @return SettleAcctNo 用于提现
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     */
                    std::string GetSettleAcctNo() const;

                    /**
                     * 设置用于提现
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     * @param SettleAcctNo 用于提现
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     */
                    void SetSettleAcctNo(const std::string& _settleAcctNo);

                    /**
                     * 判断参数 SettleAcctNo 是否已赋值
                     * @return SettleAcctNo 是否已赋值
                     */
                    bool SettleAcctNoHasBeenSet() const;

                    /**
                     * 获取结算账户户名
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     * @return SettleAcctName 结算账户户名
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     */
                    std::string GetSettleAcctName() const;

                    /**
                     * 设置结算账户户名
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     * @param SettleAcctName 结算账户户名
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     */
                    void SetSettleAcctName(const std::string& _settleAcctName);

                    /**
                     * 判断参数 SettleAcctName 是否已赋值
                     * @return SettleAcctName 是否已赋值
                     */
                    bool SettleAcctNameHasBeenSet() const;

                    /**
                     * 获取1 – 本行账户
2 – 他行账户
                     * @return SettleAcctType 1 – 本行账户
2 – 他行账户
                     */
                    int64_t GetSettleAcctType() const;

                    /**
                     * 设置1 – 本行账户
2 – 他行账户
                     * @param SettleAcctType 1 – 本行账户
2 – 他行账户
                     */
                    void SetSettleAcctType(const int64_t& _settleAcctType);

                    /**
                     * 判断参数 SettleAcctType 是否已赋值
                     * @return SettleAcctType 是否已赋值
                     */
                    bool SettleAcctTypeHasBeenSet() const;

                    /**
                     * 获取证件类型，见《证件类型》表
                     * @return IdType 证件类型，见《证件类型》表
                     */
                    std::string GetIdType() const;

                    /**
                     * 设置证件类型，见《证件类型》表
                     * @param IdType 证件类型，见《证件类型》表
                     */
                    void SetIdType(const std::string& _idType);

                    /**
                     * 判断参数 IdType 是否已赋值
                     * @return IdType 是否已赋值
                     */
                    bool IdTypeHasBeenSet() const;

                    /**
                     * 获取证件号码
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     * @return IdCode 证件号码
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     */
                    std::string GetIdCode() const;

                    /**
                     * 设置证件号码
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     * @param IdCode 证件号码
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     */
                    void SetIdCode(const std::string& _idCode);

                    /**
                     * 判断参数 IdCode 是否已赋值
                     * @return IdCode 是否已赋值
                     */
                    bool IdCodeHasBeenSet() const;

                    /**
                     * 获取开户行名称
                     * @return AcctBranchName 开户行名称
                     */
                    std::string GetAcctBranchName() const;

                    /**
                     * 设置开户行名称
                     * @param AcctBranchName 开户行名称
                     */
                    void SetAcctBranchName(const std::string& _acctBranchName);

                    /**
                     * 判断参数 AcctBranchName 是否已赋值
                     * @return AcctBranchName 是否已赋值
                     */
                    bool AcctBranchNameHasBeenSet() const;

                    /**
                     * 获取聚鑫分配的安全ID
                     * @return MidasSecretId 聚鑫分配的安全ID
                     */
                    std::string GetMidasSecretId() const;

                    /**
                     * 设置聚鑫分配的安全ID
                     * @param MidasSecretId 聚鑫分配的安全ID
                     */
                    void SetMidasSecretId(const std::string& _midasSecretId);

                    /**
                     * 判断参数 MidasSecretId 是否已赋值
                     * @return MidasSecretId 是否已赋值
                     */
                    bool MidasSecretIdHasBeenSet() const;

                    /**
                     * 获取按照聚鑫安全密钥计算的签名
                     * @return MidasSignature 按照聚鑫安全密钥计算的签名
                     */
                    std::string GetMidasSignature() const;

                    /**
                     * 设置按照聚鑫安全密钥计算的签名
                     * @param MidasSignature 按照聚鑫安全密钥计算的签名
                     */
                    void SetMidasSignature(const std::string& _midasSignature);

                    /**
                     * 判断参数 MidasSignature 是否已赋值
                     * @return MidasSignature 是否已赋值
                     */
                    bool MidasSignatureHasBeenSet() const;

                    /**
                     * 获取用于短信验证
BindType==2时必填
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     * @return Mobile 用于短信验证
BindType==2时必填
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置用于短信验证
BindType==2时必填
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     * @param Mobile 用于短信验证
BindType==2时必填
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取大小额行号，超级网银行号和大小额行号
二选一
                     * @return CnapsBranchId 大小额行号，超级网银行号和大小额行号
二选一
                     */
                    std::string GetCnapsBranchId() const;

                    /**
                     * 设置大小额行号，超级网银行号和大小额行号
二选一
                     * @param CnapsBranchId 大小额行号，超级网银行号和大小额行号
二选一
                     */
                    void SetCnapsBranchId(const std::string& _cnapsBranchId);

                    /**
                     * 判断参数 CnapsBranchId 是否已赋值
                     * @return CnapsBranchId 是否已赋值
                     */
                    bool CnapsBranchIdHasBeenSet() const;

                    /**
                     * 获取超级网银行号，超级网银行号和大小额行号
二选一
                     * @return EiconBankBranchId 超级网银行号，超级网银行号和大小额行号
二选一
                     */
                    std::string GetEiconBankBranchId() const;

                    /**
                     * 设置超级网银行号，超级网银行号和大小额行号
二选一
                     * @param EiconBankBranchId 超级网银行号，超级网银行号和大小额行号
二选一
                     */
                    void SetEiconBankBranchId(const std::string& _eiconBankBranchId);

                    /**
                     * 判断参数 EiconBankBranchId 是否已赋值
                     * @return EiconBankBranchId 是否已赋值
                     */
                    bool EiconBankBranchIdHasBeenSet() const;

                    /**
                     * 获取敏感信息加密类型:
RSA, rsa非对称加密，使用RSA-PKCS1-v1_5
AES,  aes对称加密，使用AES256-CBC-PCKS7padding
默认RSA
                     * @return EncryptType 敏感信息加密类型:
RSA, rsa非对称加密，使用RSA-PKCS1-v1_5
AES,  aes对称加密，使用AES256-CBC-PCKS7padding
默认RSA
                     */
                    std::string GetEncryptType() const;

                    /**
                     * 设置敏感信息加密类型:
RSA, rsa非对称加密，使用RSA-PKCS1-v1_5
AES,  aes对称加密，使用AES256-CBC-PCKS7padding
默认RSA
                     * @param EncryptType 敏感信息加密类型:
RSA, rsa非对称加密，使用RSA-PKCS1-v1_5
AES,  aes对称加密，使用AES256-CBC-PCKS7padding
默认RSA
                     */
                    void SetEncryptType(const std::string& _encryptType);

                    /**
                     * 判断参数 EncryptType 是否已赋值
                     * @return EncryptType 是否已赋值
                     */
                    bool EncryptTypeHasBeenSet() const;

                private:

                    /**
                     * 聚鑫分配的支付主MidasAppId
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 聚鑫计费SubAppId，代表子商户
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 1 – 小额转账验证
2 – 短信验证
3 - 一分钱转账验证，无需再调CheckAcct验证绑卡
4 - 银行四要素验证，无需再调CheckAcct验证绑卡
每个结算账户每天只能使用一次小额转账验证
                     */
                    int64_t m_bindType;
                    bool m_bindTypeHasBeenSet;

                    /**
                     * 用于提现
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     */
                    std::string m_settleAcctNo;
                    bool m_settleAcctNoHasBeenSet;

                    /**
                     * 结算账户户名
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     */
                    std::string m_settleAcctName;
                    bool m_settleAcctNameHasBeenSet;

                    /**
                     * 1 – 本行账户
2 – 他行账户
                     */
                    int64_t m_settleAcctType;
                    bool m_settleAcctTypeHasBeenSet;

                    /**
                     * 证件类型，见《证件类型》表
                     */
                    std::string m_idType;
                    bool m_idTypeHasBeenSet;

                    /**
                     * 证件号码
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     */
                    std::string m_idCode;
                    bool m_idCodeHasBeenSet;

                    /**
                     * 开户行名称
                     */
                    std::string m_acctBranchName;
                    bool m_acctBranchNameHasBeenSet;

                    /**
                     * 聚鑫分配的安全ID
                     */
                    std::string m_midasSecretId;
                    bool m_midasSecretIdHasBeenSet;

                    /**
                     * 按照聚鑫安全密钥计算的签名
                     */
                    std::string m_midasSignature;
                    bool m_midasSignatureHasBeenSet;

                    /**
                     * 用于短信验证
BindType==2时必填
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 大小额行号，超级网银行号和大小额行号
二选一
                     */
                    std::string m_cnapsBranchId;
                    bool m_cnapsBranchIdHasBeenSet;

                    /**
                     * 超级网银行号，超级网银行号和大小额行号
二选一
                     */
                    std::string m_eiconBankBranchId;
                    bool m_eiconBankBranchIdHasBeenSet;

                    /**
                     * 敏感信息加密类型:
RSA, rsa非对称加密，使用RSA-PKCS1-v1_5
AES,  aes对称加密，使用AES256-CBC-PCKS7padding
默认RSA
                     */
                    std::string m_encryptType;
                    bool m_encryptTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_BINDACCTREQUEST_H_
