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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SERVICETEMPLATE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SERVICETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/ServicesInfo.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 协议端口模板
                */
                class ServiceTemplate : public AbstractModel
                {
                public:
                    ServiceTemplate();
                    ~ServiceTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取协议端口实例ID，例如：ppm-f5n1f8da。
                     * @return ServiceTemplateId 协议端口实例ID，例如：ppm-f5n1f8da。
                     */
                    std::string GetServiceTemplateId() const;

                    /**
                     * 设置协议端口实例ID，例如：ppm-f5n1f8da。
                     * @param ServiceTemplateId 协议端口实例ID，例如：ppm-f5n1f8da。
                     */
                    void SetServiceTemplateId(const std::string& _serviceTemplateId);

                    /**
                     * 判断参数 ServiceTemplateId 是否已赋值
                     * @return ServiceTemplateId 是否已赋值
                     */
                    bool ServiceTemplateIdHasBeenSet() const;

                    /**
                     * 获取模板名称。
                     * @return ServiceTemplateName 模板名称。
                     */
                    std::string GetServiceTemplateName() const;

                    /**
                     * 设置模板名称。
                     * @param ServiceTemplateName 模板名称。
                     */
                    void SetServiceTemplateName(const std::string& _serviceTemplateName);

                    /**
                     * 判断参数 ServiceTemplateName 是否已赋值
                     * @return ServiceTemplateName 是否已赋值
                     */
                    bool ServiceTemplateNameHasBeenSet() const;

                    /**
                     * 获取协议端口信息。
                     * @return ServiceSet 协议端口信息。
                     */
                    std::vector<std::string> GetServiceSet() const;

                    /**
                     * 设置协议端口信息。
                     * @param ServiceSet 协议端口信息。
                     */
                    void SetServiceSet(const std::vector<std::string>& _serviceSet);

                    /**
                     * 判断参数 ServiceSet 是否已赋值
                     * @return ServiceSet 是否已赋值
                     */
                    bool ServiceSetHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreatedTime 创建时间。
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
                     * @param CreatedTime 创建时间。
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取带备注的协议端口信息。
                     * @return ServiceExtraSet 带备注的协议端口信息。
                     */
                    std::vector<ServicesInfo> GetServiceExtraSet() const;

                    /**
                     * 设置带备注的协议端口信息。
                     * @param ServiceExtraSet 带备注的协议端口信息。
                     */
                    void SetServiceExtraSet(const std::vector<ServicesInfo>& _serviceExtraSet);

                    /**
                     * 判断参数 ServiceExtraSet 是否已赋值
                     * @return ServiceExtraSet 是否已赋值
                     */
                    bool ServiceExtraSetHasBeenSet() const;

                private:

                    /**
                     * 协议端口实例ID，例如：ppm-f5n1f8da。
                     */
                    std::string m_serviceTemplateId;
                    bool m_serviceTemplateIdHasBeenSet;

                    /**
                     * 模板名称。
                     */
                    std::string m_serviceTemplateName;
                    bool m_serviceTemplateNameHasBeenSet;

                    /**
                     * 协议端口信息。
                     */
                    std::vector<std::string> m_serviceSet;
                    bool m_serviceSetHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 带备注的协议端口信息。
                     */
                    std::vector<ServicesInfo> m_serviceExtraSet;
                    bool m_serviceExtraSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SERVICETEMPLATE_H_
