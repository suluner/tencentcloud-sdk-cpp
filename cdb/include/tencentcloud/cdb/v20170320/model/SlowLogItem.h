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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_SLOWLOGITEM_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_SLOWLOGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 结构化的慢日志详情
                */
                class SlowLogItem : public AbstractModel
                {
                public:
                    SlowLogItem();
                    ~SlowLogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sql的执行时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp Sql的执行时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置Sql的执行时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Timestamp Sql的执行时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTimestamp(const uint64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Sql的执行时长。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueryTime Sql的执行时长。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetQueryTime() const;

                    /**
                     * 设置Sql的执行时长。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param QueryTime Sql的执行时长。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetQueryTime(const double& _queryTime);

                    /**
                     * 判断参数 QueryTime 是否已赋值
                     * @return QueryTime 是否已赋值
                     */
                    bool QueryTimeHasBeenSet() const;

                    /**
                     * 获取Sql语句。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlText Sql语句。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSqlText() const;

                    /**
                     * 设置Sql语句。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SqlText Sql语句。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSqlText(const std::string& _sqlText);

                    /**
                     * 判断参数 SqlText 是否已赋值
                     * @return SqlText 是否已赋值
                     */
                    bool SqlTextHasBeenSet() const;

                    /**
                     * 获取客户端地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserHost 客户端地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUserHost() const;

                    /**
                     * 设置客户端地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UserHost 客户端地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUserHost(const std::string& _userHost);

                    /**
                     * 判断参数 UserHost 是否已赋值
                     * @return UserHost 是否已赋值
                     */
                    bool UserHostHasBeenSet() const;

                    /**
                     * 获取用户名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 用户名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UserName 用户名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取数据库名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Database 数据库名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置数据库名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Database 数据库名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取锁时长。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LockTime 锁时长。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetLockTime() const;

                    /**
                     * 设置锁时长。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LockTime 锁时长。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLockTime(const double& _lockTime);

                    /**
                     * 判断参数 LockTime 是否已赋值
                     * @return LockTime 是否已赋值
                     */
                    bool LockTimeHasBeenSet() const;

                    /**
                     * 获取扫描行数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RowsExamined 扫描行数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRowsExamined() const;

                    /**
                     * 设置扫描行数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RowsExamined 扫描行数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRowsExamined(const int64_t& _rowsExamined);

                    /**
                     * 判断参数 RowsExamined 是否已赋值
                     * @return RowsExamined 是否已赋值
                     */
                    bool RowsExaminedHasBeenSet() const;

                    /**
                     * 获取结果集行数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RowsSent 结果集行数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRowsSent() const;

                    /**
                     * 设置结果集行数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RowsSent 结果集行数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRowsSent(const int64_t& _rowsSent);

                    /**
                     * 判断参数 RowsSent 是否已赋值
                     * @return RowsSent 是否已赋值
                     */
                    bool RowsSentHasBeenSet() const;

                    /**
                     * 获取Sql模板。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlTemplate Sql模板。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSqlTemplate() const;

                    /**
                     * 设置Sql模板。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SqlTemplate Sql模板。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSqlTemplate(const std::string& _sqlTemplate);

                    /**
                     * 判断参数 SqlTemplate 是否已赋值
                     * @return SqlTemplate 是否已赋值
                     */
                    bool SqlTemplateHasBeenSet() const;

                    /**
                     * 获取Sql语句的md5。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Md5 Sql语句的md5。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置Sql语句的md5。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Md5 Sql语句的md5。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     */
                    bool Md5HasBeenSet() const;

                private:

                    /**
                     * Sql的执行时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Sql的执行时长。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_queryTime;
                    bool m_queryTimeHasBeenSet;

                    /**
                     * Sql语句。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                    /**
                     * 客户端地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userHost;
                    bool m_userHostHasBeenSet;

                    /**
                     * 用户名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 数据库名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * 锁时长。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_lockTime;
                    bool m_lockTimeHasBeenSet;

                    /**
                     * 扫描行数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rowsExamined;
                    bool m_rowsExaminedHasBeenSet;

                    /**
                     * 结果集行数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rowsSent;
                    bool m_rowsSentHasBeenSet;

                    /**
                     * Sql模板。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sqlTemplate;
                    bool m_sqlTemplateHasBeenSet;

                    /**
                     * Sql语句的md5。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_SLOWLOGITEM_H_
