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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ALARMNOTICE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ALARMNOTICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/NoticeReceiver.h>
#include <tencentcloud/cls/v20201016/model/WebCallback.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 告警通知模板类型
                */
                class AlarmNotice : public AbstractModel
                {
                public:
                    AlarmNotice();
                    ~AlarmNotice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警通知模板名称。
                     * @return Name 告警通知模板名称。
                     */
                    std::string GetName() const;

                    /**
                     * 设置告警通知模板名称。
                     * @param Name 告警通知模板名称。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取告警模板的类型。可选值：
<br><li> Trigger - 告警触发
<br><li> Recovery - 告警恢复
<br><li> All - 告警触发和告警恢复
                     * @return Type 告警模板的类型。可选值：
<br><li> Trigger - 告警触发
<br><li> Recovery - 告警恢复
<br><li> All - 告警触发和告警恢复
                     */
                    std::string GetType() const;

                    /**
                     * 设置告警模板的类型。可选值：
<br><li> Trigger - 告警触发
<br><li> Recovery - 告警恢复
<br><li> All - 告警触发和告警恢复
                     * @param Type 告警模板的类型。可选值：
<br><li> Trigger - 告警触发
<br><li> Recovery - 告警恢复
<br><li> All - 告警触发和告警恢复
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取告警通知模板接收者信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoticeReceivers 告警通知模板接收者信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NoticeReceiver> GetNoticeReceivers() const;

                    /**
                     * 设置告警通知模板接收者信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NoticeReceivers 告警通知模板接收者信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNoticeReceivers(const std::vector<NoticeReceiver>& _noticeReceivers);

                    /**
                     * 判断参数 NoticeReceivers 是否已赋值
                     * @return NoticeReceivers 是否已赋值
                     */
                    bool NoticeReceiversHasBeenSet() const;

                    /**
                     * 获取告警通知模板回调信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebCallbacks 告警通知模板回调信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WebCallback> GetWebCallbacks() const;

                    /**
                     * 设置告警通知模板回调信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WebCallbacks 告警通知模板回调信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWebCallbacks(const std::vector<WebCallback>& _webCallbacks);

                    /**
                     * 判断参数 WebCallbacks 是否已赋值
                     * @return WebCallbacks 是否已赋值
                     */
                    bool WebCallbacksHasBeenSet() const;

                    /**
                     * 获取告警通知模板ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmNoticeId 告警通知模板ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAlarmNoticeId() const;

                    /**
                     * 设置告警通知模板ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AlarmNoticeId 告警通知模板ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAlarmNoticeId(const std::string& _alarmNoticeId);

                    /**
                     * 判断参数 AlarmNoticeId 是否已赋值
                     * @return AlarmNoticeId 是否已赋值
                     */
                    bool AlarmNoticeIdHasBeenSet() const;

                    /**
                     * 获取创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最近更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 最近更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最近更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 最近更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 告警通知模板名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 告警模板的类型。可选值：
<br><li> Trigger - 告警触发
<br><li> Recovery - 告警恢复
<br><li> All - 告警触发和告警恢复
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 告警通知模板接收者信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NoticeReceiver> m_noticeReceivers;
                    bool m_noticeReceiversHasBeenSet;

                    /**
                     * 告警通知模板回调信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WebCallback> m_webCallbacks;
                    bool m_webCallbacksHasBeenSet;

                    /**
                     * 告警通知模板ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmNoticeId;
                    bool m_alarmNoticeIdHasBeenSet;

                    /**
                     * 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALARMNOTICE_H_
