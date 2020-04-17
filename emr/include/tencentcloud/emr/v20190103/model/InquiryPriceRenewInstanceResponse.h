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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICERENEWINSTANCERESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICERENEWINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * InquiryPriceRenewInstance返回参数结构体
                */
                class InquiryPriceRenewInstanceResponse : public AbstractModel
                {
                public:
                    InquiryPriceRenewInstanceResponse();
                    ~InquiryPriceRenewInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取原价，单位为元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginalCost 原价，单位为元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetOriginalCost() const;

                    /**
                     * 判断参数 OriginalCost 是否已赋值
                     * @return OriginalCost 是否已赋值
                     */
                    bool OriginalCostHasBeenSet() const;

                    /**
                     * 获取折扣价，单位为元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiscountCost 折扣价，单位为元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetDiscountCost() const;

                    /**
                     * 判断参数 DiscountCost 是否已赋值
                     * @return DiscountCost 是否已赋值
                     */
                    bool DiscountCostHasBeenSet() const;

                    /**
                     * 获取实例续费的时间单位。取值范围：
<li>m：表示月份。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeUnit 实例续费的时间单位。取值范围：
<li>m：表示月份。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取实例续费的时长。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeSpan 实例续费的时长。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                private:

                    /**
                     * 原价，单位为元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * 折扣价，单位为元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_discountCost;
                    bool m_discountCostHasBeenSet;

                    /**
                     * 实例续费的时间单位。取值范围：
<li>m：表示月份。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 实例续费的时长。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICERENEWINSTANCERESPONSE_H_
