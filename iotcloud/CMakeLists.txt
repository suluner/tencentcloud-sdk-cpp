#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(iotcloud_public_header
  include/tencentcloud/iotcloud/v20210408/IotcloudClient.h
  include/tencentcloud/iotcloud/v20180614/IotcloudClient.h
  )

set(iotcloud_public_header_model
  include/tencentcloud/iotcloud/v20210408/model/DeleteProductRequest.h
  include/tencentcloud/iotcloud/v20210408/model/DescribePrivateCABindedProductsRequest.h
  include/tencentcloud/iotcloud/v20210408/model/DescribePrivateCAsResponse.h
  include/tencentcloud/iotcloud/v20210408/model/UpdateDevicesEnableStateResponse.h
  include/tencentcloud/iotcloud/v20210408/model/DescribePrivateCARequest.h
  include/tencentcloud/iotcloud/v20210408/model/DescribeProductCAResponse.h
  include/tencentcloud/iotcloud/v20210408/model/DeletePrivateCAResponse.h
  include/tencentcloud/iotcloud/v20210408/model/UpdatePrivateCARequest.h
  include/tencentcloud/iotcloud/v20210408/model/DescribePrivateCABindedProductsResponse.h
  include/tencentcloud/iotcloud/v20210408/model/DeleteDeviceRequest.h
  include/tencentcloud/iotcloud/v20210408/model/DeleteProductResponse.h
  include/tencentcloud/iotcloud/v20210408/model/CreatePrivateCAResponse.h
  include/tencentcloud/iotcloud/v20210408/model/BindProductInfo.h
  include/tencentcloud/iotcloud/v20210408/model/DescribeDevicesResponse.h
  include/tencentcloud/iotcloud/v20210408/model/DeviceTag.h
  include/tencentcloud/iotcloud/v20210408/model/DescribeProductCARequest.h
  include/tencentcloud/iotcloud/v20210408/model/CreatePrivateCARequest.h
  include/tencentcloud/iotcloud/v20210408/model/DescribeProductResponse.h
  include/tencentcloud/iotcloud/v20210408/model/DescribeDeviceRequest.h
  include/tencentcloud/iotcloud/v20210408/model/DeviceLabel.h
  include/tencentcloud/iotcloud/v20210408/model/CertInfo.h
  include/tencentcloud/iotcloud/v20210408/model/ProductMetadata.h
  include/tencentcloud/iotcloud/v20210408/model/DescribePrivateCAsRequest.h
  include/tencentcloud/iotcloud/v20210408/model/UpdatePrivateCAResponse.h
  include/tencentcloud/iotcloud/v20210408/model/DescribeDevicesRequest.h
  include/tencentcloud/iotcloud/v20210408/model/UpdateDeviceLogLevelRequest.h
  include/tencentcloud/iotcloud/v20210408/model/DescribePrivateCAResponse.h
  include/tencentcloud/iotcloud/v20210408/model/UpdateDeviceLogLevelResponse.h
  include/tencentcloud/iotcloud/v20210408/model/CreateDeviceResponse.h
  include/tencentcloud/iotcloud/v20210408/model/UpdateDevicesEnableStateRequest.h
  include/tencentcloud/iotcloud/v20210408/model/CreateDeviceRequest.h
  include/tencentcloud/iotcloud/v20210408/model/DescribeProductRequest.h
  include/tencentcloud/iotcloud/v20210408/model/Attribute.h
  include/tencentcloud/iotcloud/v20210408/model/DeleteDeviceResponse.h
  include/tencentcloud/iotcloud/v20210408/model/DeletePrivateCARequest.h
  include/tencentcloud/iotcloud/v20210408/model/DeviceInfo.h
  include/tencentcloud/iotcloud/v20210408/model/ProductProperties.h
  include/tencentcloud/iotcloud/v20210408/model/DescribeDeviceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/PublishMessageRequest.h
  include/tencentcloud/iotcloud/v20180614/model/UpdateDevicesEnableStateResponse.h
  include/tencentcloud/iotcloud/v20180614/model/UnbindDevicesRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeDeviceResourcesRequest.h
  include/tencentcloud/iotcloud/v20180614/model/BindDevicesRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeProductsRequest.h
  include/tencentcloud/iotcloud/v20180614/model/TopicRulePayload.h
  include/tencentcloud/iotcloud/v20180614/model/PayloadLogItem.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeFirmwareRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeDevicesResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DeleteTopicRuleResponse.h
  include/tencentcloud/iotcloud/v20180614/model/Task.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeProductTasksRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeTasksResponse.h
  include/tencentcloud/iotcloud/v20180614/model/UpdateDeviceShadowRequest.h
  include/tencentcloud/iotcloud/v20180614/model/ProductResourceInfo.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeMultiDevTaskRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeDeviceResourceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeProductResourcesRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeProductsResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeDeviceShadowResponse.h
  include/tencentcloud/iotcloud/v20180614/model/EnableTopicRuleResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribePushResourceTaskStatisticsResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CreateMultiDeviceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/PublishRRPCMessageRequest.h
  include/tencentcloud/iotcloud/v20180614/model/ProductProperties.h
  include/tencentcloud/iotcloud/v20180614/model/DeviceUpdateStatus.h
  include/tencentcloud/iotcloud/v20180614/model/BatchUpdateFirmwareResponse.h
  include/tencentcloud/iotcloud/v20180614/model/TaskInfo.h
  include/tencentcloud/iotcloud/v20180614/model/DeleteProductRequest.h
  include/tencentcloud/iotcloud/v20180614/model/StatusStatistic.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeTasksRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DownloadDeviceResourceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeDeviceResourceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/EditFirmwareRequest.h
  include/tencentcloud/iotcloud/v20180614/model/MultiDevicesInfo.h
  include/tencentcloud/iotcloud/v20180614/model/ResetDeviceStateRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeDeviceClientKeyRequest.h
  include/tencentcloud/iotcloud/v20180614/model/CLSLogItem.h
  include/tencentcloud/iotcloud/v20180614/model/BatchUpdateShadow.h
  include/tencentcloud/iotcloud/v20180614/model/DeleteDeviceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTaskDevicesRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeFirmwareResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeResourceTasksRequest.h
  include/tencentcloud/iotcloud/v20180614/model/CreateMultiDevicesTaskRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DeleteDeviceResourceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTaskStatisticsResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribePushResourceTaskStatisticsRequest.h
  include/tencentcloud/iotcloud/v20180614/model/CreateLoraDeviceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/UpdateDevicesEnableStateRequest.h
  include/tencentcloud/iotcloud/v20180614/model/ListSDKLogRequest.h
  include/tencentcloud/iotcloud/v20180614/model/SetProductsForbiddenStatusResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CreateProductResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CreateMultiDeviceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DeleteLoraDeviceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CreateTaskRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeAllDevicesRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeProductResourceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CancelDeviceFirmwareTaskResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CreateTopicPolicyResponse.h
  include/tencentcloud/iotcloud/v20180614/model/PublishToDeviceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/RetryDeviceFirmwareTaskResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CreateDeviceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DeleteLoraDeviceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/CreateDeviceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeProductTaskRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTaskResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CreateProductRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTasksRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DisableTopicRuleResponse.h
  include/tencentcloud/iotcloud/v20180614/model/BrokerSubscribe.h
  include/tencentcloud/iotcloud/v20180614/model/GetCOSURLRequest.h
  include/tencentcloud/iotcloud/v20180614/model/UpdateTopicPolicyResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeProductTaskResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeDeviceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/PublishBroadcastMessageRequest.h
  include/tencentcloud/iotcloud/v20180614/model/ListLogResponse.h
  include/tencentcloud/iotcloud/v20180614/model/RetryDeviceFirmwareTaskRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTaskDevicesResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTasksResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DeviceLabel.h
  include/tencentcloud/iotcloud/v20180614/model/GetCOSURLResponse.h
  include/tencentcloud/iotcloud/v20180614/model/UpdateDeviceAvailableStateResponse.h
  include/tencentcloud/iotcloud/v20180614/model/EditFirmwareResponse.h
  include/tencentcloud/iotcloud/v20180614/model/ListSDKLogResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CancelTaskRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTaskDistributionRequest.h
  include/tencentcloud/iotcloud/v20180614/model/UpdateDeviceAvailableStateRequest.h
  include/tencentcloud/iotcloud/v20180614/model/GetUserResourceInfoResponse.h
  include/tencentcloud/iotcloud/v20180614/model/ListLogPayloadResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DeleteProductResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DeviceProperty.h
  include/tencentcloud/iotcloud/v20180614/model/PublishToDeviceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/SetProductsForbiddenStatusRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DownloadDeviceResourceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/UploadFirmwareResponse.h
  include/tencentcloud/iotcloud/v20180614/model/ProductInfo.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTaskDistributionResponse.h
  include/tencentcloud/iotcloud/v20180614/model/PublishBroadcastMessageResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeDeviceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/CreateMultiDevicesTaskResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeProductResourcesResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CreateTopicPolicyRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeProductResourceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeLoraDeviceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/ProductTaskInfo.h
  include/tencentcloud/iotcloud/v20180614/model/ReplaceTopicRuleRequest.h
  include/tencentcloud/iotcloud/v20180614/model/PublishRRPCMessageResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CancelTaskResponse.h
  include/tencentcloud/iotcloud/v20180614/model/UpdateTopicPolicyRequest.h
  include/tencentcloud/iotcloud/v20180614/model/Attribute.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeDeviceResourcesResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CreateLoraDeviceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DeleteTopicRuleRequest.h
  include/tencentcloud/iotcloud/v20180614/model/ReplaceTopicRuleResponse.h
  include/tencentcloud/iotcloud/v20180614/model/PublishAsDeviceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/CancelDeviceFirmwareTaskRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DeleteDeviceResourceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeMultiDevicesResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeDeviceShadowRequest.h
  include/tencentcloud/iotcloud/v20180614/model/UnbindDevicesResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DeviceInfo.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeMultiDevicesRequest.h
  include/tencentcloud/iotcloud/v20180614/model/CreateTaskFileUrlRequest.h
  include/tencentcloud/iotcloud/v20180614/model/UpdateDeviceShadowResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeTaskResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CreateTaskResponse.h
  include/tencentcloud/iotcloud/v20180614/model/BatchPublishMessage.h
  include/tencentcloud/iotcloud/v20180614/model/BatchUpdateFirmwareRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeMultiDevTaskResponse.h
  include/tencentcloud/iotcloud/v20180614/model/GetUserResourceInfoRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DeviceTag.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeAllDevicesResponse.h
  include/tencentcloud/iotcloud/v20180614/model/ListLogRequest.h
  include/tencentcloud/iotcloud/v20180614/model/ProductMetadata.h
  include/tencentcloud/iotcloud/v20180614/model/SDKLogItem.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeLoraDeviceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeTaskRequest.h
  include/tencentcloud/iotcloud/v20180614/model/PublishMessageResponse.h
  include/tencentcloud/iotcloud/v20180614/model/BindDevicesResponse.h
  include/tencentcloud/iotcloud/v20180614/model/ResetDeviceResult.h
  include/tencentcloud/iotcloud/v20180614/model/SearchKeyword.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeDevicesRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeDeviceClientKeyResponse.h
  include/tencentcloud/iotcloud/v20180614/model/UploadFirmwareRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DisableTopicRuleRequest.h
  include/tencentcloud/iotcloud/v20180614/model/ResetDeviceStateResponse.h
  include/tencentcloud/iotcloud/v20180614/model/FirmwareTaskInfo.h
  include/tencentcloud/iotcloud/v20180614/model/CreateTopicRuleResponse.h
  include/tencentcloud/iotcloud/v20180614/model/ListLogPayloadRequest.h
  include/tencentcloud/iotcloud/v20180614/model/CreateTopicRuleRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeResourceTasksResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTaskStatisticsRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DeleteDeviceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CreateTaskFileUrlResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeProductTasksResponse.h
  include/tencentcloud/iotcloud/v20180614/model/PublishAsDeviceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/EnableTopicRuleRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DeviceResourceInfo.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTaskRequest.h
  )

set(iotcloud_src
  src/v20210408/IotcloudClient.cpp
  src/v20180614/IotcloudClient.cpp
  src/v20210408/model/DeleteProductRequest.cpp
  src/v20210408/model/DescribePrivateCABindedProductsRequest.cpp
  src/v20210408/model/DescribePrivateCAsResponse.cpp
  src/v20210408/model/UpdateDevicesEnableStateResponse.cpp
  src/v20210408/model/DescribePrivateCARequest.cpp
  src/v20210408/model/DescribeProductCAResponse.cpp
  src/v20210408/model/DeletePrivateCAResponse.cpp
  src/v20210408/model/UpdatePrivateCARequest.cpp
  src/v20210408/model/DescribePrivateCABindedProductsResponse.cpp
  src/v20210408/model/DeleteDeviceRequest.cpp
  src/v20210408/model/DeleteProductResponse.cpp
  src/v20210408/model/CreatePrivateCAResponse.cpp
  src/v20210408/model/BindProductInfo.cpp
  src/v20210408/model/DescribeDevicesResponse.cpp
  src/v20210408/model/DeviceTag.cpp
  src/v20210408/model/DescribeProductCARequest.cpp
  src/v20210408/model/CreatePrivateCARequest.cpp
  src/v20210408/model/DescribeProductResponse.cpp
  src/v20210408/model/DescribeDeviceRequest.cpp
  src/v20210408/model/DeviceLabel.cpp
  src/v20210408/model/CertInfo.cpp
  src/v20210408/model/ProductMetadata.cpp
  src/v20210408/model/DescribePrivateCAsRequest.cpp
  src/v20210408/model/UpdatePrivateCAResponse.cpp
  src/v20210408/model/DescribeDevicesRequest.cpp
  src/v20210408/model/UpdateDeviceLogLevelRequest.cpp
  src/v20210408/model/DescribePrivateCAResponse.cpp
  src/v20210408/model/UpdateDeviceLogLevelResponse.cpp
  src/v20210408/model/CreateDeviceResponse.cpp
  src/v20210408/model/UpdateDevicesEnableStateRequest.cpp
  src/v20210408/model/CreateDeviceRequest.cpp
  src/v20210408/model/DescribeProductRequest.cpp
  src/v20210408/model/Attribute.cpp
  src/v20210408/model/DeleteDeviceResponse.cpp
  src/v20210408/model/DeletePrivateCARequest.cpp
  src/v20210408/model/DeviceInfo.cpp
  src/v20210408/model/ProductProperties.cpp
  src/v20210408/model/DescribeDeviceResponse.cpp
  src/v20180614/model/PublishMessageRequest.cpp
  src/v20180614/model/UpdateDevicesEnableStateResponse.cpp
  src/v20180614/model/UnbindDevicesRequest.cpp
  src/v20180614/model/DescribeDeviceResourcesRequest.cpp
  src/v20180614/model/BindDevicesRequest.cpp
  src/v20180614/model/DescribeProductsRequest.cpp
  src/v20180614/model/TopicRulePayload.cpp
  src/v20180614/model/PayloadLogItem.cpp
  src/v20180614/model/DescribeFirmwareRequest.cpp
  src/v20180614/model/DescribeDevicesResponse.cpp
  src/v20180614/model/DeleteTopicRuleResponse.cpp
  src/v20180614/model/Task.cpp
  src/v20180614/model/DescribeProductTasksRequest.cpp
  src/v20180614/model/DescribeTasksResponse.cpp
  src/v20180614/model/UpdateDeviceShadowRequest.cpp
  src/v20180614/model/ProductResourceInfo.cpp
  src/v20180614/model/DescribeMultiDevTaskRequest.cpp
  src/v20180614/model/DescribeDeviceResourceResponse.cpp
  src/v20180614/model/DescribeProductResourcesRequest.cpp
  src/v20180614/model/DescribeProductsResponse.cpp
  src/v20180614/model/DescribeDeviceShadowResponse.cpp
  src/v20180614/model/EnableTopicRuleResponse.cpp
  src/v20180614/model/DescribePushResourceTaskStatisticsResponse.cpp
  src/v20180614/model/CreateMultiDeviceResponse.cpp
  src/v20180614/model/PublishRRPCMessageRequest.cpp
  src/v20180614/model/ProductProperties.cpp
  src/v20180614/model/DeviceUpdateStatus.cpp
  src/v20180614/model/BatchUpdateFirmwareResponse.cpp
  src/v20180614/model/TaskInfo.cpp
  src/v20180614/model/DeleteProductRequest.cpp
  src/v20180614/model/StatusStatistic.cpp
  src/v20180614/model/DescribeTasksRequest.cpp
  src/v20180614/model/DownloadDeviceResourceRequest.cpp
  src/v20180614/model/DescribeDeviceResourceRequest.cpp
  src/v20180614/model/EditFirmwareRequest.cpp
  src/v20180614/model/MultiDevicesInfo.cpp
  src/v20180614/model/ResetDeviceStateRequest.cpp
  src/v20180614/model/DescribeDeviceClientKeyRequest.cpp
  src/v20180614/model/CLSLogItem.cpp
  src/v20180614/model/BatchUpdateShadow.cpp
  src/v20180614/model/DeleteDeviceRequest.cpp
  src/v20180614/model/DescribeFirmwareTaskDevicesRequest.cpp
  src/v20180614/model/DescribeFirmwareResponse.cpp
  src/v20180614/model/DescribeResourceTasksRequest.cpp
  src/v20180614/model/CreateMultiDevicesTaskRequest.cpp
  src/v20180614/model/DeleteDeviceResourceResponse.cpp
  src/v20180614/model/DescribeFirmwareTaskStatisticsResponse.cpp
  src/v20180614/model/DescribePushResourceTaskStatisticsRequest.cpp
  src/v20180614/model/CreateLoraDeviceRequest.cpp
  src/v20180614/model/UpdateDevicesEnableStateRequest.cpp
  src/v20180614/model/ListSDKLogRequest.cpp
  src/v20180614/model/SetProductsForbiddenStatusResponse.cpp
  src/v20180614/model/CreateProductResponse.cpp
  src/v20180614/model/CreateMultiDeviceRequest.cpp
  src/v20180614/model/DeleteLoraDeviceResponse.cpp
  src/v20180614/model/CreateTaskRequest.cpp
  src/v20180614/model/DescribeAllDevicesRequest.cpp
  src/v20180614/model/DescribeProductResourceResponse.cpp
  src/v20180614/model/CancelDeviceFirmwareTaskResponse.cpp
  src/v20180614/model/CreateTopicPolicyResponse.cpp
  src/v20180614/model/PublishToDeviceResponse.cpp
  src/v20180614/model/RetryDeviceFirmwareTaskResponse.cpp
  src/v20180614/model/CreateDeviceResponse.cpp
  src/v20180614/model/DeleteLoraDeviceRequest.cpp
  src/v20180614/model/CreateDeviceRequest.cpp
  src/v20180614/model/DescribeProductTaskRequest.cpp
  src/v20180614/model/DescribeFirmwareTaskResponse.cpp
  src/v20180614/model/CreateProductRequest.cpp
  src/v20180614/model/DescribeFirmwareTasksRequest.cpp
  src/v20180614/model/DisableTopicRuleResponse.cpp
  src/v20180614/model/BrokerSubscribe.cpp
  src/v20180614/model/GetCOSURLRequest.cpp
  src/v20180614/model/UpdateTopicPolicyResponse.cpp
  src/v20180614/model/DescribeProductTaskResponse.cpp
  src/v20180614/model/DescribeDeviceResponse.cpp
  src/v20180614/model/PublishBroadcastMessageRequest.cpp
  src/v20180614/model/ListLogResponse.cpp
  src/v20180614/model/RetryDeviceFirmwareTaskRequest.cpp
  src/v20180614/model/DescribeFirmwareTaskDevicesResponse.cpp
  src/v20180614/model/DescribeFirmwareTasksResponse.cpp
  src/v20180614/model/DeviceLabel.cpp
  src/v20180614/model/GetCOSURLResponse.cpp
  src/v20180614/model/UpdateDeviceAvailableStateResponse.cpp
  src/v20180614/model/EditFirmwareResponse.cpp
  src/v20180614/model/ListSDKLogResponse.cpp
  src/v20180614/model/CancelTaskRequest.cpp
  src/v20180614/model/DescribeFirmwareTaskDistributionRequest.cpp
  src/v20180614/model/UpdateDeviceAvailableStateRequest.cpp
  src/v20180614/model/GetUserResourceInfoResponse.cpp
  src/v20180614/model/ListLogPayloadResponse.cpp
  src/v20180614/model/DeleteProductResponse.cpp
  src/v20180614/model/DeviceProperty.cpp
  src/v20180614/model/PublishToDeviceRequest.cpp
  src/v20180614/model/SetProductsForbiddenStatusRequest.cpp
  src/v20180614/model/DownloadDeviceResourceResponse.cpp
  src/v20180614/model/UploadFirmwareResponse.cpp
  src/v20180614/model/ProductInfo.cpp
  src/v20180614/model/DescribeFirmwareTaskDistributionResponse.cpp
  src/v20180614/model/PublishBroadcastMessageResponse.cpp
  src/v20180614/model/DescribeDeviceRequest.cpp
  src/v20180614/model/CreateMultiDevicesTaskResponse.cpp
  src/v20180614/model/DescribeProductResourcesResponse.cpp
  src/v20180614/model/CreateTopicPolicyRequest.cpp
  src/v20180614/model/DescribeProductResourceRequest.cpp
  src/v20180614/model/DescribeLoraDeviceResponse.cpp
  src/v20180614/model/ProductTaskInfo.cpp
  src/v20180614/model/ReplaceTopicRuleRequest.cpp
  src/v20180614/model/PublishRRPCMessageResponse.cpp
  src/v20180614/model/CancelTaskResponse.cpp
  src/v20180614/model/UpdateTopicPolicyRequest.cpp
  src/v20180614/model/Attribute.cpp
  src/v20180614/model/DescribeDeviceResourcesResponse.cpp
  src/v20180614/model/CreateLoraDeviceResponse.cpp
  src/v20180614/model/DeleteTopicRuleRequest.cpp
  src/v20180614/model/ReplaceTopicRuleResponse.cpp
  src/v20180614/model/PublishAsDeviceRequest.cpp
  src/v20180614/model/CancelDeviceFirmwareTaskRequest.cpp
  src/v20180614/model/DeleteDeviceResourceRequest.cpp
  src/v20180614/model/DescribeMultiDevicesResponse.cpp
  src/v20180614/model/DescribeDeviceShadowRequest.cpp
  src/v20180614/model/UnbindDevicesResponse.cpp
  src/v20180614/model/DeviceInfo.cpp
  src/v20180614/model/DescribeMultiDevicesRequest.cpp
  src/v20180614/model/CreateTaskFileUrlRequest.cpp
  src/v20180614/model/UpdateDeviceShadowResponse.cpp
  src/v20180614/model/DescribeTaskResponse.cpp
  src/v20180614/model/CreateTaskResponse.cpp
  src/v20180614/model/BatchPublishMessage.cpp
  src/v20180614/model/BatchUpdateFirmwareRequest.cpp
  src/v20180614/model/DescribeMultiDevTaskResponse.cpp
  src/v20180614/model/GetUserResourceInfoRequest.cpp
  src/v20180614/model/DeviceTag.cpp
  src/v20180614/model/DescribeAllDevicesResponse.cpp
  src/v20180614/model/ListLogRequest.cpp
  src/v20180614/model/ProductMetadata.cpp
  src/v20180614/model/SDKLogItem.cpp
  src/v20180614/model/DescribeLoraDeviceRequest.cpp
  src/v20180614/model/DescribeTaskRequest.cpp
  src/v20180614/model/PublishMessageResponse.cpp
  src/v20180614/model/BindDevicesResponse.cpp
  src/v20180614/model/ResetDeviceResult.cpp
  src/v20180614/model/SearchKeyword.cpp
  src/v20180614/model/DescribeDevicesRequest.cpp
  src/v20180614/model/DescribeDeviceClientKeyResponse.cpp
  src/v20180614/model/UploadFirmwareRequest.cpp
  src/v20180614/model/DisableTopicRuleRequest.cpp
  src/v20180614/model/ResetDeviceStateResponse.cpp
  src/v20180614/model/FirmwareTaskInfo.cpp
  src/v20180614/model/CreateTopicRuleResponse.cpp
  src/v20180614/model/ListLogPayloadRequest.cpp
  src/v20180614/model/CreateTopicRuleRequest.cpp
  src/v20180614/model/DescribeResourceTasksResponse.cpp
  src/v20180614/model/DescribeFirmwareTaskStatisticsRequest.cpp
  src/v20180614/model/DeleteDeviceResponse.cpp
  src/v20180614/model/CreateTaskFileUrlResponse.cpp
  src/v20180614/model/DescribeProductTasksResponse.cpp
  src/v20180614/model/PublishAsDeviceResponse.cpp
  src/v20180614/model/EnableTopicRuleRequest.cpp
  src/v20180614/model/DeviceResourceInfo.cpp
  src/v20180614/model/DescribeFirmwareTaskRequest.cpp
  )

set(iotcloud_include
    include/tencentcloud/iotcloud
  )

add_library(iotcloud ${LIB_TYPE}
  ${iotcloud_public_header}
  ${iotcloud_public_header_model}
  ${iotcloud_src})

set_target_properties(iotcloud
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}iotcloud
  )

target_include_directories(iotcloud
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(iotcloud
  core)

#install(FILES ${iotcloud_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iotcloud/v20180614)
#install(FILES ${iotcloud_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iotcloud/v20180614/model)
install(DIRECTORY ${iotcloud_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS iotcloud
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
