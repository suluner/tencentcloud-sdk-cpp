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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_RRECTF_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_RRECTF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * logo位置信息
                */
                class RrectF : public AbstractModel
                {
                public:
                    RrectF();
                    ~RrectF() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取logo横坐标
                     * @return Cx logo横坐标
                     */
                    double GetCx() const;

                    /**
                     * 设置logo横坐标
                     * @param Cx logo横坐标
                     */
                    void SetCx(const double& _cx);

                    /**
                     * 判断参数 Cx 是否已赋值
                     * @return Cx 是否已赋值
                     */
                    bool CxHasBeenSet() const;

                    /**
                     * 获取logo纵坐标
                     * @return Cy logo纵坐标
                     */
                    double GetCy() const;

                    /**
                     * 设置logo纵坐标
                     * @param Cy logo纵坐标
                     */
                    void SetCy(const double& _cy);

                    /**
                     * 判断参数 Cy 是否已赋值
                     * @return Cy 是否已赋值
                     */
                    bool CyHasBeenSet() const;

                    /**
                     * 获取logo图标高度
                     * @return Height logo图标高度
                     */
                    double GetHeight() const;

                    /**
                     * 设置logo图标高度
                     * @param Height logo图标高度
                     */
                    void SetHeight(const double& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取logo图标中心旋转度
                     * @return Rotate logo图标中心旋转度
                     */
                    double GetRotate() const;

                    /**
                     * 设置logo图标中心旋转度
                     * @param Rotate logo图标中心旋转度
                     */
                    void SetRotate(const double& _rotate);

                    /**
                     * 判断参数 Rotate 是否已赋值
                     * @return Rotate 是否已赋值
                     */
                    bool RotateHasBeenSet() const;

                    /**
                     * 获取logo图标宽度
                     * @return Width logo图标宽度
                     */
                    double GetWidth() const;

                    /**
                     * 设置logo图标宽度
                     * @param Width logo图标宽度
                     */
                    void SetWidth(const double& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                private:

                    /**
                     * logo横坐标
                     */
                    double m_cx;
                    bool m_cxHasBeenSet;

                    /**
                     * logo纵坐标
                     */
                    double m_cy;
                    bool m_cyHasBeenSet;

                    /**
                     * logo图标高度
                     */
                    double m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * logo图标中心旋转度
                     */
                    double m_rotate;
                    bool m_rotateHasBeenSet;

                    /**
                     * logo图标宽度
                     */
                    double m_width;
                    bool m_widthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_RRECTF_H_
