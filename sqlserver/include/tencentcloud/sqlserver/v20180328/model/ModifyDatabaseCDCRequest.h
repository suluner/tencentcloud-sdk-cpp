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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDATABASECDCREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDATABASECDCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyDatabaseCDC请求参数结构体
                */
                class ModifyDatabaseCDCRequest : public AbstractModel
                {
                public:
                    ModifyDatabaseCDCRequest();
                    ~ModifyDatabaseCDCRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库名数组
                     * @return DBNames 数据库名数组
                     */
                    std::vector<std::string> GetDBNames() const;

                    /**
                     * 设置数据库名数组
                     * @param DBNames 数据库名数组
                     */
                    void SetDBNames(const std::vector<std::string>& _dBNames);

                    /**
                     * 判断参数 DBNames 是否已赋值
                     * @return DBNames 是否已赋值
                     */
                    bool DBNamesHasBeenSet() const;

                    /**
                     * 获取开启、关闭数据库CDC功能 enable；开启，disable：关闭
                     * @return ModifyType 开启、关闭数据库CDC功能 enable；开启，disable：关闭
                     */
                    std::string GetModifyType() const;

                    /**
                     * 设置开启、关闭数据库CDC功能 enable；开启，disable：关闭
                     * @param ModifyType 开启、关闭数据库CDC功能 enable；开启，disable：关闭
                     */
                    void SetModifyType(const std::string& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     */
                    bool ModifyTypeHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 数据库名数组
                     */
                    std::vector<std::string> m_dBNames;
                    bool m_dBNamesHasBeenSet;

                    /**
                     * 开启、关闭数据库CDC功能 enable；开启，disable：关闭
                     */
                    std::string m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDATABASECDCREQUEST_H_
