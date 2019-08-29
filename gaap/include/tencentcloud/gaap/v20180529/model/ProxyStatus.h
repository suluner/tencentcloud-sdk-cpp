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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYSTATUS_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 通道状态信息
                */
                class ProxyStatus : public AbstractModel
                {
                public:
                    ProxyStatus();
                    ~ProxyStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通道实例ID。
                     * @return InstanceId 通道实例ID。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置通道实例ID。
                     * @param InstanceId 通道实例ID。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取通道状态。
其中：
RUNNING，运行中；
CREATING，创建中；
DESTROYING，销毁中；
OPENING，开启中；
CLOSING，关闭中；
CLOSED，已关闭；
ADJUSTING，配置变更中；
ISOLATING，隔离中；
ISOLATED，已隔离；
UNKNOWN，未知状态。
                     * @return Status 通道状态。
其中：
RUNNING，运行中；
CREATING，创建中；
DESTROYING，销毁中；
OPENING，开启中；
CLOSING，关闭中；
CLOSED，已关闭；
ADJUSTING，配置变更中；
ISOLATING，隔离中；
ISOLATED，已隔离；
UNKNOWN，未知状态。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置通道状态。
其中：
RUNNING，运行中；
CREATING，创建中；
DESTROYING，销毁中；
OPENING，开启中；
CLOSING，关闭中；
CLOSED，已关闭；
ADJUSTING，配置变更中；
ISOLATING，隔离中；
ISOLATED，已隔离；
UNKNOWN，未知状态。
                     * @param Status 通道状态。
其中：
RUNNING，运行中；
CREATING，创建中；
DESTROYING，销毁中；
OPENING，开启中；
CLOSING，关闭中；
CLOSED，已关闭；
ADJUSTING，配置变更中；
ISOLATING，隔离中；
ISOLATED，已隔离；
UNKNOWN，未知状态。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 通道实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 通道状态。
其中：
RUNNING，运行中；
CREATING，创建中；
DESTROYING，销毁中；
OPENING，开启中；
CLOSING，关闭中；
CLOSED，已关闭；
ADJUSTING，配置变更中；
ISOLATING，隔离中；
ISOLATED，已隔离；
UNKNOWN，未知状态。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYSTATUS_H_
