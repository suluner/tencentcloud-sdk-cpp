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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_SRCIMAGE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_SRCIMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 镜像来源信息
                */
                class SrcImage : public AbstractModel
                {
                public:
                    SrcImage();
                    ~SrcImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像id
                     * @return ImageId 镜像id
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像id
                     * @param ImageId 镜像id
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取镜像名称
                     * @return ImageName 镜像名称
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称
                     * @param ImageName 镜像名称
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取系统名称
                     * @return ImageOsName 系统名称
                     */
                    std::string GetImageOsName() const;

                    /**
                     * 设置系统名称
                     * @param ImageOsName 系统名称
                     */
                    void SetImageOsName(const std::string& _imageOsName);

                    /**
                     * 判断参数 ImageOsName 是否已赋值
                     * @return ImageOsName 是否已赋值
                     */
                    bool ImageOsNameHasBeenSet() const;

                    /**
                     * 获取镜像描述
                     * @return ImageDescription 镜像描述
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置镜像描述
                     * @param ImageDescription 镜像描述
                     */
                    void SetImageDescription(const std::string& _imageDescription);

                    /**
                     * 判断参数 ImageDescription 是否已赋值
                     * @return ImageDescription 是否已赋值
                     */
                    bool ImageDescriptionHasBeenSet() const;

                    /**
                     * 获取区域
                     * @return Region 区域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置区域
                     * @param Region 区域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取区域ID
                     * @return RegionID 区域ID
                     */
                    int64_t GetRegionID() const;

                    /**
                     * 设置区域ID
                     * @param RegionID 区域ID
                     */
                    void SetRegionID(const int64_t& _regionID);

                    /**
                     * 判断参数 RegionID 是否已赋值
                     * @return RegionID 是否已赋值
                     */
                    bool RegionIDHasBeenSet() const;

                    /**
                     * 获取区域名称
                     * @return RegionName 区域名称
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置区域名称
                     * @param RegionName 区域名称
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     */
                    bool RegionNameHasBeenSet() const;

                private:

                    /**
                     * 镜像id
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 系统名称
                     */
                    std::string m_imageOsName;
                    bool m_imageOsNameHasBeenSet;

                    /**
                     * 镜像描述
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                    /**
                     * 区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 区域ID
                     */
                    int64_t m_regionID;
                    bool m_regionIDHasBeenSet;

                    /**
                     * 区域名称
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_SRCIMAGE_H_
