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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATESTUDIOPRODUCTREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATESTUDIOPRODUCTREQUEST_H_

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
                * CreateStudioProduct请求参数结构体
                */
                class CreateStudioProductRequest : public AbstractModel
                {
                public:
                    CreateStudioProductRequest();
                    ~CreateStudioProductRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品名称，名称不能和已经存在的产品名称重复。命名规则：[a-zA-Z0-9:_-]{1,32}
                     * @return ProductName 产品名称，名称不能和已经存在的产品名称重复。命名规则：[a-zA-Z0-9:_-]{1,32}
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称，名称不能和已经存在的产品名称重复。命名规则：[a-zA-Z0-9:_-]{1,32}
                     * @param ProductName 产品名称，名称不能和已经存在的产品名称重复。命名规则：[a-zA-Z0-9:_-]{1,32}
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取产品分组模板ID , ( 自定义模板填写1 , 控制台调用会使用预置的其他ID)
                     * @return CategoryId 产品分组模板ID , ( 自定义模板填写1 , 控制台调用会使用预置的其他ID)
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置产品分组模板ID , ( 自定义模板填写1 , 控制台调用会使用预置的其他ID)
                     * @param CategoryId 产品分组模板ID , ( 自定义模板填写1 , 控制台调用会使用预置的其他ID)
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取产品类型 填写 ( 0 普通产品 )
                     * @return ProductType 产品类型 填写 ( 0 普通产品 )
                     */
                    int64_t GetProductType() const;

                    /**
                     * 设置产品类型 填写 ( 0 普通产品 )
                     * @param ProductType 产品类型 填写 ( 0 普通产品 )
                     */
                    void SetProductType(const int64_t& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取加密类型 加密类型，1表示证书认证，2表示签名认证。
                     * @return EncryptionType 加密类型 加密类型，1表示证书认证，2表示签名认证。
                     */
                    std::string GetEncryptionType() const;

                    /**
                     * 设置加密类型 加密类型，1表示证书认证，2表示签名认证。
                     * @param EncryptionType 加密类型 加密类型，1表示证书认证，2表示签名认证。
                     */
                    void SetEncryptionType(const std::string& _encryptionType);

                    /**
                     * 判断参数 EncryptionType 是否已赋值
                     * @return EncryptionType 是否已赋值
                     */
                    bool EncryptionTypeHasBeenSet() const;

                    /**
                     * 获取连接类型 可以填写 wifi cellular else
                     * @return NetType 连接类型 可以填写 wifi cellular else
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置连接类型 可以填写 wifi cellular else
                     * @param NetType 连接类型 可以填写 wifi cellular else
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取数据协议 (1 使用物模型 2 为自定义)
                     * @return DataProtocol 数据协议 (1 使用物模型 2 为自定义)
                     */
                    int64_t GetDataProtocol() const;

                    /**
                     * 设置数据协议 (1 使用物模型 2 为自定义)
                     * @param DataProtocol 数据协议 (1 使用物模型 2 为自定义)
                     */
                    void SetDataProtocol(const int64_t& _dataProtocol);

                    /**
                     * 判断参数 DataProtocol 是否已赋值
                     * @return DataProtocol 是否已赋值
                     */
                    bool DataProtocolHasBeenSet() const;

                    /**
                     * 获取产品描述
                     * @return ProductDesc 产品描述
                     */
                    std::string GetProductDesc() const;

                    /**
                     * 设置产品描述
                     * @param ProductDesc 产品描述
                     */
                    void SetProductDesc(const std::string& _productDesc);

                    /**
                     * 判断参数 ProductDesc 是否已赋值
                     * @return ProductDesc 是否已赋值
                     */
                    bool ProductDescHasBeenSet() const;

                    /**
                     * 获取产品的项目ID
                     * @return ProjectId 产品的项目ID
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置产品的项目ID
                     * @param ProjectId 产品的项目ID
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 产品名称，名称不能和已经存在的产品名称重复。命名规则：[a-zA-Z0-9:_-]{1,32}
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 产品分组模板ID , ( 自定义模板填写1 , 控制台调用会使用预置的其他ID)
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 产品类型 填写 ( 0 普通产品 )
                     */
                    int64_t m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * 加密类型 加密类型，1表示证书认证，2表示签名认证。
                     */
                    std::string m_encryptionType;
                    bool m_encryptionTypeHasBeenSet;

                    /**
                     * 连接类型 可以填写 wifi cellular else
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 数据协议 (1 使用物模型 2 为自定义)
                     */
                    int64_t m_dataProtocol;
                    bool m_dataProtocolHasBeenSet;

                    /**
                     * 产品描述
                     */
                    std::string m_productDesc;
                    bool m_productDescHasBeenSet;

                    /**
                     * 产品的项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATESTUDIOPRODUCTREQUEST_H_
