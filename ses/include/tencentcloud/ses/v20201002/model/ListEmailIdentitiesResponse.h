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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_LISTEMAILIDENTITIESRESPONSE_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_LISTEMAILIDENTITIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/EmailIdentity.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * ListEmailIdentities返回参数结构体
                */
                class ListEmailIdentitiesResponse : public AbstractModel
                {
                public:
                    ListEmailIdentitiesResponse();
                    ~ListEmailIdentitiesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取发信域名列表
                     * @return EmailIdentities 发信域名列表
                     */
                    std::vector<EmailIdentity> GetEmailIdentities() const;

                    /**
                     * 判断参数 EmailIdentities 是否已赋值
                     * @return EmailIdentities 是否已赋值
                     */
                    bool EmailIdentitiesHasBeenSet() const;

                private:

                    /**
                     * 发信域名列表
                     */
                    std::vector<EmailIdentity> m_emailIdentities;
                    bool m_emailIdentitiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_LISTEMAILIDENTITIESRESPONSE_H_
