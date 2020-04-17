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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEAPPLICATIONTRIGGERPERSONALRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEAPPLICATIONTRIGGERPERSONALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/DescribeApplicationTriggerPersonalResp.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeApplicationTriggerPersonal返回参数结构体
                */
                class DescribeApplicationTriggerPersonalResponse : public AbstractModel
                {
                public:
                    DescribeApplicationTriggerPersonalResponse();
                    ~DescribeApplicationTriggerPersonalResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取触发器列表返回值
                     * @return Data 触发器列表返回值
                     */
                    DescribeApplicationTriggerPersonalResp GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 触发器列表返回值
                     */
                    DescribeApplicationTriggerPersonalResp m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEAPPLICATIONTRIGGERPERSONALRESPONSE_H_
