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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAMETADATA_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaVideoStreamItem.h>
#include <tencentcloud/mps/v20190612/model/MediaAudioStreamItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 点播媒体文件元信息
                */
                class MediaMetaData : public AbstractModel
                {
                public:
                    MediaMetaData();
                    ~MediaMetaData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取上传的媒体文件大小（视频为 HLS 时，大小是 m3u8 和 ts 文件大小的总和），单位：字节。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size 上传的媒体文件大小（视频为 HLS 时，大小是 m3u8 和 ts 文件大小的总和），单位：字节。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置上传的媒体文件大小（视频为 HLS 时，大小是 m3u8 和 ts 文件大小的总和），单位：字节。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Size 上传的媒体文件大小（视频为 HLS 时，大小是 m3u8 和 ts 文件大小的总和），单位：字节。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取容器类型，例如 m4a，mp4 等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Container 容器类型，例如 m4a，mp4 等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置容器类型，例如 m4a，mp4 等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Container 容器类型，例如 m4a，mp4 等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取视频流码率平均值与音频流码率平均值之和，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bitrate 视频流码率平均值与音频流码率平均值之和，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置视频流码率平均值与音频流码率平均值之和，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Bitrate 视频流码率平均值与音频流码率平均值之和，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取视频流高度的最大值，单位：px。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Height 视频流高度的最大值，单位：px。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置视频流高度的最大值，单位：px。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Height 视频流高度的最大值，单位：px。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取视频流宽度的最大值，单位：px。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Width 视频流宽度的最大值，单位：px。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置视频流宽度的最大值，单位：px。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Width 视频流宽度的最大值，单位：px。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取视频时长，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 视频时长，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetDuration() const;

                    /**
                     * 设置视频时长，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Duration 视频时长，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取视频拍摄时的选择角度，单位：度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rotate 视频拍摄时的选择角度，单位：度。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRotate() const;

                    /**
                     * 设置视频拍摄时的选择角度，单位：度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Rotate 视频拍摄时的选择角度，单位：度。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRotate(const int64_t& _rotate);

                    /**
                     * 判断参数 Rotate 是否已赋值
                     * @return Rotate 是否已赋值
                     */
                    bool RotateHasBeenSet() const;

                    /**
                     * 获取视频流信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoStreamSet 视频流信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MediaVideoStreamItem> GetVideoStreamSet() const;

                    /**
                     * 设置视频流信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VideoStreamSet 视频流信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVideoStreamSet(const std::vector<MediaVideoStreamItem>& _videoStreamSet);

                    /**
                     * 判断参数 VideoStreamSet 是否已赋值
                     * @return VideoStreamSet 是否已赋值
                     */
                    bool VideoStreamSetHasBeenSet() const;

                    /**
                     * 获取音频流信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioStreamSet 音频流信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MediaAudioStreamItem> GetAudioStreamSet() const;

                    /**
                     * 设置音频流信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AudioStreamSet 音频流信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAudioStreamSet(const std::vector<MediaAudioStreamItem>& _audioStreamSet);

                    /**
                     * 判断参数 AudioStreamSet 是否已赋值
                     * @return AudioStreamSet 是否已赋值
                     */
                    bool AudioStreamSetHasBeenSet() const;

                    /**
                     * 获取视频时长，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoDuration 视频时长，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetVideoDuration() const;

                    /**
                     * 设置视频时长，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VideoDuration 视频时长，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVideoDuration(const double& _videoDuration);

                    /**
                     * 判断参数 VideoDuration 是否已赋值
                     * @return VideoDuration 是否已赋值
                     */
                    bool VideoDurationHasBeenSet() const;

                    /**
                     * 获取音频时长，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioDuration 音频时长，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetAudioDuration() const;

                    /**
                     * 设置音频时长，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AudioDuration 音频时长，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAudioDuration(const double& _audioDuration);

                    /**
                     * 判断参数 AudioDuration 是否已赋值
                     * @return AudioDuration 是否已赋值
                     */
                    bool AudioDurationHasBeenSet() const;

                private:

                    /**
                     * 上传的媒体文件大小（视频为 HLS 时，大小是 m3u8 和 ts 文件大小的总和），单位：字节。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 容器类型，例如 m4a，mp4 等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * 视频流码率平均值与音频流码率平均值之和，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 视频流高度的最大值，单位：px。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 视频流宽度的最大值，单位：px。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 视频时长，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 视频拍摄时的选择角度，单位：度。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rotate;
                    bool m_rotateHasBeenSet;

                    /**
                     * 视频流信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MediaVideoStreamItem> m_videoStreamSet;
                    bool m_videoStreamSetHasBeenSet;

                    /**
                     * 音频流信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MediaAudioStreamItem> m_audioStreamSet;
                    bool m_audioStreamSetHasBeenSet;

                    /**
                     * 视频时长，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_videoDuration;
                    bool m_videoDurationHasBeenSet;

                    /**
                     * 音频时长，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_audioDuration;
                    bool m_audioDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAMETADATA_H_
