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

set(ess_public_header
  include/tencentcloud/ess/v20201111/EssClient.h
  )

set(ess_public_header_model
  include/tencentcloud/ess/v20201111/model/DescribeFileUrlsResponse.h
  include/tencentcloud/ess/v20201111/model/CreateDocumentResponse.h
  include/tencentcloud/ess/v20201111/model/StartFlowRequest.h
  include/tencentcloud/ess/v20201111/model/CancelFlowResponse.h
  include/tencentcloud/ess/v20201111/model/CreateDocumentRequest.h
  include/tencentcloud/ess/v20201111/model/CreateFlowRequest.h
  include/tencentcloud/ess/v20201111/model/CreateSchemeUrlRequest.h
  include/tencentcloud/ess/v20201111/model/FileUrl.h
  include/tencentcloud/ess/v20201111/model/DescribeThirdPartyAuthCodeRequest.h
  include/tencentcloud/ess/v20201111/model/CancelFlowRequest.h
  include/tencentcloud/ess/v20201111/model/DescribeFlowBriefsResponse.h
  include/tencentcloud/ess/v20201111/model/Component.h
  include/tencentcloud/ess/v20201111/model/DescribeThirdPartyAuthCodeResponse.h
  include/tencentcloud/ess/v20201111/model/CreateFlowByFilesResponse.h
  include/tencentcloud/ess/v20201111/model/DescribeFlowBriefsRequest.h
  include/tencentcloud/ess/v20201111/model/DescribeFileUrlsRequest.h
  include/tencentcloud/ess/v20201111/model/ApproverInfo.h
  include/tencentcloud/ess/v20201111/model/StartFlowResponse.h
  include/tencentcloud/ess/v20201111/model/FlowCreateApprover.h
  include/tencentcloud/ess/v20201111/model/CreateSchemeUrlResponse.h
  include/tencentcloud/ess/v20201111/model/CreateFlowByFilesRequest.h
  include/tencentcloud/ess/v20201111/model/CreateFlowResponse.h
  include/tencentcloud/ess/v20201111/model/Agent.h
  include/tencentcloud/ess/v20201111/model/FormField.h
  include/tencentcloud/ess/v20201111/model/UserInfo.h
  include/tencentcloud/ess/v20201111/model/FlowBrief.h
  include/tencentcloud/ess/v20201111/model/CcInfo.h
  )

set(ess_src
  src/v20201111/EssClient.cpp
  src/v20201111/model/DescribeFileUrlsResponse.cpp
  src/v20201111/model/CreateDocumentResponse.cpp
  src/v20201111/model/StartFlowRequest.cpp
  src/v20201111/model/CancelFlowResponse.cpp
  src/v20201111/model/CreateDocumentRequest.cpp
  src/v20201111/model/CreateFlowRequest.cpp
  src/v20201111/model/CreateSchemeUrlRequest.cpp
  src/v20201111/model/FileUrl.cpp
  src/v20201111/model/DescribeThirdPartyAuthCodeRequest.cpp
  src/v20201111/model/CancelFlowRequest.cpp
  src/v20201111/model/DescribeFlowBriefsResponse.cpp
  src/v20201111/model/Component.cpp
  src/v20201111/model/DescribeThirdPartyAuthCodeResponse.cpp
  src/v20201111/model/CreateFlowByFilesResponse.cpp
  src/v20201111/model/DescribeFlowBriefsRequest.cpp
  src/v20201111/model/DescribeFileUrlsRequest.cpp
  src/v20201111/model/ApproverInfo.cpp
  src/v20201111/model/StartFlowResponse.cpp
  src/v20201111/model/FlowCreateApprover.cpp
  src/v20201111/model/CreateSchemeUrlResponse.cpp
  src/v20201111/model/CreateFlowByFilesRequest.cpp
  src/v20201111/model/CreateFlowResponse.cpp
  src/v20201111/model/Agent.cpp
  src/v20201111/model/FormField.cpp
  src/v20201111/model/UserInfo.cpp
  src/v20201111/model/FlowBrief.cpp
  src/v20201111/model/CcInfo.cpp
  )

set(ess_include
    include/tencentcloud/ess
  )

add_library(ess ${LIB_TYPE}
  ${ess_public_header}
  ${ess_public_header_model}
  ${ess_src})

set_target_properties(ess
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ess
  )

target_include_directories(ess
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ess
  core)

#install(FILES ${ess_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ess/v20201111)
#install(FILES ${ess_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ess/v20201111/model)
install(DIRECTORY ${ess_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ess
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
