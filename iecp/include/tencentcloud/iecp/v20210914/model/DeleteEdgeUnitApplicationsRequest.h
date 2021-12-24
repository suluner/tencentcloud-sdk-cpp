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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DELETEEDGEUNITAPPLICATIONSREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DELETEEDGEUNITAPPLICATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DeleteEdgeUnitApplications请求参数结构体
                */
                class DeleteEdgeUnitApplicationsRequest : public AbstractModel
                {
                public:
                    DeleteEdgeUnitApplicationsRequest();
                    ~DeleteEdgeUnitApplicationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取单元ID
                     * @return EdgeUnitID 单元ID
                     */
                    uint64_t GetEdgeUnitID() const;

                    /**
                     * 设置单元ID
                     * @param EdgeUnitID 单元ID
                     */
                    void SetEdgeUnitID(const uint64_t& _edgeUnitID);

                    /**
                     * 判断参数 EdgeUnitID 是否已赋值
                     * @return EdgeUnitID 是否已赋值
                     */
                    bool EdgeUnitIDHasBeenSet() const;

                    /**
                     * 获取应用ID列表
                     * @return ApplicationIDs 应用ID列表
                     */
                    std::vector<uint64_t> GetApplicationIDs() const;

                    /**
                     * 设置应用ID列表
                     * @param ApplicationIDs 应用ID列表
                     */
                    void SetApplicationIDs(const std::vector<uint64_t>& _applicationIDs);

                    /**
                     * 判断参数 ApplicationIDs 是否已赋值
                     * @return ApplicationIDs 是否已赋值
                     */
                    bool ApplicationIDsHasBeenSet() const;

                private:

                    /**
                     * 单元ID
                     */
                    uint64_t m_edgeUnitID;
                    bool m_edgeUnitIDHasBeenSet;

                    /**
                     * 应用ID列表
                     */
                    std::vector<uint64_t> m_applicationIDs;
                    bool m_applicationIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DELETEEDGEUNITAPPLICATIONSREQUEST_H_
