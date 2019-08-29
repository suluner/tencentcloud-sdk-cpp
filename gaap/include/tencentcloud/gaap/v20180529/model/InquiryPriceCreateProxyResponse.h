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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_INQUIRYPRICECREATEPROXYRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_INQUIRYPRICECREATEPROXYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/BandwidthPriceGradient.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * InquiryPriceCreateProxy返回参数结构体
                */
                class InquiryPriceCreateProxyResponse : public AbstractModel
                {
                public:
                    InquiryPriceCreateProxyResponse();
                    ~InquiryPriceCreateProxyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取通道基础费用价格，单位：元/天。
                     * @return ProxyDailyPrice 通道基础费用价格，单位：元/天。
                     */
                    double GetProxyDailyPrice() const;

                    /**
                     * 判断参数 ProxyDailyPrice 是否已赋值
                     * @return ProxyDailyPrice 是否已赋值
                     */
                    bool ProxyDailyPriceHasBeenSet() const;

                    /**
                     * 获取通道带宽费用梯度价格。
                     * @return BandwidthUnitPrice 通道带宽费用梯度价格。
                     */
                    std::vector<BandwidthPriceGradient> GetBandwidthUnitPrice() const;

                    /**
                     * 判断参数 BandwidthUnitPrice 是否已赋值
                     * @return BandwidthUnitPrice 是否已赋值
                     */
                    bool BandwidthUnitPriceHasBeenSet() const;

                    /**
                     * 获取通道基础费用折扣价格，单位：元/天。
                     * @return DiscountProxyDailyPrice 通道基础费用折扣价格，单位：元/天。
                     */
                    double GetDiscountProxyDailyPrice() const;

                    /**
                     * 判断参数 DiscountProxyDailyPrice 是否已赋值
                     * @return DiscountProxyDailyPrice 是否已赋值
                     */
                    bool DiscountProxyDailyPriceHasBeenSet() const;

                    /**
                     * 获取价格使用的货币，支持人民币，美元等。
                     * @return Currency 价格使用的货币，支持人民币，美元等。
                     */
                    std::string GetCurrency() const;

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     */
                    bool CurrencyHasBeenSet() const;

                private:

                    /**
                     * 通道基础费用价格，单位：元/天。
                     */
                    double m_proxyDailyPrice;
                    bool m_proxyDailyPriceHasBeenSet;

                    /**
                     * 通道带宽费用梯度价格。
                     */
                    std::vector<BandwidthPriceGradient> m_bandwidthUnitPrice;
                    bool m_bandwidthUnitPriceHasBeenSet;

                    /**
                     * 通道基础费用折扣价格，单位：元/天。
                     */
                    double m_discountProxyDailyPrice;
                    bool m_discountProxyDailyPriceHasBeenSet;

                    /**
                     * 价格使用的货币，支持人民币，美元等。
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_INQUIRYPRICECREATEPROXYRESPONSE_H_
