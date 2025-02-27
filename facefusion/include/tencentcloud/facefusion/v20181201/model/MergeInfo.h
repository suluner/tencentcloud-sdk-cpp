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

#ifndef TENCENTCLOUD_FACEFUSION_V20181201_MODEL_MERGEINFO_H_
#define TENCENTCLOUD_FACEFUSION_V20181201_MODEL_MERGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/facefusion/v20181201/model/FaceRect.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20181201
        {
            namespace Model
            {
                /**
                * 人脸图片和待被融合的素材模板图的人脸位置信息。
                */
                class MergeInfo : public AbstractModel
                {
                public:
                    MergeInfo();
                    ~MergeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入图片base64
                     * @return Image 输入图片base64
                     */
                    std::string GetImage() const;

                    /**
                     * 设置输入图片base64
                     * @param Image 输入图片base64
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取输入图片url
                     * @return Url 输入图片url
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置输入图片url
                     * @param Url 输入图片url
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取上传的图片人脸位置信息（人脸框）
                     * @return InputImageFaceRect 上传的图片人脸位置信息（人脸框）
                     */
                    FaceRect GetInputImageFaceRect() const;

                    /**
                     * 设置上传的图片人脸位置信息（人脸框）
                     * @param InputImageFaceRect 上传的图片人脸位置信息（人脸框）
                     */
                    void SetInputImageFaceRect(const FaceRect& _inputImageFaceRect);

                    /**
                     * 判断参数 InputImageFaceRect 是否已赋值
                     * @return InputImageFaceRect 是否已赋值
                     */
                    bool InputImageFaceRectHasBeenSet() const;

                    /**
                     * 获取控制台上传的素材人脸ID，不填默认取最大人脸
                     * @return TemplateFaceID 控制台上传的素材人脸ID，不填默认取最大人脸
                     */
                    std::string GetTemplateFaceID() const;

                    /**
                     * 设置控制台上传的素材人脸ID，不填默认取最大人脸
                     * @param TemplateFaceID 控制台上传的素材人脸ID，不填默认取最大人脸
                     */
                    void SetTemplateFaceID(const std::string& _templateFaceID);

                    /**
                     * 判断参数 TemplateFaceID 是否已赋值
                     * @return TemplateFaceID 是否已赋值
                     */
                    bool TemplateFaceIDHasBeenSet() const;

                private:

                    /**
                     * 输入图片base64
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 输入图片url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 上传的图片人脸位置信息（人脸框）
                     */
                    FaceRect m_inputImageFaceRect;
                    bool m_inputImageFaceRectHasBeenSet;

                    /**
                     * 控制台上传的素材人脸ID，不填默认取最大人脸
                     */
                    std::string m_templateFaceID;
                    bool m_templateFaceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20181201_MODEL_MERGEINFO_H_
