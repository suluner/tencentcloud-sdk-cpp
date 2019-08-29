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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEIMAGESPRITETEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEIMAGESPRITETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateImageSpriteTemplate请求参数结构体
                */
                class CreateImageSpriteTemplateRequest : public AbstractModel
                {
                public:
                    CreateImageSpriteTemplateRequest();
                    ~CreateImageSpriteTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取雪碧图中小图的宽度，取值范围： [128, 4096]，单位：px。
                     * @return Width 雪碧图中小图的宽度，取值范围： [128, 4096]，单位：px。
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置雪碧图中小图的宽度，取值范围： [128, 4096]，单位：px。
                     * @param Width 雪碧图中小图的宽度，取值范围： [128, 4096]，单位：px。
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取雪碧图中小图的高度，取值范围： [128, 4096]，单位：px。
                     * @return Height 雪碧图中小图的高度，取值范围： [128, 4096]，单位：px。
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置雪碧图中小图的高度，取值范围： [128, 4096]，单位：px。
                     * @param Height 雪碧图中小图的高度，取值范围： [128, 4096]，单位：px。
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取采样类型，取值：
<li>Percent：按百分比。</li>
<li>Time：按时间间隔。</li>
                     * @return SampleType 采样类型，取值：
<li>Percent：按百分比。</li>
<li>Time：按时间间隔。</li>
                     */
                    std::string GetSampleType() const;

                    /**
                     * 设置采样类型，取值：
<li>Percent：按百分比。</li>
<li>Time：按时间间隔。</li>
                     * @param SampleType 采样类型，取值：
<li>Percent：按百分比。</li>
<li>Time：按时间间隔。</li>
                     */
                    void SetSampleType(const std::string& _sampleType);

                    /**
                     * 判断参数 SampleType 是否已赋值
                     * @return SampleType 是否已赋值
                     */
                    bool SampleTypeHasBeenSet() const;

                    /**
                     * 获取采样间隔。
<li>当 SampleType 为 Percent 时，指定采样间隔的百分比。</li>
<li>当 SampleType 为 Time 时，指定采样间隔的时间，单位为秒。</li>
                     * @return SampleInterval 采样间隔。
<li>当 SampleType 为 Percent 时，指定采样间隔的百分比。</li>
<li>当 SampleType 为 Time 时，指定采样间隔的时间，单位为秒。</li>
                     */
                    uint64_t GetSampleInterval() const;

                    /**
                     * 设置采样间隔。
<li>当 SampleType 为 Percent 时，指定采样间隔的百分比。</li>
<li>当 SampleType 为 Time 时，指定采样间隔的时间，单位为秒。</li>
                     * @param SampleInterval 采样间隔。
<li>当 SampleType 为 Percent 时，指定采样间隔的百分比。</li>
<li>当 SampleType 为 Time 时，指定采样间隔的时间，单位为秒。</li>
                     */
                    void SetSampleInterval(const uint64_t& _sampleInterval);

                    /**
                     * 判断参数 SampleInterval 是否已赋值
                     * @return SampleInterval 是否已赋值
                     */
                    bool SampleIntervalHasBeenSet() const;

                    /**
                     * 获取雪碧图中小图的行数。
                     * @return RowCount 雪碧图中小图的行数。
                     */
                    uint64_t GetRowCount() const;

                    /**
                     * 设置雪碧图中小图的行数。
                     * @param RowCount 雪碧图中小图的行数。
                     */
                    void SetRowCount(const uint64_t& _rowCount);

                    /**
                     * 判断参数 RowCount 是否已赋值
                     * @return RowCount 是否已赋值
                     */
                    bool RowCountHasBeenSet() const;

                    /**
                     * 获取雪碧图中小图的列数。
                     * @return ColumnCount 雪碧图中小图的列数。
                     */
                    uint64_t GetColumnCount() const;

                    /**
                     * 设置雪碧图中小图的列数。
                     * @param ColumnCount 雪碧图中小图的列数。
                     */
                    void SetColumnCount(const uint64_t& _columnCount);

                    /**
                     * 判断参数 ColumnCount 是否已赋值
                     * @return ColumnCount 是否已赋值
                     */
                    bool ColumnCountHasBeenSet() const;

                    /**
                     * 获取雪碧图模板名称，长度限制：64 个字符。
                     * @return Name 雪碧图模板名称，长度限制：64 个字符。
                     */
                    std::string GetName() const;

                    /**
                     * 设置雪碧图模板名称，长度限制：64 个字符。
                     * @param Name 雪碧图模板名称，长度限制：64 个字符。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 雪碧图中小图的宽度，取值范围： [128, 4096]，单位：px。
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 雪碧图中小图的高度，取值范围： [128, 4096]，单位：px。
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 采样类型，取值：
<li>Percent：按百分比。</li>
<li>Time：按时间间隔。</li>
                     */
                    std::string m_sampleType;
                    bool m_sampleTypeHasBeenSet;

                    /**
                     * 采样间隔。
<li>当 SampleType 为 Percent 时，指定采样间隔的百分比。</li>
<li>当 SampleType 为 Time 时，指定采样间隔的时间，单位为秒。</li>
                     */
                    uint64_t m_sampleInterval;
                    bool m_sampleIntervalHasBeenSet;

                    /**
                     * 雪碧图中小图的行数。
                     */
                    uint64_t m_rowCount;
                    bool m_rowCountHasBeenSet;

                    /**
                     * 雪碧图中小图的列数。
                     */
                    uint64_t m_columnCount;
                    bool m_columnCountHasBeenSet;

                    /**
                     * 雪碧图模板名称，长度限制：64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEIMAGESPRITETEMPLATEREQUEST_H_
