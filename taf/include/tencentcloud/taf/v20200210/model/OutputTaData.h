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

#ifndef TENCENTCLOUD_TAF_V20200210_MODEL_OUTPUTTADATA_H_
#define TENCENTCLOUD_TAF_V20200210_MODEL_OUTPUTTADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/taf/v20200210/model/OutputTaValue.h>


namespace TencentCloud
{
    namespace Taf
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 流量反欺诈-虚假TA识别
                */
                class OutputTaData : public AbstractModel
                {
                public:
                    OutputTaData();
                    ~OutputTaData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取错误码[0:成功；非0：失败的错误码]
                     * @return Code 错误码[0:成功；非0：失败的错误码]
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置错误码[0:成功；非0：失败的错误码]
                     * @param Code 错误码[0:成功；非0：失败的错误码]
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Message 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取结果数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 结果数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OutputTaValue GetValue() const;

                    /**
                     * 设置结果数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Value 结果数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetValue(const OutputTaValue& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 错误码[0:成功；非0：失败的错误码]
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 结果数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OutputTaValue m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAF_V20200210_MODEL_OUTPUTTADATA_H_
