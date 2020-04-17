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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_OPENINGENDINGTASKRESULT_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_OPENINGENDINGTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/OpeningEndingTaskResultItem.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 片头片尾识别结果信息
                */
                class OpeningEndingTaskResult : public AbstractModel
                {
                public:
                    OpeningEndingTaskResult();
                    ~OpeningEndingTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取编辑任务状态。 
1：执行中；2：成功；3：失败。
                     * @return Status 编辑任务状态。 
1：执行中；2：成功；3：失败。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置编辑任务状态。 
1：执行中；2：成功；3：失败。
                     * @param Status 编辑任务状态。 
1：执行中；2：成功；3：失败。
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取编辑任务失败错误码。 
0：成功；其他值：失败。
                     * @return ErrCode 编辑任务失败错误码。 
0：成功；其他值：失败。
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置编辑任务失败错误码。 
0：成功；其他值：失败。
                     * @param ErrCode 编辑任务失败错误码。 
0：成功；其他值：失败。
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取编辑任务失败错误描述。
                     * @return ErrMsg 编辑任务失败错误描述。
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置编辑任务失败错误描述。
                     * @param ErrMsg 编辑任务失败错误描述。
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取片头片尾识别结果项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Item 片头片尾识别结果项。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OpeningEndingTaskResultItem GetItem() const;

                    /**
                     * 设置片头片尾识别结果项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Item 片头片尾识别结果项。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetItem(const OpeningEndingTaskResultItem& _item);

                    /**
                     * 判断参数 Item 是否已赋值
                     * @return Item 是否已赋值
                     */
                    bool ItemHasBeenSet() const;

                private:

                    /**
                     * 编辑任务状态。 
1：执行中；2：成功；3：失败。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 编辑任务失败错误码。 
0：成功；其他值：失败。
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 编辑任务失败错误描述。
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 片头片尾识别结果项。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OpeningEndingTaskResultItem m_item;
                    bool m_itemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_OPENINGENDINGTASKRESULT_H_
