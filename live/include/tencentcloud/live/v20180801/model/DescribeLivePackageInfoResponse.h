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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPACKAGEINFORESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPACKAGEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/LivePackageInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLivePackageInfo返回参数结构体
                */
                class DescribeLivePackageInfoResponse : public AbstractModel
                {
                public:
                    DescribeLivePackageInfoResponse();
                    ~DescribeLivePackageInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取套餐包信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LivePackageInfoList 套餐包信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LivePackageInfo> GetLivePackageInfoList() const;

                    /**
                     * 判断参数 LivePackageInfoList 是否已赋值
                     * @return LivePackageInfoList 是否已赋值
                     */
                    bool LivePackageInfoListHasBeenSet() const;

                    /**
                     * 获取套餐包当前计费方式:
-1: 无计费方式或获取失败
0: 无计费方式
201: 月结带宽
202: 月结流量
203: 日结带宽
204: 日结流量
205: 日结时长
206: 月结时长
304: 日结流量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageBillMode 套餐包当前计费方式:
-1: 无计费方式或获取失败
0: 无计费方式
201: 月结带宽
202: 月结流量
203: 日结带宽
204: 日结流量
205: 日结时长
206: 月结时长
304: 日结流量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPackageBillMode() const;

                    /**
                     * 判断参数 PackageBillMode 是否已赋值
                     * @return PackageBillMode 是否已赋值
                     */
                    bool PackageBillModeHasBeenSet() const;

                private:

                    /**
                     * 套餐包信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LivePackageInfo> m_livePackageInfoList;
                    bool m_livePackageInfoListHasBeenSet;

                    /**
                     * 套餐包当前计费方式:
-1: 无计费方式或获取失败
0: 无计费方式
201: 月结带宽
202: 月结流量
203: 日结带宽
204: 日结流量
205: 日结时长
206: 月结时长
304: 日结流量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_packageBillMode;
                    bool m_packageBillModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPACKAGEINFORESPONSE_H_
