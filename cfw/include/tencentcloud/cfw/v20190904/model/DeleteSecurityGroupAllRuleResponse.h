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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DELETESECURITYGROUPALLRULERESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DELETESECURITYGROUPALLRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DeleteSecurityGroupAllRule返回参数结构体
                */
                class DeleteSecurityGroupAllRuleResponse : public AbstractModel
                {
                public:
                    DeleteSecurityGroupAllRuleResponse();
                    ~DeleteSecurityGroupAllRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取0: 操作成功，非0：操作失败
                     * @return Status 0: 操作成功，非0：操作失败
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取返回数据的json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Info 返回数据的json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetInfo() const;

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     */
                    bool InfoHasBeenSet() const;

                private:

                    /**
                     * 0: 操作成功，非0：操作失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 返回数据的json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DELETESECURITYGROUPALLRULERESPONSE_H_
