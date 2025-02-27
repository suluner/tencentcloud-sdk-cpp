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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_BLOCKBYNUMBERHANDLERRESPONSE_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_BLOCKBYNUMBERHANDLERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * BlockByNumberHandler返回参数结构体
                */
                class BlockByNumberHandlerResponse : public AbstractModel
                {
                public:
                    BlockByNumberHandlerResponse();
                    ~BlockByNumberHandlerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回区块json字符串
                     * @return BlockJson 返回区块json字符串
                     */
                    std::string GetBlockJson() const;

                    /**
                     * 判断参数 BlockJson 是否已赋值
                     * @return BlockJson 是否已赋值
                     */
                    bool BlockJsonHasBeenSet() const;

                private:

                    /**
                     * 返回区块json字符串
                     */
                    std::string m_blockJson;
                    bool m_blockJsonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_BLOCKBYNUMBERHANDLERRESPONSE_H_
