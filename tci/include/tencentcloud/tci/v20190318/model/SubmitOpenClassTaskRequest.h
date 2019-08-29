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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITOPENCLASSTASKREQUEST_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITOPENCLASSTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * SubmitOpenClassTask请求参数结构体
                */
                class SubmitOpenClassTaskRequest : public AbstractModel
                {
                public:
                    SubmitOpenClassTaskRequest();
                    ~SubmitOpenClassTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入分析对象内容
                     * @return FileContent 输入分析对象内容
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置输入分析对象内容
                     * @param FileContent 输入分析对象内容
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     */
                    bool FileContentHasBeenSet() const;

                    /**
                     * 获取输入分析对象类型，picture_url:图片地址，vod_url:视频地址，live_url：直播地址,picture: 图片二进制数据的BASE64编码
                     * @return FileType 输入分析对象类型，picture_url:图片地址，vod_url:视频地址，live_url：直播地址,picture: 图片二进制数据的BASE64编码
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置输入分析对象类型，picture_url:图片地址，vod_url:视频地址，live_url：直播地址,picture: 图片二进制数据的BASE64编码
                     * @param FileType 输入分析对象类型，picture_url:图片地址，vod_url:视频地址，live_url：直播地址,picture: 图片二进制数据的BASE64编码
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取查询人员库列表，可填写学生们的注册照所在人员库
                     * @return LibrarySet 查询人员库列表，可填写学生们的注册照所在人员库
                     */
                    std::vector<std::string> GetLibrarySet() const;

                    /**
                     * 设置查询人员库列表，可填写学生们的注册照所在人员库
                     * @param LibrarySet 查询人员库列表，可填写学生们的注册照所在人员库
                     */
                    void SetLibrarySet(const std::vector<std::string>& _librarySet);

                    /**
                     * 判断参数 LibrarySet 是否已赋值
                     * @return LibrarySet 是否已赋值
                     */
                    bool LibrarySetHasBeenSet() const;

                    /**
                     * 获取直播流评估时间，在FileType为live_url时生效，默认值为10分钟。
                     * @return MaxVideoDuration 直播流评估时间，在FileType为live_url时生效，默认值为10分钟。
                     */
                    int64_t GetMaxVideoDuration() const;

                    /**
                     * 设置直播流评估时间，在FileType为live_url时生效，默认值为10分钟。
                     * @param MaxVideoDuration 直播流评估时间，在FileType为live_url时生效，默认值为10分钟。
                     */
                    void SetMaxVideoDuration(const int64_t& _maxVideoDuration);

                    /**
                     * 判断参数 MaxVideoDuration 是否已赋值
                     * @return MaxVideoDuration 是否已赋值
                     */
                    bool MaxVideoDurationHasBeenSet() const;

                private:

                    /**
                     * 输入分析对象内容
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * 输入分析对象类型，picture_url:图片地址，vod_url:视频地址，live_url：直播地址,picture: 图片二进制数据的BASE64编码
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 查询人员库列表，可填写学生们的注册照所在人员库
                     */
                    std::vector<std::string> m_librarySet;
                    bool m_librarySetHasBeenSet;

                    /**
                     * 直播流评估时间，在FileType为live_url时生效，默认值为10分钟。
                     */
                    int64_t m_maxVideoDuration;
                    bool m_maxVideoDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITOPENCLASSTASKREQUEST_H_
