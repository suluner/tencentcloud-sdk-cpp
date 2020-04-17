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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_STARTGAMESERVERSESSIONPLACEMENTREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_STARTGAMESERVERSESSIONPLACEMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/DesiredPlayerSession.h>
#include <tencentcloud/gse/v20191112/model/GameProperty.h>
#include <tencentcloud/gse/v20191112/model/PlayerLatency.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * StartGameServerSessionPlacement请求参数结构体
                */
                class StartGameServerSessionPlacementRequest : public AbstractModel
                {
                public:
                    StartGameServerSessionPlacementRequest();
                    ~StartGameServerSessionPlacementRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始部署游戏服务器会话的唯一标识符
                     * @return PlacementId 开始部署游戏服务器会话的唯一标识符
                     */
                    std::string GetPlacementId() const;

                    /**
                     * 设置开始部署游戏服务器会话的唯一标识符
                     * @param PlacementId 开始部署游戏服务器会话的唯一标识符
                     */
                    void SetPlacementId(const std::string& _placementId);

                    /**
                     * 判断参数 PlacementId 是否已赋值
                     * @return PlacementId 是否已赋值
                     */
                    bool PlacementIdHasBeenSet() const;

                    /**
                     * 获取游戏服务器会话队列名称
                     * @return GameServerSessionQueueName 游戏服务器会话队列名称
                     */
                    std::string GetGameServerSessionQueueName() const;

                    /**
                     * 设置游戏服务器会话队列名称
                     * @param GameServerSessionQueueName 游戏服务器会话队列名称
                     */
                    void SetGameServerSessionQueueName(const std::string& _gameServerSessionQueueName);

                    /**
                     * 判断参数 GameServerSessionQueueName 是否已赋值
                     * @return GameServerSessionQueueName 是否已赋值
                     */
                    bool GameServerSessionQueueNameHasBeenSet() const;

                    /**
                     * 获取游戏服务器允许同时连接到游戏会话的最大玩家数量
                     * @return MaximumPlayerSessionCount 游戏服务器允许同时连接到游戏会话的最大玩家数量
                     */
                    uint64_t GetMaximumPlayerSessionCount() const;

                    /**
                     * 设置游戏服务器允许同时连接到游戏会话的最大玩家数量
                     * @param MaximumPlayerSessionCount 游戏服务器允许同时连接到游戏会话的最大玩家数量
                     */
                    void SetMaximumPlayerSessionCount(const uint64_t& _maximumPlayerSessionCount);

                    /**
                     * 判断参数 MaximumPlayerSessionCount 是否已赋值
                     * @return MaximumPlayerSessionCount 是否已赋值
                     */
                    bool MaximumPlayerSessionCountHasBeenSet() const;

                    /**
                     * 获取玩家游戏会话信息
                     * @return DesiredPlayerSessions 玩家游戏会话信息
                     */
                    std::vector<DesiredPlayerSession> GetDesiredPlayerSessions() const;

                    /**
                     * 设置玩家游戏会话信息
                     * @param DesiredPlayerSessions 玩家游戏会话信息
                     */
                    void SetDesiredPlayerSessions(const std::vector<DesiredPlayerSession>& _desiredPlayerSessions);

                    /**
                     * 判断参数 DesiredPlayerSessions 是否已赋值
                     * @return DesiredPlayerSessions 是否已赋值
                     */
                    bool DesiredPlayerSessionsHasBeenSet() const;

                    /**
                     * 获取玩家游戏会话属性
                     * @return GameProperties 玩家游戏会话属性
                     */
                    std::vector<GameProperty> GetGameProperties() const;

                    /**
                     * 设置玩家游戏会话属性
                     * @param GameProperties 玩家游戏会话属性
                     */
                    void SetGameProperties(const std::vector<GameProperty>& _gameProperties);

                    /**
                     * 判断参数 GameProperties 是否已赋值
                     * @return GameProperties 是否已赋值
                     */
                    bool GamePropertiesHasBeenSet() const;

                    /**
                     * 获取游戏服务器会话数据
                     * @return GameServerSessionData 游戏服务器会话数据
                     */
                    std::string GetGameServerSessionData() const;

                    /**
                     * 设置游戏服务器会话数据
                     * @param GameServerSessionData 游戏服务器会话数据
                     */
                    void SetGameServerSessionData(const std::string& _gameServerSessionData);

                    /**
                     * 判断参数 GameServerSessionData 是否已赋值
                     * @return GameServerSessionData 是否已赋值
                     */
                    bool GameServerSessionDataHasBeenSet() const;

                    /**
                     * 获取游戏服务器会话名称
                     * @return GameServerSessionName 游戏服务器会话名称
                     */
                    std::string GetGameServerSessionName() const;

                    /**
                     * 设置游戏服务器会话名称
                     * @param GameServerSessionName 游戏服务器会话名称
                     */
                    void SetGameServerSessionName(const std::string& _gameServerSessionName);

                    /**
                     * 判断参数 GameServerSessionName 是否已赋值
                     * @return GameServerSessionName 是否已赋值
                     */
                    bool GameServerSessionNameHasBeenSet() const;

                    /**
                     * 获取玩家延迟
                     * @return PlayerLatencies 玩家延迟
                     */
                    std::vector<PlayerLatency> GetPlayerLatencies() const;

                    /**
                     * 设置玩家延迟
                     * @param PlayerLatencies 玩家延迟
                     */
                    void SetPlayerLatencies(const std::vector<PlayerLatency>& _playerLatencies);

                    /**
                     * 判断参数 PlayerLatencies 是否已赋值
                     * @return PlayerLatencies 是否已赋值
                     */
                    bool PlayerLatenciesHasBeenSet() const;

                private:

                    /**
                     * 开始部署游戏服务器会话的唯一标识符
                     */
                    std::string m_placementId;
                    bool m_placementIdHasBeenSet;

                    /**
                     * 游戏服务器会话队列名称
                     */
                    std::string m_gameServerSessionQueueName;
                    bool m_gameServerSessionQueueNameHasBeenSet;

                    /**
                     * 游戏服务器允许同时连接到游戏会话的最大玩家数量
                     */
                    uint64_t m_maximumPlayerSessionCount;
                    bool m_maximumPlayerSessionCountHasBeenSet;

                    /**
                     * 玩家游戏会话信息
                     */
                    std::vector<DesiredPlayerSession> m_desiredPlayerSessions;
                    bool m_desiredPlayerSessionsHasBeenSet;

                    /**
                     * 玩家游戏会话属性
                     */
                    std::vector<GameProperty> m_gameProperties;
                    bool m_gamePropertiesHasBeenSet;

                    /**
                     * 游戏服务器会话数据
                     */
                    std::string m_gameServerSessionData;
                    bool m_gameServerSessionDataHasBeenSet;

                    /**
                     * 游戏服务器会话名称
                     */
                    std::string m_gameServerSessionName;
                    bool m_gameServerSessionNameHasBeenSet;

                    /**
                     * 玩家延迟
                     */
                    std::vector<PlayerLatency> m_playerLatencies;
                    bool m_playerLatenciesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_STARTGAMESERVERSESSIONPLACEMENTREQUEST_H_
