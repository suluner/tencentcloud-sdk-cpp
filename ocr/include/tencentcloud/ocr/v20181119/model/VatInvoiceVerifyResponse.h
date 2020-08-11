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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEVERIFYRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEVERIFYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/VatInvoice.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * VatInvoiceVerify返回参数结构体
                */
                class VatInvoiceVerifyResponse : public AbstractModel
                {
                public:
                    VatInvoiceVerifyResponse();
                    ~VatInvoiceVerifyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取增值税发票信息，详情请点击左侧链接。
                     * @return Invoice 增值税发票信息，详情请点击左侧链接。
                     */
                    VatInvoice GetInvoice() const;

                    /**
                     * 判断参数 Invoice 是否已赋值
                     * @return Invoice 是否已赋值
                     */
                    bool InvoiceHasBeenSet() const;

                private:

                    /**
                     * 增值税发票信息，详情请点击左侧链接。
                     */
                    VatInvoice m_invoice;
                    bool m_invoiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEVERIFYRESPONSE_H_
