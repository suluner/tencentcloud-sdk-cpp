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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_GETINSTANCEACCESSRESPONSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_GETINSTANCEACCESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/InstanceAccess.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * GetInstanceAccess返回参数结构体
                */
                class GetInstanceAccessResponse : public AbstractModel
                {
                public:
                    GetInstanceAccessResponse();
                    ~GetInstanceAccessResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取实例登录所需要的凭据
                     * @return InstanceAccess 实例登录所需要的凭据
                     */
                    InstanceAccess GetInstanceAccess() const;

                    /**
                     * 判断参数 InstanceAccess 是否已赋值
                     * @return InstanceAccess 是否已赋值
                     */
                    bool InstanceAccessHasBeenSet() const;

                private:

                    /**
                     * 实例登录所需要的凭据
                     */
                    InstanceAccess m_instanceAccess;
                    bool m_instanceAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_GETINSTANCEACCESSRESPONSE_H_
