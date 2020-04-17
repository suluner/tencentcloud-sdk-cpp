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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_AUTHORIZER_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_AUTHORIZER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 授权者
                */
                class Authorizer : public AbstractModel
                {
                public:
                    Authorizer();
                    ~Authorizer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取授权者类型，取值有：
<li>PERSON：个人。</li>
<li>TEAM：团队。</li>
                     * @return Type 授权者类型，取值有：
<li>PERSON：个人。</li>
<li>TEAM：团队。</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置授权者类型，取值有：
<li>PERSON：个人。</li>
<li>TEAM：团队。</li>
                     * @param Type 授权者类型，取值有：
<li>PERSON：个人。</li>
<li>TEAM：团队。</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Id，当 Type=PERSON，取值为用户 Id。当Type=TEAM，取值为团队 ID。
                     * @return Id Id，当 Type=PERSON，取值为用户 Id。当Type=TEAM，取值为团队 ID。
                     */
                    std::string GetId() const;

                    /**
                     * 设置Id，当 Type=PERSON，取值为用户 Id。当Type=TEAM，取值为团队 ID。
                     * @param Id Id，当 Type=PERSON，取值为用户 Id。当Type=TEAM，取值为团队 ID。
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 授权者类型，取值有：
<li>PERSON：个人。</li>
<li>TEAM：团队。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Id，当 Type=PERSON，取值为用户 Id。当Type=TEAM，取值为团队 ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_AUTHORIZER_H_
