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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_ORIGIN_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_ORIGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * 源站配置。
                */
                class Origin : public AbstractModel
                {
                public:
                    Origin();
                    ~Origin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主源站列表，默认格式为 ["ip1:port1", "ip2:port2"]。
支持在源站列表中配置权重，配置IP源站权重格式为 ["ip1:port1:weight1", "ip2:port2:weight2"]。
                     * @return Origins 主源站列表，默认格式为 ["ip1:port1", "ip2:port2"]。
支持在源站列表中配置权重，配置IP源站权重格式为 ["ip1:port1:weight1", "ip2:port2:weight2"]。
                     */
                    std::vector<std::string> GetOrigins() const;

                    /**
                     * 设置主源站列表，默认格式为 ["ip1:port1", "ip2:port2"]。
支持在源站列表中配置权重，配置IP源站权重格式为 ["ip1:port1:weight1", "ip2:port2:weight2"]。
                     * @param Origins 主源站列表，默认格式为 ["ip1:port1", "ip2:port2"]。
支持在源站列表中配置权重，配置IP源站权重格式为 ["ip1:port1:weight1", "ip2:port2:weight2"]。
                     */
                    void SetOrigins(const std::vector<std::string>& _origins);

                    /**
                     * 判断参数 Origins 是否已赋值
                     * @return Origins 是否已赋值
                     */
                    bool OriginsHasBeenSet() const;

                    /**
                     * 获取主源站类型，支持domain，ip，分别表示域名源站，ip源站。
设置Origins时必须填写。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginType 主源站类型，支持domain，ip，分别表示域名源站，ip源站。
设置Origins时必须填写。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置主源站类型，支持domain，ip，分别表示域名源站，ip源站。
设置Origins时必须填写。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OriginType 主源站类型，支持domain，ip，分别表示域名源站，ip源站。
设置Origins时必须填写。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取回源时Host头部值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerName 回源时Host头部值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置回源时Host头部值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServerName 回源时Host头部值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取回源协议类型，支持http，follow，https，分别表示强制http回源，协议跟随回源，https回源。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginPullProtocol 回源协议类型，支持http，follow，https，分别表示强制http回源，协议跟随回源，https回源。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOriginPullProtocol() const;

                    /**
                     * 设置回源协议类型，支持http，follow，https，分别表示强制http回源，协议跟随回源，https回源。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OriginPullProtocol 回源协议类型，支持http，follow，https，分别表示强制http回源，协议跟随回源，https回源。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOriginPullProtocol(const std::string& _originPullProtocol);

                    /**
                     * 判断参数 OriginPullProtocol 是否已赋值
                     * @return OriginPullProtocol 是否已赋值
                     */
                    bool OriginPullProtocolHasBeenSet() const;

                    /**
                     * 获取备份源站列表。
                     * @return BackupOrigins 备份源站列表。
                     */
                    std::vector<std::string> GetBackupOrigins() const;

                    /**
                     * 设置备份源站列表。
                     * @param BackupOrigins 备份源站列表。
                     */
                    void SetBackupOrigins(const std::vector<std::string>& _backupOrigins);

                    /**
                     * 判断参数 BackupOrigins 是否已赋值
                     * @return BackupOrigins 是否已赋值
                     */
                    bool BackupOriginsHasBeenSet() const;

                    /**
                     * 获取备份源站类型，同OriginType。
设置BackupOrigins时必须填写。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupOriginType 备份源站类型，同OriginType。
设置BackupOrigins时必须填写。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBackupOriginType() const;

                    /**
                     * 设置备份源站类型，同OriginType。
设置BackupOrigins时必须填写。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BackupOriginType 备份源站类型，同OriginType。
设置BackupOrigins时必须填写。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBackupOriginType(const std::string& _backupOriginType);

                    /**
                     * 判断参数 BackupOriginType 是否已赋值
                     * @return BackupOriginType 是否已赋值
                     */
                    bool BackupOriginTypeHasBeenSet() const;

                private:

                    /**
                     * 主源站列表，默认格式为 ["ip1:port1", "ip2:port2"]。
支持在源站列表中配置权重，配置IP源站权重格式为 ["ip1:port1:weight1", "ip2:port2:weight2"]。
                     */
                    std::vector<std::string> m_origins;
                    bool m_originsHasBeenSet;

                    /**
                     * 主源站类型，支持domain，ip，分别表示域名源站，ip源站。
设置Origins时必须填写。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * 回源时Host头部值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * 回源协议类型，支持http，follow，https，分别表示强制http回源，协议跟随回源，https回源。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originPullProtocol;
                    bool m_originPullProtocolHasBeenSet;

                    /**
                     * 备份源站列表。
                     */
                    std::vector<std::string> m_backupOrigins;
                    bool m_backupOriginsHasBeenSet;

                    /**
                     * 备份源站类型，同OriginType。
设置BackupOrigins时必须填写。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_backupOriginType;
                    bool m_backupOriginTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_ORIGIN_H_
