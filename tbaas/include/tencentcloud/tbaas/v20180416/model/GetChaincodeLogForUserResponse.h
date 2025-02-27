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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_GETCHAINCODELOGFORUSERRESPONSE_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_GETCHAINCODELOGFORUSERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tbaas/v20180416/model/LogDetailForUser.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetChaincodeLogForUser返回参数结构体
                */
                class GetChaincodeLogForUserResponse : public AbstractModel
                {
                public:
                    GetChaincodeLogForUserResponse();
                    ~GetChaincodeLogForUserResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回日志总行数，不会超过入参的RowNum
                     * @return TotalCount 返回日志总行数，不会超过入参的RowNum
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取日志列表
                     * @return ChaincodeLogList 日志列表
                     */
                    std::vector<LogDetailForUser> GetChaincodeLogList() const;

                    /**
                     * 判断参数 ChaincodeLogList 是否已赋值
                     * @return ChaincodeLogList 是否已赋值
                     */
                    bool ChaincodeLogListHasBeenSet() const;

                private:

                    /**
                     * 返回日志总行数，不会超过入参的RowNum
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 日志列表
                     */
                    std::vector<LogDetailForUser> m_chaincodeLogList;
                    bool m_chaincodeLogListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_GETCHAINCODELOGFORUSERRESPONSE_H_
