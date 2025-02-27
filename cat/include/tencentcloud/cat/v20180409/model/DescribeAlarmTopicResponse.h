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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEALARMTOPICRESPONSE_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEALARMTOPICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/AlarmTopic.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * DescribeAlarmTopic返回参数结构体
                */
                class DescribeAlarmTopicResponse : public AbstractModel
                {
                public:
                    DescribeAlarmTopicResponse();
                    ~DescribeAlarmTopicResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取主题个数
                     * @return TotalCount 主题个数
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取主题列表
                     * @return Topics 主题列表
                     */
                    std::vector<AlarmTopic> GetTopics() const;

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     */
                    bool TopicsHasBeenSet() const;

                private:

                    /**
                     * 主题个数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 主题列表
                     */
                    std::vector<AlarmTopic> m_topics;
                    bool m_topicsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEALARMTOPICRESPONSE_H_
