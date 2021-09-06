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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ACCOUNTVPCINFO_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ACCOUNTVPCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 私有域解析账号Vpc信息
                */
                class AccountVpcInfo : public AbstractModel
                {
                public:
                    AccountVpcInfo();
                    ~AccountVpcInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VpcId： vpc-xadsafsdasd
                     * @return UniqVpcId VpcId： vpc-xadsafsdasd
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VpcId： vpc-xadsafsdasd
                     * @param UniqVpcId VpcId： vpc-xadsafsdasd
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Vpc所属地区: ap-guangzhou, ap-shanghai
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region Vpc所属地区: ap-guangzhou, ap-shanghai
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Vpc所属地区: ap-guangzhou, ap-shanghai
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Region Vpc所属地区: ap-guangzhou, ap-shanghai
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Vpc所属账号: 123456789
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin Vpc所属账号: 123456789
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Vpc所属账号: 123456789
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Uin Vpc所属账号: 123456789
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取vpc资源名称：testname
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcName vpc资源名称：testname
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置vpc资源名称：testname
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VpcName vpc资源名称：testname
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     */
                    bool VpcNameHasBeenSet() const;

                private:

                    /**
                     * VpcId： vpc-xadsafsdasd
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Vpc所属地区: ap-guangzhou, ap-shanghai
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Vpc所属账号: 123456789
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * vpc资源名称：testname
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ACCOUNTVPCINFO_H_
