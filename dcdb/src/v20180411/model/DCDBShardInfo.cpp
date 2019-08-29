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

#include <tencentcloud/dcdb/v20180411/model/DCDBShardInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace rapidjson;
using namespace std;

DCDBShardInfo::DCDBShardInfo() :
    m_instanceIdHasBeenSet(false),
    m_shardSerialIdHasBeenSet(false),
    m_shardInstanceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_periodEndTimeHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_storageUsageHasBeenSet(false),
    m_memoryUsageHasBeenSet(false),
    m_shardIdHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_proxyVersionHasBeenSet(false)
{
}

CoreInternalOutcome DCDBShardInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DCDBShardInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ShardSerialId") && !value["ShardSerialId"].IsNull())
    {
        if (!value["ShardSerialId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DCDBShardInfo.ShardSerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardSerialId = string(value["ShardSerialId"].GetString());
        m_shardSerialIdHasBeenSet = true;
    }

    if (value.HasMember("ShardInstanceId") && !value["ShardInstanceId"].IsNull())
    {
        if (!value["ShardInstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DCDBShardInfo.ShardInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardInstanceId = string(value["ShardInstanceId"].GetString());
        m_shardInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DCDBShardInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `DCDBShardInfo.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DCDBShardInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DCDBShardInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DCDBShardInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DCDBShardInfo.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `DCDBShardInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Error("response `DCDBShardInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DCDBShardInfo.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DCDBShardInfo.Storage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetInt64();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("PeriodEndTime") && !value["PeriodEndTime"].IsNull())
    {
        if (!value["PeriodEndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DCDBShardInfo.PeriodEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodEndTime = string(value["PeriodEndTime"].GetString());
        m_periodEndTimeHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DCDBShardInfo.NodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetInt64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("StorageUsage") && !value["StorageUsage"].IsNull())
    {
        if (!value["StorageUsage"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `DCDBShardInfo.StorageUsage` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_storageUsage = value["StorageUsage"].GetDouble();
        m_storageUsageHasBeenSet = true;
    }

    if (value.HasMember("MemoryUsage") && !value["MemoryUsage"].IsNull())
    {
        if (!value["MemoryUsage"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `DCDBShardInfo.MemoryUsage` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memoryUsage = value["MemoryUsage"].GetDouble();
        m_memoryUsageHasBeenSet = true;
    }

    if (value.HasMember("ShardId") && !value["ShardId"].IsNull())
    {
        if (!value["ShardId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DCDBShardInfo.ShardId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shardId = value["ShardId"].GetInt64();
        m_shardIdHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DCDBShardInfo.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("ProxyVersion") && !value["ProxyVersion"].IsNull())
    {
        if (!value["ProxyVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `DCDBShardInfo.ProxyVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyVersion = string(value["ProxyVersion"].GetString());
        m_proxyVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DCDBShardInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_shardSerialIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ShardSerialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_shardSerialId.c_str(), allocator).Move(), allocator);
    }

    if (m_shardInstanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ShardInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_shardInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_storageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storage, allocator);
    }

    if (m_periodEndTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PeriodEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_periodEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_storageUsageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StorageUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageUsage, allocator);
    }

    if (m_memoryUsageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemoryUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryUsage, allocator);
    }

    if (m_shardIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ShardId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shardId, allocator);
    }

    if (m_pidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

    if (m_proxyVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_proxyVersion.c_str(), allocator).Move(), allocator);
    }

}


string DCDBShardInfo::GetInstanceId() const
{
    return m_instanceId;
}

void DCDBShardInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DCDBShardInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DCDBShardInfo::GetShardSerialId() const
{
    return m_shardSerialId;
}

void DCDBShardInfo::SetShardSerialId(const string& _shardSerialId)
{
    m_shardSerialId = _shardSerialId;
    m_shardSerialIdHasBeenSet = true;
}

bool DCDBShardInfo::ShardSerialIdHasBeenSet() const
{
    return m_shardSerialIdHasBeenSet;
}

string DCDBShardInfo::GetShardInstanceId() const
{
    return m_shardInstanceId;
}

void DCDBShardInfo::SetShardInstanceId(const string& _shardInstanceId)
{
    m_shardInstanceId = _shardInstanceId;
    m_shardInstanceIdHasBeenSet = true;
}

bool DCDBShardInfo::ShardInstanceIdHasBeenSet() const
{
    return m_shardInstanceIdHasBeenSet;
}

int64_t DCDBShardInfo::GetStatus() const
{
    return m_status;
}

void DCDBShardInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DCDBShardInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DCDBShardInfo::GetStatusDesc() const
{
    return m_statusDesc;
}

void DCDBShardInfo::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool DCDBShardInfo::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string DCDBShardInfo::GetCreateTime() const
{
    return m_createTime;
}

void DCDBShardInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DCDBShardInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DCDBShardInfo::GetVpcId() const
{
    return m_vpcId;
}

void DCDBShardInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DCDBShardInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DCDBShardInfo::GetSubnetId() const
{
    return m_subnetId;
}

void DCDBShardInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DCDBShardInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t DCDBShardInfo::GetProjectId() const
{
    return m_projectId;
}

void DCDBShardInfo::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DCDBShardInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DCDBShardInfo::GetRegion() const
{
    return m_region;
}

void DCDBShardInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DCDBShardInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DCDBShardInfo::GetZone() const
{
    return m_zone;
}

void DCDBShardInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DCDBShardInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t DCDBShardInfo::GetMemory() const
{
    return m_memory;
}

void DCDBShardInfo::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool DCDBShardInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t DCDBShardInfo::GetStorage() const
{
    return m_storage;
}

void DCDBShardInfo::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool DCDBShardInfo::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string DCDBShardInfo::GetPeriodEndTime() const
{
    return m_periodEndTime;
}

void DCDBShardInfo::SetPeriodEndTime(const string& _periodEndTime)
{
    m_periodEndTime = _periodEndTime;
    m_periodEndTimeHasBeenSet = true;
}

bool DCDBShardInfo::PeriodEndTimeHasBeenSet() const
{
    return m_periodEndTimeHasBeenSet;
}

int64_t DCDBShardInfo::GetNodeCount() const
{
    return m_nodeCount;
}

void DCDBShardInfo::SetNodeCount(const int64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool DCDBShardInfo::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

double DCDBShardInfo::GetStorageUsage() const
{
    return m_storageUsage;
}

void DCDBShardInfo::SetStorageUsage(const double& _storageUsage)
{
    m_storageUsage = _storageUsage;
    m_storageUsageHasBeenSet = true;
}

bool DCDBShardInfo::StorageUsageHasBeenSet() const
{
    return m_storageUsageHasBeenSet;
}

double DCDBShardInfo::GetMemoryUsage() const
{
    return m_memoryUsage;
}

void DCDBShardInfo::SetMemoryUsage(const double& _memoryUsage)
{
    m_memoryUsage = _memoryUsage;
    m_memoryUsageHasBeenSet = true;
}

bool DCDBShardInfo::MemoryUsageHasBeenSet() const
{
    return m_memoryUsageHasBeenSet;
}

int64_t DCDBShardInfo::GetShardId() const
{
    return m_shardId;
}

void DCDBShardInfo::SetShardId(const int64_t& _shardId)
{
    m_shardId = _shardId;
    m_shardIdHasBeenSet = true;
}

bool DCDBShardInfo::ShardIdHasBeenSet() const
{
    return m_shardIdHasBeenSet;
}

int64_t DCDBShardInfo::GetPid() const
{
    return m_pid;
}

void DCDBShardInfo::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool DCDBShardInfo::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string DCDBShardInfo::GetProxyVersion() const
{
    return m_proxyVersion;
}

void DCDBShardInfo::SetProxyVersion(const string& _proxyVersion)
{
    m_proxyVersion = _proxyVersion;
    m_proxyVersionHasBeenSet = true;
}

bool DCDBShardInfo::ProxyVersionHasBeenSet() const
{
    return m_proxyVersionHasBeenSet;
}

