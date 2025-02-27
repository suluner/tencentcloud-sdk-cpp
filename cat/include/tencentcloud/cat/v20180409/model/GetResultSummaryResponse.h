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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_GETRESULTSUMMARYRESPONSE_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_GETRESULTSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/ResultSummary.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * GetResultSummary返回参数结构体
                */
                class GetResultSummaryResponse : public AbstractModel
                {
                public:
                    GetResultSummaryResponse();
                    ~GetResultSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实时统计数据
                     * @return RealData 实时统计数据
                     */
                    std::vector<ResultSummary> GetRealData() const;

                    /**
                     * 判断参数 RealData 是否已赋值
                     * @return RealData 是否已赋值
                     */
                    bool RealDataHasBeenSet() const;

                    /**
                     * 获取按天的统计数据
                     * @return DayData 按天的统计数据
                     */
                    std::vector<ResultSummary> GetDayData() const;

                    /**
                     * 判断参数 DayData 是否已赋值
                     * @return DayData 是否已赋值
                     */
                    bool DayDataHasBeenSet() const;

                private:

                    /**
                     * 实时统计数据
                     */
                    std::vector<ResultSummary> m_realData;
                    bool m_realDataHasBeenSet;

                    /**
                     * 按天的统计数据
                     */
                    std::vector<ResultSummary> m_dayData;
                    bool m_dayDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_GETRESULTSUMMARYRESPONSE_H_
