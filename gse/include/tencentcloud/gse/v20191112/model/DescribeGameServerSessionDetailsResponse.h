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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEGAMESERVERSESSIONDETAILSRESPONSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEGAMESERVERSESSIONDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/GameServerSessionDetail.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeGameServerSessionDetails返回参数结构体
                */
                class DescribeGameServerSessionDetailsResponse : public AbstractModel
                {
                public:
                    DescribeGameServerSessionDetailsResponse();
                    ~DescribeGameServerSessionDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取游戏服务器会话详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GameServerSessionDetails 游戏服务器会话详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GameServerSessionDetail> GetGameServerSessionDetails() const;

                    /**
                     * 判断参数 GameServerSessionDetails 是否已赋值
                     * @return GameServerSessionDetails 是否已赋值
                     */
                    bool GameServerSessionDetailsHasBeenSet() const;

                    /**
                     * 获取页偏移，用于查询下一页
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextToken 页偏移，用于查询下一页
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     */
                    bool NextTokenHasBeenSet() const;

                private:

                    /**
                     * 游戏服务器会话详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GameServerSessionDetail> m_gameServerSessionDetails;
                    bool m_gameServerSessionDetailsHasBeenSet;

                    /**
                     * 页偏移，用于查询下一页
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEGAMESERVERSESSIONDETAILSRESPONSE_H_
