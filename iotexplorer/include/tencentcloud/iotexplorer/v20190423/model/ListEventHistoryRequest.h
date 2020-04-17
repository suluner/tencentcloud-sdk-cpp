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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LISTEVENTHISTORYREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LISTEVENTHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * ListEventHistory请求参数结构体
                */
                class ListEventHistoryRequest : public AbstractModel
                {
                public:
                    ListEventHistoryRequest();
                    ~ListEventHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param ProductId 产品ID
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param DeviceName 设备名称
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取搜索的事件类型：alert 表示告警，fault 表示故障，info 表示信息，为空则表示查询上述所有类型事件
                     * @return Type 搜索的事件类型：alert 表示告警，fault 表示故障，info 表示信息，为空则表示查询上述所有类型事件
                     */
                    std::string GetType() const;

                    /**
                     * 设置搜索的事件类型：alert 表示告警，fault 表示故障，info 表示信息，为空则表示查询上述所有类型事件
                     * @param Type 搜索的事件类型：alert 表示告警，fault 表示故障，info 表示信息，为空则表示查询上述所有类型事件
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取起始时间（Unix 时间戳，秒级）, 为0 表示 当前时间 - 24h
                     * @return StartTime 起始时间（Unix 时间戳，秒级）, 为0 表示 当前时间 - 24h
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置起始时间（Unix 时间戳，秒级）, 为0 表示 当前时间 - 24h
                     * @param StartTime 起始时间（Unix 时间戳，秒级）, 为0 表示 当前时间 - 24h
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间（Unix 时间戳，秒级）, 为0 表示当前时间
                     * @return EndTime 结束时间（Unix 时间戳，秒级）, 为0 表示当前时间
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束时间（Unix 时间戳，秒级）, 为0 表示当前时间
                     * @param EndTime 结束时间（Unix 时间戳，秒级）, 为0 表示当前时间
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取搜索上下文, 用作查询游标
                     * @return Context 搜索上下文, 用作查询游标
                     */
                    std::string GetContext() const;

                    /**
                     * 设置搜索上下文, 用作查询游标
                     * @param Context 搜索上下文, 用作查询游标
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取单次获取的历史数据项目的最大数量
                     * @return Size 单次获取的历史数据项目的最大数量
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置单次获取的历史数据项目的最大数量
                     * @param Size 单次获取的历史数据项目的最大数量
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 搜索的事件类型：alert 表示告警，fault 表示故障，info 表示信息，为空则表示查询上述所有类型事件
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 起始时间（Unix 时间戳，秒级）, 为0 表示 当前时间 - 24h
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间（Unix 时间戳，秒级）, 为0 表示当前时间
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 搜索上下文, 用作查询游标
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 单次获取的历史数据项目的最大数量
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LISTEVENTHISTORYREQUEST_H_
