// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ADB20211201_H_
#define ALIBABACLOUD_ADB20211201_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Adb20211201 {
class Adb4MysqlSparkDiagnosisInfo : public Darabonba::Model {
public:
  shared_ptr<string> diagnosisCode{};
  shared_ptr<string> diagnosisCodeLabel{};
  shared_ptr<string> diagnosisMsg{};
  shared_ptr<string> diagnosisType{};

  Adb4MysqlSparkDiagnosisInfo() {}

  explicit Adb4MysqlSparkDiagnosisInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diagnosisCode) {
      res["DiagnosisCode"] = boost::any(*diagnosisCode);
    }
    if (diagnosisCodeLabel) {
      res["DiagnosisCodeLabel"] = boost::any(*diagnosisCodeLabel);
    }
    if (diagnosisMsg) {
      res["DiagnosisMsg"] = boost::any(*diagnosisMsg);
    }
    if (diagnosisType) {
      res["DiagnosisType"] = boost::any(*diagnosisType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiagnosisCode") != m.end() && !m["DiagnosisCode"].empty()) {
      diagnosisCode = make_shared<string>(boost::any_cast<string>(m["DiagnosisCode"]));
    }
    if (m.find("DiagnosisCodeLabel") != m.end() && !m["DiagnosisCodeLabel"].empty()) {
      diagnosisCodeLabel = make_shared<string>(boost::any_cast<string>(m["DiagnosisCodeLabel"]));
    }
    if (m.find("DiagnosisMsg") != m.end() && !m["DiagnosisMsg"].empty()) {
      diagnosisMsg = make_shared<string>(boost::any_cast<string>(m["DiagnosisMsg"]));
    }
    if (m.find("DiagnosisType") != m.end() && !m["DiagnosisType"].empty()) {
      diagnosisType = make_shared<string>(boost::any_cast<string>(m["DiagnosisType"]));
    }
  }


  virtual ~Adb4MysqlSparkDiagnosisInfo() = default;
};
class ColDetailModel : public Darabonba::Model {
public:
  shared_ptr<string> columnName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<bool> distributeKey{};
  shared_ptr<bool> nullable{};
  shared_ptr<bool> partitionKey{};
  shared_ptr<bool> primaryKey{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> type{};
  shared_ptr<string> updateTime{};

  ColDetailModel() {}

  explicit ColDetailModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (distributeKey) {
      res["DistributeKey"] = boost::any(*distributeKey);
    }
    if (nullable) {
      res["Nullable"] = boost::any(*nullable);
    }
    if (partitionKey) {
      res["PartitionKey"] = boost::any(*partitionKey);
    }
    if (primaryKey) {
      res["PrimaryKey"] = boost::any(*primaryKey);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DistributeKey") != m.end() && !m["DistributeKey"].empty()) {
      distributeKey = make_shared<bool>(boost::any_cast<bool>(m["DistributeKey"]));
    }
    if (m.find("Nullable") != m.end() && !m["Nullable"].empty()) {
      nullable = make_shared<bool>(boost::any_cast<bool>(m["Nullable"]));
    }
    if (m.find("PartitionKey") != m.end() && !m["PartitionKey"].empty()) {
      partitionKey = make_shared<bool>(boost::any_cast<bool>(m["PartitionKey"]));
    }
    if (m.find("PrimaryKey") != m.end() && !m["PrimaryKey"].empty()) {
      primaryKey = make_shared<bool>(boost::any_cast<bool>(m["PrimaryKey"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ColDetailModel() = default;
};
class FieldSchemaModel : public Darabonba::Model {
public:
  shared_ptr<bool> autoIncrement{};
  shared_ptr<string> columnRawName{};
  shared_ptr<string> comment{};
  shared_ptr<bool> compressFloatUseShort{};
  shared_ptr<string> compression{};
  shared_ptr<string> createTime{};
  shared_ptr<string> dataType{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> delimiter{};
  shared_ptr<string> encode{};
  shared_ptr<bool> isPartitionKey{};
  shared_ptr<string> mappedName{};
  shared_ptr<string> name{};
  shared_ptr<bool> nullable{};
  shared_ptr<string> onUpdate{};
  shared_ptr<long> ordinalPosition{};
  shared_ptr<string> physicalColumnName{};
  shared_ptr<long> pkPosition{};
  shared_ptr<long> precision{};
  shared_ptr<bool> primarykey{};
  shared_ptr<long> scale{};
  shared_ptr<string> tableName{};
  shared_ptr<string> tokenizer{};
  shared_ptr<string> type{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> valueType{};

  FieldSchemaModel() {}

  explicit FieldSchemaModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoIncrement) {
      res["AutoIncrement"] = boost::any(*autoIncrement);
    }
    if (columnRawName) {
      res["ColumnRawName"] = boost::any(*columnRawName);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (compressFloatUseShort) {
      res["CompressFloatUseShort"] = boost::any(*compressFloatUseShort);
    }
    if (compression) {
      res["Compression"] = boost::any(*compression);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (delimiter) {
      res["Delimiter"] = boost::any(*delimiter);
    }
    if (encode) {
      res["Encode"] = boost::any(*encode);
    }
    if (isPartitionKey) {
      res["IsPartitionKey"] = boost::any(*isPartitionKey);
    }
    if (mappedName) {
      res["MappedName"] = boost::any(*mappedName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nullable) {
      res["Nullable"] = boost::any(*nullable);
    }
    if (onUpdate) {
      res["OnUpdate"] = boost::any(*onUpdate);
    }
    if (ordinalPosition) {
      res["OrdinalPosition"] = boost::any(*ordinalPosition);
    }
    if (physicalColumnName) {
      res["PhysicalColumnName"] = boost::any(*physicalColumnName);
    }
    if (pkPosition) {
      res["PkPosition"] = boost::any(*pkPosition);
    }
    if (precision) {
      res["Precision"] = boost::any(*precision);
    }
    if (primarykey) {
      res["Primarykey"] = boost::any(*primarykey);
    }
    if (scale) {
      res["Scale"] = boost::any(*scale);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (tokenizer) {
      res["Tokenizer"] = boost::any(*tokenizer);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (valueType) {
      res["ValueType"] = boost::any(*valueType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoIncrement") != m.end() && !m["AutoIncrement"].empty()) {
      autoIncrement = make_shared<bool>(boost::any_cast<bool>(m["AutoIncrement"]));
    }
    if (m.find("ColumnRawName") != m.end() && !m["ColumnRawName"].empty()) {
      columnRawName = make_shared<string>(boost::any_cast<string>(m["ColumnRawName"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("CompressFloatUseShort") != m.end() && !m["CompressFloatUseShort"].empty()) {
      compressFloatUseShort = make_shared<bool>(boost::any_cast<bool>(m["CompressFloatUseShort"]));
    }
    if (m.find("Compression") != m.end() && !m["Compression"].empty()) {
      compression = make_shared<string>(boost::any_cast<string>(m["Compression"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("Delimiter") != m.end() && !m["Delimiter"].empty()) {
      delimiter = make_shared<string>(boost::any_cast<string>(m["Delimiter"]));
    }
    if (m.find("Encode") != m.end() && !m["Encode"].empty()) {
      encode = make_shared<string>(boost::any_cast<string>(m["Encode"]));
    }
    if (m.find("IsPartitionKey") != m.end() && !m["IsPartitionKey"].empty()) {
      isPartitionKey = make_shared<bool>(boost::any_cast<bool>(m["IsPartitionKey"]));
    }
    if (m.find("MappedName") != m.end() && !m["MappedName"].empty()) {
      mappedName = make_shared<string>(boost::any_cast<string>(m["MappedName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Nullable") != m.end() && !m["Nullable"].empty()) {
      nullable = make_shared<bool>(boost::any_cast<bool>(m["Nullable"]));
    }
    if (m.find("OnUpdate") != m.end() && !m["OnUpdate"].empty()) {
      onUpdate = make_shared<string>(boost::any_cast<string>(m["OnUpdate"]));
    }
    if (m.find("OrdinalPosition") != m.end() && !m["OrdinalPosition"].empty()) {
      ordinalPosition = make_shared<long>(boost::any_cast<long>(m["OrdinalPosition"]));
    }
    if (m.find("PhysicalColumnName") != m.end() && !m["PhysicalColumnName"].empty()) {
      physicalColumnName = make_shared<string>(boost::any_cast<string>(m["PhysicalColumnName"]));
    }
    if (m.find("PkPosition") != m.end() && !m["PkPosition"].empty()) {
      pkPosition = make_shared<long>(boost::any_cast<long>(m["PkPosition"]));
    }
    if (m.find("Precision") != m.end() && !m["Precision"].empty()) {
      precision = make_shared<long>(boost::any_cast<long>(m["Precision"]));
    }
    if (m.find("Primarykey") != m.end() && !m["Primarykey"].empty()) {
      primarykey = make_shared<bool>(boost::any_cast<bool>(m["Primarykey"]));
    }
    if (m.find("Scale") != m.end() && !m["Scale"].empty()) {
      scale = make_shared<long>(boost::any_cast<long>(m["Scale"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("Tokenizer") != m.end() && !m["Tokenizer"].empty()) {
      tokenizer = make_shared<string>(boost::any_cast<string>(m["Tokenizer"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("ValueType") != m.end() && !m["ValueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["ValueType"]));
    }
  }


  virtual ~FieldSchemaModel() = default;
};
class CstoreIndexModel : public Darabonba::Model {
public:
  shared_ptr<vector<string>> columnOrds{};
  shared_ptr<string> createTime{};
  shared_ptr<string> databaseName{};
  shared_ptr<vector<FieldSchemaModel>> indexColumns{};
  shared_ptr<string> indexName{};
  shared_ptr<string> indexType{};
  shared_ptr<map<string, string>> options{};
  shared_ptr<string> physicalTableName{};
  shared_ptr<string> updateTime{};

  CstoreIndexModel() {}

  explicit CstoreIndexModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columnOrds) {
      res["ColumnOrds"] = boost::any(*columnOrds);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (indexColumns) {
      vector<boost::any> temp1;
      for(auto item1:*indexColumns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IndexColumns"] = boost::any(temp1);
    }
    if (indexName) {
      res["IndexName"] = boost::any(*indexName);
    }
    if (indexType) {
      res["IndexType"] = boost::any(*indexType);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (physicalTableName) {
      res["PhysicalTableName"] = boost::any(*physicalTableName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColumnOrds") != m.end() && !m["ColumnOrds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ColumnOrds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ColumnOrds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      columnOrds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("IndexColumns") != m.end() && !m["IndexColumns"].empty()) {
      if (typeid(vector<boost::any>) == m["IndexColumns"].type()) {
        vector<FieldSchemaModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IndexColumns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FieldSchemaModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        indexColumns = make_shared<vector<FieldSchemaModel>>(expect1);
      }
    }
    if (m.find("IndexName") != m.end() && !m["IndexName"].empty()) {
      indexName = make_shared<string>(boost::any_cast<string>(m["IndexName"]));
    }
    if (m.find("IndexType") != m.end() && !m["IndexType"].empty()) {
      indexType = make_shared<string>(boost::any_cast<string>(m["IndexType"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Options"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      options = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("PhysicalTableName") != m.end() && !m["PhysicalTableName"].empty()) {
      physicalTableName = make_shared<string>(boost::any_cast<string>(m["PhysicalTableName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~CstoreIndexModel() = default;
};
class DatabaseSummaryModel : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> owner{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> updateTime{};

  DatabaseSummaryModel() {}

  explicit DatabaseSummaryModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~DatabaseSummaryModel() = default;
};
class Detail : public Darabonba::Model {
public:
  shared_ptr<string> appType{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> data{};
  shared_ptr<long> durationInMillis{};
  shared_ptr<long> estimateExecutionCpuTimeInSeconds{};
  shared_ptr<string> lastAttemptId{};
  shared_ptr<long> lastUpdatedTimeInMillis{};
  shared_ptr<string> logRootPath{};
  shared_ptr<string> resourceGroupName{};
  shared_ptr<long> startedTimeInMillis{};
  shared_ptr<long> submittedTimeInMillis{};
  shared_ptr<long> terminatedTimeInMillis{};
  shared_ptr<string> webUiAddress{};

  Detail() {}

  explicit Detail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (durationInMillis) {
      res["DurationInMillis"] = boost::any(*durationInMillis);
    }
    if (estimateExecutionCpuTimeInSeconds) {
      res["EstimateExecutionCpuTimeInSeconds"] = boost::any(*estimateExecutionCpuTimeInSeconds);
    }
    if (lastAttemptId) {
      res["LastAttemptId"] = boost::any(*lastAttemptId);
    }
    if (lastUpdatedTimeInMillis) {
      res["LastUpdatedTimeInMillis"] = boost::any(*lastUpdatedTimeInMillis);
    }
    if (logRootPath) {
      res["LogRootPath"] = boost::any(*logRootPath);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    if (startedTimeInMillis) {
      res["StartedTimeInMillis"] = boost::any(*startedTimeInMillis);
    }
    if (submittedTimeInMillis) {
      res["SubmittedTimeInMillis"] = boost::any(*submittedTimeInMillis);
    }
    if (terminatedTimeInMillis) {
      res["TerminatedTimeInMillis"] = boost::any(*terminatedTimeInMillis);
    }
    if (webUiAddress) {
      res["WebUiAddress"] = boost::any(*webUiAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("DurationInMillis") != m.end() && !m["DurationInMillis"].empty()) {
      durationInMillis = make_shared<long>(boost::any_cast<long>(m["DurationInMillis"]));
    }
    if (m.find("EstimateExecutionCpuTimeInSeconds") != m.end() && !m["EstimateExecutionCpuTimeInSeconds"].empty()) {
      estimateExecutionCpuTimeInSeconds = make_shared<long>(boost::any_cast<long>(m["EstimateExecutionCpuTimeInSeconds"]));
    }
    if (m.find("LastAttemptId") != m.end() && !m["LastAttemptId"].empty()) {
      lastAttemptId = make_shared<string>(boost::any_cast<string>(m["LastAttemptId"]));
    }
    if (m.find("LastUpdatedTimeInMillis") != m.end() && !m["LastUpdatedTimeInMillis"].empty()) {
      lastUpdatedTimeInMillis = make_shared<long>(boost::any_cast<long>(m["LastUpdatedTimeInMillis"]));
    }
    if (m.find("LogRootPath") != m.end() && !m["LogRootPath"].empty()) {
      logRootPath = make_shared<string>(boost::any_cast<string>(m["LogRootPath"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
    if (m.find("StartedTimeInMillis") != m.end() && !m["StartedTimeInMillis"].empty()) {
      startedTimeInMillis = make_shared<long>(boost::any_cast<long>(m["StartedTimeInMillis"]));
    }
    if (m.find("SubmittedTimeInMillis") != m.end() && !m["SubmittedTimeInMillis"].empty()) {
      submittedTimeInMillis = make_shared<long>(boost::any_cast<long>(m["SubmittedTimeInMillis"]));
    }
    if (m.find("TerminatedTimeInMillis") != m.end() && !m["TerminatedTimeInMillis"].empty()) {
      terminatedTimeInMillis = make_shared<long>(boost::any_cast<long>(m["TerminatedTimeInMillis"]));
    }
    if (m.find("WebUiAddress") != m.end() && !m["WebUiAddress"].empty()) {
      webUiAddress = make_shared<string>(boost::any_cast<string>(m["WebUiAddress"]));
    }
  }


  virtual ~Detail() = default;
};
class FiltersExecutionTimeRange : public Darabonba::Model {
public:
  shared_ptr<long> maxTimeInSeconds{};
  shared_ptr<long> minTimeInSeconds{};

  FiltersExecutionTimeRange() {}

  explicit FiltersExecutionTimeRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxTimeInSeconds) {
      res["MaxTimeInSeconds"] = boost::any(*maxTimeInSeconds);
    }
    if (minTimeInSeconds) {
      res["MinTimeInSeconds"] = boost::any(*minTimeInSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxTimeInSeconds") != m.end() && !m["MaxTimeInSeconds"].empty()) {
      maxTimeInSeconds = make_shared<long>(boost::any_cast<long>(m["MaxTimeInSeconds"]));
    }
    if (m.find("MinTimeInSeconds") != m.end() && !m["MinTimeInSeconds"].empty()) {
      minTimeInSeconds = make_shared<long>(boost::any_cast<long>(m["MinTimeInSeconds"]));
    }
  }


  virtual ~FiltersExecutionTimeRange() = default;
};
class FiltersSubmitTimeRange : public Darabonba::Model {
public:
  shared_ptr<long> maxTimeInMills{};
  shared_ptr<long> minTimeInMills{};

  FiltersSubmitTimeRange() {}

  explicit FiltersSubmitTimeRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxTimeInMills) {
      res["MaxTimeInMills"] = boost::any(*maxTimeInMills);
    }
    if (minTimeInMills) {
      res["MinTimeInMills"] = boost::any(*minTimeInMills);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxTimeInMills") != m.end() && !m["MaxTimeInMills"].empty()) {
      maxTimeInMills = make_shared<long>(boost::any_cast<long>(m["MaxTimeInMills"]));
    }
    if (m.find("MinTimeInMills") != m.end() && !m["MinTimeInMills"].empty()) {
      minTimeInMills = make_shared<long>(boost::any_cast<long>(m["MinTimeInMills"]));
    }
  }


  virtual ~FiltersSubmitTimeRange() = default;
};
class FiltersTermiatedTimeRange : public Darabonba::Model {
public:
  shared_ptr<long> maxTimeInMills{};
  shared_ptr<long> minTimeInMills{};

  FiltersTermiatedTimeRange() {}

  explicit FiltersTermiatedTimeRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxTimeInMills) {
      res["MaxTimeInMills"] = boost::any(*maxTimeInMills);
    }
    if (minTimeInMills) {
      res["MinTimeInMills"] = boost::any(*minTimeInMills);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxTimeInMills") != m.end() && !m["MaxTimeInMills"].empty()) {
      maxTimeInMills = make_shared<long>(boost::any_cast<long>(m["MaxTimeInMills"]));
    }
    if (m.find("MinTimeInMills") != m.end() && !m["MinTimeInMills"].empty()) {
      minTimeInMills = make_shared<long>(boost::any_cast<long>(m["MinTimeInMills"]));
    }
  }


  virtual ~FiltersTermiatedTimeRange() = default;
};
class Filters : public Darabonba::Model {
public:
  shared_ptr<string> appIdRegex{};
  shared_ptr<string> appNameRegex{};
  shared_ptr<string> appState{};
  shared_ptr<string> appType{};
  shared_ptr<FiltersExecutionTimeRange> executionTimeRange{};
  shared_ptr<FiltersSubmitTimeRange> submitTimeRange{};
  shared_ptr<FiltersTermiatedTimeRange> termiatedTimeRange{};

  Filters() {}

  explicit Filters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appIdRegex) {
      res["AppIdRegex"] = boost::any(*appIdRegex);
    }
    if (appNameRegex) {
      res["AppNameRegex"] = boost::any(*appNameRegex);
    }
    if (appState) {
      res["AppState"] = boost::any(*appState);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (executionTimeRange) {
      res["ExecutionTimeRange"] = executionTimeRange ? boost::any(executionTimeRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (submitTimeRange) {
      res["SubmitTimeRange"] = submitTimeRange ? boost::any(submitTimeRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (termiatedTimeRange) {
      res["TermiatedTimeRange"] = termiatedTimeRange ? boost::any(termiatedTimeRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppIdRegex") != m.end() && !m["AppIdRegex"].empty()) {
      appIdRegex = make_shared<string>(boost::any_cast<string>(m["AppIdRegex"]));
    }
    if (m.find("AppNameRegex") != m.end() && !m["AppNameRegex"].empty()) {
      appNameRegex = make_shared<string>(boost::any_cast<string>(m["AppNameRegex"]));
    }
    if (m.find("AppState") != m.end() && !m["AppState"].empty()) {
      appState = make_shared<string>(boost::any_cast<string>(m["AppState"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("ExecutionTimeRange") != m.end() && !m["ExecutionTimeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExecutionTimeRange"].type()) {
        FiltersExecutionTimeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExecutionTimeRange"]));
        executionTimeRange = make_shared<FiltersExecutionTimeRange>(model1);
      }
    }
    if (m.find("SubmitTimeRange") != m.end() && !m["SubmitTimeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubmitTimeRange"].type()) {
        FiltersSubmitTimeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubmitTimeRange"]));
        submitTimeRange = make_shared<FiltersSubmitTimeRange>(model1);
      }
    }
    if (m.find("TermiatedTimeRange") != m.end() && !m["TermiatedTimeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["TermiatedTimeRange"].type()) {
        FiltersTermiatedTimeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TermiatedTimeRange"]));
        termiatedTimeRange = make_shared<FiltersTermiatedTimeRange>(model1);
      }
    }
  }


  virtual ~Filters() = default;
};
class LogAnalyzeResult : public Darabonba::Model {
public:
  shared_ptr<string> appErrorAdvice{};
  shared_ptr<string> appErrorCode{};
  shared_ptr<string> appErrorLog{};

  LogAnalyzeResult() {}

  explicit LogAnalyzeResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appErrorAdvice) {
      res["AppErrorAdvice"] = boost::any(*appErrorAdvice);
    }
    if (appErrorCode) {
      res["AppErrorCode"] = boost::any(*appErrorCode);
    }
    if (appErrorLog) {
      res["AppErrorLog"] = boost::any(*appErrorLog);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppErrorAdvice") != m.end() && !m["AppErrorAdvice"].empty()) {
      appErrorAdvice = make_shared<string>(boost::any_cast<string>(m["AppErrorAdvice"]));
    }
    if (m.find("AppErrorCode") != m.end() && !m["AppErrorCode"].empty()) {
      appErrorCode = make_shared<string>(boost::any_cast<string>(m["AppErrorCode"]));
    }
    if (m.find("AppErrorLog") != m.end() && !m["AppErrorLog"].empty()) {
      appErrorLog = make_shared<string>(boost::any_cast<string>(m["AppErrorLog"]));
    }
  }


  virtual ~LogAnalyzeResult() = default;
};
class SerDeInfoModel : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<map<string, string>> parameters{};
  shared_ptr<long> serDeId{};
  shared_ptr<string> serializationLib{};

  SerDeInfoModel() {}

  explicit SerDeInfoModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (serDeId) {
      res["SerDeId"] = boost::any(*serDeId);
    }
    if (serializationLib) {
      res["SerializationLib"] = boost::any(*serializationLib);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Parameters"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("SerDeId") != m.end() && !m["SerDeId"].empty()) {
      serDeId = make_shared<long>(boost::any_cast<long>(m["SerDeId"]));
    }
    if (m.find("SerializationLib") != m.end() && !m["SerializationLib"].empty()) {
      serializationLib = make_shared<string>(boost::any_cast<string>(m["SerializationLib"]));
    }
  }


  virtual ~SerDeInfoModel() = default;
};
class SparkAnalyzeLogTask : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<LogAnalyzeResult> result{};
  shared_ptr<bool> ruleMatched{};
  shared_ptr<long> startedTimeInMillis{};
  shared_ptr<long> submittedTimeInMillis{};
  shared_ptr<string> taskErrMsg{};
  shared_ptr<long> taskId{};
  shared_ptr<string> taskState{};
  shared_ptr<long> terminatedTimeInMillis{};
  shared_ptr<long> userId{};

  SparkAnalyzeLogTask() {}

  explicit SparkAnalyzeLogTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ruleMatched) {
      res["RuleMatched"] = boost::any(*ruleMatched);
    }
    if (startedTimeInMillis) {
      res["StartedTimeInMillis"] = boost::any(*startedTimeInMillis);
    }
    if (submittedTimeInMillis) {
      res["SubmittedTimeInMillis"] = boost::any(*submittedTimeInMillis);
    }
    if (taskErrMsg) {
      res["TaskErrMsg"] = boost::any(*taskErrMsg);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskState) {
      res["TaskState"] = boost::any(*taskState);
    }
    if (terminatedTimeInMillis) {
      res["TerminatedTimeInMillis"] = boost::any(*terminatedTimeInMillis);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        LogAnalyzeResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<LogAnalyzeResult>(model1);
      }
    }
    if (m.find("RuleMatched") != m.end() && !m["RuleMatched"].empty()) {
      ruleMatched = make_shared<bool>(boost::any_cast<bool>(m["RuleMatched"]));
    }
    if (m.find("StartedTimeInMillis") != m.end() && !m["StartedTimeInMillis"].empty()) {
      startedTimeInMillis = make_shared<long>(boost::any_cast<long>(m["StartedTimeInMillis"]));
    }
    if (m.find("SubmittedTimeInMillis") != m.end() && !m["SubmittedTimeInMillis"].empty()) {
      submittedTimeInMillis = make_shared<long>(boost::any_cast<long>(m["SubmittedTimeInMillis"]));
    }
    if (m.find("TaskErrMsg") != m.end() && !m["TaskErrMsg"].empty()) {
      taskErrMsg = make_shared<string>(boost::any_cast<string>(m["TaskErrMsg"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("TaskState") != m.end() && !m["TaskState"].empty()) {
      taskState = make_shared<string>(boost::any_cast<string>(m["TaskState"]));
    }
    if (m.find("TerminatedTimeInMillis") != m.end() && !m["TerminatedTimeInMillis"].empty()) {
      terminatedTimeInMillis = make_shared<long>(boost::any_cast<long>(m["TerminatedTimeInMillis"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~SparkAnalyzeLogTask() = default;
};
class SparkAppInfo : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<Detail> detail{};
  shared_ptr<string> message{};
  shared_ptr<string> priority{};
  shared_ptr<string> state{};

  SparkAppInfo() {}

  explicit SparkAppInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (detail) {
      res["Detail"] = detail ? boost::any(detail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      if (typeid(map<string, boost::any>) == m["Detail"].type()) {
        Detail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Detail"]));
        detail = make_shared<Detail>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~SparkAppInfo() = default;
};
class SparkAttemptInfo : public Darabonba::Model {
public:
  shared_ptr<string> attemptId{};
  shared_ptr<Detail> detail{};
  shared_ptr<string> message{};
  shared_ptr<string> priority{};
  shared_ptr<string> state{};

  SparkAttemptInfo() {}

  explicit SparkAttemptInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attemptId) {
      res["AttemptId"] = boost::any(*attemptId);
    }
    if (detail) {
      res["Detail"] = detail ? boost::any(detail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttemptId") != m.end() && !m["AttemptId"].empty()) {
      attemptId = make_shared<string>(boost::any_cast<string>(m["AttemptId"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      if (typeid(map<string, boost::any>) == m["Detail"].type()) {
        Detail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Detail"]));
        detail = make_shared<Detail>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~SparkAttemptInfo() = default;
};
class SparkSession : public Darabonba::Model {
public:
  shared_ptr<string> active{};
  shared_ptr<long> aliyunUid{};
  shared_ptr<long> sessionId{};
  shared_ptr<string> state{};

  SparkSession() {}

  explicit SparkSession(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (aliyunUid) {
      res["AliyunUid"] = boost::any(*aliyunUid);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<string>(boost::any_cast<string>(m["Active"]));
    }
    if (m.find("AliyunUid") != m.end() && !m["AliyunUid"].empty()) {
      aliyunUid = make_shared<long>(boost::any_cast<long>(m["AliyunUid"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<long>(boost::any_cast<long>(m["SessionId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~SparkSession() = default;
};
class Statement : public Darabonba::Model {
public:
  shared_ptr<long> aliyunUid{};
  shared_ptr<string> code{};
  shared_ptr<string> codeState{};
  shared_ptr<string> codeType{};
  shared_ptr<long> endTime{};
  shared_ptr<string> error{};
  shared_ptr<bool> haveRows{};
  shared_ptr<string> output{};
  shared_ptr<string> resourceGroup{};
  shared_ptr<long> sessionId{};
  shared_ptr<long> startTime{};
  shared_ptr<long> statementId{};
  shared_ptr<long> totalCount{};

  Statement() {}

  explicit Statement(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunUid) {
      res["AliyunUid"] = boost::any(*aliyunUid);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (codeState) {
      res["CodeState"] = boost::any(*codeState);
    }
    if (codeType) {
      res["CodeType"] = boost::any(*codeType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (haveRows) {
      res["HaveRows"] = boost::any(*haveRows);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = boost::any(*resourceGroup);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (statementId) {
      res["StatementId"] = boost::any(*statementId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunUid") != m.end() && !m["AliyunUid"].empty()) {
      aliyunUid = make_shared<long>(boost::any_cast<long>(m["AliyunUid"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CodeState") != m.end() && !m["CodeState"].empty()) {
      codeState = make_shared<string>(boost::any_cast<string>(m["CodeState"]));
    }
    if (m.find("CodeType") != m.end() && !m["CodeType"].empty()) {
      codeType = make_shared<string>(boost::any_cast<string>(m["CodeType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("HaveRows") != m.end() && !m["HaveRows"].empty()) {
      haveRows = make_shared<bool>(boost::any_cast<bool>(m["HaveRows"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      resourceGroup = make_shared<string>(boost::any_cast<string>(m["ResourceGroup"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<long>(boost::any_cast<long>(m["SessionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("StatementId") != m.end() && !m["StatementId"].empty()) {
      statementId = make_shared<long>(boost::any_cast<long>(m["StatementId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~Statement() = default;
};
class StatementInfo : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> completedTimeInMills{};
  shared_ptr<string> output{};
  shared_ptr<double> process{};
  shared_ptr<long> startedTimeInMills{};
  shared_ptr<string> state{};
  shared_ptr<string> statementId{};

  StatementInfo() {}

  explicit StatementInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (completedTimeInMills) {
      res["CompletedTimeInMills"] = boost::any(*completedTimeInMills);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (process) {
      res["Process"] = boost::any(*process);
    }
    if (startedTimeInMills) {
      res["StartedTimeInMills"] = boost::any(*startedTimeInMills);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (statementId) {
      res["StatementId"] = boost::any(*statementId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CompletedTimeInMills") != m.end() && !m["CompletedTimeInMills"].empty()) {
      completedTimeInMills = make_shared<long>(boost::any_cast<long>(m["CompletedTimeInMills"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("Process") != m.end() && !m["Process"].empty()) {
      process = make_shared<double>(boost::any_cast<double>(m["Process"]));
    }
    if (m.find("StartedTimeInMills") != m.end() && !m["StartedTimeInMills"].empty()) {
      startedTimeInMills = make_shared<long>(boost::any_cast<long>(m["StartedTimeInMills"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("StatementId") != m.end() && !m["StatementId"].empty()) {
      statementId = make_shared<string>(boost::any_cast<string>(m["StatementId"]));
    }
  }


  virtual ~StatementInfo() = default;
};
class StorageDescriptorModel : public Darabonba::Model {
public:
  shared_ptr<bool> compressed{};
  shared_ptr<string> inputFormat{};
  shared_ptr<string> location{};
  shared_ptr<long> numBuckets{};
  shared_ptr<string> outputFormat{};
  shared_ptr<map<string, string>> parameters{};
  shared_ptr<long> sdId{};
  shared_ptr<SerDeInfoModel> serDeInfo{};
  shared_ptr<bool> storedAsSubDirectories{};

  StorageDescriptorModel() {}

  explicit StorageDescriptorModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compressed) {
      res["Compressed"] = boost::any(*compressed);
    }
    if (inputFormat) {
      res["InputFormat"] = boost::any(*inputFormat);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (numBuckets) {
      res["NumBuckets"] = boost::any(*numBuckets);
    }
    if (outputFormat) {
      res["OutputFormat"] = boost::any(*outputFormat);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (sdId) {
      res["SdId"] = boost::any(*sdId);
    }
    if (serDeInfo) {
      res["SerDeInfo"] = serDeInfo ? boost::any(serDeInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storedAsSubDirectories) {
      res["StoredAsSubDirectories"] = boost::any(*storedAsSubDirectories);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Compressed") != m.end() && !m["Compressed"].empty()) {
      compressed = make_shared<bool>(boost::any_cast<bool>(m["Compressed"]));
    }
    if (m.find("InputFormat") != m.end() && !m["InputFormat"].empty()) {
      inputFormat = make_shared<string>(boost::any_cast<string>(m["InputFormat"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("NumBuckets") != m.end() && !m["NumBuckets"].empty()) {
      numBuckets = make_shared<long>(boost::any_cast<long>(m["NumBuckets"]));
    }
    if (m.find("OutputFormat") != m.end() && !m["OutputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["OutputFormat"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Parameters"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("SdId") != m.end() && !m["SdId"].empty()) {
      sdId = make_shared<long>(boost::any_cast<long>(m["SdId"]));
    }
    if (m.find("SerDeInfo") != m.end() && !m["SerDeInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["SerDeInfo"].type()) {
        SerDeInfoModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SerDeInfo"]));
        serDeInfo = make_shared<SerDeInfoModel>(model1);
      }
    }
    if (m.find("StoredAsSubDirectories") != m.end() && !m["StoredAsSubDirectories"].empty()) {
      storedAsSubDirectories = make_shared<bool>(boost::any_cast<bool>(m["StoredAsSubDirectories"]));
    }
  }


  virtual ~StorageDescriptorModel() = default;
};
class TableDetailModel : public Darabonba::Model {
public:
  shared_ptr<string> catalog{};
  shared_ptr<vector<ColDetailModel>> columns{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> owner{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> tableType{};
  shared_ptr<string> updateTime{};

  TableDetailModel() {}

  explicit TableDetailModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (catalog) {
      res["Catalog"] = boost::any(*catalog);
    }
    if (columns) {
      vector<boost::any> temp1;
      for(auto item1:*columns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Columns"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (tableType) {
      res["TableType"] = boost::any(*tableType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Catalog") != m.end() && !m["Catalog"].empty()) {
      catalog = make_shared<string>(boost::any_cast<string>(m["Catalog"]));
    }
    if (m.find("Columns") != m.end() && !m["Columns"].empty()) {
      if (typeid(vector<boost::any>) == m["Columns"].type()) {
        vector<ColDetailModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Columns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ColDetailModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columns = make_shared<vector<ColDetailModel>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("TableType") != m.end() && !m["TableType"].empty()) {
      tableType = make_shared<string>(boost::any_cast<string>(m["TableType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~TableDetailModel() = default;
};
class TableModel : public Darabonba::Model {
public:
  shared_ptr<string> archiveType{};
  shared_ptr<long> blockSize{};
  shared_ptr<long> bucket{};
  shared_ptr<long> bucketCount{};
  shared_ptr<vector<FieldSchemaModel>> cols{};
  shared_ptr<string> comment{};
  shared_ptr<string> compression{};
  shared_ptr<string> createTime{};
  shared_ptr<long> currentVersion{};
  shared_ptr<string> dbName{};
  shared_ptr<bool> dictEncode{};
  shared_ptr<vector<FieldSchemaModel>> distributeColumns{};
  shared_ptr<string> distributeType{};
  shared_ptr<bool> enableDfs{};
  shared_ptr<long> hotPartitionCount{};
  shared_ptr<vector<CstoreIndexModel>> indexes{};
  shared_ptr<bool> isAllIndex{};
  shared_ptr<bool> isFulltextDict{};
  shared_ptr<long> maxColumnId{};
  shared_ptr<map<string, string>> parameters{};
  shared_ptr<string> partitionColumn{};
  shared_ptr<long> partitionCount{};
  shared_ptr<vector<FieldSchemaModel>> partitionKeys{};
  shared_ptr<string> partitionType{};
  shared_ptr<string> physicalDatabaseName{};
  shared_ptr<string> physicalTableName{};
  shared_ptr<long> previousVersion{};
  shared_ptr<string> rawTableName{};
  shared_ptr<vector<FieldSchemaModel>> routeColumns{};
  shared_ptr<FieldSchemaModel> routeEffectiveColumn{};
  shared_ptr<string> routeType{};
  shared_ptr<string> rtEngineType{};
  shared_ptr<bool> rtIndexAll{};
  shared_ptr<string> rtModeType{};
  shared_ptr<StorageDescriptorModel> sd{};
  shared_ptr<string> storagePolicy{};
  shared_ptr<string> subpartitionColumn{};
  shared_ptr<long> subpartitionCount{};
  shared_ptr<string> subpartitionType{};
  shared_ptr<string> tableEngineName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> tableType{};
  shared_ptr<long> tblId{};
  shared_ptr<bool> temporary{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> viewExpandedText{};
  shared_ptr<string> viewOriginalText{};
  shared_ptr<string> viewSecurityMode{};

  TableModel() {}

  explicit TableModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (archiveType) {
      res["ArchiveType"] = boost::any(*archiveType);
    }
    if (blockSize) {
      res["BlockSize"] = boost::any(*blockSize);
    }
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (bucketCount) {
      res["BucketCount"] = boost::any(*bucketCount);
    }
    if (cols) {
      vector<boost::any> temp1;
      for(auto item1:*cols){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Cols"] = boost::any(temp1);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (compression) {
      res["Compression"] = boost::any(*compression);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (currentVersion) {
      res["CurrentVersion"] = boost::any(*currentVersion);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (dictEncode) {
      res["DictEncode"] = boost::any(*dictEncode);
    }
    if (distributeColumns) {
      vector<boost::any> temp1;
      for(auto item1:*distributeColumns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DistributeColumns"] = boost::any(temp1);
    }
    if (distributeType) {
      res["DistributeType"] = boost::any(*distributeType);
    }
    if (enableDfs) {
      res["EnableDfs"] = boost::any(*enableDfs);
    }
    if (hotPartitionCount) {
      res["HotPartitionCount"] = boost::any(*hotPartitionCount);
    }
    if (indexes) {
      vector<boost::any> temp1;
      for(auto item1:*indexes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Indexes"] = boost::any(temp1);
    }
    if (isAllIndex) {
      res["IsAllIndex"] = boost::any(*isAllIndex);
    }
    if (isFulltextDict) {
      res["IsFulltextDict"] = boost::any(*isFulltextDict);
    }
    if (maxColumnId) {
      res["MaxColumnId"] = boost::any(*maxColumnId);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (partitionColumn) {
      res["PartitionColumn"] = boost::any(*partitionColumn);
    }
    if (partitionCount) {
      res["PartitionCount"] = boost::any(*partitionCount);
    }
    if (partitionKeys) {
      vector<boost::any> temp1;
      for(auto item1:*partitionKeys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PartitionKeys"] = boost::any(temp1);
    }
    if (partitionType) {
      res["PartitionType"] = boost::any(*partitionType);
    }
    if (physicalDatabaseName) {
      res["PhysicalDatabaseName"] = boost::any(*physicalDatabaseName);
    }
    if (physicalTableName) {
      res["PhysicalTableName"] = boost::any(*physicalTableName);
    }
    if (previousVersion) {
      res["PreviousVersion"] = boost::any(*previousVersion);
    }
    if (rawTableName) {
      res["RawTableName"] = boost::any(*rawTableName);
    }
    if (routeColumns) {
      vector<boost::any> temp1;
      for(auto item1:*routeColumns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RouteColumns"] = boost::any(temp1);
    }
    if (routeEffectiveColumn) {
      res["RouteEffectiveColumn"] = routeEffectiveColumn ? boost::any(routeEffectiveColumn->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (routeType) {
      res["RouteType"] = boost::any(*routeType);
    }
    if (rtEngineType) {
      res["RtEngineType"] = boost::any(*rtEngineType);
    }
    if (rtIndexAll) {
      res["RtIndexAll"] = boost::any(*rtIndexAll);
    }
    if (rtModeType) {
      res["RtModeType"] = boost::any(*rtModeType);
    }
    if (sd) {
      res["Sd"] = sd ? boost::any(sd->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storagePolicy) {
      res["StoragePolicy"] = boost::any(*storagePolicy);
    }
    if (subpartitionColumn) {
      res["SubpartitionColumn"] = boost::any(*subpartitionColumn);
    }
    if (subpartitionCount) {
      res["SubpartitionCount"] = boost::any(*subpartitionCount);
    }
    if (subpartitionType) {
      res["SubpartitionType"] = boost::any(*subpartitionType);
    }
    if (tableEngineName) {
      res["TableEngineName"] = boost::any(*tableEngineName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (tableType) {
      res["TableType"] = boost::any(*tableType);
    }
    if (tblId) {
      res["TblId"] = boost::any(*tblId);
    }
    if (temporary) {
      res["Temporary"] = boost::any(*temporary);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (viewExpandedText) {
      res["ViewExpandedText"] = boost::any(*viewExpandedText);
    }
    if (viewOriginalText) {
      res["ViewOriginalText"] = boost::any(*viewOriginalText);
    }
    if (viewSecurityMode) {
      res["ViewSecurityMode"] = boost::any(*viewSecurityMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArchiveType") != m.end() && !m["ArchiveType"].empty()) {
      archiveType = make_shared<string>(boost::any_cast<string>(m["ArchiveType"]));
    }
    if (m.find("BlockSize") != m.end() && !m["BlockSize"].empty()) {
      blockSize = make_shared<long>(boost::any_cast<long>(m["BlockSize"]));
    }
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<long>(boost::any_cast<long>(m["Bucket"]));
    }
    if (m.find("BucketCount") != m.end() && !m["BucketCount"].empty()) {
      bucketCount = make_shared<long>(boost::any_cast<long>(m["BucketCount"]));
    }
    if (m.find("Cols") != m.end() && !m["Cols"].empty()) {
      if (typeid(vector<boost::any>) == m["Cols"].type()) {
        vector<FieldSchemaModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Cols"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FieldSchemaModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cols = make_shared<vector<FieldSchemaModel>>(expect1);
      }
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("Compression") != m.end() && !m["Compression"].empty()) {
      compression = make_shared<string>(boost::any_cast<string>(m["Compression"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CurrentVersion") != m.end() && !m["CurrentVersion"].empty()) {
      currentVersion = make_shared<long>(boost::any_cast<long>(m["CurrentVersion"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DictEncode") != m.end() && !m["DictEncode"].empty()) {
      dictEncode = make_shared<bool>(boost::any_cast<bool>(m["DictEncode"]));
    }
    if (m.find("DistributeColumns") != m.end() && !m["DistributeColumns"].empty()) {
      if (typeid(vector<boost::any>) == m["DistributeColumns"].type()) {
        vector<FieldSchemaModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DistributeColumns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FieldSchemaModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        distributeColumns = make_shared<vector<FieldSchemaModel>>(expect1);
      }
    }
    if (m.find("DistributeType") != m.end() && !m["DistributeType"].empty()) {
      distributeType = make_shared<string>(boost::any_cast<string>(m["DistributeType"]));
    }
    if (m.find("EnableDfs") != m.end() && !m["EnableDfs"].empty()) {
      enableDfs = make_shared<bool>(boost::any_cast<bool>(m["EnableDfs"]));
    }
    if (m.find("HotPartitionCount") != m.end() && !m["HotPartitionCount"].empty()) {
      hotPartitionCount = make_shared<long>(boost::any_cast<long>(m["HotPartitionCount"]));
    }
    if (m.find("Indexes") != m.end() && !m["Indexes"].empty()) {
      if (typeid(vector<boost::any>) == m["Indexes"].type()) {
        vector<CstoreIndexModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Indexes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CstoreIndexModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        indexes = make_shared<vector<CstoreIndexModel>>(expect1);
      }
    }
    if (m.find("IsAllIndex") != m.end() && !m["IsAllIndex"].empty()) {
      isAllIndex = make_shared<bool>(boost::any_cast<bool>(m["IsAllIndex"]));
    }
    if (m.find("IsFulltextDict") != m.end() && !m["IsFulltextDict"].empty()) {
      isFulltextDict = make_shared<bool>(boost::any_cast<bool>(m["IsFulltextDict"]));
    }
    if (m.find("MaxColumnId") != m.end() && !m["MaxColumnId"].empty()) {
      maxColumnId = make_shared<long>(boost::any_cast<long>(m["MaxColumnId"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Parameters"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("PartitionColumn") != m.end() && !m["PartitionColumn"].empty()) {
      partitionColumn = make_shared<string>(boost::any_cast<string>(m["PartitionColumn"]));
    }
    if (m.find("PartitionCount") != m.end() && !m["PartitionCount"].empty()) {
      partitionCount = make_shared<long>(boost::any_cast<long>(m["PartitionCount"]));
    }
    if (m.find("PartitionKeys") != m.end() && !m["PartitionKeys"].empty()) {
      if (typeid(vector<boost::any>) == m["PartitionKeys"].type()) {
        vector<FieldSchemaModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PartitionKeys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FieldSchemaModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        partitionKeys = make_shared<vector<FieldSchemaModel>>(expect1);
      }
    }
    if (m.find("PartitionType") != m.end() && !m["PartitionType"].empty()) {
      partitionType = make_shared<string>(boost::any_cast<string>(m["PartitionType"]));
    }
    if (m.find("PhysicalDatabaseName") != m.end() && !m["PhysicalDatabaseName"].empty()) {
      physicalDatabaseName = make_shared<string>(boost::any_cast<string>(m["PhysicalDatabaseName"]));
    }
    if (m.find("PhysicalTableName") != m.end() && !m["PhysicalTableName"].empty()) {
      physicalTableName = make_shared<string>(boost::any_cast<string>(m["PhysicalTableName"]));
    }
    if (m.find("PreviousVersion") != m.end() && !m["PreviousVersion"].empty()) {
      previousVersion = make_shared<long>(boost::any_cast<long>(m["PreviousVersion"]));
    }
    if (m.find("RawTableName") != m.end() && !m["RawTableName"].empty()) {
      rawTableName = make_shared<string>(boost::any_cast<string>(m["RawTableName"]));
    }
    if (m.find("RouteColumns") != m.end() && !m["RouteColumns"].empty()) {
      if (typeid(vector<boost::any>) == m["RouteColumns"].type()) {
        vector<FieldSchemaModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RouteColumns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FieldSchemaModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        routeColumns = make_shared<vector<FieldSchemaModel>>(expect1);
      }
    }
    if (m.find("RouteEffectiveColumn") != m.end() && !m["RouteEffectiveColumn"].empty()) {
      if (typeid(map<string, boost::any>) == m["RouteEffectiveColumn"].type()) {
        FieldSchemaModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RouteEffectiveColumn"]));
        routeEffectiveColumn = make_shared<FieldSchemaModel>(model1);
      }
    }
    if (m.find("RouteType") != m.end() && !m["RouteType"].empty()) {
      routeType = make_shared<string>(boost::any_cast<string>(m["RouteType"]));
    }
    if (m.find("RtEngineType") != m.end() && !m["RtEngineType"].empty()) {
      rtEngineType = make_shared<string>(boost::any_cast<string>(m["RtEngineType"]));
    }
    if (m.find("RtIndexAll") != m.end() && !m["RtIndexAll"].empty()) {
      rtIndexAll = make_shared<bool>(boost::any_cast<bool>(m["RtIndexAll"]));
    }
    if (m.find("RtModeType") != m.end() && !m["RtModeType"].empty()) {
      rtModeType = make_shared<string>(boost::any_cast<string>(m["RtModeType"]));
    }
    if (m.find("Sd") != m.end() && !m["Sd"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sd"].type()) {
        StorageDescriptorModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sd"]));
        sd = make_shared<StorageDescriptorModel>(model1);
      }
    }
    if (m.find("StoragePolicy") != m.end() && !m["StoragePolicy"].empty()) {
      storagePolicy = make_shared<string>(boost::any_cast<string>(m["StoragePolicy"]));
    }
    if (m.find("SubpartitionColumn") != m.end() && !m["SubpartitionColumn"].empty()) {
      subpartitionColumn = make_shared<string>(boost::any_cast<string>(m["SubpartitionColumn"]));
    }
    if (m.find("SubpartitionCount") != m.end() && !m["SubpartitionCount"].empty()) {
      subpartitionCount = make_shared<long>(boost::any_cast<long>(m["SubpartitionCount"]));
    }
    if (m.find("SubpartitionType") != m.end() && !m["SubpartitionType"].empty()) {
      subpartitionType = make_shared<string>(boost::any_cast<string>(m["SubpartitionType"]));
    }
    if (m.find("TableEngineName") != m.end() && !m["TableEngineName"].empty()) {
      tableEngineName = make_shared<string>(boost::any_cast<string>(m["TableEngineName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("TableType") != m.end() && !m["TableType"].empty()) {
      tableType = make_shared<string>(boost::any_cast<string>(m["TableType"]));
    }
    if (m.find("TblId") != m.end() && !m["TblId"].empty()) {
      tblId = make_shared<long>(boost::any_cast<long>(m["TblId"]));
    }
    if (m.find("Temporary") != m.end() && !m["Temporary"].empty()) {
      temporary = make_shared<bool>(boost::any_cast<bool>(m["Temporary"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("ViewExpandedText") != m.end() && !m["ViewExpandedText"].empty()) {
      viewExpandedText = make_shared<string>(boost::any_cast<string>(m["ViewExpandedText"]));
    }
    if (m.find("ViewOriginalText") != m.end() && !m["ViewOriginalText"].empty()) {
      viewOriginalText = make_shared<string>(boost::any_cast<string>(m["ViewOriginalText"]));
    }
    if (m.find("ViewSecurityMode") != m.end() && !m["ViewSecurityMode"].empty()) {
      viewSecurityMode = make_shared<string>(boost::any_cast<string>(m["ViewSecurityMode"]));
    }
  }


  virtual ~TableModel() = default;
};
class TableSummaryModel : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> owner{};
  shared_ptr<string> SQL{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};
  shared_ptr<long> tableSize{};
  shared_ptr<string> tableType{};
  shared_ptr<string> updateTime{};

  TableSummaryModel() {}

  explicit TableSummaryModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (SQL) {
      res["SQL"] = boost::any(*SQL);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (tableSize) {
      res["TableSize"] = boost::any(*tableSize);
    }
    if (tableType) {
      res["TableType"] = boost::any(*tableType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("SQL") != m.end() && !m["SQL"].empty()) {
      SQL = make_shared<string>(boost::any_cast<string>(m["SQL"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("TableSize") != m.end() && !m["TableSize"].empty()) {
      tableSize = make_shared<long>(boost::any_cast<long>(m["TableSize"]));
    }
    if (m.find("TableType") != m.end() && !m["TableType"].empty()) {
      tableType = make_shared<string>(boost::any_cast<string>(m["TableType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~TableSummaryModel() = default;
};
class AllocateClusterPublicConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionStringPrefix{};
  shared_ptr<string> DBClusterId{};

  AllocateClusterPublicConnectionRequest() {}

  explicit AllocateClusterPublicConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionStringPrefix) {
      res["ConnectionStringPrefix"] = boost::any(*connectionStringPrefix);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionStringPrefix") != m.end() && !m["ConnectionStringPrefix"].empty()) {
      connectionStringPrefix = make_shared<string>(boost::any_cast<string>(m["ConnectionStringPrefix"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~AllocateClusterPublicConnectionRequest() = default;
};
class AllocateClusterPublicConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AllocateClusterPublicConnectionResponseBody() {}

  explicit AllocateClusterPublicConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AllocateClusterPublicConnectionResponseBody() = default;
};
class AllocateClusterPublicConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AllocateClusterPublicConnectionResponseBody> body{};

  AllocateClusterPublicConnectionResponse() {}

  explicit AllocateClusterPublicConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AllocateClusterPublicConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AllocateClusterPublicConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~AllocateClusterPublicConnectionResponse() = default;
};
class AttachUserENIRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};

  AttachUserENIRequest() {}

  explicit AttachUserENIRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~AttachUserENIRequest() = default;
};
class AttachUserENIResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachUserENIResponseBody() {}

  explicit AttachUserENIResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AttachUserENIResponseBody() = default;
};
class AttachUserENIResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachUserENIResponseBody> body{};

  AttachUserENIResponse() {}

  explicit AttachUserENIResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AttachUserENIResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachUserENIResponseBody>(model1);
      }
    }
  }


  virtual ~AttachUserENIResponse() = default;
};
class BindAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ramUser{};

  BindAccountRequest() {}

  explicit BindAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ramUser) {
      res["RamUser"] = boost::any(*ramUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RamUser") != m.end() && !m["RamUser"].empty()) {
      ramUser = make_shared<string>(boost::any_cast<string>(m["RamUser"]));
    }
  }


  virtual ~BindAccountRequest() = default;
};
class BindAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BindAccountResponseBody() {}

  explicit BindAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BindAccountResponseBody() = default;
};
class BindAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindAccountResponseBody> body{};

  BindAccountResponse() {}

  explicit BindAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BindAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindAccountResponseBody>(model1);
      }
    }
  }


  virtual ~BindAccountResponse() = default;
};
class BindDBResourceGroupWithUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupUser{};

  BindDBResourceGroupWithUserRequest() {}

  explicit BindDBResourceGroupWithUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupUser) {
      res["GroupUser"] = boost::any(*groupUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupUser") != m.end() && !m["GroupUser"].empty()) {
      groupUser = make_shared<string>(boost::any_cast<string>(m["GroupUser"]));
    }
  }


  virtual ~BindDBResourceGroupWithUserRequest() = default;
};
class BindDBResourceGroupWithUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BindDBResourceGroupWithUserResponseBody() {}

  explicit BindDBResourceGroupWithUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BindDBResourceGroupWithUserResponseBody() = default;
};
class BindDBResourceGroupWithUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindDBResourceGroupWithUserResponseBody> body{};

  BindDBResourceGroupWithUserResponse() {}

  explicit BindDBResourceGroupWithUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BindDBResourceGroupWithUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindDBResourceGroupWithUserResponseBody>(model1);
      }
    }
  }


  virtual ~BindDBResourceGroupWithUserResponse() = default;
};
class CheckBindRamUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};

  CheckBindRamUserRequest() {}

  explicit CheckBindRamUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CheckBindRamUserRequest() = default;
};
class CheckBindRamUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  CheckBindRamUserResponseBody() {}

  explicit CheckBindRamUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~CheckBindRamUserResponseBody() = default;
};
class CheckBindRamUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckBindRamUserResponseBody> body{};

  CheckBindRamUserResponse() {}

  explicit CheckBindRamUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckBindRamUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckBindRamUserResponseBody>(model1);
      }
    }
  }


  virtual ~CheckBindRamUserResponse() = default;
};
class CheckSampleDataSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};

  CheckSampleDataSetRequest() {}

  explicit CheckSampleDataSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~CheckSampleDataSetRequest() = default;
};
class CheckSampleDataSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  CheckSampleDataSetResponseBody() {}

  explicit CheckSampleDataSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CheckSampleDataSetResponseBody() = default;
};
class CheckSampleDataSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckSampleDataSetResponseBody> body{};

  CheckSampleDataSetResponse() {}

  explicit CheckSampleDataSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckSampleDataSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckSampleDataSetResponseBody>(model1);
      }
    }
  }


  virtual ~CheckSampleDataSetResponse() = default;
};
class CreateAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> accountType{};
  shared_ptr<string> DBClusterId{};

  CreateAccountRequest() {}

  explicit CreateAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~CreateAccountRequest() = default;
};
class CreateAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateAccountResponseBody() {}

  explicit CreateAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAccountResponseBody() = default;
};
class CreateAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAccountResponseBody> body{};

  CreateAccountResponse() {}

  explicit CreateAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAccountResponse() = default;
};
class CreateDBClusterRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateDBClusterRequestTag() {}

  explicit CreateDBClusterRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateDBClusterRequestTag() = default;
};
class CreateDBClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupSetId{};
  shared_ptr<string> computeResource{};
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterNetworkType{};
  shared_ptr<string> DBClusterVersion{};
  shared_ptr<bool> enableDefaultResourcePool{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> restoreToTime{};
  shared_ptr<string> restoreType{};
  shared_ptr<string> sourceDbClusterId{};
  shared_ptr<string> storageResource{};
  shared_ptr<vector<CreateDBClusterRequestTag>> tag{};
  shared_ptr<string> usedTime{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  CreateDBClusterRequest() {}

  explicit CreateDBClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupSetId) {
      res["BackupSetId"] = boost::any(*backupSetId);
    }
    if (computeResource) {
      res["ComputeResource"] = boost::any(*computeResource);
    }
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (DBClusterNetworkType) {
      res["DBClusterNetworkType"] = boost::any(*DBClusterNetworkType);
    }
    if (DBClusterVersion) {
      res["DBClusterVersion"] = boost::any(*DBClusterVersion);
    }
    if (enableDefaultResourcePool) {
      res["EnableDefaultResourcePool"] = boost::any(*enableDefaultResourcePool);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (restoreToTime) {
      res["RestoreToTime"] = boost::any(*restoreToTime);
    }
    if (restoreType) {
      res["RestoreType"] = boost::any(*restoreType);
    }
    if (sourceDbClusterId) {
      res["SourceDbClusterId"] = boost::any(*sourceDbClusterId);
    }
    if (storageResource) {
      res["StorageResource"] = boost::any(*storageResource);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupSetId") != m.end() && !m["BackupSetId"].empty()) {
      backupSetId = make_shared<string>(boost::any_cast<string>(m["BackupSetId"]));
    }
    if (m.find("ComputeResource") != m.end() && !m["ComputeResource"].empty()) {
      computeResource = make_shared<string>(boost::any_cast<string>(m["ComputeResource"]));
    }
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBClusterNetworkType") != m.end() && !m["DBClusterNetworkType"].empty()) {
      DBClusterNetworkType = make_shared<string>(boost::any_cast<string>(m["DBClusterNetworkType"]));
    }
    if (m.find("DBClusterVersion") != m.end() && !m["DBClusterVersion"].empty()) {
      DBClusterVersion = make_shared<string>(boost::any_cast<string>(m["DBClusterVersion"]));
    }
    if (m.find("EnableDefaultResourcePool") != m.end() && !m["EnableDefaultResourcePool"].empty()) {
      enableDefaultResourcePool = make_shared<bool>(boost::any_cast<bool>(m["EnableDefaultResourcePool"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RestoreToTime") != m.end() && !m["RestoreToTime"].empty()) {
      restoreToTime = make_shared<string>(boost::any_cast<string>(m["RestoreToTime"]));
    }
    if (m.find("RestoreType") != m.end() && !m["RestoreType"].empty()) {
      restoreType = make_shared<string>(boost::any_cast<string>(m["RestoreType"]));
    }
    if (m.find("SourceDbClusterId") != m.end() && !m["SourceDbClusterId"].empty()) {
      sourceDbClusterId = make_shared<string>(boost::any_cast<string>(m["SourceDbClusterId"]));
    }
    if (m.find("StorageResource") != m.end() && !m["StorageResource"].empty()) {
      storageResource = make_shared<string>(boost::any_cast<string>(m["StorageResource"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateDBClusterRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDBClusterRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateDBClusterRequestTag>>(expect1);
      }
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<string>(boost::any_cast<string>(m["UsedTime"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateDBClusterRequest() = default;
};
class CreateDBClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};

  CreateDBClusterResponseBody() {}

  explicit CreateDBClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~CreateDBClusterResponseBody() = default;
};
class CreateDBClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDBClusterResponseBody> body{};

  CreateDBClusterResponse() {}

  explicit CreateDBClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDBClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDBClusterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDBClusterResponse() = default;
};
class CreateDBResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterMode{};
  shared_ptr<string> clusterSizeResource{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupType{};
  shared_ptr<long> maxClusterCount{};
  shared_ptr<string> maxComputeResource{};
  shared_ptr<long> minClusterCount{};
  shared_ptr<string> minComputeResource{};

  CreateDBResourceGroupRequest() {}

  explicit CreateDBResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterMode) {
      res["ClusterMode"] = boost::any(*clusterMode);
    }
    if (clusterSizeResource) {
      res["ClusterSizeResource"] = boost::any(*clusterSizeResource);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupType) {
      res["GroupType"] = boost::any(*groupType);
    }
    if (maxClusterCount) {
      res["MaxClusterCount"] = boost::any(*maxClusterCount);
    }
    if (maxComputeResource) {
      res["MaxComputeResource"] = boost::any(*maxComputeResource);
    }
    if (minClusterCount) {
      res["MinClusterCount"] = boost::any(*minClusterCount);
    }
    if (minComputeResource) {
      res["MinComputeResource"] = boost::any(*minComputeResource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterMode") != m.end() && !m["ClusterMode"].empty()) {
      clusterMode = make_shared<string>(boost::any_cast<string>(m["ClusterMode"]));
    }
    if (m.find("ClusterSizeResource") != m.end() && !m["ClusterSizeResource"].empty()) {
      clusterSizeResource = make_shared<string>(boost::any_cast<string>(m["ClusterSizeResource"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupType") != m.end() && !m["GroupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["GroupType"]));
    }
    if (m.find("MaxClusterCount") != m.end() && !m["MaxClusterCount"].empty()) {
      maxClusterCount = make_shared<long>(boost::any_cast<long>(m["MaxClusterCount"]));
    }
    if (m.find("MaxComputeResource") != m.end() && !m["MaxComputeResource"].empty()) {
      maxComputeResource = make_shared<string>(boost::any_cast<string>(m["MaxComputeResource"]));
    }
    if (m.find("MinClusterCount") != m.end() && !m["MinClusterCount"].empty()) {
      minClusterCount = make_shared<long>(boost::any_cast<long>(m["MinClusterCount"]));
    }
    if (m.find("MinComputeResource") != m.end() && !m["MinComputeResource"].empty()) {
      minComputeResource = make_shared<string>(boost::any_cast<string>(m["MinComputeResource"]));
    }
  }


  virtual ~CreateDBResourceGroupRequest() = default;
};
class CreateDBResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateDBResourceGroupResponseBody() {}

  explicit CreateDBResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDBResourceGroupResponseBody() = default;
};
class CreateDBResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDBResourceGroupResponseBody> body{};

  CreateDBResourceGroupResponse() {}

  explicit CreateDBResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDBResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDBResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDBResourceGroupResponse() = default;
};
class CreateElasticPlanRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoScale{};
  shared_ptr<string> cronExpression{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> elasticPlanName{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> endTime{};
  shared_ptr<string> resourceGroupName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> targetSize{};
  shared_ptr<string> type{};

  CreateElasticPlanRequest() {}

  explicit CreateElasticPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoScale) {
      res["AutoScale"] = boost::any(*autoScale);
    }
    if (cronExpression) {
      res["CronExpression"] = boost::any(*cronExpression);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (elasticPlanName) {
      res["ElasticPlanName"] = boost::any(*elasticPlanName);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (targetSize) {
      res["TargetSize"] = boost::any(*targetSize);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoScale") != m.end() && !m["AutoScale"].empty()) {
      autoScale = make_shared<bool>(boost::any_cast<bool>(m["AutoScale"]));
    }
    if (m.find("CronExpression") != m.end() && !m["CronExpression"].empty()) {
      cronExpression = make_shared<string>(boost::any_cast<string>(m["CronExpression"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ElasticPlanName") != m.end() && !m["ElasticPlanName"].empty()) {
      elasticPlanName = make_shared<string>(boost::any_cast<string>(m["ElasticPlanName"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TargetSize") != m.end() && !m["TargetSize"].empty()) {
      targetSize = make_shared<string>(boost::any_cast<string>(m["TargetSize"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateElasticPlanRequest() = default;
};
class CreateElasticPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateElasticPlanResponseBody() {}

  explicit CreateElasticPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateElasticPlanResponseBody() = default;
};
class CreateElasticPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateElasticPlanResponseBody> body{};

  CreateElasticPlanResponse() {}

  explicit CreateElasticPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateElasticPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateElasticPlanResponseBody>(model1);
      }
    }
  }


  virtual ~CreateElasticPlanResponse() = default;
};
class CreateOssSubDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> path{};

  CreateOssSubDirectoryRequest() {}

  explicit CreateOssSubDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~CreateOssSubDirectoryRequest() = default;
};
class CreateOssSubDirectoryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> clientCRC{};
  shared_ptr<string> ETag{};
  shared_ptr<string> requestId{};
  shared_ptr<long> serverCRC{};

  CreateOssSubDirectoryResponseBodyData() {}

  explicit CreateOssSubDirectoryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientCRC) {
      res["ClientCRC"] = boost::any(*clientCRC);
    }
    if (ETag) {
      res["ETag"] = boost::any(*ETag);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverCRC) {
      res["ServerCRC"] = boost::any(*serverCRC);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientCRC") != m.end() && !m["ClientCRC"].empty()) {
      clientCRC = make_shared<long>(boost::any_cast<long>(m["ClientCRC"]));
    }
    if (m.find("ETag") != m.end() && !m["ETag"].empty()) {
      ETag = make_shared<string>(boost::any_cast<string>(m["ETag"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerCRC") != m.end() && !m["ServerCRC"].empty()) {
      serverCRC = make_shared<long>(boost::any_cast<long>(m["ServerCRC"]));
    }
  }


  virtual ~CreateOssSubDirectoryResponseBodyData() = default;
};
class CreateOssSubDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateOssSubDirectoryResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateOssSubDirectoryResponseBody() {}

  explicit CreateOssSubDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateOssSubDirectoryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateOssSubDirectoryResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateOssSubDirectoryResponseBody() = default;
};
class CreateOssSubDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateOssSubDirectoryResponseBody> body{};

  CreateOssSubDirectoryResponse() {}

  explicit CreateOssSubDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateOssSubDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateOssSubDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateOssSubDirectoryResponse() = default;
};
class CreateSparkTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appType{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> name{};
  shared_ptr<long> parentId{};
  shared_ptr<string> type{};

  CreateSparkTemplateRequest() {}

  explicit CreateSparkTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<long>(boost::any_cast<long>(m["ParentId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateSparkTemplateRequest() = default;
};
class CreateSparkTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> succeeded{};

  CreateSparkTemplateResponseBodyData() {}

  explicit CreateSparkTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (succeeded) {
      res["Succeeded"] = boost::any(*succeeded);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Succeeded") != m.end() && !m["Succeeded"].empty()) {
      succeeded = make_shared<bool>(boost::any_cast<bool>(m["Succeeded"]));
    }
  }


  virtual ~CreateSparkTemplateResponseBodyData() = default;
};
class CreateSparkTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateSparkTemplateResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateSparkTemplateResponseBody() {}

  explicit CreateSparkTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateSparkTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateSparkTemplateResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateSparkTemplateResponseBody() = default;
};
class CreateSparkTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSparkTemplateResponseBody> body{};

  CreateSparkTemplateResponse() {}

  explicit CreateSparkTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSparkTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSparkTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSparkTemplateResponse() = default;
};
class DeleteAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> DBClusterId{};

  DeleteAccountRequest() {}

  explicit DeleteAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~DeleteAccountRequest() = default;
};
class DeleteAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAccountResponseBody() {}

  explicit DeleteAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAccountResponseBody() = default;
};
class DeleteAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAccountResponseBody> body{};

  DeleteAccountResponse() {}

  explicit DeleteAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAccountResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAccountResponse() = default;
};
class DeleteDBClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};

  DeleteDBClusterRequest() {}

  explicit DeleteDBClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~DeleteDBClusterRequest() = default;
};
class DeleteDBClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> requestId{};

  DeleteDBClusterResponseBody() {}

  explicit DeleteDBClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDBClusterResponseBody() = default;
};
class DeleteDBClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDBClusterResponseBody> body{};

  DeleteDBClusterResponse() {}

  explicit DeleteDBClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDBClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDBClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDBClusterResponse() = default;
};
class DeleteDBResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> groupName{};

  DeleteDBResourceGroupRequest() {}

  explicit DeleteDBResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~DeleteDBResourceGroupRequest() = default;
};
class DeleteDBResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDBResourceGroupResponseBody() {}

  explicit DeleteDBResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDBResourceGroupResponseBody() = default;
};
class DeleteDBResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDBResourceGroupResponseBody> body{};

  DeleteDBResourceGroupResponse() {}

  explicit DeleteDBResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDBResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDBResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDBResourceGroupResponse() = default;
};
class DeleteElasticPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> elasticPlanName{};

  DeleteElasticPlanRequest() {}

  explicit DeleteElasticPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (elasticPlanName) {
      res["ElasticPlanName"] = boost::any(*elasticPlanName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ElasticPlanName") != m.end() && !m["ElasticPlanName"].empty()) {
      elasticPlanName = make_shared<string>(boost::any_cast<string>(m["ElasticPlanName"]));
    }
  }


  virtual ~DeleteElasticPlanRequest() = default;
};
class DeleteElasticPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteElasticPlanResponseBody() {}

  explicit DeleteElasticPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteElasticPlanResponseBody() = default;
};
class DeleteElasticPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteElasticPlanResponseBody> body{};

  DeleteElasticPlanResponse() {}

  explicit DeleteElasticPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteElasticPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteElasticPlanResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteElasticPlanResponse() = default;
};
class DeleteProcessInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<long> processInstanceId{};
  shared_ptr<long> projectCode{};
  shared_ptr<string> regionId{};

  DeleteProcessInstanceRequest() {}

  explicit DeleteProcessInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (processInstanceId) {
      res["ProcessInstanceId"] = boost::any(*processInstanceId);
    }
    if (projectCode) {
      res["ProjectCode"] = boost::any(*projectCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ProcessInstanceId") != m.end() && !m["ProcessInstanceId"].empty()) {
      processInstanceId = make_shared<long>(boost::any_cast<long>(m["ProcessInstanceId"]));
    }
    if (m.find("ProjectCode") != m.end() && !m["ProjectCode"].empty()) {
      projectCode = make_shared<long>(boost::any_cast<long>(m["ProjectCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteProcessInstanceRequest() = default;
};
class DeleteProcessInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteProcessInstanceResponseBody() {}

  explicit DeleteProcessInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteProcessInstanceResponseBody() = default;
};
class DeleteProcessInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteProcessInstanceResponseBody> body{};

  DeleteProcessInstanceResponse() {}

  explicit DeleteProcessInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteProcessInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProcessInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProcessInstanceResponse() = default;
};
class DeleteSparkTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<long> id{};

  DeleteSparkTemplateRequest() {}

  explicit DeleteSparkTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DeleteSparkTemplateRequest() = default;
};
class DeleteSparkTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> succeeded{};

  DeleteSparkTemplateResponseBodyData() {}

  explicit DeleteSparkTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (succeeded) {
      res["Succeeded"] = boost::any(*succeeded);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Succeeded") != m.end() && !m["Succeeded"].empty()) {
      succeeded = make_shared<bool>(boost::any_cast<bool>(m["Succeeded"]));
    }
  }


  virtual ~DeleteSparkTemplateResponseBodyData() = default;
};
class DeleteSparkTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteSparkTemplateResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DeleteSparkTemplateResponseBody() {}

  explicit DeleteSparkTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteSparkTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteSparkTemplateResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteSparkTemplateResponseBody() = default;
};
class DeleteSparkTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSparkTemplateResponseBody> body{};

  DeleteSparkTemplateResponse() {}

  explicit DeleteSparkTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteSparkTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSparkTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSparkTemplateResponse() = default;
};
class DeleteSparkTemplateFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<long> id{};

  DeleteSparkTemplateFileRequest() {}

  explicit DeleteSparkTemplateFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DeleteSparkTemplateFileRequest() = default;
};
class DeleteSparkTemplateFileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> succeeded{};

  DeleteSparkTemplateFileResponseBodyData() {}

  explicit DeleteSparkTemplateFileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (succeeded) {
      res["Succeeded"] = boost::any(*succeeded);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Succeeded") != m.end() && !m["Succeeded"].empty()) {
      succeeded = make_shared<bool>(boost::any_cast<bool>(m["Succeeded"]));
    }
  }


  virtual ~DeleteSparkTemplateFileResponseBodyData() = default;
};
class DeleteSparkTemplateFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteSparkTemplateFileResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DeleteSparkTemplateFileResponseBody() {}

  explicit DeleteSparkTemplateFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteSparkTemplateFileResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteSparkTemplateFileResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteSparkTemplateFileResponseBody() = default;
};
class DeleteSparkTemplateFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSparkTemplateFileResponseBody> body{};

  DeleteSparkTemplateFileResponse() {}

  explicit DeleteSparkTemplateFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteSparkTemplateFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSparkTemplateFileResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSparkTemplateFileResponse() = default;
};
class DescribeAccountAllPrivilegesRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> marker{};
  shared_ptr<string> regionId{};

  DescribeAccountAllPrivilegesRequest() {}

  explicit DescribeAccountAllPrivilegesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeAccountAllPrivilegesRequest() = default;
};
class DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject : public Darabonba::Model {
public:
  shared_ptr<string> column{};
  shared_ptr<string> database{};
  shared_ptr<string> description{};
  shared_ptr<string> table{};

  DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject() {}

  explicit DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (column) {
      res["Column"] = boost::any(*column);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Column") != m.end() && !m["Column"].empty()) {
      column = make_shared<string>(boost::any_cast<string>(m["Column"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
  }


  virtual ~DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject() = default;
};
class DescribeAccountAllPrivilegesResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject> privilegeObject{};
  shared_ptr<string> privilegeType{};
  shared_ptr<vector<string>> privileges{};

  DescribeAccountAllPrivilegesResponseBodyDataResult() {}

  explicit DescribeAccountAllPrivilegesResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (privilegeObject) {
      res["PrivilegeObject"] = privilegeObject ? boost::any(privilegeObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (privilegeType) {
      res["PrivilegeType"] = boost::any(*privilegeType);
    }
    if (privileges) {
      res["Privileges"] = boost::any(*privileges);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrivilegeObject") != m.end() && !m["PrivilegeObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["PrivilegeObject"].type()) {
        DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PrivilegeObject"]));
        privilegeObject = make_shared<DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject>(model1);
      }
    }
    if (m.find("PrivilegeType") != m.end() && !m["PrivilegeType"].empty()) {
      privilegeType = make_shared<string>(boost::any_cast<string>(m["PrivilegeType"]));
    }
    if (m.find("Privileges") != m.end() && !m["Privileges"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Privileges"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Privileges"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      privileges = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeAccountAllPrivilegesResponseBodyDataResult() = default;
};
class DescribeAccountAllPrivilegesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<vector<DescribeAccountAllPrivilegesResponseBodyDataResult>> result{};
  shared_ptr<bool> truncated{};

  DescribeAccountAllPrivilegesResponseBodyData() {}

  explicit DescribeAccountAllPrivilegesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (truncated) {
      res["Truncated"] = boost::any(*truncated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<DescribeAccountAllPrivilegesResponseBodyDataResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccountAllPrivilegesResponseBodyDataResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeAccountAllPrivilegesResponseBodyDataResult>>(expect1);
      }
    }
    if (m.find("Truncated") != m.end() && !m["Truncated"].empty()) {
      truncated = make_shared<bool>(boost::any_cast<bool>(m["Truncated"]));
    }
  }


  virtual ~DescribeAccountAllPrivilegesResponseBodyData() = default;
};
class DescribeAccountAllPrivilegesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAccountAllPrivilegesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeAccountAllPrivilegesResponseBody() {}

  explicit DescribeAccountAllPrivilegesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeAccountAllPrivilegesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeAccountAllPrivilegesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAccountAllPrivilegesResponseBody() = default;
};
class DescribeAccountAllPrivilegesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAccountAllPrivilegesResponseBody> body{};

  DescribeAccountAllPrivilegesResponse() {}

  explicit DescribeAccountAllPrivilegesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAccountAllPrivilegesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccountAllPrivilegesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccountAllPrivilegesResponse() = default;
};
class DescribeAccountPrivilegeObjectsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> columnPrivilegeObject{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> databasePrivilegeObject{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> privilegeType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> tablePrivilegeObject{};

  DescribeAccountPrivilegeObjectsRequest() {}

  explicit DescribeAccountPrivilegeObjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (columnPrivilegeObject) {
      res["ColumnPrivilegeObject"] = boost::any(*columnPrivilegeObject);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (databasePrivilegeObject) {
      res["DatabasePrivilegeObject"] = boost::any(*databasePrivilegeObject);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (privilegeType) {
      res["PrivilegeType"] = boost::any(*privilegeType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (tablePrivilegeObject) {
      res["TablePrivilegeObject"] = boost::any(*tablePrivilegeObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("ColumnPrivilegeObject") != m.end() && !m["ColumnPrivilegeObject"].empty()) {
      columnPrivilegeObject = make_shared<string>(boost::any_cast<string>(m["ColumnPrivilegeObject"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DatabasePrivilegeObject") != m.end() && !m["DatabasePrivilegeObject"].empty()) {
      databasePrivilegeObject = make_shared<string>(boost::any_cast<string>(m["DatabasePrivilegeObject"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("PrivilegeType") != m.end() && !m["PrivilegeType"].empty()) {
      privilegeType = make_shared<string>(boost::any_cast<string>(m["PrivilegeType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TablePrivilegeObject") != m.end() && !m["TablePrivilegeObject"].empty()) {
      tablePrivilegeObject = make_shared<string>(boost::any_cast<string>(m["TablePrivilegeObject"]));
    }
  }


  virtual ~DescribeAccountPrivilegeObjectsRequest() = default;
};
class DescribeAccountPrivilegeObjectsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> column{};
  shared_ptr<string> database{};
  shared_ptr<string> description{};
  shared_ptr<string> table{};

  DescribeAccountPrivilegeObjectsResponseBodyData() {}

  explicit DescribeAccountPrivilegeObjectsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (column) {
      res["Column"] = boost::any(*column);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Column") != m.end() && !m["Column"].empty()) {
      column = make_shared<string>(boost::any_cast<string>(m["Column"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
  }


  virtual ~DescribeAccountPrivilegeObjectsResponseBodyData() = default;
};
class DescribeAccountPrivilegeObjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAccountPrivilegeObjectsResponseBodyData>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeAccountPrivilegeObjectsResponseBody() {}

  explicit DescribeAccountPrivilegeObjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeAccountPrivilegeObjectsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccountPrivilegeObjectsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeAccountPrivilegeObjectsResponseBodyData>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeAccountPrivilegeObjectsResponseBody() = default;
};
class DescribeAccountPrivilegeObjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAccountPrivilegeObjectsResponseBody> body{};

  DescribeAccountPrivilegeObjectsResponse() {}

  explicit DescribeAccountPrivilegeObjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAccountPrivilegeObjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccountPrivilegeObjectsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccountPrivilegeObjectsResponse() = default;
};
class DescribeAccountPrivilegesRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> columnPrivilegeObject{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> databasePrivilegeObject{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> privilegeType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> tablePrivilegeObject{};

  DescribeAccountPrivilegesRequest() {}

  explicit DescribeAccountPrivilegesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (columnPrivilegeObject) {
      res["ColumnPrivilegeObject"] = boost::any(*columnPrivilegeObject);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (databasePrivilegeObject) {
      res["DatabasePrivilegeObject"] = boost::any(*databasePrivilegeObject);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (privilegeType) {
      res["PrivilegeType"] = boost::any(*privilegeType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (tablePrivilegeObject) {
      res["TablePrivilegeObject"] = boost::any(*tablePrivilegeObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("ColumnPrivilegeObject") != m.end() && !m["ColumnPrivilegeObject"].empty()) {
      columnPrivilegeObject = make_shared<string>(boost::any_cast<string>(m["ColumnPrivilegeObject"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DatabasePrivilegeObject") != m.end() && !m["DatabasePrivilegeObject"].empty()) {
      databasePrivilegeObject = make_shared<string>(boost::any_cast<string>(m["DatabasePrivilegeObject"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("PrivilegeType") != m.end() && !m["PrivilegeType"].empty()) {
      privilegeType = make_shared<string>(boost::any_cast<string>(m["PrivilegeType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TablePrivilegeObject") != m.end() && !m["TablePrivilegeObject"].empty()) {
      tablePrivilegeObject = make_shared<string>(boost::any_cast<string>(m["TablePrivilegeObject"]));
    }
  }


  virtual ~DescribeAccountPrivilegesRequest() = default;
};
class DescribeAccountPrivilegesResponseBodyDataPrivilegeObject : public Darabonba::Model {
public:
  shared_ptr<string> column{};
  shared_ptr<string> database{};
  shared_ptr<string> description{};
  shared_ptr<string> table{};

  DescribeAccountPrivilegesResponseBodyDataPrivilegeObject() {}

  explicit DescribeAccountPrivilegesResponseBodyDataPrivilegeObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (column) {
      res["Column"] = boost::any(*column);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Column") != m.end() && !m["Column"].empty()) {
      column = make_shared<string>(boost::any_cast<string>(m["Column"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
  }


  virtual ~DescribeAccountPrivilegesResponseBodyDataPrivilegeObject() = default;
};
class DescribeAccountPrivilegesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<DescribeAccountPrivilegesResponseBodyDataPrivilegeObject> privilegeObject{};
  shared_ptr<string> privilegeType{};
  shared_ptr<vector<string>> privileges{};

  DescribeAccountPrivilegesResponseBodyData() {}

  explicit DescribeAccountPrivilegesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (privilegeObject) {
      res["PrivilegeObject"] = privilegeObject ? boost::any(privilegeObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (privilegeType) {
      res["PrivilegeType"] = boost::any(*privilegeType);
    }
    if (privileges) {
      res["Privileges"] = boost::any(*privileges);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrivilegeObject") != m.end() && !m["PrivilegeObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["PrivilegeObject"].type()) {
        DescribeAccountPrivilegesResponseBodyDataPrivilegeObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PrivilegeObject"]));
        privilegeObject = make_shared<DescribeAccountPrivilegesResponseBodyDataPrivilegeObject>(model1);
      }
    }
    if (m.find("PrivilegeType") != m.end() && !m["PrivilegeType"].empty()) {
      privilegeType = make_shared<string>(boost::any_cast<string>(m["PrivilegeType"]));
    }
    if (m.find("Privileges") != m.end() && !m["Privileges"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Privileges"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Privileges"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      privileges = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeAccountPrivilegesResponseBodyData() = default;
};
class DescribeAccountPrivilegesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAccountPrivilegesResponseBodyData>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeAccountPrivilegesResponseBody() {}

  explicit DescribeAccountPrivilegesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeAccountPrivilegesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccountPrivilegesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeAccountPrivilegesResponseBodyData>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeAccountPrivilegesResponseBody() = default;
};
class DescribeAccountPrivilegesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAccountPrivilegesResponseBody> body{};

  DescribeAccountPrivilegesResponse() {}

  explicit DescribeAccountPrivilegesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAccountPrivilegesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccountPrivilegesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccountPrivilegesResponse() = default;
};
class DescribeAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerId{};

  DescribeAccountsRequest() {}

  explicit DescribeAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~DescribeAccountsRequest() = default;
};
class DescribeAccountsResponseBodyAccountListDBAccount : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountStatus{};
  shared_ptr<string> accountType{};
  shared_ptr<string> ramUsers{};

  DescribeAccountsResponseBodyAccountListDBAccount() {}

  explicit DescribeAccountsResponseBodyAccountListDBAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountStatus) {
      res["AccountStatus"] = boost::any(*accountStatus);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (ramUsers) {
      res["RamUsers"] = boost::any(*ramUsers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountStatus") != m.end() && !m["AccountStatus"].empty()) {
      accountStatus = make_shared<string>(boost::any_cast<string>(m["AccountStatus"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("RamUsers") != m.end() && !m["RamUsers"].empty()) {
      ramUsers = make_shared<string>(boost::any_cast<string>(m["RamUsers"]));
    }
  }


  virtual ~DescribeAccountsResponseBodyAccountListDBAccount() = default;
};
class DescribeAccountsResponseBodyAccountList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAccountsResponseBodyAccountListDBAccount>> DBAccount{};

  DescribeAccountsResponseBodyAccountList() {}

  explicit DescribeAccountsResponseBodyAccountList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBAccount) {
      vector<boost::any> temp1;
      for(auto item1:*DBAccount){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBAccount"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBAccount") != m.end() && !m["DBAccount"].empty()) {
      if (typeid(vector<boost::any>) == m["DBAccount"].type()) {
        vector<DescribeAccountsResponseBodyAccountListDBAccount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBAccount"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccountsResponseBodyAccountListDBAccount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBAccount = make_shared<vector<DescribeAccountsResponseBodyAccountListDBAccount>>(expect1);
      }
    }
  }


  virtual ~DescribeAccountsResponseBodyAccountList() = default;
};
class DescribeAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAccountsResponseBodyAccountList> accountList{};
  shared_ptr<string> requestId{};

  DescribeAccountsResponseBody() {}

  explicit DescribeAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountList) {
      res["AccountList"] = accountList ? boost::any(accountList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountList") != m.end() && !m["AccountList"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountList"].type()) {
        DescribeAccountsResponseBodyAccountList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountList"]));
        accountList = make_shared<DescribeAccountsResponseBodyAccountList>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAccountsResponseBody() = default;
};
class DescribeAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAccountsResponseBody> body{};

  DescribeAccountsResponse() {}

  explicit DescribeAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccountsResponse() = default;
};
class DescribeAdbMySqlColumnsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> schema{};
  shared_ptr<string> tableName{};

  DescribeAdbMySqlColumnsRequest() {}

  explicit DescribeAdbMySqlColumnsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (schema) {
      res["Schema"] = boost::any(*schema);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["Schema"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeAdbMySqlColumnsRequest() = default;
};
class DescribeAdbMySqlColumnsResponseBodyColumns : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  DescribeAdbMySqlColumnsResponseBodyColumns() {}

  explicit DescribeAdbMySqlColumnsResponseBodyColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeAdbMySqlColumnsResponseBodyColumns() = default;
};
class DescribeAdbMySqlColumnsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> columnCount{};
  shared_ptr<vector<DescribeAdbMySqlColumnsResponseBodyColumns>> columns{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> schema{};
  shared_ptr<bool> success{};
  shared_ptr<string> tableName{};

  DescribeAdbMySqlColumnsResponseBody() {}

  explicit DescribeAdbMySqlColumnsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columnCount) {
      res["ColumnCount"] = boost::any(*columnCount);
    }
    if (columns) {
      vector<boost::any> temp1;
      for(auto item1:*columns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Columns"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (schema) {
      res["Schema"] = boost::any(*schema);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColumnCount") != m.end() && !m["ColumnCount"].empty()) {
      columnCount = make_shared<long>(boost::any_cast<long>(m["ColumnCount"]));
    }
    if (m.find("Columns") != m.end() && !m["Columns"].empty()) {
      if (typeid(vector<boost::any>) == m["Columns"].type()) {
        vector<DescribeAdbMySqlColumnsResponseBodyColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Columns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAdbMySqlColumnsResponseBodyColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columns = make_shared<vector<DescribeAdbMySqlColumnsResponseBodyColumns>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["Schema"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeAdbMySqlColumnsResponseBody() = default;
};
class DescribeAdbMySqlColumnsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAdbMySqlColumnsResponseBody> body{};

  DescribeAdbMySqlColumnsResponse() {}

  explicit DescribeAdbMySqlColumnsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAdbMySqlColumnsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAdbMySqlColumnsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAdbMySqlColumnsResponse() = default;
};
class DescribeAdbMySqlSchemasRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};

  DescribeAdbMySqlSchemasRequest() {}

  explicit DescribeAdbMySqlSchemasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeAdbMySqlSchemasRequest() = default;
};
class DescribeAdbMySqlSchemasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> schemas{};
  shared_ptr<bool> success{};

  DescribeAdbMySqlSchemasResponseBody() {}

  explicit DescribeAdbMySqlSchemasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (schemas) {
      res["Schemas"] = boost::any(*schemas);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Schemas") != m.end() && !m["Schemas"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Schemas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Schemas"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      schemas = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeAdbMySqlSchemasResponseBody() = default;
};
class DescribeAdbMySqlSchemasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAdbMySqlSchemasResponseBody> body{};

  DescribeAdbMySqlSchemasResponse() {}

  explicit DescribeAdbMySqlSchemasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAdbMySqlSchemasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAdbMySqlSchemasResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAdbMySqlSchemasResponse() = default;
};
class DescribeAdbMySqlTablesRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> schema{};

  DescribeAdbMySqlTablesRequest() {}

  explicit DescribeAdbMySqlTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (schema) {
      res["Schema"] = boost::any(*schema);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["Schema"]));
    }
  }


  virtual ~DescribeAdbMySqlTablesRequest() = default;
};
class DescribeAdbMySqlTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> schema{};
  shared_ptr<bool> success{};
  shared_ptr<vector<string>> tables{};

  DescribeAdbMySqlTablesResponseBody() {}

  explicit DescribeAdbMySqlTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (schema) {
      res["Schema"] = boost::any(*schema);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (tables) {
      res["Tables"] = boost::any(*tables);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["Schema"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tables"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tables"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tables = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeAdbMySqlTablesResponseBody() = default;
};
class DescribeAdbMySqlTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAdbMySqlTablesResponseBody> body{};

  DescribeAdbMySqlTablesResponse() {}

  explicit DescribeAdbMySqlTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAdbMySqlTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAdbMySqlTablesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAdbMySqlTablesResponse() = default;
};
class DescribeAllDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};

  DescribeAllDataSourceRequest() {}

  explicit DescribeAllDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeAllDataSourceRequest() = default;
};
class DescribeAllDataSourceResponseBodyColumnsColumn : public Darabonba::Model {
public:
  shared_ptr<bool> autoIncrementColumn{};
  shared_ptr<string> columnName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<bool> primaryKey{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> type{};

  DescribeAllDataSourceResponseBodyColumnsColumn() {}

  explicit DescribeAllDataSourceResponseBodyColumnsColumn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoIncrementColumn) {
      res["AutoIncrementColumn"] = boost::any(*autoIncrementColumn);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (primaryKey) {
      res["PrimaryKey"] = boost::any(*primaryKey);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoIncrementColumn") != m.end() && !m["AutoIncrementColumn"].empty()) {
      autoIncrementColumn = make_shared<bool>(boost::any_cast<bool>(m["AutoIncrementColumn"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PrimaryKey") != m.end() && !m["PrimaryKey"].empty()) {
      primaryKey = make_shared<bool>(boost::any_cast<bool>(m["PrimaryKey"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeAllDataSourceResponseBodyColumnsColumn() = default;
};
class DescribeAllDataSourceResponseBodyColumns : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAllDataSourceResponseBodyColumnsColumn>> column{};

  DescribeAllDataSourceResponseBodyColumns() {}

  explicit DescribeAllDataSourceResponseBodyColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (column) {
      vector<boost::any> temp1;
      for(auto item1:*column){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Column"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Column") != m.end() && !m["Column"].empty()) {
      if (typeid(vector<boost::any>) == m["Column"].type()) {
        vector<DescribeAllDataSourceResponseBodyColumnsColumn> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Column"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAllDataSourceResponseBodyColumnsColumn model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        column = make_shared<vector<DescribeAllDataSourceResponseBodyColumnsColumn>>(expect1);
      }
    }
  }


  virtual ~DescribeAllDataSourceResponseBodyColumns() = default;
};
class DescribeAllDataSourceResponseBodySchemasSchema : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> schemaName{};

  DescribeAllDataSourceResponseBodySchemasSchema() {}

  explicit DescribeAllDataSourceResponseBodySchemasSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
  }


  virtual ~DescribeAllDataSourceResponseBodySchemasSchema() = default;
};
class DescribeAllDataSourceResponseBodySchemas : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAllDataSourceResponseBodySchemasSchema>> schema{};

  DescribeAllDataSourceResponseBodySchemas() {}

  explicit DescribeAllDataSourceResponseBodySchemas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schema) {
      vector<boost::any> temp1;
      for(auto item1:*schema){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Schema"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      if (typeid(vector<boost::any>) == m["Schema"].type()) {
        vector<DescribeAllDataSourceResponseBodySchemasSchema> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Schema"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAllDataSourceResponseBodySchemasSchema model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schema = make_shared<vector<DescribeAllDataSourceResponseBodySchemasSchema>>(expect1);
      }
    }
  }


  virtual ~DescribeAllDataSourceResponseBodySchemas() = default;
};
class DescribeAllDataSourceResponseBodyTablesTable : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};

  DescribeAllDataSourceResponseBodyTablesTable() {}

  explicit DescribeAllDataSourceResponseBodyTablesTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeAllDataSourceResponseBodyTablesTable() = default;
};
class DescribeAllDataSourceResponseBodyTables : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAllDataSourceResponseBodyTablesTable>> table{};

  DescribeAllDataSourceResponseBodyTables() {}

  explicit DescribeAllDataSourceResponseBodyTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (table) {
      vector<boost::any> temp1;
      for(auto item1:*table){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Table"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      if (typeid(vector<boost::any>) == m["Table"].type()) {
        vector<DescribeAllDataSourceResponseBodyTablesTable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Table"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAllDataSourceResponseBodyTablesTable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        table = make_shared<vector<DescribeAllDataSourceResponseBodyTablesTable>>(expect1);
      }
    }
  }


  virtual ~DescribeAllDataSourceResponseBodyTables() = default;
};
class DescribeAllDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAllDataSourceResponseBodyColumns> columns{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeAllDataSourceResponseBodySchemas> schemas{};
  shared_ptr<DescribeAllDataSourceResponseBodyTables> tables{};

  DescribeAllDataSourceResponseBody() {}

  explicit DescribeAllDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columns) {
      res["Columns"] = columns ? boost::any(columns->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (schemas) {
      res["Schemas"] = schemas ? boost::any(schemas->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tables) {
      res["Tables"] = tables ? boost::any(tables->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Columns") != m.end() && !m["Columns"].empty()) {
      if (typeid(map<string, boost::any>) == m["Columns"].type()) {
        DescribeAllDataSourceResponseBodyColumns model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Columns"]));
        columns = make_shared<DescribeAllDataSourceResponseBodyColumns>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Schemas") != m.end() && !m["Schemas"].empty()) {
      if (typeid(map<string, boost::any>) == m["Schemas"].type()) {
        DescribeAllDataSourceResponseBodySchemas model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Schemas"]));
        schemas = make_shared<DescribeAllDataSourceResponseBodySchemas>(model1);
      }
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tables"].type()) {
        DescribeAllDataSourceResponseBodyTables model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tables"]));
        tables = make_shared<DescribeAllDataSourceResponseBodyTables>(model1);
      }
    }
  }


  virtual ~DescribeAllDataSourceResponseBody() = default;
};
class DescribeAllDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAllDataSourceResponseBody> body{};

  DescribeAllDataSourceResponse() {}

  explicit DescribeAllDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAllDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAllDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAllDataSourceResponse() = default;
};
class DescribeApsActionLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> keyword{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> stage{};
  shared_ptr<string> startTime{};
  shared_ptr<string> state{};
  shared_ptr<string> workloadId{};

  DescribeApsActionLogsRequest() {}

  explicit DescribeApsActionLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (stage) {
      res["Stage"] = boost::any(*stage);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (workloadId) {
      res["WorkloadId"] = boost::any(*workloadId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Stage") != m.end() && !m["Stage"].empty()) {
      stage = make_shared<string>(boost::any_cast<string>(m["Stage"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("WorkloadId") != m.end() && !m["WorkloadId"].empty()) {
      workloadId = make_shared<string>(boost::any_cast<string>(m["WorkloadId"]));
    }
  }


  virtual ~DescribeApsActionLogsRequest() = default;
};
class DescribeApsActionLogsResponseBodyActionLogs : public Darabonba::Model {
public:
  shared_ptr<string> context{};
  shared_ptr<string> stage{};
  shared_ptr<string> state{};
  shared_ptr<string> time{};

  DescribeApsActionLogsResponseBodyActionLogs() {}

  explicit DescribeApsActionLogsResponseBodyActionLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (context) {
      res["Context"] = boost::any(*context);
    }
    if (stage) {
      res["Stage"] = boost::any(*stage);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Context") != m.end() && !m["Context"].empty()) {
      context = make_shared<string>(boost::any_cast<string>(m["Context"]));
    }
    if (m.find("Stage") != m.end() && !m["Stage"].empty()) {
      stage = make_shared<string>(boost::any_cast<string>(m["Stage"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
  }


  virtual ~DescribeApsActionLogsResponseBodyActionLogs() = default;
};
class DescribeApsActionLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApsActionLogsResponseBodyActionLogs>> actionLogs{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};
  shared_ptr<string> workloadId{};

  DescribeApsActionLogsResponseBody() {}

  explicit DescribeApsActionLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionLogs) {
      vector<boost::any> temp1;
      for(auto item1:*actionLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ActionLogs"] = boost::any(temp1);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (workloadId) {
      res["WorkloadId"] = boost::any(*workloadId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionLogs") != m.end() && !m["ActionLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["ActionLogs"].type()) {
        vector<DescribeApsActionLogsResponseBodyActionLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ActionLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApsActionLogsResponseBodyActionLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        actionLogs = make_shared<vector<DescribeApsActionLogsResponseBodyActionLogs>>(expect1);
      }
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
    if (m.find("WorkloadId") != m.end() && !m["WorkloadId"].empty()) {
      workloadId = make_shared<string>(boost::any_cast<string>(m["WorkloadId"]));
    }
  }


  virtual ~DescribeApsActionLogsResponseBody() = default;
};
class DescribeApsActionLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApsActionLogsResponseBody> body{};

  DescribeApsActionLogsResponse() {}

  explicit DescribeApsActionLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeApsActionLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApsActionLogsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApsActionLogsResponse() = default;
};
class DescribeApsResourceGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};

  DescribeApsResourceGroupsRequest() {}

  explicit DescribeApsResourceGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~DescribeApsResourceGroupsRequest() = default;
};
class DescribeApsResourceGroupsResponseBodyDataResourceGroups : public Darabonba::Model {
public:
  shared_ptr<bool> available{};
  shared_ptr<vector<long>> cuOptions{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupType{};
  shared_ptr<long> leftComputeResource{};
  shared_ptr<long> maxComputeResource{};
  shared_ptr<long> minComputeResource{};

  DescribeApsResourceGroupsResponseBodyDataResourceGroups() {}

  explicit DescribeApsResourceGroupsResponseBodyDataResourceGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (available) {
      res["Available"] = boost::any(*available);
    }
    if (cuOptions) {
      res["CuOptions"] = boost::any(*cuOptions);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupType) {
      res["GroupType"] = boost::any(*groupType);
    }
    if (leftComputeResource) {
      res["LeftComputeResource"] = boost::any(*leftComputeResource);
    }
    if (maxComputeResource) {
      res["MaxComputeResource"] = boost::any(*maxComputeResource);
    }
    if (minComputeResource) {
      res["MinComputeResource"] = boost::any(*minComputeResource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Available") != m.end() && !m["Available"].empty()) {
      available = make_shared<bool>(boost::any_cast<bool>(m["Available"]));
    }
    if (m.find("CuOptions") != m.end() && !m["CuOptions"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["CuOptions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CuOptions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      cuOptions = make_shared<vector<long>>(toVec1);
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupType") != m.end() && !m["GroupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["GroupType"]));
    }
    if (m.find("LeftComputeResource") != m.end() && !m["LeftComputeResource"].empty()) {
      leftComputeResource = make_shared<long>(boost::any_cast<long>(m["LeftComputeResource"]));
    }
    if (m.find("MaxComputeResource") != m.end() && !m["MaxComputeResource"].empty()) {
      maxComputeResource = make_shared<long>(boost::any_cast<long>(m["MaxComputeResource"]));
    }
    if (m.find("MinComputeResource") != m.end() && !m["MinComputeResource"].empty()) {
      minComputeResource = make_shared<long>(boost::any_cast<long>(m["MinComputeResource"]));
    }
  }


  virtual ~DescribeApsResourceGroupsResponseBodyDataResourceGroups() = default;
};
class DescribeApsResourceGroupsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApsResourceGroupsResponseBodyDataResourceGroups>> resourceGroups{};
  shared_ptr<long> step{};

  DescribeApsResourceGroupsResponseBodyData() {}

  explicit DescribeApsResourceGroupsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroups) {
      vector<boost::any> temp1;
      for(auto item1:*resourceGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceGroups"] = boost::any(temp1);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroups") != m.end() && !m["ResourceGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceGroups"].type()) {
        vector<DescribeApsResourceGroupsResponseBodyDataResourceGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApsResourceGroupsResponseBodyDataResourceGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceGroups = make_shared<vector<DescribeApsResourceGroupsResponseBodyDataResourceGroups>>(expect1);
      }
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<long>(boost::any_cast<long>(m["Step"]));
    }
  }


  virtual ~DescribeApsResourceGroupsResponseBodyData() = default;
};
class DescribeApsResourceGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeApsResourceGroupsResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeApsResourceGroupsResponseBody() {}

  explicit DescribeApsResourceGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeApsResourceGroupsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeApsResourceGroupsResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeApsResourceGroupsResponseBody() = default;
};
class DescribeApsResourceGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApsResourceGroupsResponseBody> body{};

  DescribeApsResourceGroupsResponse() {}

  explicit DescribeApsResourceGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeApsResourceGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApsResourceGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApsResourceGroupsResponse() = default;
};
class DescribeAuditLogRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> hostAddress{};
  shared_ptr<string> order{};
  shared_ptr<string> orderType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> proxyUser{};
  shared_ptr<string> queryKeyword{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sqlType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> succeed{};
  shared_ptr<string> user{};

  DescribeAuditLogRecordsRequest() {}

  explicit DescribeAuditLogRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (hostAddress) {
      res["HostAddress"] = boost::any(*hostAddress);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (proxyUser) {
      res["ProxyUser"] = boost::any(*proxyUser);
    }
    if (queryKeyword) {
      res["QueryKeyword"] = boost::any(*queryKeyword);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sqlType) {
      res["SqlType"] = boost::any(*sqlType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (succeed) {
      res["Succeed"] = boost::any(*succeed);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("HostAddress") != m.end() && !m["HostAddress"].empty()) {
      hostAddress = make_shared<string>(boost::any_cast<string>(m["HostAddress"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProxyUser") != m.end() && !m["ProxyUser"].empty()) {
      proxyUser = make_shared<string>(boost::any_cast<string>(m["ProxyUser"]));
    }
    if (m.find("QueryKeyword") != m.end() && !m["QueryKeyword"].empty()) {
      queryKeyword = make_shared<string>(boost::any_cast<string>(m["QueryKeyword"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SqlType") != m.end() && !m["SqlType"].empty()) {
      sqlType = make_shared<string>(boost::any_cast<string>(m["SqlType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Succeed") != m.end() && !m["Succeed"].empty()) {
      succeed = make_shared<string>(boost::any_cast<string>(m["Succeed"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DescribeAuditLogRecordsRequest() = default;
};
class DescribeAuditLogRecordsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> connId{};
  shared_ptr<string> DBName{};
  shared_ptr<string> executeTime{};
  shared_ptr<string> hostAddress{};
  shared_ptr<string> processID{};
  shared_ptr<string> SQLText{};
  shared_ptr<string> SQLType{};
  shared_ptr<string> succeed{};
  shared_ptr<string> totalTime{};
  shared_ptr<string> user{};

  DescribeAuditLogRecordsResponseBodyItems() {}

  explicit DescribeAuditLogRecordsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connId) {
      res["ConnId"] = boost::any(*connId);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (executeTime) {
      res["ExecuteTime"] = boost::any(*executeTime);
    }
    if (hostAddress) {
      res["HostAddress"] = boost::any(*hostAddress);
    }
    if (processID) {
      res["ProcessID"] = boost::any(*processID);
    }
    if (SQLText) {
      res["SQLText"] = boost::any(*SQLText);
    }
    if (SQLType) {
      res["SQLType"] = boost::any(*SQLType);
    }
    if (succeed) {
      res["Succeed"] = boost::any(*succeed);
    }
    if (totalTime) {
      res["TotalTime"] = boost::any(*totalTime);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnId") != m.end() && !m["ConnId"].empty()) {
      connId = make_shared<string>(boost::any_cast<string>(m["ConnId"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("ExecuteTime") != m.end() && !m["ExecuteTime"].empty()) {
      executeTime = make_shared<string>(boost::any_cast<string>(m["ExecuteTime"]));
    }
    if (m.find("HostAddress") != m.end() && !m["HostAddress"].empty()) {
      hostAddress = make_shared<string>(boost::any_cast<string>(m["HostAddress"]));
    }
    if (m.find("ProcessID") != m.end() && !m["ProcessID"].empty()) {
      processID = make_shared<string>(boost::any_cast<string>(m["ProcessID"]));
    }
    if (m.find("SQLText") != m.end() && !m["SQLText"].empty()) {
      SQLText = make_shared<string>(boost::any_cast<string>(m["SQLText"]));
    }
    if (m.find("SQLType") != m.end() && !m["SQLType"].empty()) {
      SQLType = make_shared<string>(boost::any_cast<string>(m["SQLType"]));
    }
    if (m.find("Succeed") != m.end() && !m["Succeed"].empty()) {
      succeed = make_shared<string>(boost::any_cast<string>(m["Succeed"]));
    }
    if (m.find("TotalTime") != m.end() && !m["TotalTime"].empty()) {
      totalTime = make_shared<string>(boost::any_cast<string>(m["TotalTime"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DescribeAuditLogRecordsResponseBodyItems() = default;
};
class DescribeAuditLogRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<vector<DescribeAuditLogRecordsResponseBodyItems>> items{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  DescribeAuditLogRecordsResponseBody() {}

  explicit DescribeAuditLogRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeAuditLogRecordsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAuditLogRecordsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeAuditLogRecordsResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~DescribeAuditLogRecordsResponseBody() = default;
};
class DescribeAuditLogRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAuditLogRecordsResponseBody> body{};

  DescribeAuditLogRecordsResponse() {}

  explicit DescribeAuditLogRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAuditLogRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAuditLogRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAuditLogRecordsResponse() = default;
};
class DescribeClusterAccessWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> resourceOwnerAccount{};

  DescribeClusterAccessWhiteListRequest() {}

  explicit DescribeClusterAccessWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
  }


  virtual ~DescribeClusterAccessWhiteListRequest() = default;
};
class DescribeClusterAccessWhiteListResponseBodyItemsIPArray : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterIPArrayAttribute{};
  shared_ptr<string> DBClusterIPArrayName{};
  shared_ptr<string> securityIPList{};

  DescribeClusterAccessWhiteListResponseBodyItemsIPArray() {}

  explicit DescribeClusterAccessWhiteListResponseBodyItemsIPArray(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterIPArrayAttribute) {
      res["DBClusterIPArrayAttribute"] = boost::any(*DBClusterIPArrayAttribute);
    }
    if (DBClusterIPArrayName) {
      res["DBClusterIPArrayName"] = boost::any(*DBClusterIPArrayName);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterIPArrayAttribute") != m.end() && !m["DBClusterIPArrayAttribute"].empty()) {
      DBClusterIPArrayAttribute = make_shared<string>(boost::any_cast<string>(m["DBClusterIPArrayAttribute"]));
    }
    if (m.find("DBClusterIPArrayName") != m.end() && !m["DBClusterIPArrayName"].empty()) {
      DBClusterIPArrayName = make_shared<string>(boost::any_cast<string>(m["DBClusterIPArrayName"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
  }


  virtual ~DescribeClusterAccessWhiteListResponseBodyItemsIPArray() = default;
};
class DescribeClusterAccessWhiteListResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterAccessWhiteListResponseBodyItemsIPArray>> IPArray{};

  DescribeClusterAccessWhiteListResponseBodyItems() {}

  explicit DescribeClusterAccessWhiteListResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (IPArray) {
      vector<boost::any> temp1;
      for(auto item1:*IPArray){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IPArray"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IPArray") != m.end() && !m["IPArray"].empty()) {
      if (typeid(vector<boost::any>) == m["IPArray"].type()) {
        vector<DescribeClusterAccessWhiteListResponseBodyItemsIPArray> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IPArray"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterAccessWhiteListResponseBodyItemsIPArray model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        IPArray = make_shared<vector<DescribeClusterAccessWhiteListResponseBodyItemsIPArray>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterAccessWhiteListResponseBodyItems() = default;
};
class DescribeClusterAccessWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeClusterAccessWhiteListResponseBodyItems> items{};
  shared_ptr<string> requestId{};

  DescribeClusterAccessWhiteListResponseBody() {}

  explicit DescribeClusterAccessWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeClusterAccessWhiteListResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeClusterAccessWhiteListResponseBodyItems>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeClusterAccessWhiteListResponseBody() = default;
};
class DescribeClusterAccessWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeClusterAccessWhiteListResponseBody> body{};

  DescribeClusterAccessWhiteListResponse() {}

  explicit DescribeClusterAccessWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeClusterAccessWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterAccessWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterAccessWhiteListResponse() = default;
};
class DescribeClusterNetInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};

  DescribeClusterNetInfoRequest() {}

  explicit DescribeClusterNetInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~DescribeClusterNetInfoRequest() = default;
};
class DescribeClusterNetInfoResponseBodyItemsAddress : public Darabonba::Model {
public:
  shared_ptr<string> connectionString{};
  shared_ptr<string> connectionStringPrefix{};
  shared_ptr<string> IPAddress{};
  shared_ptr<string> netType{};
  shared_ptr<string> port{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};

  DescribeClusterNetInfoResponseBodyItemsAddress() {}

  explicit DescribeClusterNetInfoResponseBodyItemsAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (connectionStringPrefix) {
      res["ConnectionStringPrefix"] = boost::any(*connectionStringPrefix);
    }
    if (IPAddress) {
      res["IPAddress"] = boost::any(*IPAddress);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("ConnectionStringPrefix") != m.end() && !m["ConnectionStringPrefix"].empty()) {
      connectionStringPrefix = make_shared<string>(boost::any_cast<string>(m["ConnectionStringPrefix"]));
    }
    if (m.find("IPAddress") != m.end() && !m["IPAddress"].empty()) {
      IPAddress = make_shared<string>(boost::any_cast<string>(m["IPAddress"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~DescribeClusterNetInfoResponseBodyItemsAddress() = default;
};
class DescribeClusterNetInfoResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterNetInfoResponseBodyItemsAddress>> address{};

  DescribeClusterNetInfoResponseBodyItems() {}

  explicit DescribeClusterNetInfoResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      vector<boost::any> temp1;
      for(auto item1:*address){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Address"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      if (typeid(vector<boost::any>) == m["Address"].type()) {
        vector<DescribeClusterNetInfoResponseBodyItemsAddress> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Address"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterNetInfoResponseBodyItemsAddress model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        address = make_shared<vector<DescribeClusterNetInfoResponseBodyItemsAddress>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterNetInfoResponseBodyItems() = default;
};
class DescribeClusterNetInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterNetworkType{};
  shared_ptr<DescribeClusterNetInfoResponseBodyItems> items{};
  shared_ptr<string> requestId{};

  DescribeClusterNetInfoResponseBody() {}

  explicit DescribeClusterNetInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterNetworkType) {
      res["ClusterNetworkType"] = boost::any(*clusterNetworkType);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterNetworkType") != m.end() && !m["ClusterNetworkType"].empty()) {
      clusterNetworkType = make_shared<string>(boost::any_cast<string>(m["ClusterNetworkType"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeClusterNetInfoResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeClusterNetInfoResponseBodyItems>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeClusterNetInfoResponseBody() = default;
};
class DescribeClusterNetInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeClusterNetInfoResponseBody> body{};

  DescribeClusterNetInfoResponse() {}

  explicit DescribeClusterNetInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeClusterNetInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterNetInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterNetInfoResponse() = default;
};
class DescribeColumnsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};

  DescribeColumnsRequest() {}

  explicit DescribeColumnsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeColumnsRequest() = default;
};
class DescribeColumnsResponseBodyItemsColumn : public Darabonba::Model {
public:
  shared_ptr<bool> autoIncrementColumn{};
  shared_ptr<string> columnName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<bool> primaryKey{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> type{};

  DescribeColumnsResponseBodyItemsColumn() {}

  explicit DescribeColumnsResponseBodyItemsColumn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoIncrementColumn) {
      res["AutoIncrementColumn"] = boost::any(*autoIncrementColumn);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (primaryKey) {
      res["PrimaryKey"] = boost::any(*primaryKey);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoIncrementColumn") != m.end() && !m["AutoIncrementColumn"].empty()) {
      autoIncrementColumn = make_shared<bool>(boost::any_cast<bool>(m["AutoIncrementColumn"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PrimaryKey") != m.end() && !m["PrimaryKey"].empty()) {
      primaryKey = make_shared<bool>(boost::any_cast<bool>(m["PrimaryKey"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeColumnsResponseBodyItemsColumn() = default;
};
class DescribeColumnsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeColumnsResponseBodyItemsColumn>> column{};

  DescribeColumnsResponseBodyItems() {}

  explicit DescribeColumnsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (column) {
      vector<boost::any> temp1;
      for(auto item1:*column){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Column"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Column") != m.end() && !m["Column"].empty()) {
      if (typeid(vector<boost::any>) == m["Column"].type()) {
        vector<DescribeColumnsResponseBodyItemsColumn> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Column"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeColumnsResponseBodyItemsColumn model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        column = make_shared<vector<DescribeColumnsResponseBodyItemsColumn>>(expect1);
      }
    }
  }


  virtual ~DescribeColumnsResponseBodyItems() = default;
};
class DescribeColumnsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeColumnsResponseBodyItems> items{};
  shared_ptr<string> requestId{};

  DescribeColumnsResponseBody() {}

  explicit DescribeColumnsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeColumnsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeColumnsResponseBodyItems>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeColumnsResponseBody() = default;
};
class DescribeColumnsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeColumnsResponseBody> body{};

  DescribeColumnsResponse() {}

  explicit DescribeColumnsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeColumnsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeColumnsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeColumnsResponse() = default;
};
class DescribeDBClusterAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};

  DescribeDBClusterAttributeRequest() {}

  explicit DescribeDBClusterAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~DescribeDBClusterAttributeRequest() = default;
};
class DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag() {}

  explicit DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag() = default;
};
class DescribeDBClusterAttributeResponseBodyItemsDBClusterTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag>> tag{};

  DescribeDBClusterAttributeResponseBodyItemsDBClusterTags() {}

  explicit DescribeDBClusterAttributeResponseBodyItemsDBClusterTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterAttributeResponseBodyItemsDBClusterTags() = default;
};
class DescribeDBClusterAttributeResponseBodyItemsDBCluster : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> computeResource{};
  shared_ptr<string> computeResourceTotal{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBClusterNetworkType{};
  shared_ptr<string> DBClusterStatus{};
  shared_ptr<string> DBClusterType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> expired{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> maintainTime{};
  shared_ptr<string> mode{};
  shared_ptr<string> payType{};
  shared_ptr<long> port{};
  shared_ptr<string> regionId{};
  shared_ptr<string> reservedACU{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> storageResource{};
  shared_ptr<string> storageResourceTotal{};
  shared_ptr<DescribeDBClusterAttributeResponseBodyItemsDBClusterTags> tags{};
  shared_ptr<bool> userENIStatus{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  DescribeDBClusterAttributeResponseBodyItemsDBCluster() {}

  explicit DescribeDBClusterAttributeResponseBodyItemsDBCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (computeResource) {
      res["ComputeResource"] = boost::any(*computeResource);
    }
    if (computeResourceTotal) {
      res["ComputeResourceTotal"] = boost::any(*computeResourceTotal);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBClusterNetworkType) {
      res["DBClusterNetworkType"] = boost::any(*DBClusterNetworkType);
    }
    if (DBClusterStatus) {
      res["DBClusterStatus"] = boost::any(*DBClusterStatus);
    }
    if (DBClusterType) {
      res["DBClusterType"] = boost::any(*DBClusterType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (maintainTime) {
      res["MaintainTime"] = boost::any(*maintainTime);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (reservedACU) {
      res["ReservedACU"] = boost::any(*reservedACU);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (storageResource) {
      res["StorageResource"] = boost::any(*storageResource);
    }
    if (storageResourceTotal) {
      res["StorageResourceTotal"] = boost::any(*storageResourceTotal);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userENIStatus) {
      res["UserENIStatus"] = boost::any(*userENIStatus);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("ComputeResource") != m.end() && !m["ComputeResource"].empty()) {
      computeResource = make_shared<string>(boost::any_cast<string>(m["ComputeResource"]));
    }
    if (m.find("ComputeResourceTotal") != m.end() && !m["ComputeResourceTotal"].empty()) {
      computeResourceTotal = make_shared<string>(boost::any_cast<string>(m["ComputeResourceTotal"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBClusterNetworkType") != m.end() && !m["DBClusterNetworkType"].empty()) {
      DBClusterNetworkType = make_shared<string>(boost::any_cast<string>(m["DBClusterNetworkType"]));
    }
    if (m.find("DBClusterStatus") != m.end() && !m["DBClusterStatus"].empty()) {
      DBClusterStatus = make_shared<string>(boost::any_cast<string>(m["DBClusterStatus"]));
    }
    if (m.find("DBClusterType") != m.end() && !m["DBClusterType"].empty()) {
      DBClusterType = make_shared<string>(boost::any_cast<string>(m["DBClusterType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<string>(boost::any_cast<string>(m["Expired"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("MaintainTime") != m.end() && !m["MaintainTime"].empty()) {
      maintainTime = make_shared<string>(boost::any_cast<string>(m["MaintainTime"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReservedACU") != m.end() && !m["ReservedACU"].empty()) {
      reservedACU = make_shared<string>(boost::any_cast<string>(m["ReservedACU"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StorageResource") != m.end() && !m["StorageResource"].empty()) {
      storageResource = make_shared<string>(boost::any_cast<string>(m["StorageResource"]));
    }
    if (m.find("StorageResourceTotal") != m.end() && !m["StorageResourceTotal"].empty()) {
      storageResourceTotal = make_shared<string>(boost::any_cast<string>(m["StorageResourceTotal"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeDBClusterAttributeResponseBodyItemsDBClusterTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeDBClusterAttributeResponseBodyItemsDBClusterTags>(model1);
      }
    }
    if (m.find("UserENIStatus") != m.end() && !m["UserENIStatus"].empty()) {
      userENIStatus = make_shared<bool>(boost::any_cast<bool>(m["UserENIStatus"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBClusterAttributeResponseBodyItemsDBCluster() = default;
};
class DescribeDBClusterAttributeResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClusterAttributeResponseBodyItemsDBCluster>> DBCluster{};

  DescribeDBClusterAttributeResponseBodyItems() {}

  explicit DescribeDBClusterAttributeResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBCluster) {
      vector<boost::any> temp1;
      for(auto item1:*DBCluster){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBCluster"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBCluster") != m.end() && !m["DBCluster"].empty()) {
      if (typeid(vector<boost::any>) == m["DBCluster"].type()) {
        vector<DescribeDBClusterAttributeResponseBodyItemsDBCluster> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBCluster"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterAttributeResponseBodyItemsDBCluster model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBCluster = make_shared<vector<DescribeDBClusterAttributeResponseBodyItemsDBCluster>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterAttributeResponseBodyItems() = default;
};
class DescribeDBClusterAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBClusterAttributeResponseBodyItems> items{};
  shared_ptr<string> requestId{};

  DescribeDBClusterAttributeResponseBody() {}

  explicit DescribeDBClusterAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeDBClusterAttributeResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeDBClusterAttributeResponseBodyItems>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBClusterAttributeResponseBody() = default;
};
class DescribeDBClusterAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBClusterAttributeResponseBody> body{};

  DescribeDBClusterAttributeResponse() {}

  explicit DescribeDBClusterAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBClusterAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterAttributeResponse() = default;
};
class DescribeDBClusterHealthStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};

  DescribeDBClusterHealthStatusRequest() {}

  explicit DescribeDBClusterHealthStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDBClusterHealthStatusRequest() = default;
};
class DescribeDBClusterHealthStatusResponseBodyCS : public Darabonba::Model {
public:
  shared_ptr<long> activeCount{};
  shared_ptr<long> expectedCount{};
  shared_ptr<long> riskCount{};
  shared_ptr<string> status{};
  shared_ptr<long> unavailableCount{};

  DescribeDBClusterHealthStatusResponseBodyCS() {}

  explicit DescribeDBClusterHealthStatusResponseBodyCS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeCount) {
      res["ActiveCount"] = boost::any(*activeCount);
    }
    if (expectedCount) {
      res["ExpectedCount"] = boost::any(*expectedCount);
    }
    if (riskCount) {
      res["RiskCount"] = boost::any(*riskCount);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (unavailableCount) {
      res["UnavailableCount"] = boost::any(*unavailableCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveCount") != m.end() && !m["ActiveCount"].empty()) {
      activeCount = make_shared<long>(boost::any_cast<long>(m["ActiveCount"]));
    }
    if (m.find("ExpectedCount") != m.end() && !m["ExpectedCount"].empty()) {
      expectedCount = make_shared<long>(boost::any_cast<long>(m["ExpectedCount"]));
    }
    if (m.find("RiskCount") != m.end() && !m["RiskCount"].empty()) {
      riskCount = make_shared<long>(boost::any_cast<long>(m["RiskCount"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UnavailableCount") != m.end() && !m["UnavailableCount"].empty()) {
      unavailableCount = make_shared<long>(boost::any_cast<long>(m["UnavailableCount"]));
    }
  }


  virtual ~DescribeDBClusterHealthStatusResponseBodyCS() = default;
};
class DescribeDBClusterHealthStatusResponseBodyExecutor : public Darabonba::Model {
public:
  shared_ptr<long> activeCount{};
  shared_ptr<long> expectedCount{};
  shared_ptr<long> riskCount{};
  shared_ptr<string> status{};
  shared_ptr<long> unavailableCount{};

  DescribeDBClusterHealthStatusResponseBodyExecutor() {}

  explicit DescribeDBClusterHealthStatusResponseBodyExecutor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeCount) {
      res["ActiveCount"] = boost::any(*activeCount);
    }
    if (expectedCount) {
      res["ExpectedCount"] = boost::any(*expectedCount);
    }
    if (riskCount) {
      res["RiskCount"] = boost::any(*riskCount);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (unavailableCount) {
      res["UnavailableCount"] = boost::any(*unavailableCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveCount") != m.end() && !m["ActiveCount"].empty()) {
      activeCount = make_shared<long>(boost::any_cast<long>(m["ActiveCount"]));
    }
    if (m.find("ExpectedCount") != m.end() && !m["ExpectedCount"].empty()) {
      expectedCount = make_shared<long>(boost::any_cast<long>(m["ExpectedCount"]));
    }
    if (m.find("RiskCount") != m.end() && !m["RiskCount"].empty()) {
      riskCount = make_shared<long>(boost::any_cast<long>(m["RiskCount"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UnavailableCount") != m.end() && !m["UnavailableCount"].empty()) {
      unavailableCount = make_shared<long>(boost::any_cast<long>(m["UnavailableCount"]));
    }
  }


  virtual ~DescribeDBClusterHealthStatusResponseBodyExecutor() = default;
};
class DescribeDBClusterHealthStatusResponseBodyWorker : public Darabonba::Model {
public:
  shared_ptr<long> activeCount{};
  shared_ptr<long> expectedCount{};
  shared_ptr<long> riskCount{};
  shared_ptr<string> status{};
  shared_ptr<long> unavailableCount{};

  DescribeDBClusterHealthStatusResponseBodyWorker() {}

  explicit DescribeDBClusterHealthStatusResponseBodyWorker(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeCount) {
      res["ActiveCount"] = boost::any(*activeCount);
    }
    if (expectedCount) {
      res["ExpectedCount"] = boost::any(*expectedCount);
    }
    if (riskCount) {
      res["RiskCount"] = boost::any(*riskCount);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (unavailableCount) {
      res["UnavailableCount"] = boost::any(*unavailableCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveCount") != m.end() && !m["ActiveCount"].empty()) {
      activeCount = make_shared<long>(boost::any_cast<long>(m["ActiveCount"]));
    }
    if (m.find("ExpectedCount") != m.end() && !m["ExpectedCount"].empty()) {
      expectedCount = make_shared<long>(boost::any_cast<long>(m["ExpectedCount"]));
    }
    if (m.find("RiskCount") != m.end() && !m["RiskCount"].empty()) {
      riskCount = make_shared<long>(boost::any_cast<long>(m["RiskCount"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UnavailableCount") != m.end() && !m["UnavailableCount"].empty()) {
      unavailableCount = make_shared<long>(boost::any_cast<long>(m["UnavailableCount"]));
    }
  }


  virtual ~DescribeDBClusterHealthStatusResponseBodyWorker() = default;
};
class DescribeDBClusterHealthStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBClusterHealthStatusResponseBodyCS> CS{};
  shared_ptr<DescribeDBClusterHealthStatusResponseBodyExecutor> executor{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDBClusterHealthStatusResponseBodyWorker> worker{};

  DescribeDBClusterHealthStatusResponseBody() {}

  explicit DescribeDBClusterHealthStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CS) {
      res["CS"] = CS ? boost::any(CS->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (executor) {
      res["Executor"] = executor ? boost::any(executor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (worker) {
      res["Worker"] = worker ? boost::any(worker->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CS") != m.end() && !m["CS"].empty()) {
      if (typeid(map<string, boost::any>) == m["CS"].type()) {
        DescribeDBClusterHealthStatusResponseBodyCS model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CS"]));
        CS = make_shared<DescribeDBClusterHealthStatusResponseBodyCS>(model1);
      }
    }
    if (m.find("Executor") != m.end() && !m["Executor"].empty()) {
      if (typeid(map<string, boost::any>) == m["Executor"].type()) {
        DescribeDBClusterHealthStatusResponseBodyExecutor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Executor"]));
        executor = make_shared<DescribeDBClusterHealthStatusResponseBodyExecutor>(model1);
      }
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Worker") != m.end() && !m["Worker"].empty()) {
      if (typeid(map<string, boost::any>) == m["Worker"].type()) {
        DescribeDBClusterHealthStatusResponseBodyWorker model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Worker"]));
        worker = make_shared<DescribeDBClusterHealthStatusResponseBodyWorker>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterHealthStatusResponseBody() = default;
};
class DescribeDBClusterHealthStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBClusterHealthStatusResponseBody> body{};

  DescribeDBClusterHealthStatusResponse() {}

  explicit DescribeDBClusterHealthStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBClusterHealthStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterHealthStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterHealthStatusResponse() = default;
};
class DescribeDBClusterPerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> key{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourcePools{};
  shared_ptr<string> startTime{};

  DescribeDBClusterPerformanceRequest() {}

  explicit DescribeDBClusterPerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourcePools) {
      res["ResourcePools"] = boost::any(*resourcePools);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourcePools") != m.end() && !m["ResourcePools"].empty()) {
      resourcePools = make_shared<string>(boost::any_cast<string>(m["ResourcePools"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBClusterPerformanceRequest() = default;
};
class DescribeDBClusterPerformanceResponseBodyPerformancesSeries : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> tags{};
  shared_ptr<vector<string>> values{};

  DescribeDBClusterPerformanceResponseBodyPerformancesSeries() {}

  explicit DescribeDBClusterPerformanceResponseBodyPerformancesSeries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBodyPerformancesSeries() = default;
};
class DescribeDBClusterPerformanceResponseBodyPerformances : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<DescribeDBClusterPerformanceResponseBodyPerformancesSeries>> series{};
  shared_ptr<string> unit{};

  DescribeDBClusterPerformanceResponseBodyPerformances() {}

  explicit DescribeDBClusterPerformanceResponseBodyPerformances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (series) {
      vector<boost::any> temp1;
      for(auto item1:*series){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Series"] = boost::any(temp1);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      if (typeid(vector<boost::any>) == m["Series"].type()) {
        vector<DescribeDBClusterPerformanceResponseBodyPerformancesSeries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Series"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterPerformanceResponseBodyPerformancesSeries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        series = make_shared<vector<DescribeDBClusterPerformanceResponseBodyPerformancesSeries>>(expect1);
      }
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBodyPerformances() = default;
};
class DescribeDBClusterPerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<vector<DescribeDBClusterPerformanceResponseBodyPerformances>> performances{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  DescribeDBClusterPerformanceResponseBody() {}

  explicit DescribeDBClusterPerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (performances) {
      vector<boost::any> temp1;
      for(auto item1:*performances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Performances"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Performances") != m.end() && !m["Performances"].empty()) {
      if (typeid(vector<boost::any>) == m["Performances"].type()) {
        vector<DescribeDBClusterPerformanceResponseBodyPerformances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Performances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterPerformanceResponseBodyPerformances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performances = make_shared<vector<DescribeDBClusterPerformanceResponseBodyPerformances>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBody() = default;
};
class DescribeDBClusterPerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBClusterPerformanceResponseBody> body{};

  DescribeDBClusterPerformanceResponse() {}

  explicit DescribeDBClusterPerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBClusterPerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterPerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterPerformanceResponse() = default;
};
class DescribeDBClusterStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeDBClusterStatusRequest() {}

  explicit DescribeDBClusterStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDBClusterStatusRequest() = default;
};
class DescribeDBClusterStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> status{};

  DescribeDBClusterStatusResponseBody() {}

  explicit DescribeDBClusterStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Status"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Status"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      status = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDBClusterStatusResponseBody() = default;
};
class DescribeDBClusterStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBClusterStatusResponseBody> body{};

  DescribeDBClusterStatusResponse() {}

  explicit DescribeDBClusterStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBClusterStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterStatusResponse() = default;
};
class DescribeDBClustersRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBClustersRequestTag() {}

  explicit DescribeDBClustersRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDBClustersRequestTag() = default;
};
class DescribeDBClustersRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterIds{};
  shared_ptr<string> DBClusterStatus{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<DescribeDBClustersRequestTag>> tag{};

  DescribeDBClustersRequest() {}

  explicit DescribeDBClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (DBClusterIds) {
      res["DBClusterIds"] = boost::any(*DBClusterIds);
    }
    if (DBClusterStatus) {
      res["DBClusterStatus"] = boost::any(*DBClusterStatus);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBClusterIds") != m.end() && !m["DBClusterIds"].empty()) {
      DBClusterIds = make_shared<string>(boost::any_cast<string>(m["DBClusterIds"]));
    }
    if (m.find("DBClusterStatus") != m.end() && !m["DBClusterStatus"].empty()) {
      DBClusterStatus = make_shared<string>(boost::any_cast<string>(m["DBClusterStatus"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDBClustersRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClustersRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBClustersRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClustersRequest() = default;
};
class DescribeDBClustersResponseBodyItemsDBClusterTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBClustersResponseBodyItemsDBClusterTagsTag() {}

  explicit DescribeDBClustersResponseBodyItemsDBClusterTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDBClustersResponseBodyItemsDBClusterTagsTag() = default;
};
class DescribeDBClustersResponseBodyItemsDBClusterTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClustersResponseBodyItemsDBClusterTagsTag>> tag{};

  DescribeDBClustersResponseBodyItemsDBClusterTags() {}

  explicit DescribeDBClustersResponseBodyItemsDBClusterTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDBClustersResponseBodyItemsDBClusterTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClustersResponseBodyItemsDBClusterTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBClustersResponseBodyItemsDBClusterTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClustersResponseBodyItemsDBClusterTags() = default;
};
class DescribeDBClustersResponseBodyItemsDBCluster : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> computeResource{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> createTime{};
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBClusterNetworkType{};
  shared_ptr<string> DBClusterStatus{};
  shared_ptr<string> DBClusterType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> engine{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> expired{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> mode{};
  shared_ptr<string> payType{};
  shared_ptr<string> port{};
  shared_ptr<string> regionId{};
  shared_ptr<string> reservedACU{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> storageResource{};
  shared_ptr<DescribeDBClustersResponseBodyItemsDBClusterTags> tags{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  DescribeDBClustersResponseBodyItemsDBCluster() {}

  explicit DescribeDBClustersResponseBodyItemsDBCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (computeResource) {
      res["ComputeResource"] = boost::any(*computeResource);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBClusterNetworkType) {
      res["DBClusterNetworkType"] = boost::any(*DBClusterNetworkType);
    }
    if (DBClusterStatus) {
      res["DBClusterStatus"] = boost::any(*DBClusterStatus);
    }
    if (DBClusterType) {
      res["DBClusterType"] = boost::any(*DBClusterType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (reservedACU) {
      res["ReservedACU"] = boost::any(*reservedACU);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (storageResource) {
      res["StorageResource"] = boost::any(*storageResource);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("ComputeResource") != m.end() && !m["ComputeResource"].empty()) {
      computeResource = make_shared<string>(boost::any_cast<string>(m["ComputeResource"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBClusterNetworkType") != m.end() && !m["DBClusterNetworkType"].empty()) {
      DBClusterNetworkType = make_shared<string>(boost::any_cast<string>(m["DBClusterNetworkType"]));
    }
    if (m.find("DBClusterStatus") != m.end() && !m["DBClusterStatus"].empty()) {
      DBClusterStatus = make_shared<string>(boost::any_cast<string>(m["DBClusterStatus"]));
    }
    if (m.find("DBClusterType") != m.end() && !m["DBClusterType"].empty()) {
      DBClusterType = make_shared<string>(boost::any_cast<string>(m["DBClusterType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<string>(boost::any_cast<string>(m["Expired"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReservedACU") != m.end() && !m["ReservedACU"].empty()) {
      reservedACU = make_shared<string>(boost::any_cast<string>(m["ReservedACU"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StorageResource") != m.end() && !m["StorageResource"].empty()) {
      storageResource = make_shared<string>(boost::any_cast<string>(m["StorageResource"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeDBClustersResponseBodyItemsDBClusterTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeDBClustersResponseBodyItemsDBClusterTags>(model1);
      }
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBClustersResponseBodyItemsDBCluster() = default;
};
class DescribeDBClustersResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClustersResponseBodyItemsDBCluster>> DBCluster{};

  DescribeDBClustersResponseBodyItems() {}

  explicit DescribeDBClustersResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBCluster) {
      vector<boost::any> temp1;
      for(auto item1:*DBCluster){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBCluster"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBCluster") != m.end() && !m["DBCluster"].empty()) {
      if (typeid(vector<boost::any>) == m["DBCluster"].type()) {
        vector<DescribeDBClustersResponseBodyItemsDBCluster> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBCluster"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClustersResponseBodyItemsDBCluster model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBCluster = make_shared<vector<DescribeDBClustersResponseBodyItemsDBCluster>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClustersResponseBodyItems() = default;
};
class DescribeDBClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBClustersResponseBodyItems> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDBClustersResponseBody() {}

  explicit DescribeDBClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeDBClustersResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeDBClustersResponseBodyItems>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDBClustersResponseBody() = default;
};
class DescribeDBClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBClustersResponseBody> body{};

  DescribeDBClustersResponse() {}

  explicit DescribeDBClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClustersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClustersResponse() = default;
};
class DescribeDBResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupType{};
  shared_ptr<string> resourceOwnerAccount{};

  DescribeDBResourceGroupRequest() {}

  explicit DescribeDBResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupType) {
      res["GroupType"] = boost::any(*groupType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupType") != m.end() && !m["GroupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["GroupType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
  }


  virtual ~DescribeDBResourceGroupRequest() = default;
};
class DescribeDBResourceGroupResponseBodyGroupsInfo : public Darabonba::Model {
public:
  shared_ptr<string> clusterMode{};
  shared_ptr<string> clusterSizeResource{};
  shared_ptr<string> createTime{};
  shared_ptr<string> elasticMinComputeResource{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupType{};
  shared_ptr<string> groupUsers{};
  shared_ptr<long> maxClusterCount{};
  shared_ptr<string> maxComputeResource{};
  shared_ptr<long> minClusterCount{};
  shared_ptr<string> minComputeResource{};
  shared_ptr<long> runningClusterCount{};
  shared_ptr<string> status{};
  shared_ptr<string> updateTime{};

  DescribeDBResourceGroupResponseBodyGroupsInfo() {}

  explicit DescribeDBResourceGroupResponseBodyGroupsInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterMode) {
      res["ClusterMode"] = boost::any(*clusterMode);
    }
    if (clusterSizeResource) {
      res["ClusterSizeResource"] = boost::any(*clusterSizeResource);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (elasticMinComputeResource) {
      res["ElasticMinComputeResource"] = boost::any(*elasticMinComputeResource);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupType) {
      res["GroupType"] = boost::any(*groupType);
    }
    if (groupUsers) {
      res["GroupUsers"] = boost::any(*groupUsers);
    }
    if (maxClusterCount) {
      res["MaxClusterCount"] = boost::any(*maxClusterCount);
    }
    if (maxComputeResource) {
      res["MaxComputeResource"] = boost::any(*maxComputeResource);
    }
    if (minClusterCount) {
      res["MinClusterCount"] = boost::any(*minClusterCount);
    }
    if (minComputeResource) {
      res["MinComputeResource"] = boost::any(*minComputeResource);
    }
    if (runningClusterCount) {
      res["RunningClusterCount"] = boost::any(*runningClusterCount);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterMode") != m.end() && !m["ClusterMode"].empty()) {
      clusterMode = make_shared<string>(boost::any_cast<string>(m["ClusterMode"]));
    }
    if (m.find("ClusterSizeResource") != m.end() && !m["ClusterSizeResource"].empty()) {
      clusterSizeResource = make_shared<string>(boost::any_cast<string>(m["ClusterSizeResource"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ElasticMinComputeResource") != m.end() && !m["ElasticMinComputeResource"].empty()) {
      elasticMinComputeResource = make_shared<string>(boost::any_cast<string>(m["ElasticMinComputeResource"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupType") != m.end() && !m["GroupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["GroupType"]));
    }
    if (m.find("GroupUsers") != m.end() && !m["GroupUsers"].empty()) {
      groupUsers = make_shared<string>(boost::any_cast<string>(m["GroupUsers"]));
    }
    if (m.find("MaxClusterCount") != m.end() && !m["MaxClusterCount"].empty()) {
      maxClusterCount = make_shared<long>(boost::any_cast<long>(m["MaxClusterCount"]));
    }
    if (m.find("MaxComputeResource") != m.end() && !m["MaxComputeResource"].empty()) {
      maxComputeResource = make_shared<string>(boost::any_cast<string>(m["MaxComputeResource"]));
    }
    if (m.find("MinClusterCount") != m.end() && !m["MinClusterCount"].empty()) {
      minClusterCount = make_shared<long>(boost::any_cast<long>(m["MinClusterCount"]));
    }
    if (m.find("MinComputeResource") != m.end() && !m["MinComputeResource"].empty()) {
      minComputeResource = make_shared<string>(boost::any_cast<string>(m["MinComputeResource"]));
    }
    if (m.find("RunningClusterCount") != m.end() && !m["RunningClusterCount"].empty()) {
      runningClusterCount = make_shared<long>(boost::any_cast<long>(m["RunningClusterCount"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~DescribeDBResourceGroupResponseBodyGroupsInfo() = default;
};
class DescribeDBResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBResourceGroupResponseBodyGroupsInfo>> groupsInfo{};
  shared_ptr<string> requestId{};

  DescribeDBResourceGroupResponseBody() {}

  explicit DescribeDBResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupsInfo) {
      vector<boost::any> temp1;
      for(auto item1:*groupsInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GroupsInfo"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupsInfo") != m.end() && !m["GroupsInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["GroupsInfo"].type()) {
        vector<DescribeDBResourceGroupResponseBodyGroupsInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GroupsInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBResourceGroupResponseBodyGroupsInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groupsInfo = make_shared<vector<DescribeDBResourceGroupResponseBodyGroupsInfo>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBResourceGroupResponseBody() = default;
};
class DescribeDBResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBResourceGroupResponseBody> body{};

  DescribeDBResourceGroupResponse() {}

  explicit DescribeDBResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBResourceGroupResponse() = default;
};
class DescribeDiagnosisDimensionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> lang{};
  shared_ptr<string> queryCondition{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};

  DescribeDiagnosisDimensionsRequest() {}

  explicit DescribeDiagnosisDimensionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (queryCondition) {
      res["QueryCondition"] = boost::any(*queryCondition);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("QueryCondition") != m.end() && !m["QueryCondition"].empty()) {
      queryCondition = make_shared<string>(boost::any_cast<string>(m["QueryCondition"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDiagnosisDimensionsRequest() = default;
};
class DescribeDiagnosisDimensionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> clientIps{};
  shared_ptr<vector<string>> databases{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> resourceGroups{};
  shared_ptr<vector<string>> userNames{};

  DescribeDiagnosisDimensionsResponseBody() {}

  explicit DescribeDiagnosisDimensionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIps) {
      res["ClientIps"] = boost::any(*clientIps);
    }
    if (databases) {
      res["Databases"] = boost::any(*databases);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroups) {
      res["ResourceGroups"] = boost::any(*resourceGroups);
    }
    if (userNames) {
      res["UserNames"] = boost::any(*userNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIps") != m.end() && !m["ClientIps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClientIps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClientIps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clientIps = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Databases") != m.end() && !m["Databases"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Databases"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Databases"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      databases = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroups") != m.end() && !m["ResourceGroups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceGroups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceGroups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceGroups = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserNames") != m.end() && !m["UserNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDiagnosisDimensionsResponseBody() = default;
};
class DescribeDiagnosisDimensionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDiagnosisDimensionsResponseBody> body{};

  DescribeDiagnosisDimensionsResponse() {}

  explicit DescribeDiagnosisDimensionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDiagnosisDimensionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDiagnosisDimensionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDiagnosisDimensionsResponse() = default;
};
class DescribeDiagnosisRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientIp{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> database{};
  shared_ptr<string> endTime{};
  shared_ptr<string> keyword{};
  shared_ptr<string> lang{};
  shared_ptr<long> maxPeakMemory{};
  shared_ptr<long> maxScanSize{};
  shared_ptr<long> minPeakMemory{};
  shared_ptr<long> minScanSize{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> patternId{};
  shared_ptr<string> queryCondition{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroup{};
  shared_ptr<string> startTime{};
  shared_ptr<string> userName{};

  DescribeDiagnosisRecordsRequest() {}

  explicit DescribeDiagnosisRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (maxPeakMemory) {
      res["MaxPeakMemory"] = boost::any(*maxPeakMemory);
    }
    if (maxScanSize) {
      res["MaxScanSize"] = boost::any(*maxScanSize);
    }
    if (minPeakMemory) {
      res["MinPeakMemory"] = boost::any(*minPeakMemory);
    }
    if (minScanSize) {
      res["MinScanSize"] = boost::any(*minScanSize);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (patternId) {
      res["PatternId"] = boost::any(*patternId);
    }
    if (queryCondition) {
      res["QueryCondition"] = boost::any(*queryCondition);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = boost::any(*resourceGroup);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MaxPeakMemory") != m.end() && !m["MaxPeakMemory"].empty()) {
      maxPeakMemory = make_shared<long>(boost::any_cast<long>(m["MaxPeakMemory"]));
    }
    if (m.find("MaxScanSize") != m.end() && !m["MaxScanSize"].empty()) {
      maxScanSize = make_shared<long>(boost::any_cast<long>(m["MaxScanSize"]));
    }
    if (m.find("MinPeakMemory") != m.end() && !m["MinPeakMemory"].empty()) {
      minPeakMemory = make_shared<long>(boost::any_cast<long>(m["MinPeakMemory"]));
    }
    if (m.find("MinScanSize") != m.end() && !m["MinScanSize"].empty()) {
      minScanSize = make_shared<long>(boost::any_cast<long>(m["MinScanSize"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PatternId") != m.end() && !m["PatternId"].empty()) {
      patternId = make_shared<string>(boost::any_cast<string>(m["PatternId"]));
    }
    if (m.find("QueryCondition") != m.end() && !m["QueryCondition"].empty()) {
      queryCondition = make_shared<string>(boost::any_cast<string>(m["QueryCondition"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      resourceGroup = make_shared<string>(boost::any_cast<string>(m["ResourceGroup"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~DescribeDiagnosisRecordsRequest() = default;
};
class DescribeDiagnosisRecordsResponseBodyQuerys : public Darabonba::Model {
public:
  shared_ptr<string> clientIp{};
  shared_ptr<long> cost{};
  shared_ptr<string> database{};
  shared_ptr<long> etlWriteRows{};
  shared_ptr<long> executionTime{};
  shared_ptr<long> outputDataSize{};
  shared_ptr<long> outputRows{};
  shared_ptr<long> peakMemory{};
  shared_ptr<string> processId{};
  shared_ptr<long> queueTime{};
  shared_ptr<string> rcHost{};
  shared_ptr<long> resourceCostRank{};
  shared_ptr<string> resourceGroup{};
  shared_ptr<string> SQL{};
  shared_ptr<bool> SQLTruncated{};
  shared_ptr<long> SQLTruncatedThreshold{};
  shared_ptr<long> scanRows{};
  shared_ptr<long> scanSize{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<long> totalPlanningTime{};
  shared_ptr<long> totalStages{};
  shared_ptr<string> userName{};

  DescribeDiagnosisRecordsResponseBodyQuerys() {}

  explicit DescribeDiagnosisRecordsResponseBodyQuerys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (cost) {
      res["Cost"] = boost::any(*cost);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (etlWriteRows) {
      res["EtlWriteRows"] = boost::any(*etlWriteRows);
    }
    if (executionTime) {
      res["ExecutionTime"] = boost::any(*executionTime);
    }
    if (outputDataSize) {
      res["OutputDataSize"] = boost::any(*outputDataSize);
    }
    if (outputRows) {
      res["OutputRows"] = boost::any(*outputRows);
    }
    if (peakMemory) {
      res["PeakMemory"] = boost::any(*peakMemory);
    }
    if (processId) {
      res["ProcessId"] = boost::any(*processId);
    }
    if (queueTime) {
      res["QueueTime"] = boost::any(*queueTime);
    }
    if (rcHost) {
      res["RcHost"] = boost::any(*rcHost);
    }
    if (resourceCostRank) {
      res["ResourceCostRank"] = boost::any(*resourceCostRank);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = boost::any(*resourceGroup);
    }
    if (SQL) {
      res["SQL"] = boost::any(*SQL);
    }
    if (SQLTruncated) {
      res["SQLTruncated"] = boost::any(*SQLTruncated);
    }
    if (SQLTruncatedThreshold) {
      res["SQLTruncatedThreshold"] = boost::any(*SQLTruncatedThreshold);
    }
    if (scanRows) {
      res["ScanRows"] = boost::any(*scanRows);
    }
    if (scanSize) {
      res["ScanSize"] = boost::any(*scanSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalPlanningTime) {
      res["TotalPlanningTime"] = boost::any(*totalPlanningTime);
    }
    if (totalStages) {
      res["TotalStages"] = boost::any(*totalStages);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("Cost") != m.end() && !m["Cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["Cost"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("EtlWriteRows") != m.end() && !m["EtlWriteRows"].empty()) {
      etlWriteRows = make_shared<long>(boost::any_cast<long>(m["EtlWriteRows"]));
    }
    if (m.find("ExecutionTime") != m.end() && !m["ExecutionTime"].empty()) {
      executionTime = make_shared<long>(boost::any_cast<long>(m["ExecutionTime"]));
    }
    if (m.find("OutputDataSize") != m.end() && !m["OutputDataSize"].empty()) {
      outputDataSize = make_shared<long>(boost::any_cast<long>(m["OutputDataSize"]));
    }
    if (m.find("OutputRows") != m.end() && !m["OutputRows"].empty()) {
      outputRows = make_shared<long>(boost::any_cast<long>(m["OutputRows"]));
    }
    if (m.find("PeakMemory") != m.end() && !m["PeakMemory"].empty()) {
      peakMemory = make_shared<long>(boost::any_cast<long>(m["PeakMemory"]));
    }
    if (m.find("ProcessId") != m.end() && !m["ProcessId"].empty()) {
      processId = make_shared<string>(boost::any_cast<string>(m["ProcessId"]));
    }
    if (m.find("QueueTime") != m.end() && !m["QueueTime"].empty()) {
      queueTime = make_shared<long>(boost::any_cast<long>(m["QueueTime"]));
    }
    if (m.find("RcHost") != m.end() && !m["RcHost"].empty()) {
      rcHost = make_shared<string>(boost::any_cast<string>(m["RcHost"]));
    }
    if (m.find("ResourceCostRank") != m.end() && !m["ResourceCostRank"].empty()) {
      resourceCostRank = make_shared<long>(boost::any_cast<long>(m["ResourceCostRank"]));
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      resourceGroup = make_shared<string>(boost::any_cast<string>(m["ResourceGroup"]));
    }
    if (m.find("SQL") != m.end() && !m["SQL"].empty()) {
      SQL = make_shared<string>(boost::any_cast<string>(m["SQL"]));
    }
    if (m.find("SQLTruncated") != m.end() && !m["SQLTruncated"].empty()) {
      SQLTruncated = make_shared<bool>(boost::any_cast<bool>(m["SQLTruncated"]));
    }
    if (m.find("SQLTruncatedThreshold") != m.end() && !m["SQLTruncatedThreshold"].empty()) {
      SQLTruncatedThreshold = make_shared<long>(boost::any_cast<long>(m["SQLTruncatedThreshold"]));
    }
    if (m.find("ScanRows") != m.end() && !m["ScanRows"].empty()) {
      scanRows = make_shared<long>(boost::any_cast<long>(m["ScanRows"]));
    }
    if (m.find("ScanSize") != m.end() && !m["ScanSize"].empty()) {
      scanSize = make_shared<long>(boost::any_cast<long>(m["ScanSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TotalPlanningTime") != m.end() && !m["TotalPlanningTime"].empty()) {
      totalPlanningTime = make_shared<long>(boost::any_cast<long>(m["TotalPlanningTime"]));
    }
    if (m.find("TotalStages") != m.end() && !m["TotalStages"].empty()) {
      totalStages = make_shared<long>(boost::any_cast<long>(m["TotalStages"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~DescribeDiagnosisRecordsResponseBodyQuerys() = default;
};
class DescribeDiagnosisRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<DescribeDiagnosisRecordsResponseBodyQuerys>> querys{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDiagnosisRecordsResponseBody() {}

  explicit DescribeDiagnosisRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (querys) {
      vector<boost::any> temp1;
      for(auto item1:*querys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Querys"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Querys") != m.end() && !m["Querys"].empty()) {
      if (typeid(vector<boost::any>) == m["Querys"].type()) {
        vector<DescribeDiagnosisRecordsResponseBodyQuerys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Querys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDiagnosisRecordsResponseBodyQuerys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        querys = make_shared<vector<DescribeDiagnosisRecordsResponseBodyQuerys>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDiagnosisRecordsResponseBody() = default;
};
class DescribeDiagnosisRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDiagnosisRecordsResponseBody> body{};

  DescribeDiagnosisRecordsResponse() {}

  explicit DescribeDiagnosisRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDiagnosisRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDiagnosisRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDiagnosisRecordsResponse() = default;
};
class DescribeDiagnosisSQLInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> lang{};
  shared_ptr<string> processId{};
  shared_ptr<string> processRcHost{};
  shared_ptr<long> processStartTime{};
  shared_ptr<string> processState{};
  shared_ptr<string> regionId{};

  DescribeDiagnosisSQLInfoRequest() {}

  explicit DescribeDiagnosisSQLInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (processId) {
      res["ProcessId"] = boost::any(*processId);
    }
    if (processRcHost) {
      res["ProcessRcHost"] = boost::any(*processRcHost);
    }
    if (processStartTime) {
      res["ProcessStartTime"] = boost::any(*processStartTime);
    }
    if (processState) {
      res["ProcessState"] = boost::any(*processState);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ProcessId") != m.end() && !m["ProcessId"].empty()) {
      processId = make_shared<string>(boost::any_cast<string>(m["ProcessId"]));
    }
    if (m.find("ProcessRcHost") != m.end() && !m["ProcessRcHost"].empty()) {
      processRcHost = make_shared<string>(boost::any_cast<string>(m["ProcessRcHost"]));
    }
    if (m.find("ProcessStartTime") != m.end() && !m["ProcessStartTime"].empty()) {
      processStartTime = make_shared<long>(boost::any_cast<long>(m["ProcessStartTime"]));
    }
    if (m.find("ProcessState") != m.end() && !m["ProcessState"].empty()) {
      processState = make_shared<string>(boost::any_cast<string>(m["ProcessState"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDiagnosisSQLInfoRequest() = default;
};
class DescribeDiagnosisSQLInfoResponseBodyStageInfos : public Darabonba::Model {
public:
  shared_ptr<long> inputDataSize{};
  shared_ptr<long> inputRows{};
  shared_ptr<long> operatorCost{};
  shared_ptr<long> outputDataSize{};
  shared_ptr<long> outputRows{};
  shared_ptr<long> peakMemory{};
  shared_ptr<double> progress{};
  shared_ptr<string> stageId{};
  shared_ptr<string> state{};

  DescribeDiagnosisSQLInfoResponseBodyStageInfos() {}

  explicit DescribeDiagnosisSQLInfoResponseBodyStageInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputDataSize) {
      res["InputDataSize"] = boost::any(*inputDataSize);
    }
    if (inputRows) {
      res["InputRows"] = boost::any(*inputRows);
    }
    if (operatorCost) {
      res["OperatorCost"] = boost::any(*operatorCost);
    }
    if (outputDataSize) {
      res["OutputDataSize"] = boost::any(*outputDataSize);
    }
    if (outputRows) {
      res["OutputRows"] = boost::any(*outputRows);
    }
    if (peakMemory) {
      res["PeakMemory"] = boost::any(*peakMemory);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (stageId) {
      res["StageId"] = boost::any(*stageId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputDataSize") != m.end() && !m["InputDataSize"].empty()) {
      inputDataSize = make_shared<long>(boost::any_cast<long>(m["InputDataSize"]));
    }
    if (m.find("InputRows") != m.end() && !m["InputRows"].empty()) {
      inputRows = make_shared<long>(boost::any_cast<long>(m["InputRows"]));
    }
    if (m.find("OperatorCost") != m.end() && !m["OperatorCost"].empty()) {
      operatorCost = make_shared<long>(boost::any_cast<long>(m["OperatorCost"]));
    }
    if (m.find("OutputDataSize") != m.end() && !m["OutputDataSize"].empty()) {
      outputDataSize = make_shared<long>(boost::any_cast<long>(m["OutputDataSize"]));
    }
    if (m.find("OutputRows") != m.end() && !m["OutputRows"].empty()) {
      outputRows = make_shared<long>(boost::any_cast<long>(m["OutputRows"]));
    }
    if (m.find("PeakMemory") != m.end() && !m["PeakMemory"].empty()) {
      peakMemory = make_shared<long>(boost::any_cast<long>(m["PeakMemory"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<double>(boost::any_cast<double>(m["Progress"]));
    }
    if (m.find("StageId") != m.end() && !m["StageId"].empty()) {
      stageId = make_shared<string>(boost::any_cast<string>(m["StageId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~DescribeDiagnosisSQLInfoResponseBodyStageInfos() = default;
};
class DescribeDiagnosisSQLInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> diagnosisSQLInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeDiagnosisSQLInfoResponseBodyStageInfos>> stageInfos{};

  DescribeDiagnosisSQLInfoResponseBody() {}

  explicit DescribeDiagnosisSQLInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diagnosisSQLInfo) {
      res["DiagnosisSQLInfo"] = boost::any(*diagnosisSQLInfo);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stageInfos) {
      vector<boost::any> temp1;
      for(auto item1:*stageInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StageInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiagnosisSQLInfo") != m.end() && !m["DiagnosisSQLInfo"].empty()) {
      diagnosisSQLInfo = make_shared<string>(boost::any_cast<string>(m["DiagnosisSQLInfo"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StageInfos") != m.end() && !m["StageInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["StageInfos"].type()) {
        vector<DescribeDiagnosisSQLInfoResponseBodyStageInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StageInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDiagnosisSQLInfoResponseBodyStageInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stageInfos = make_shared<vector<DescribeDiagnosisSQLInfoResponseBodyStageInfos>>(expect1);
      }
    }
  }


  virtual ~DescribeDiagnosisSQLInfoResponseBody() = default;
};
class DescribeDiagnosisSQLInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDiagnosisSQLInfoResponseBody> body{};

  DescribeDiagnosisSQLInfoResponse() {}

  explicit DescribeDiagnosisSQLInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDiagnosisSQLInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDiagnosisSQLInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDiagnosisSQLInfoResponse() = default;
};
class DescribeDownloadRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> lang{};
  shared_ptr<string> regionId{};

  DescribeDownloadRecordsRequest() {}

  explicit DescribeDownloadRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDownloadRecordsRequest() = default;
};
class DescribeDownloadRecordsResponseBodyRecords : public Darabonba::Model {
public:
  shared_ptr<long> downloadId{};
  shared_ptr<string> exceptionMsg{};
  shared_ptr<string> fileName{};
  shared_ptr<string> status{};
  shared_ptr<string> url{};

  DescribeDownloadRecordsResponseBodyRecords() {}

  explicit DescribeDownloadRecordsResponseBodyRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downloadId) {
      res["DownloadId"] = boost::any(*downloadId);
    }
    if (exceptionMsg) {
      res["ExceptionMsg"] = boost::any(*exceptionMsg);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownloadId") != m.end() && !m["DownloadId"].empty()) {
      downloadId = make_shared<long>(boost::any_cast<long>(m["DownloadId"]));
    }
    if (m.find("ExceptionMsg") != m.end() && !m["ExceptionMsg"].empty()) {
      exceptionMsg = make_shared<string>(boost::any_cast<string>(m["ExceptionMsg"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeDownloadRecordsResponseBodyRecords() = default;
};
class DescribeDownloadRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDownloadRecordsResponseBodyRecords>> records{};
  shared_ptr<string> requestId{};

  DescribeDownloadRecordsResponseBody() {}

  explicit DescribeDownloadRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<DescribeDownloadRecordsResponseBodyRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDownloadRecordsResponseBodyRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<DescribeDownloadRecordsResponseBodyRecords>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDownloadRecordsResponseBody() = default;
};
class DescribeDownloadRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDownloadRecordsResponseBody> body{};

  DescribeDownloadRecordsResponse() {}

  explicit DescribeDownloadRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDownloadRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDownloadRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDownloadRecordsResponse() = default;
};
class DescribeElasticPlanAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> elasticPlanName{};

  DescribeElasticPlanAttributeRequest() {}

  explicit DescribeElasticPlanAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (elasticPlanName) {
      res["ElasticPlanName"] = boost::any(*elasticPlanName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ElasticPlanName") != m.end() && !m["ElasticPlanName"].empty()) {
      elasticPlanName = make_shared<string>(boost::any_cast<string>(m["ElasticPlanName"]));
    }
  }


  virtual ~DescribeElasticPlanAttributeRequest() = default;
};
class DescribeElasticPlanAttributeResponseBodyElasticPlan : public Darabonba::Model {
public:
  shared_ptr<bool> autoScale{};
  shared_ptr<string> cronExpression{};
  shared_ptr<string> elasticPlanName{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> endTime{};
  shared_ptr<string> resourceGroupName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> targetSize{};
  shared_ptr<string> type{};

  DescribeElasticPlanAttributeResponseBodyElasticPlan() {}

  explicit DescribeElasticPlanAttributeResponseBodyElasticPlan(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoScale) {
      res["AutoScale"] = boost::any(*autoScale);
    }
    if (cronExpression) {
      res["CronExpression"] = boost::any(*cronExpression);
    }
    if (elasticPlanName) {
      res["ElasticPlanName"] = boost::any(*elasticPlanName);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (targetSize) {
      res["TargetSize"] = boost::any(*targetSize);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoScale") != m.end() && !m["AutoScale"].empty()) {
      autoScale = make_shared<bool>(boost::any_cast<bool>(m["AutoScale"]));
    }
    if (m.find("CronExpression") != m.end() && !m["CronExpression"].empty()) {
      cronExpression = make_shared<string>(boost::any_cast<string>(m["CronExpression"]));
    }
    if (m.find("ElasticPlanName") != m.end() && !m["ElasticPlanName"].empty()) {
      elasticPlanName = make_shared<string>(boost::any_cast<string>(m["ElasticPlanName"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TargetSize") != m.end() && !m["TargetSize"].empty()) {
      targetSize = make_shared<string>(boost::any_cast<string>(m["TargetSize"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeElasticPlanAttributeResponseBodyElasticPlan() = default;
};
class DescribeElasticPlanAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeElasticPlanAttributeResponseBodyElasticPlan> elasticPlan{};
  shared_ptr<string> requestId{};

  DescribeElasticPlanAttributeResponseBody() {}

  explicit DescribeElasticPlanAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticPlan) {
      res["ElasticPlan"] = elasticPlan ? boost::any(elasticPlan->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticPlan") != m.end() && !m["ElasticPlan"].empty()) {
      if (typeid(map<string, boost::any>) == m["ElasticPlan"].type()) {
        DescribeElasticPlanAttributeResponseBodyElasticPlan model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ElasticPlan"]));
        elasticPlan = make_shared<DescribeElasticPlanAttributeResponseBodyElasticPlan>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeElasticPlanAttributeResponseBody() = default;
};
class DescribeElasticPlanAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeElasticPlanAttributeResponseBody> body{};

  DescribeElasticPlanAttributeResponse() {}

  explicit DescribeElasticPlanAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeElasticPlanAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeElasticPlanAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeElasticPlanAttributeResponse() = default;
};
class DescribeElasticPlanJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> elasticPlanName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};

  DescribeElasticPlanJobsRequest() {}

  explicit DescribeElasticPlanJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (elasticPlanName) {
      res["ElasticPlanName"] = boost::any(*elasticPlanName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ElasticPlanName") != m.end() && !m["ElasticPlanName"].empty()) {
      elasticPlanName = make_shared<string>(boost::any_cast<string>(m["ElasticPlanName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeElasticPlanJobsRequest() = default;
};
class DescribeElasticPlanJobsResponseBodyJobs : public Darabonba::Model {
public:
  shared_ptr<string> elasticAcu{};
  shared_ptr<string> elasticPlanName{};
  shared_ptr<string> endTime{};
  shared_ptr<long> instanceSize{};
  shared_ptr<string> reserveAcu{};
  shared_ptr<string> resourceGroupName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> targetSize{};
  shared_ptr<string> totalAcu{};
  shared_ptr<string> type{};

  DescribeElasticPlanJobsResponseBodyJobs() {}

  explicit DescribeElasticPlanJobsResponseBodyJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticAcu) {
      res["ElasticAcu"] = boost::any(*elasticAcu);
    }
    if (elasticPlanName) {
      res["ElasticPlanName"] = boost::any(*elasticPlanName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceSize) {
      res["InstanceSize"] = boost::any(*instanceSize);
    }
    if (reserveAcu) {
      res["ReserveAcu"] = boost::any(*reserveAcu);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetSize) {
      res["TargetSize"] = boost::any(*targetSize);
    }
    if (totalAcu) {
      res["TotalAcu"] = boost::any(*totalAcu);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticAcu") != m.end() && !m["ElasticAcu"].empty()) {
      elasticAcu = make_shared<string>(boost::any_cast<string>(m["ElasticAcu"]));
    }
    if (m.find("ElasticPlanName") != m.end() && !m["ElasticPlanName"].empty()) {
      elasticPlanName = make_shared<string>(boost::any_cast<string>(m["ElasticPlanName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InstanceSize") != m.end() && !m["InstanceSize"].empty()) {
      instanceSize = make_shared<long>(boost::any_cast<long>(m["InstanceSize"]));
    }
    if (m.find("ReserveAcu") != m.end() && !m["ReserveAcu"].empty()) {
      reserveAcu = make_shared<string>(boost::any_cast<string>(m["ReserveAcu"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TargetSize") != m.end() && !m["TargetSize"].empty()) {
      targetSize = make_shared<string>(boost::any_cast<string>(m["TargetSize"]));
    }
    if (m.find("TotalAcu") != m.end() && !m["TotalAcu"].empty()) {
      totalAcu = make_shared<string>(boost::any_cast<string>(m["TotalAcu"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeElasticPlanJobsResponseBodyJobs() = default;
};
class DescribeElasticPlanJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeElasticPlanJobsResponseBodyJobs>> jobs{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeElasticPlanJobsResponseBody() {}

  explicit DescribeElasticPlanJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobs) {
      vector<boost::any> temp1;
      for(auto item1:*jobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Jobs"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Jobs") != m.end() && !m["Jobs"].empty()) {
      if (typeid(vector<boost::any>) == m["Jobs"].type()) {
        vector<DescribeElasticPlanJobsResponseBodyJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Jobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeElasticPlanJobsResponseBodyJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobs = make_shared<vector<DescribeElasticPlanJobsResponseBodyJobs>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeElasticPlanJobsResponseBody() = default;
};
class DescribeElasticPlanJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeElasticPlanJobsResponseBody> body{};

  DescribeElasticPlanJobsResponse() {}

  explicit DescribeElasticPlanJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeElasticPlanJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeElasticPlanJobsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeElasticPlanJobsResponse() = default;
};
class DescribeElasticPlanSpecificationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> resourceGroupName{};
  shared_ptr<string> type{};

  DescribeElasticPlanSpecificationsRequest() {}

  explicit DescribeElasticPlanSpecificationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeElasticPlanSpecificationsRequest() = default;
};
class DescribeElasticPlanSpecificationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> specifications{};
  shared_ptr<long> totalCount{};

  DescribeElasticPlanSpecificationsResponseBody() {}

  explicit DescribeElasticPlanSpecificationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (specifications) {
      res["Specifications"] = boost::any(*specifications);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Specifications") != m.end() && !m["Specifications"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Specifications"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Specifications"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      specifications = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeElasticPlanSpecificationsResponseBody() = default;
};
class DescribeElasticPlanSpecificationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeElasticPlanSpecificationsResponseBody> body{};

  DescribeElasticPlanSpecificationsResponse() {}

  explicit DescribeElasticPlanSpecificationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeElasticPlanSpecificationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeElasticPlanSpecificationsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeElasticPlanSpecificationsResponse() = default;
};
class DescribeElasticPlansRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> elasticPlanName{};
  shared_ptr<bool> enabled{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupName{};
  shared_ptr<string> type{};

  DescribeElasticPlansRequest() {}

  explicit DescribeElasticPlansRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (elasticPlanName) {
      res["ElasticPlanName"] = boost::any(*elasticPlanName);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ElasticPlanName") != m.end() && !m["ElasticPlanName"].empty()) {
      elasticPlanName = make_shared<string>(boost::any_cast<string>(m["ElasticPlanName"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeElasticPlansRequest() = default;
};
class DescribeElasticPlansResponseBodyElasticPlans : public Darabonba::Model {
public:
  shared_ptr<bool> autoScale{};
  shared_ptr<string> elasticPlanName{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> nextScheduleTime{};
  shared_ptr<string> resourceGroupName{};
  shared_ptr<string> targetSize{};
  shared_ptr<string> type{};

  DescribeElasticPlansResponseBodyElasticPlans() {}

  explicit DescribeElasticPlansResponseBodyElasticPlans(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoScale) {
      res["AutoScale"] = boost::any(*autoScale);
    }
    if (elasticPlanName) {
      res["ElasticPlanName"] = boost::any(*elasticPlanName);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (nextScheduleTime) {
      res["NextScheduleTime"] = boost::any(*nextScheduleTime);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    if (targetSize) {
      res["TargetSize"] = boost::any(*targetSize);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoScale") != m.end() && !m["AutoScale"].empty()) {
      autoScale = make_shared<bool>(boost::any_cast<bool>(m["AutoScale"]));
    }
    if (m.find("ElasticPlanName") != m.end() && !m["ElasticPlanName"].empty()) {
      elasticPlanName = make_shared<string>(boost::any_cast<string>(m["ElasticPlanName"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("NextScheduleTime") != m.end() && !m["NextScheduleTime"].empty()) {
      nextScheduleTime = make_shared<string>(boost::any_cast<string>(m["NextScheduleTime"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
    if (m.find("TargetSize") != m.end() && !m["TargetSize"].empty()) {
      targetSize = make_shared<string>(boost::any_cast<string>(m["TargetSize"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeElasticPlansResponseBodyElasticPlans() = default;
};
class DescribeElasticPlansResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeElasticPlansResponseBodyElasticPlans>> elasticPlans{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeElasticPlansResponseBody() {}

  explicit DescribeElasticPlansResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticPlans) {
      vector<boost::any> temp1;
      for(auto item1:*elasticPlans){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ElasticPlans"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticPlans") != m.end() && !m["ElasticPlans"].empty()) {
      if (typeid(vector<boost::any>) == m["ElasticPlans"].type()) {
        vector<DescribeElasticPlansResponseBodyElasticPlans> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ElasticPlans"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeElasticPlansResponseBodyElasticPlans model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elasticPlans = make_shared<vector<DescribeElasticPlansResponseBodyElasticPlans>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeElasticPlansResponseBody() = default;
};
class DescribeElasticPlansResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeElasticPlansResponseBody> body{};

  DescribeElasticPlansResponse() {}

  explicit DescribeElasticPlansResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeElasticPlansResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeElasticPlansResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeElasticPlansResponse() = default;
};
class DescribeEnabledPrivilegesRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};

  DescribeEnabledPrivilegesRequest() {}

  explicit DescribeEnabledPrivilegesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeEnabledPrivilegesRequest() = default;
};
class DescribeEnabledPrivilegesResponseBodyDataPrivileges : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> key{};

  DescribeEnabledPrivilegesResponseBodyDataPrivileges() {}

  explicit DescribeEnabledPrivilegesResponseBodyDataPrivileges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
  }


  virtual ~DescribeEnabledPrivilegesResponseBodyDataPrivileges() = default;
};
class DescribeEnabledPrivilegesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<DescribeEnabledPrivilegesResponseBodyDataPrivileges>> privileges{};
  shared_ptr<string> scope{};

  DescribeEnabledPrivilegesResponseBodyData() {}

  explicit DescribeEnabledPrivilegesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (privileges) {
      vector<boost::any> temp1;
      for(auto item1:*privileges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Privileges"] = boost::any(temp1);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Privileges") != m.end() && !m["Privileges"].empty()) {
      if (typeid(vector<boost::any>) == m["Privileges"].type()) {
        vector<DescribeEnabledPrivilegesResponseBodyDataPrivileges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Privileges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEnabledPrivilegesResponseBodyDataPrivileges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        privileges = make_shared<vector<DescribeEnabledPrivilegesResponseBodyDataPrivileges>>(expect1);
      }
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~DescribeEnabledPrivilegesResponseBodyData() = default;
};
class DescribeEnabledPrivilegesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEnabledPrivilegesResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeEnabledPrivilegesResponseBody() {}

  explicit DescribeEnabledPrivilegesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeEnabledPrivilegesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEnabledPrivilegesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeEnabledPrivilegesResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeEnabledPrivilegesResponseBody() = default;
};
class DescribeEnabledPrivilegesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEnabledPrivilegesResponseBody> body{};

  DescribeEnabledPrivilegesResponse() {}

  explicit DescribeEnabledPrivilegesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeEnabledPrivilegesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEnabledPrivilegesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEnabledPrivilegesResponse() = default;
};
class DescribePatternPerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> patternId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};

  DescribePatternPerformanceRequest() {}

  explicit DescribePatternPerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (patternId) {
      res["PatternId"] = boost::any(*patternId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PatternId") != m.end() && !m["PatternId"].empty()) {
      patternId = make_shared<string>(boost::any_cast<string>(m["PatternId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribePatternPerformanceRequest() = default;
};
class DescribePatternPerformanceResponseBodyPerformancesSeries : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> values{};

  DescribePatternPerformanceResponseBodyPerformancesSeries() {}

  explicit DescribePatternPerformanceResponseBodyPerformancesSeries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribePatternPerformanceResponseBodyPerformancesSeries() = default;
};
class DescribePatternPerformanceResponseBodyPerformances : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<DescribePatternPerformanceResponseBodyPerformancesSeries>> series{};
  shared_ptr<string> unit{};

  DescribePatternPerformanceResponseBodyPerformances() {}

  explicit DescribePatternPerformanceResponseBodyPerformances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (series) {
      vector<boost::any> temp1;
      for(auto item1:*series){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Series"] = boost::any(temp1);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      if (typeid(vector<boost::any>) == m["Series"].type()) {
        vector<DescribePatternPerformanceResponseBodyPerformancesSeries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Series"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePatternPerformanceResponseBodyPerformancesSeries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        series = make_shared<vector<DescribePatternPerformanceResponseBodyPerformancesSeries>>(expect1);
      }
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
  }


  virtual ~DescribePatternPerformanceResponseBodyPerformances() = default;
};
class DescribePatternPerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<vector<DescribePatternPerformanceResponseBodyPerformances>> performances{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  DescribePatternPerformanceResponseBody() {}

  explicit DescribePatternPerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (performances) {
      vector<boost::any> temp1;
      for(auto item1:*performances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Performances"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Performances") != m.end() && !m["Performances"].empty()) {
      if (typeid(vector<boost::any>) == m["Performances"].type()) {
        vector<DescribePatternPerformanceResponseBodyPerformances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Performances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePatternPerformanceResponseBodyPerformances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performances = make_shared<vector<DescribePatternPerformanceResponseBodyPerformances>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribePatternPerformanceResponseBody() = default;
};
class DescribePatternPerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePatternPerformanceResponseBody> body{};

  DescribePatternPerformanceResponse() {}

  explicit DescribePatternPerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePatternPerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePatternPerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePatternPerformanceResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionsRegionZonesZone : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<bool> vpcEnabled{};
  shared_ptr<string> zoneId{};

  DescribeRegionsResponseBodyRegionsRegionZonesZone() {}

  explicit DescribeRegionsResponseBodyRegionsRegionZonesZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (vpcEnabled) {
      res["VpcEnabled"] = boost::any(*vpcEnabled);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("VpcEnabled") != m.end() && !m["VpcEnabled"].empty()) {
      vpcEnabled = make_shared<bool>(boost::any_cast<bool>(m["VpcEnabled"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegionZonesZone() = default;
};
class DescribeRegionsResponseBodyRegionsRegionZones : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsRegionZonesZone>> zone{};

  DescribeRegionsResponseBodyRegionsRegionZones() {}

  explicit DescribeRegionsResponseBodyRegionsRegionZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zone) {
      vector<boost::any> temp1;
      for(auto item1:*zone){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Zone"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      if (typeid(vector<boost::any>) == m["Zone"].type()) {
        vector<DescribeRegionsResponseBodyRegionsRegionZonesZone> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zone"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsRegionZonesZone model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zone = make_shared<vector<DescribeRegionsResponseBodyRegionsRegionZonesZone>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegionZones() = default;
};
class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};
  shared_ptr<DescribeRegionsResponseBodyRegionsRegionZones> zones{};

  DescribeRegionsResponseBodyRegionsRegion() {}

  explicit DescribeRegionsResponseBodyRegionsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zones) {
      res["Zones"] = zones ? boost::any(zones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(map<string, boost::any>) == m["Zones"].type()) {
        DescribeRegionsResponseBodyRegionsRegionZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Zones"]));
        zones = make_shared<DescribeRegionsResponseBodyRegionsRegionZones>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegion() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsRegion>> region{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      vector<boost::any> temp1;
      for(auto item1:*region){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Region"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      if (typeid(vector<boost::any>) == m["Region"].type()) {
        vector<DescribeRegionsResponseBodyRegionsRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Region"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        region = make_shared<vector<DescribeRegionsResponseBodyRegionsRegion>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Regions"].type()) {
        DescribeRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeRegionsResponseBodyRegions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeSQLPatternsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> keyword{};
  shared_ptr<string> lang{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};

  DescribeSQLPatternsRequest() {}

  explicit DescribeSQLPatternsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeSQLPatternsRequest() = default;
};
class DescribeSQLPatternsResponseBodyPatternDetails : public Darabonba::Model {
public:
  shared_ptr<string> accessIp{};
  shared_ptr<double> averageExecutionTime{};
  shared_ptr<double> averagePeakMemory{};
  shared_ptr<double> averageQueryTime{};
  shared_ptr<double> averageScanSize{};
  shared_ptr<bool> blockable{};
  shared_ptr<long> failedCount{};
  shared_ptr<long> maxExecutionTime{};
  shared_ptr<long> maxPeakMemory{};
  shared_ptr<long> maxQueryTime{};
  shared_ptr<long> maxScanSize{};
  shared_ptr<string> patternCreationTime{};
  shared_ptr<string> patternId{};
  shared_ptr<long> queryCount{};
  shared_ptr<string> SQLPattern{};
  shared_ptr<string> tables{};
  shared_ptr<string> user{};

  DescribeSQLPatternsResponseBodyPatternDetails() {}

  explicit DescribeSQLPatternsResponseBodyPatternDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessIp) {
      res["AccessIp"] = boost::any(*accessIp);
    }
    if (averageExecutionTime) {
      res["AverageExecutionTime"] = boost::any(*averageExecutionTime);
    }
    if (averagePeakMemory) {
      res["AveragePeakMemory"] = boost::any(*averagePeakMemory);
    }
    if (averageQueryTime) {
      res["AverageQueryTime"] = boost::any(*averageQueryTime);
    }
    if (averageScanSize) {
      res["AverageScanSize"] = boost::any(*averageScanSize);
    }
    if (blockable) {
      res["Blockable"] = boost::any(*blockable);
    }
    if (failedCount) {
      res["FailedCount"] = boost::any(*failedCount);
    }
    if (maxExecutionTime) {
      res["MaxExecutionTime"] = boost::any(*maxExecutionTime);
    }
    if (maxPeakMemory) {
      res["MaxPeakMemory"] = boost::any(*maxPeakMemory);
    }
    if (maxQueryTime) {
      res["MaxQueryTime"] = boost::any(*maxQueryTime);
    }
    if (maxScanSize) {
      res["MaxScanSize"] = boost::any(*maxScanSize);
    }
    if (patternCreationTime) {
      res["PatternCreationTime"] = boost::any(*patternCreationTime);
    }
    if (patternId) {
      res["PatternId"] = boost::any(*patternId);
    }
    if (queryCount) {
      res["QueryCount"] = boost::any(*queryCount);
    }
    if (SQLPattern) {
      res["SQLPattern"] = boost::any(*SQLPattern);
    }
    if (tables) {
      res["Tables"] = boost::any(*tables);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessIp") != m.end() && !m["AccessIp"].empty()) {
      accessIp = make_shared<string>(boost::any_cast<string>(m["AccessIp"]));
    }
    if (m.find("AverageExecutionTime") != m.end() && !m["AverageExecutionTime"].empty()) {
      averageExecutionTime = make_shared<double>(boost::any_cast<double>(m["AverageExecutionTime"]));
    }
    if (m.find("AveragePeakMemory") != m.end() && !m["AveragePeakMemory"].empty()) {
      averagePeakMemory = make_shared<double>(boost::any_cast<double>(m["AveragePeakMemory"]));
    }
    if (m.find("AverageQueryTime") != m.end() && !m["AverageQueryTime"].empty()) {
      averageQueryTime = make_shared<double>(boost::any_cast<double>(m["AverageQueryTime"]));
    }
    if (m.find("AverageScanSize") != m.end() && !m["AverageScanSize"].empty()) {
      averageScanSize = make_shared<double>(boost::any_cast<double>(m["AverageScanSize"]));
    }
    if (m.find("Blockable") != m.end() && !m["Blockable"].empty()) {
      blockable = make_shared<bool>(boost::any_cast<bool>(m["Blockable"]));
    }
    if (m.find("FailedCount") != m.end() && !m["FailedCount"].empty()) {
      failedCount = make_shared<long>(boost::any_cast<long>(m["FailedCount"]));
    }
    if (m.find("MaxExecutionTime") != m.end() && !m["MaxExecutionTime"].empty()) {
      maxExecutionTime = make_shared<long>(boost::any_cast<long>(m["MaxExecutionTime"]));
    }
    if (m.find("MaxPeakMemory") != m.end() && !m["MaxPeakMemory"].empty()) {
      maxPeakMemory = make_shared<long>(boost::any_cast<long>(m["MaxPeakMemory"]));
    }
    if (m.find("MaxQueryTime") != m.end() && !m["MaxQueryTime"].empty()) {
      maxQueryTime = make_shared<long>(boost::any_cast<long>(m["MaxQueryTime"]));
    }
    if (m.find("MaxScanSize") != m.end() && !m["MaxScanSize"].empty()) {
      maxScanSize = make_shared<long>(boost::any_cast<long>(m["MaxScanSize"]));
    }
    if (m.find("PatternCreationTime") != m.end() && !m["PatternCreationTime"].empty()) {
      patternCreationTime = make_shared<string>(boost::any_cast<string>(m["PatternCreationTime"]));
    }
    if (m.find("PatternId") != m.end() && !m["PatternId"].empty()) {
      patternId = make_shared<string>(boost::any_cast<string>(m["PatternId"]));
    }
    if (m.find("QueryCount") != m.end() && !m["QueryCount"].empty()) {
      queryCount = make_shared<long>(boost::any_cast<long>(m["QueryCount"]));
    }
    if (m.find("SQLPattern") != m.end() && !m["SQLPattern"].empty()) {
      SQLPattern = make_shared<string>(boost::any_cast<string>(m["SQLPattern"]));
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      tables = make_shared<string>(boost::any_cast<string>(m["Tables"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DescribeSQLPatternsResponseBodyPatternDetails() = default;
};
class DescribeSQLPatternsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<DescribeSQLPatternsResponseBodyPatternDetails>> patternDetails{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeSQLPatternsResponseBody() {}

  explicit DescribeSQLPatternsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (patternDetails) {
      vector<boost::any> temp1;
      for(auto item1:*patternDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PatternDetails"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PatternDetails") != m.end() && !m["PatternDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["PatternDetails"].type()) {
        vector<DescribeSQLPatternsResponseBodyPatternDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PatternDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSQLPatternsResponseBodyPatternDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        patternDetails = make_shared<vector<DescribeSQLPatternsResponseBodyPatternDetails>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeSQLPatternsResponseBody() = default;
};
class DescribeSQLPatternsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSQLPatternsResponseBody> body{};

  DescribeSQLPatternsResponse() {}

  explicit DescribeSQLPatternsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSQLPatternsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSQLPatternsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSQLPatternsResponse() = default;
};
class DescribeSchemasRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};

  DescribeSchemasRequest() {}

  explicit DescribeSchemasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeSchemasRequest() = default;
};
class DescribeSchemasResponseBodyItemsSchema : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> schemaName{};

  DescribeSchemasResponseBodyItemsSchema() {}

  explicit DescribeSchemasResponseBodyItemsSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
  }


  virtual ~DescribeSchemasResponseBodyItemsSchema() = default;
};
class DescribeSchemasResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSchemasResponseBodyItemsSchema>> schema{};

  DescribeSchemasResponseBodyItems() {}

  explicit DescribeSchemasResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schema) {
      vector<boost::any> temp1;
      for(auto item1:*schema){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Schema"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      if (typeid(vector<boost::any>) == m["Schema"].type()) {
        vector<DescribeSchemasResponseBodyItemsSchema> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Schema"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSchemasResponseBodyItemsSchema model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schema = make_shared<vector<DescribeSchemasResponseBodyItemsSchema>>(expect1);
      }
    }
  }


  virtual ~DescribeSchemasResponseBodyItems() = default;
};
class DescribeSchemasResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeSchemasResponseBodyItems> items{};
  shared_ptr<string> requestId{};

  DescribeSchemasResponseBody() {}

  explicit DescribeSchemasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeSchemasResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeSchemasResponseBodyItems>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeSchemasResponseBody() = default;
};
class DescribeSchemasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSchemasResponseBody> body{};

  DescribeSchemasResponse() {}

  explicit DescribeSchemasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSchemasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSchemasResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSchemasResponse() = default;
};
class DescribeSparkCodeLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<long> jobId{};
  shared_ptr<string> regionId{};

  DescribeSparkCodeLogRequest() {}

  explicit DescribeSparkCodeLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeSparkCodeLogRequest() = default;
};
class DescribeSparkCodeLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> log{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeSparkCodeLogResponseBody() {}

  explicit DescribeSparkCodeLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (log) {
      res["Log"] = boost::any(*log);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Log") != m.end() && !m["Log"].empty()) {
      log = make_shared<string>(boost::any_cast<string>(m["Log"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeSparkCodeLogResponseBody() = default;
};
class DescribeSparkCodeLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSparkCodeLogResponseBody> body{};

  DescribeSparkCodeLogResponse() {}

  explicit DescribeSparkCodeLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSparkCodeLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSparkCodeLogResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSparkCodeLogResponse() = default;
};
class DescribeSparkCodeOutputRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<long> jobId{};
  shared_ptr<string> regionId{};

  DescribeSparkCodeOutputRequest() {}

  explicit DescribeSparkCodeOutputRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeSparkCodeOutputRequest() = default;
};
class DescribeSparkCodeOutputResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> output{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeSparkCodeOutputResponseBody() {}

  explicit DescribeSparkCodeOutputResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeSparkCodeOutputResponseBody() = default;
};
class DescribeSparkCodeOutputResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSparkCodeOutputResponseBody> body{};

  DescribeSparkCodeOutputResponse() {}

  explicit DescribeSparkCodeOutputResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSparkCodeOutputResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSparkCodeOutputResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSparkCodeOutputResponse() = default;
};
class DescribeSparkCodeWebUiRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<long> jobId{};
  shared_ptr<string> regionId{};

  DescribeSparkCodeWebUiRequest() {}

  explicit DescribeSparkCodeWebUiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeSparkCodeWebUiRequest() = default;
};
class DescribeSparkCodeWebUiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> url{};

  DescribeSparkCodeWebUiResponseBody() {}

  explicit DescribeSparkCodeWebUiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeSparkCodeWebUiResponseBody() = default;
};
class DescribeSparkCodeWebUiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSparkCodeWebUiResponseBody> body{};

  DescribeSparkCodeWebUiResponse() {}

  explicit DescribeSparkCodeWebUiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSparkCodeWebUiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSparkCodeWebUiResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSparkCodeWebUiResponse() = default;
};
class DescribeSqlPatternRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sqlPattern{};
  shared_ptr<string> startTime{};
  shared_ptr<string> type{};

  DescribeSqlPatternRequest() {}

  explicit DescribeSqlPatternRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sqlPattern) {
      res["SqlPattern"] = boost::any(*sqlPattern);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SqlPattern") != m.end() && !m["SqlPattern"].empty()) {
      sqlPattern = make_shared<string>(boost::any_cast<string>(m["SqlPattern"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeSqlPatternRequest() = default;
};
class DescribeSqlPatternResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> accessIP{};
  shared_ptr<string> avgCpuTime{};
  shared_ptr<string> avgPeakMemory{};
  shared_ptr<string> avgScanSize{};
  shared_ptr<string> avgStageCount{};
  shared_ptr<string> avgTaskCount{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> maxCpuTime{};
  shared_ptr<string> maxPeakMemory{};
  shared_ptr<string> maxScanSize{};
  shared_ptr<string> maxStageCount{};
  shared_ptr<string> maxTaskCount{};
  shared_ptr<string> pattern{};
  shared_ptr<string> queryCount{};
  shared_ptr<string> reportDate{};
  shared_ptr<string> user{};

  DescribeSqlPatternResponseBodyItems() {}

  explicit DescribeSqlPatternResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessIP) {
      res["AccessIP"] = boost::any(*accessIP);
    }
    if (avgCpuTime) {
      res["AvgCpuTime"] = boost::any(*avgCpuTime);
    }
    if (avgPeakMemory) {
      res["AvgPeakMemory"] = boost::any(*avgPeakMemory);
    }
    if (avgScanSize) {
      res["AvgScanSize"] = boost::any(*avgScanSize);
    }
    if (avgStageCount) {
      res["AvgStageCount"] = boost::any(*avgStageCount);
    }
    if (avgTaskCount) {
      res["AvgTaskCount"] = boost::any(*avgTaskCount);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (maxCpuTime) {
      res["MaxCpuTime"] = boost::any(*maxCpuTime);
    }
    if (maxPeakMemory) {
      res["MaxPeakMemory"] = boost::any(*maxPeakMemory);
    }
    if (maxScanSize) {
      res["MaxScanSize"] = boost::any(*maxScanSize);
    }
    if (maxStageCount) {
      res["MaxStageCount"] = boost::any(*maxStageCount);
    }
    if (maxTaskCount) {
      res["MaxTaskCount"] = boost::any(*maxTaskCount);
    }
    if (pattern) {
      res["Pattern"] = boost::any(*pattern);
    }
    if (queryCount) {
      res["QueryCount"] = boost::any(*queryCount);
    }
    if (reportDate) {
      res["ReportDate"] = boost::any(*reportDate);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessIP") != m.end() && !m["AccessIP"].empty()) {
      accessIP = make_shared<string>(boost::any_cast<string>(m["AccessIP"]));
    }
    if (m.find("AvgCpuTime") != m.end() && !m["AvgCpuTime"].empty()) {
      avgCpuTime = make_shared<string>(boost::any_cast<string>(m["AvgCpuTime"]));
    }
    if (m.find("AvgPeakMemory") != m.end() && !m["AvgPeakMemory"].empty()) {
      avgPeakMemory = make_shared<string>(boost::any_cast<string>(m["AvgPeakMemory"]));
    }
    if (m.find("AvgScanSize") != m.end() && !m["AvgScanSize"].empty()) {
      avgScanSize = make_shared<string>(boost::any_cast<string>(m["AvgScanSize"]));
    }
    if (m.find("AvgStageCount") != m.end() && !m["AvgStageCount"].empty()) {
      avgStageCount = make_shared<string>(boost::any_cast<string>(m["AvgStageCount"]));
    }
    if (m.find("AvgTaskCount") != m.end() && !m["AvgTaskCount"].empty()) {
      avgTaskCount = make_shared<string>(boost::any_cast<string>(m["AvgTaskCount"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("MaxCpuTime") != m.end() && !m["MaxCpuTime"].empty()) {
      maxCpuTime = make_shared<string>(boost::any_cast<string>(m["MaxCpuTime"]));
    }
    if (m.find("MaxPeakMemory") != m.end() && !m["MaxPeakMemory"].empty()) {
      maxPeakMemory = make_shared<string>(boost::any_cast<string>(m["MaxPeakMemory"]));
    }
    if (m.find("MaxScanSize") != m.end() && !m["MaxScanSize"].empty()) {
      maxScanSize = make_shared<string>(boost::any_cast<string>(m["MaxScanSize"]));
    }
    if (m.find("MaxStageCount") != m.end() && !m["MaxStageCount"].empty()) {
      maxStageCount = make_shared<string>(boost::any_cast<string>(m["MaxStageCount"]));
    }
    if (m.find("MaxTaskCount") != m.end() && !m["MaxTaskCount"].empty()) {
      maxTaskCount = make_shared<string>(boost::any_cast<string>(m["MaxTaskCount"]));
    }
    if (m.find("Pattern") != m.end() && !m["Pattern"].empty()) {
      pattern = make_shared<string>(boost::any_cast<string>(m["Pattern"]));
    }
    if (m.find("QueryCount") != m.end() && !m["QueryCount"].empty()) {
      queryCount = make_shared<string>(boost::any_cast<string>(m["QueryCount"]));
    }
    if (m.find("ReportDate") != m.end() && !m["ReportDate"].empty()) {
      reportDate = make_shared<string>(boost::any_cast<string>(m["ReportDate"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DescribeSqlPatternResponseBodyItems() = default;
};
class DescribeSqlPatternResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSqlPatternResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeSqlPatternResponseBody() {}

  explicit DescribeSqlPatternResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeSqlPatternResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSqlPatternResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeSqlPatternResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeSqlPatternResponseBody() = default;
};
class DescribeSqlPatternResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSqlPatternResponseBody> body{};

  DescribeSqlPatternResponse() {}

  explicit DescribeSqlPatternResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSqlPatternResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSqlPatternResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSqlPatternResponse() = default;
};
class DescribeTableAccessCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> tableName{};

  DescribeTableAccessCountRequest() {}

  explicit DescribeTableAccessCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeTableAccessCountRequest() = default;
};
class DescribeTableAccessCountResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> accessCount{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> reportDate{};
  shared_ptr<string> tableName{};
  shared_ptr<string> tableSchema{};

  DescribeTableAccessCountResponseBodyItems() {}

  explicit DescribeTableAccessCountResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessCount) {
      res["AccessCount"] = boost::any(*accessCount);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (reportDate) {
      res["ReportDate"] = boost::any(*reportDate);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (tableSchema) {
      res["TableSchema"] = boost::any(*tableSchema);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessCount") != m.end() && !m["AccessCount"].empty()) {
      accessCount = make_shared<string>(boost::any_cast<string>(m["AccessCount"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("ReportDate") != m.end() && !m["ReportDate"].empty()) {
      reportDate = make_shared<string>(boost::any_cast<string>(m["ReportDate"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("TableSchema") != m.end() && !m["TableSchema"].empty()) {
      tableSchema = make_shared<string>(boost::any_cast<string>(m["TableSchema"]));
    }
  }


  virtual ~DescribeTableAccessCountResponseBodyItems() = default;
};
class DescribeTableAccessCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTableAccessCountResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeTableAccessCountResponseBody() {}

  explicit DescribeTableAccessCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeTableAccessCountResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTableAccessCountResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeTableAccessCountResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeTableAccessCountResponseBody() = default;
};
class DescribeTableAccessCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTableAccessCountResponseBody> body{};

  DescribeTableAccessCountResponse() {}

  explicit DescribeTableAccessCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeTableAccessCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTableAccessCountResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTableAccessCountResponse() = default;
};
class DescribeTablesRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> schemaName{};

  DescribeTablesRequest() {}

  explicit DescribeTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
  }


  virtual ~DescribeTablesRequest() = default;
};
class DescribeTablesResponseBodyItemsTable : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};

  DescribeTablesResponseBodyItemsTable() {}

  explicit DescribeTablesResponseBodyItemsTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeTablesResponseBodyItemsTable() = default;
};
class DescribeTablesResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTablesResponseBodyItemsTable>> table{};

  DescribeTablesResponseBodyItems() {}

  explicit DescribeTablesResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (table) {
      vector<boost::any> temp1;
      for(auto item1:*table){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Table"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      if (typeid(vector<boost::any>) == m["Table"].type()) {
        vector<DescribeTablesResponseBodyItemsTable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Table"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTablesResponseBodyItemsTable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        table = make_shared<vector<DescribeTablesResponseBodyItemsTable>>(expect1);
      }
    }
  }


  virtual ~DescribeTablesResponseBodyItems() = default;
};
class DescribeTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeTablesResponseBodyItems> items{};
  shared_ptr<string> requestId{};

  DescribeTablesResponseBody() {}

  explicit DescribeTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeTablesResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeTablesResponseBodyItems>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeTablesResponseBody() = default;
};
class DescribeTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTablesResponseBody> body{};

  DescribeTablesResponse() {}

  explicit DescribeTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTablesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTablesResponse() = default;
};
class DescribeUserQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};

  DescribeUserQuotaRequest() {}

  explicit DescribeUserQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~DescribeUserQuotaRequest() = default;
};
class DescribeUserQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> elasticACU{};
  shared_ptr<string> requestId{};
  shared_ptr<string> reserverdCompteACU{};
  shared_ptr<string> reserverdStorageACU{};
  shared_ptr<string> resourceGroupCount{};

  DescribeUserQuotaResponseBody() {}

  explicit DescribeUserQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticACU) {
      res["ElasticACU"] = boost::any(*elasticACU);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (reserverdCompteACU) {
      res["ReserverdCompteACU"] = boost::any(*reserverdCompteACU);
    }
    if (reserverdStorageACU) {
      res["ReserverdStorageACU"] = boost::any(*reserverdStorageACU);
    }
    if (resourceGroupCount) {
      res["ResourceGroupCount"] = boost::any(*resourceGroupCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticACU") != m.end() && !m["ElasticACU"].empty()) {
      elasticACU = make_shared<string>(boost::any_cast<string>(m["ElasticACU"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ReserverdCompteACU") != m.end() && !m["ReserverdCompteACU"].empty()) {
      reserverdCompteACU = make_shared<string>(boost::any_cast<string>(m["ReserverdCompteACU"]));
    }
    if (m.find("ReserverdStorageACU") != m.end() && !m["ReserverdStorageACU"].empty()) {
      reserverdStorageACU = make_shared<string>(boost::any_cast<string>(m["ReserverdStorageACU"]));
    }
    if (m.find("ResourceGroupCount") != m.end() && !m["ResourceGroupCount"].empty()) {
      resourceGroupCount = make_shared<string>(boost::any_cast<string>(m["ResourceGroupCount"]));
    }
  }


  virtual ~DescribeUserQuotaResponseBody() = default;
};
class DescribeUserQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserQuotaResponseBody> body{};

  DescribeUserQuotaResponse() {}

  explicit DescribeUserQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeUserQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserQuotaResponse() = default;
};
class DetachUserENIRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};

  DetachUserENIRequest() {}

  explicit DetachUserENIRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~DetachUserENIRequest() = default;
};
class DetachUserENIResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachUserENIResponseBody() {}

  explicit DetachUserENIResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetachUserENIResponseBody() = default;
};
class DetachUserENIResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachUserENIResponseBody> body{};

  DetachUserENIResponse() {}

  explicit DetachUserENIResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DetachUserENIResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachUserENIResponseBody>(model1);
      }
    }
  }


  virtual ~DetachUserENIResponse() = default;
};
class DisableElasticPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> elasticPlanName{};

  DisableElasticPlanRequest() {}

  explicit DisableElasticPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (elasticPlanName) {
      res["ElasticPlanName"] = boost::any(*elasticPlanName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ElasticPlanName") != m.end() && !m["ElasticPlanName"].empty()) {
      elasticPlanName = make_shared<string>(boost::any_cast<string>(m["ElasticPlanName"]));
    }
  }


  virtual ~DisableElasticPlanRequest() = default;
};
class DisableElasticPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableElasticPlanResponseBody() {}

  explicit DisableElasticPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DisableElasticPlanResponseBody() = default;
};
class DisableElasticPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableElasticPlanResponseBody> body{};

  DisableElasticPlanResponse() {}

  explicit DisableElasticPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableElasticPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableElasticPlanResponseBody>(model1);
      }
    }
  }


  virtual ~DisableElasticPlanResponse() = default;
};
class DownloadDiagnosisRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientIp{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> database{};
  shared_ptr<string> endTime{};
  shared_ptr<string> keyword{};
  shared_ptr<string> lang{};
  shared_ptr<long> maxPeakMemory{};
  shared_ptr<long> maxScanSize{};
  shared_ptr<long> minPeakMemory{};
  shared_ptr<long> minScanSize{};
  shared_ptr<string> queryCondition{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroup{};
  shared_ptr<string> startTime{};
  shared_ptr<string> userName{};

  DownloadDiagnosisRecordsRequest() {}

  explicit DownloadDiagnosisRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (maxPeakMemory) {
      res["MaxPeakMemory"] = boost::any(*maxPeakMemory);
    }
    if (maxScanSize) {
      res["MaxScanSize"] = boost::any(*maxScanSize);
    }
    if (minPeakMemory) {
      res["MinPeakMemory"] = boost::any(*minPeakMemory);
    }
    if (minScanSize) {
      res["MinScanSize"] = boost::any(*minScanSize);
    }
    if (queryCondition) {
      res["QueryCondition"] = boost::any(*queryCondition);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = boost::any(*resourceGroup);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MaxPeakMemory") != m.end() && !m["MaxPeakMemory"].empty()) {
      maxPeakMemory = make_shared<long>(boost::any_cast<long>(m["MaxPeakMemory"]));
    }
    if (m.find("MaxScanSize") != m.end() && !m["MaxScanSize"].empty()) {
      maxScanSize = make_shared<long>(boost::any_cast<long>(m["MaxScanSize"]));
    }
    if (m.find("MinPeakMemory") != m.end() && !m["MinPeakMemory"].empty()) {
      minPeakMemory = make_shared<long>(boost::any_cast<long>(m["MinPeakMemory"]));
    }
    if (m.find("MinScanSize") != m.end() && !m["MinScanSize"].empty()) {
      minScanSize = make_shared<long>(boost::any_cast<long>(m["MinScanSize"]));
    }
    if (m.find("QueryCondition") != m.end() && !m["QueryCondition"].empty()) {
      queryCondition = make_shared<string>(boost::any_cast<string>(m["QueryCondition"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      resourceGroup = make_shared<string>(boost::any_cast<string>(m["ResourceGroup"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~DownloadDiagnosisRecordsRequest() = default;
};
class DownloadDiagnosisRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> downloadId{};
  shared_ptr<string> requestId{};

  DownloadDiagnosisRecordsResponseBody() {}

  explicit DownloadDiagnosisRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downloadId) {
      res["DownloadId"] = boost::any(*downloadId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownloadId") != m.end() && !m["DownloadId"].empty()) {
      downloadId = make_shared<long>(boost::any_cast<long>(m["DownloadId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DownloadDiagnosisRecordsResponseBody() = default;
};
class DownloadDiagnosisRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DownloadDiagnosisRecordsResponseBody> body{};

  DownloadDiagnosisRecordsResponse() {}

  explicit DownloadDiagnosisRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DownloadDiagnosisRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DownloadDiagnosisRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DownloadDiagnosisRecordsResponse() = default;
};
class EnableElasticPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> elasticPlanName{};

  EnableElasticPlanRequest() {}

  explicit EnableElasticPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (elasticPlanName) {
      res["ElasticPlanName"] = boost::any(*elasticPlanName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ElasticPlanName") != m.end() && !m["ElasticPlanName"].empty()) {
      elasticPlanName = make_shared<string>(boost::any_cast<string>(m["ElasticPlanName"]));
    }
  }


  virtual ~EnableElasticPlanRequest() = default;
};
class EnableElasticPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableElasticPlanResponseBody() {}

  explicit EnableElasticPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnableElasticPlanResponseBody() = default;
};
class EnableElasticPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableElasticPlanResponseBody> body{};

  EnableElasticPlanResponse() {}

  explicit EnableElasticPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableElasticPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableElasticPlanResponseBody>(model1);
      }
    }
  }


  virtual ~EnableElasticPlanResponse() = default;
};
class ExistRunningSQLEngineRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> resourceGroupName{};

  ExistRunningSQLEngineRequest() {}

  explicit ExistRunningSQLEngineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
  }


  virtual ~ExistRunningSQLEngineRequest() = default;
};
class ExistRunningSQLEngineResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  ExistRunningSQLEngineResponseBody() {}

  explicit ExistRunningSQLEngineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ExistRunningSQLEngineResponseBody() = default;
};
class ExistRunningSQLEngineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExistRunningSQLEngineResponseBody> body{};

  ExistRunningSQLEngineResponse() {}

  explicit ExistRunningSQLEngineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ExistRunningSQLEngineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExistRunningSQLEngineResponseBody>(model1);
      }
    }
  }


  virtual ~ExistRunningSQLEngineResponse() = default;
};
class GetDatabaseObjectsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> filterOwner{};
  shared_ptr<string> filterSchemaName{};
  shared_ptr<string> orderBy{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  GetDatabaseObjectsRequest() {}

  explicit GetDatabaseObjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (filterOwner) {
      res["FilterOwner"] = boost::any(*filterOwner);
    }
    if (filterSchemaName) {
      res["FilterSchemaName"] = boost::any(*filterSchemaName);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("FilterOwner") != m.end() && !m["FilterOwner"].empty()) {
      filterOwner = make_shared<string>(boost::any_cast<string>(m["FilterOwner"]));
    }
    if (m.find("FilterSchemaName") != m.end() && !m["FilterSchemaName"].empty()) {
      filterSchemaName = make_shared<string>(boost::any_cast<string>(m["FilterSchemaName"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetDatabaseObjectsRequest() = default;
};
class GetDatabaseObjectsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DatabaseSummaryModel>> databaseSummaryModels{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  GetDatabaseObjectsResponseBodyData() {}

  explicit GetDatabaseObjectsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseSummaryModels) {
      vector<boost::any> temp1;
      for(auto item1:*databaseSummaryModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DatabaseSummaryModels"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseSummaryModels") != m.end() && !m["DatabaseSummaryModels"].empty()) {
      if (typeid(vector<boost::any>) == m["DatabaseSummaryModels"].type()) {
        vector<DatabaseSummaryModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DatabaseSummaryModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DatabaseSummaryModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        databaseSummaryModels = make_shared<vector<DatabaseSummaryModel>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetDatabaseObjectsResponseBodyData() = default;
};
class GetDatabaseObjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDatabaseObjectsResponseBodyData> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  GetDatabaseObjectsResponseBody() {}

  explicit GetDatabaseObjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetDatabaseObjectsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDatabaseObjectsResponseBodyData>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetDatabaseObjectsResponseBody() = default;
};
class GetDatabaseObjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDatabaseObjectsResponseBody> body{};

  GetDatabaseObjectsResponse() {}

  explicit GetDatabaseObjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDatabaseObjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDatabaseObjectsResponseBody>(model1);
      }
    }
  }


  virtual ~GetDatabaseObjectsResponse() = default;
};
class GetSparkAppAttemptLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> attemptId{};
  shared_ptr<long> logLength{};

  GetSparkAppAttemptLogRequest() {}

  explicit GetSparkAppAttemptLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attemptId) {
      res["AttemptId"] = boost::any(*attemptId);
    }
    if (logLength) {
      res["LogLength"] = boost::any(*logLength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttemptId") != m.end() && !m["AttemptId"].empty()) {
      attemptId = make_shared<string>(boost::any_cast<string>(m["AttemptId"]));
    }
    if (m.find("LogLength") != m.end() && !m["LogLength"].empty()) {
      logLength = make_shared<long>(boost::any_cast<long>(m["LogLength"]));
    }
  }


  virtual ~GetSparkAppAttemptLogRequest() = default;
};
class GetSparkAppAttemptLogResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> logContent{};
  shared_ptr<string> message{};

  GetSparkAppAttemptLogResponseBodyData() {}

  explicit GetSparkAppAttemptLogResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (logContent) {
      res["LogContent"] = boost::any(*logContent);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("LogContent") != m.end() && !m["LogContent"].empty()) {
      logContent = make_shared<string>(boost::any_cast<string>(m["LogContent"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~GetSparkAppAttemptLogResponseBodyData() = default;
};
class GetSparkAppAttemptLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetSparkAppAttemptLogResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetSparkAppAttemptLogResponseBody() {}

  explicit GetSparkAppAttemptLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetSparkAppAttemptLogResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSparkAppAttemptLogResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSparkAppAttemptLogResponseBody() = default;
};
class GetSparkAppAttemptLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSparkAppAttemptLogResponseBody> body{};

  GetSparkAppAttemptLogResponse() {}

  explicit GetSparkAppAttemptLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSparkAppAttemptLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSparkAppAttemptLogResponseBody>(model1);
      }
    }
  }


  virtual ~GetSparkAppAttemptLogResponse() = default;
};
class GetSparkAppInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  GetSparkAppInfoRequest() {}

  explicit GetSparkAppInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~GetSparkAppInfoRequest() = default;
};
class GetSparkAppInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<SparkAppInfo> data{};
  shared_ptr<string> requestId{};

  GetSparkAppInfoResponseBody() {}

  explicit GetSparkAppInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SparkAppInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SparkAppInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSparkAppInfoResponseBody() = default;
};
class GetSparkAppInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSparkAppInfoResponseBody> body{};

  GetSparkAppInfoResponse() {}

  explicit GetSparkAppInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSparkAppInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSparkAppInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetSparkAppInfoResponse() = default;
};
class GetSparkAppLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> logLength{};

  GetSparkAppLogRequest() {}

  explicit GetSparkAppLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (logLength) {
      res["LogLength"] = boost::any(*logLength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LogLength") != m.end() && !m["LogLength"].empty()) {
      logLength = make_shared<long>(boost::any_cast<long>(m["LogLength"]));
    }
  }


  virtual ~GetSparkAppLogRequest() = default;
};
class GetSparkAppLogResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> logContent{};
  shared_ptr<string> message{};

  GetSparkAppLogResponseBodyData() {}

  explicit GetSparkAppLogResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (logContent) {
      res["LogContent"] = boost::any(*logContent);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("LogContent") != m.end() && !m["LogContent"].empty()) {
      logContent = make_shared<string>(boost::any_cast<string>(m["LogContent"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~GetSparkAppLogResponseBodyData() = default;
};
class GetSparkAppLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetSparkAppLogResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetSparkAppLogResponseBody() {}

  explicit GetSparkAppLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetSparkAppLogResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSparkAppLogResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSparkAppLogResponseBody() = default;
};
class GetSparkAppLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSparkAppLogResponseBody> body{};

  GetSparkAppLogResponse() {}

  explicit GetSparkAppLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSparkAppLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSparkAppLogResponseBody>(model1);
      }
    }
  }


  virtual ~GetSparkAppLogResponse() = default;
};
class GetSparkAppMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  GetSparkAppMetricsRequest() {}

  explicit GetSparkAppMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~GetSparkAppMetricsRequest() = default;
};
class GetSparkAppMetricsResponseBodyDataScanMetrics : public Darabonba::Model {
public:
  shared_ptr<long> outputRowsCount{};
  shared_ptr<long> totalReadFileSizeInByte{};

  GetSparkAppMetricsResponseBodyDataScanMetrics() {}

  explicit GetSparkAppMetricsResponseBodyDataScanMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outputRowsCount) {
      res["OutputRowsCount"] = boost::any(*outputRowsCount);
    }
    if (totalReadFileSizeInByte) {
      res["TotalReadFileSizeInByte"] = boost::any(*totalReadFileSizeInByte);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutputRowsCount") != m.end() && !m["OutputRowsCount"].empty()) {
      outputRowsCount = make_shared<long>(boost::any_cast<long>(m["OutputRowsCount"]));
    }
    if (m.find("TotalReadFileSizeInByte") != m.end() && !m["TotalReadFileSizeInByte"].empty()) {
      totalReadFileSizeInByte = make_shared<long>(boost::any_cast<long>(m["TotalReadFileSizeInByte"]));
    }
  }


  virtual ~GetSparkAppMetricsResponseBodyDataScanMetrics() = default;
};
class GetSparkAppMetricsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> attemptId{};
  shared_ptr<string> eventLogPath{};
  shared_ptr<bool> finished{};
  shared_ptr<GetSparkAppMetricsResponseBodyDataScanMetrics> scanMetrics{};

  GetSparkAppMetricsResponseBodyData() {}

  explicit GetSparkAppMetricsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (attemptId) {
      res["AttemptId"] = boost::any(*attemptId);
    }
    if (eventLogPath) {
      res["EventLogPath"] = boost::any(*eventLogPath);
    }
    if (finished) {
      res["Finished"] = boost::any(*finished);
    }
    if (scanMetrics) {
      res["ScanMetrics"] = scanMetrics ? boost::any(scanMetrics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AttemptId") != m.end() && !m["AttemptId"].empty()) {
      attemptId = make_shared<string>(boost::any_cast<string>(m["AttemptId"]));
    }
    if (m.find("EventLogPath") != m.end() && !m["EventLogPath"].empty()) {
      eventLogPath = make_shared<string>(boost::any_cast<string>(m["EventLogPath"]));
    }
    if (m.find("Finished") != m.end() && !m["Finished"].empty()) {
      finished = make_shared<bool>(boost::any_cast<bool>(m["Finished"]));
    }
    if (m.find("ScanMetrics") != m.end() && !m["ScanMetrics"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScanMetrics"].type()) {
        GetSparkAppMetricsResponseBodyDataScanMetrics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScanMetrics"]));
        scanMetrics = make_shared<GetSparkAppMetricsResponseBodyDataScanMetrics>(model1);
      }
    }
  }


  virtual ~GetSparkAppMetricsResponseBodyData() = default;
};
class GetSparkAppMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetSparkAppMetricsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetSparkAppMetricsResponseBody() {}

  explicit GetSparkAppMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetSparkAppMetricsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSparkAppMetricsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSparkAppMetricsResponseBody() = default;
};
class GetSparkAppMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSparkAppMetricsResponseBody> body{};

  GetSparkAppMetricsResponse() {}

  explicit GetSparkAppMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSparkAppMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSparkAppMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~GetSparkAppMetricsResponse() = default;
};
class GetSparkAppStateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  GetSparkAppStateRequest() {}

  explicit GetSparkAppStateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~GetSparkAppStateRequest() = default;
};
class GetSparkAppStateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> message{};
  shared_ptr<string> state{};

  GetSparkAppStateResponseBodyData() {}

  explicit GetSparkAppStateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~GetSparkAppStateResponseBodyData() = default;
};
class GetSparkAppStateResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetSparkAppStateResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetSparkAppStateResponseBody() {}

  explicit GetSparkAppStateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetSparkAppStateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSparkAppStateResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSparkAppStateResponseBody() = default;
};
class GetSparkAppStateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSparkAppStateResponseBody> body{};

  GetSparkAppStateResponse() {}

  explicit GetSparkAppStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSparkAppStateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSparkAppStateResponseBody>(model1);
      }
    }
  }


  virtual ~GetSparkAppStateResponse() = default;
};
class GetSparkAppWebUiAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  GetSparkAppWebUiAddressRequest() {}

  explicit GetSparkAppWebUiAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~GetSparkAppWebUiAddressRequest() = default;
};
class GetSparkAppWebUiAddressResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<long> expirationTimeInMillis{};
  shared_ptr<string> webUiAddress{};

  GetSparkAppWebUiAddressResponseBodyData() {}

  explicit GetSparkAppWebUiAddressResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (expirationTimeInMillis) {
      res["ExpirationTimeInMillis"] = boost::any(*expirationTimeInMillis);
    }
    if (webUiAddress) {
      res["WebUiAddress"] = boost::any(*webUiAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ExpirationTimeInMillis") != m.end() && !m["ExpirationTimeInMillis"].empty()) {
      expirationTimeInMillis = make_shared<long>(boost::any_cast<long>(m["ExpirationTimeInMillis"]));
    }
    if (m.find("WebUiAddress") != m.end() && !m["WebUiAddress"].empty()) {
      webUiAddress = make_shared<string>(boost::any_cast<string>(m["WebUiAddress"]));
    }
  }


  virtual ~GetSparkAppWebUiAddressResponseBodyData() = default;
};
class GetSparkAppWebUiAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetSparkAppWebUiAddressResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetSparkAppWebUiAddressResponseBody() {}

  explicit GetSparkAppWebUiAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetSparkAppWebUiAddressResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSparkAppWebUiAddressResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSparkAppWebUiAddressResponseBody() = default;
};
class GetSparkAppWebUiAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSparkAppWebUiAddressResponseBody> body{};

  GetSparkAppWebUiAddressResponse() {}

  explicit GetSparkAppWebUiAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSparkAppWebUiAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSparkAppWebUiAddressResponseBody>(model1);
      }
    }
  }


  virtual ~GetSparkAppWebUiAddressResponse() = default;
};
class GetSparkConfigLogPathRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};

  GetSparkConfigLogPathRequest() {}

  explicit GetSparkConfigLogPathRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~GetSparkConfigLogPathRequest() = default;
};
class GetSparkConfigLogPathResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> defaultLogPath{};
  shared_ptr<bool> isLogPathExists{};
  shared_ptr<string> modifiedTimestamp{};
  shared_ptr<string> modifiedUid{};
  shared_ptr<string> recordedLogPath{};

  GetSparkConfigLogPathResponseBodyData() {}

  explicit GetSparkConfigLogPathResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultLogPath) {
      res["DefaultLogPath"] = boost::any(*defaultLogPath);
    }
    if (isLogPathExists) {
      res["IsLogPathExists"] = boost::any(*isLogPathExists);
    }
    if (modifiedTimestamp) {
      res["ModifiedTimestamp"] = boost::any(*modifiedTimestamp);
    }
    if (modifiedUid) {
      res["ModifiedUid"] = boost::any(*modifiedUid);
    }
    if (recordedLogPath) {
      res["RecordedLogPath"] = boost::any(*recordedLogPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultLogPath") != m.end() && !m["DefaultLogPath"].empty()) {
      defaultLogPath = make_shared<string>(boost::any_cast<string>(m["DefaultLogPath"]));
    }
    if (m.find("IsLogPathExists") != m.end() && !m["IsLogPathExists"].empty()) {
      isLogPathExists = make_shared<bool>(boost::any_cast<bool>(m["IsLogPathExists"]));
    }
    if (m.find("ModifiedTimestamp") != m.end() && !m["ModifiedTimestamp"].empty()) {
      modifiedTimestamp = make_shared<string>(boost::any_cast<string>(m["ModifiedTimestamp"]));
    }
    if (m.find("ModifiedUid") != m.end() && !m["ModifiedUid"].empty()) {
      modifiedUid = make_shared<string>(boost::any_cast<string>(m["ModifiedUid"]));
    }
    if (m.find("RecordedLogPath") != m.end() && !m["RecordedLogPath"].empty()) {
      recordedLogPath = make_shared<string>(boost::any_cast<string>(m["RecordedLogPath"]));
    }
  }


  virtual ~GetSparkConfigLogPathResponseBodyData() = default;
};
class GetSparkConfigLogPathResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetSparkConfigLogPathResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetSparkConfigLogPathResponseBody() {}

  explicit GetSparkConfigLogPathResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetSparkConfigLogPathResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSparkConfigLogPathResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSparkConfigLogPathResponseBody() = default;
};
class GetSparkConfigLogPathResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSparkConfigLogPathResponseBody> body{};

  GetSparkConfigLogPathResponse() {}

  explicit GetSparkConfigLogPathResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSparkConfigLogPathResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSparkConfigLogPathResponseBody>(model1);
      }
    }
  }


  virtual ~GetSparkConfigLogPathResponse() = default;
};
class GetSparkDefinitionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};

  GetSparkDefinitionsRequest() {}

  explicit GetSparkDefinitionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~GetSparkDefinitionsRequest() = default;
};
class GetSparkDefinitionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetSparkDefinitionsResponseBody() {}

  explicit GetSparkDefinitionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSparkDefinitionsResponseBody() = default;
};
class GetSparkDefinitionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSparkDefinitionsResponseBody> body{};

  GetSparkDefinitionsResponse() {}

  explicit GetSparkDefinitionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSparkDefinitionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSparkDefinitionsResponseBody>(model1);
      }
    }
  }


  virtual ~GetSparkDefinitionsResponse() = default;
};
class GetSparkLogAnalyzeTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> taskId{};

  GetSparkLogAnalyzeTaskRequest() {}

  explicit GetSparkLogAnalyzeTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~GetSparkLogAnalyzeTaskRequest() = default;
};
class GetSparkLogAnalyzeTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<SparkAnalyzeLogTask> data{};
  shared_ptr<string> requestId{};

  GetSparkLogAnalyzeTaskResponseBody() {}

  explicit GetSparkLogAnalyzeTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SparkAnalyzeLogTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SparkAnalyzeLogTask>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSparkLogAnalyzeTaskResponseBody() = default;
};
class GetSparkLogAnalyzeTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSparkLogAnalyzeTaskResponseBody> body{};

  GetSparkLogAnalyzeTaskResponse() {}

  explicit GetSparkLogAnalyzeTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSparkLogAnalyzeTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSparkLogAnalyzeTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetSparkLogAnalyzeTaskResponse() = default;
};
class GetSparkSQLEngineStateRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> resourceGroupName{};

  GetSparkSQLEngineStateRequest() {}

  explicit GetSparkSQLEngineStateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
  }


  virtual ~GetSparkSQLEngineStateRequest() = default;
};
class GetSparkSQLEngineStateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> config{};
  shared_ptr<string> jars{};
  shared_ptr<string> maxExecutor{};
  shared_ptr<string> minExecutor{};
  shared_ptr<string> slotNum{};
  shared_ptr<string> state{};
  shared_ptr<string> submittedTimeInMillis{};

  GetSparkSQLEngineStateResponseBodyData() {}

  explicit GetSparkSQLEngineStateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (jars) {
      res["Jars"] = boost::any(*jars);
    }
    if (maxExecutor) {
      res["MaxExecutor"] = boost::any(*maxExecutor);
    }
    if (minExecutor) {
      res["MinExecutor"] = boost::any(*minExecutor);
    }
    if (slotNum) {
      res["SlotNum"] = boost::any(*slotNum);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (submittedTimeInMillis) {
      res["SubmittedTimeInMillis"] = boost::any(*submittedTimeInMillis);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("Jars") != m.end() && !m["Jars"].empty()) {
      jars = make_shared<string>(boost::any_cast<string>(m["Jars"]));
    }
    if (m.find("MaxExecutor") != m.end() && !m["MaxExecutor"].empty()) {
      maxExecutor = make_shared<string>(boost::any_cast<string>(m["MaxExecutor"]));
    }
    if (m.find("MinExecutor") != m.end() && !m["MinExecutor"].empty()) {
      minExecutor = make_shared<string>(boost::any_cast<string>(m["MinExecutor"]));
    }
    if (m.find("SlotNum") != m.end() && !m["SlotNum"].empty()) {
      slotNum = make_shared<string>(boost::any_cast<string>(m["SlotNum"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("SubmittedTimeInMillis") != m.end() && !m["SubmittedTimeInMillis"].empty()) {
      submittedTimeInMillis = make_shared<string>(boost::any_cast<string>(m["SubmittedTimeInMillis"]));
    }
  }


  virtual ~GetSparkSQLEngineStateResponseBodyData() = default;
};
class GetSparkSQLEngineStateResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetSparkSQLEngineStateResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetSparkSQLEngineStateResponseBody() {}

  explicit GetSparkSQLEngineStateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetSparkSQLEngineStateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSparkSQLEngineStateResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSparkSQLEngineStateResponseBody() = default;
};
class GetSparkSQLEngineStateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSparkSQLEngineStateResponseBody> body{};

  GetSparkSQLEngineStateResponse() {}

  explicit GetSparkSQLEngineStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSparkSQLEngineStateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSparkSQLEngineStateResponseBody>(model1);
      }
    }
  }


  virtual ~GetSparkSQLEngineStateResponse() = default;
};
class GetSparkTemplateFileContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<long> id{};

  GetSparkTemplateFileContentRequest() {}

  explicit GetSparkTemplateFileContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~GetSparkTemplateFileContentRequest() = default;
};
class GetSparkTemplateFileContentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appType{};
  shared_ptr<string> content{};
  shared_ptr<long> id{};
  shared_ptr<string> resourceGroupName{};
  shared_ptr<string> type{};

  GetSparkTemplateFileContentResponseBodyData() {}

  explicit GetSparkTemplateFileContentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetSparkTemplateFileContentResponseBodyData() = default;
};
class GetSparkTemplateFileContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetSparkTemplateFileContentResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetSparkTemplateFileContentResponseBody() {}

  explicit GetSparkTemplateFileContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetSparkTemplateFileContentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSparkTemplateFileContentResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSparkTemplateFileContentResponseBody() = default;
};
class GetSparkTemplateFileContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSparkTemplateFileContentResponseBody> body{};

  GetSparkTemplateFileContentResponse() {}

  explicit GetSparkTemplateFileContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSparkTemplateFileContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSparkTemplateFileContentResponseBody>(model1);
      }
    }
  }


  virtual ~GetSparkTemplateFileContentResponse() = default;
};
class GetSparkTemplateFolderTreeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};

  GetSparkTemplateFolderTreeRequest() {}

  explicit GetSparkTemplateFolderTreeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~GetSparkTemplateFolderTreeRequest() = default;
};
class GetSparkTemplateFolderTreeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetSparkTemplateFolderTreeResponseBody() {}

  explicit GetSparkTemplateFolderTreeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSparkTemplateFolderTreeResponseBody() = default;
};
class GetSparkTemplateFolderTreeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSparkTemplateFolderTreeResponseBody> body{};

  GetSparkTemplateFolderTreeResponse() {}

  explicit GetSparkTemplateFolderTreeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSparkTemplateFolderTreeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSparkTemplateFolderTreeResponseBody>(model1);
      }
    }
  }


  virtual ~GetSparkTemplateFolderTreeResponse() = default;
};
class GetSparkTemplateFullTreeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};

  GetSparkTemplateFullTreeRequest() {}

  explicit GetSparkTemplateFullTreeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~GetSparkTemplateFullTreeRequest() = default;
};
class GetSparkTemplateFullTreeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetSparkTemplateFullTreeResponseBody() {}

  explicit GetSparkTemplateFullTreeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSparkTemplateFullTreeResponseBody() = default;
};
class GetSparkTemplateFullTreeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSparkTemplateFullTreeResponseBody> body{};

  GetSparkTemplateFullTreeResponse() {}

  explicit GetSparkTemplateFullTreeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSparkTemplateFullTreeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSparkTemplateFullTreeResponseBody>(model1);
      }
    }
  }


  virtual ~GetSparkTemplateFullTreeResponse() = default;
};
class GetTableRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> tableName{};

  GetTableRequest() {}

  explicit GetTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~GetTableRequest() = default;
};
class GetTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<TableModel> table{};

  GetTableResponseBody() {}

  explicit GetTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (table) {
      res["Table"] = table ? boost::any(table->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      if (typeid(map<string, boost::any>) == m["Table"].type()) {
        TableModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Table"]));
        table = make_shared<TableModel>(model1);
      }
    }
  }


  virtual ~GetTableResponseBody() = default;
};
class GetTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTableResponseBody> body{};

  GetTableResponse() {}

  explicit GetTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTableResponseBody>(model1);
      }
    }
  }


  virtual ~GetTableResponse() = default;
};
class GetTableColumnsRequest : public Darabonba::Model {
public:
  shared_ptr<string> columnName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};

  GetTableColumnsRequest() {}

  explicit GetTableColumnsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~GetTableColumnsRequest() = default;
};
class GetTableColumnsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<TableDetailModel> table{};
  shared_ptr<long> totalCount{};

  GetTableColumnsResponseBodyData() {}

  explicit GetTableColumnsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (table) {
      res["Table"] = table ? boost::any(table->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      if (typeid(map<string, boost::any>) == m["Table"].type()) {
        TableDetailModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Table"]));
        table = make_shared<TableDetailModel>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetTableColumnsResponseBodyData() = default;
};
class GetTableColumnsResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetTableColumnsResponseBodyData> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  GetTableColumnsResponseBody() {}

  explicit GetTableColumnsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetTableColumnsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTableColumnsResponseBodyData>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetTableColumnsResponseBody() = default;
};
class GetTableColumnsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTableColumnsResponseBody> body{};

  GetTableColumnsResponse() {}

  explicit GetTableColumnsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTableColumnsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTableColumnsResponseBody>(model1);
      }
    }
  }


  virtual ~GetTableColumnsResponse() = default;
};
class GetTableDDLRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};

  GetTableDDLRequest() {}

  explicit GetTableDDLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~GetTableDDLRequest() = default;
};
class GetTableDDLResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> SQL{};

  GetTableDDLResponseBody() {}

  explicit GetTableDDLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SQL) {
      res["SQL"] = boost::any(*SQL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SQL") != m.end() && !m["SQL"].empty()) {
      SQL = make_shared<string>(boost::any_cast<string>(m["SQL"]));
    }
  }


  virtual ~GetTableDDLResponseBody() = default;
};
class GetTableDDLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTableDDLResponseBody> body{};

  GetTableDDLResponse() {}

  explicit GetTableDDLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTableDDLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTableDDLResponseBody>(model1);
      }
    }
  }


  virtual ~GetTableDDLResponse() = default;
};
class GetTableObjectsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> filterDescription{};
  shared_ptr<string> filterOwner{};
  shared_ptr<string> filterTblName{};
  shared_ptr<string> filterTblType{};
  shared_ptr<string> orderBy{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> schemaName{};

  GetTableObjectsRequest() {}

  explicit GetTableObjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (filterDescription) {
      res["FilterDescription"] = boost::any(*filterDescription);
    }
    if (filterOwner) {
      res["FilterOwner"] = boost::any(*filterOwner);
    }
    if (filterTblName) {
      res["FilterTblName"] = boost::any(*filterTblName);
    }
    if (filterTblType) {
      res["FilterTblType"] = boost::any(*filterTblType);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("FilterDescription") != m.end() && !m["FilterDescription"].empty()) {
      filterDescription = make_shared<string>(boost::any_cast<string>(m["FilterDescription"]));
    }
    if (m.find("FilterOwner") != m.end() && !m["FilterOwner"].empty()) {
      filterOwner = make_shared<string>(boost::any_cast<string>(m["FilterOwner"]));
    }
    if (m.find("FilterTblName") != m.end() && !m["FilterTblName"].empty()) {
      filterTblName = make_shared<string>(boost::any_cast<string>(m["FilterTblName"]));
    }
    if (m.find("FilterTblType") != m.end() && !m["FilterTblType"].empty()) {
      filterTblType = make_shared<string>(boost::any_cast<string>(m["FilterTblType"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
  }


  virtual ~GetTableObjectsRequest() = default;
};
class GetTableObjectsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<TableSummaryModel>> tableSummaryModels{};
  shared_ptr<long> totalCount{};

  GetTableObjectsResponseBodyData() {}

  explicit GetTableObjectsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (tableSummaryModels) {
      vector<boost::any> temp1;
      for(auto item1:*tableSummaryModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableSummaryModels"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TableSummaryModels") != m.end() && !m["TableSummaryModels"].empty()) {
      if (typeid(vector<boost::any>) == m["TableSummaryModels"].type()) {
        vector<TableSummaryModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableSummaryModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TableSummaryModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableSummaryModels = make_shared<vector<TableSummaryModel>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetTableObjectsResponseBodyData() = default;
};
class GetTableObjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetTableObjectsResponseBodyData> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  GetTableObjectsResponseBody() {}

  explicit GetTableObjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetTableObjectsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTableObjectsResponseBodyData>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetTableObjectsResponseBody() = default;
};
class GetTableObjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTableObjectsResponseBody> body{};

  GetTableObjectsResponse() {}

  explicit GetTableObjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTableObjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTableObjectsResponseBody>(model1);
      }
    }
  }


  virtual ~GetTableObjectsResponse() = default;
};
class GetViewDDLRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> viewName{};

  GetViewDDLRequest() {}

  explicit GetViewDDLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (viewName) {
      res["ViewName"] = boost::any(*viewName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("ViewName") != m.end() && !m["ViewName"].empty()) {
      viewName = make_shared<string>(boost::any_cast<string>(m["ViewName"]));
    }
  }


  virtual ~GetViewDDLRequest() = default;
};
class GetViewDDLResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> SQL{};

  GetViewDDLResponseBody() {}

  explicit GetViewDDLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SQL) {
      res["SQL"] = boost::any(*SQL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SQL") != m.end() && !m["SQL"].empty()) {
      SQL = make_shared<string>(boost::any_cast<string>(m["SQL"]));
    }
  }


  virtual ~GetViewDDLResponseBody() = default;
};
class GetViewDDLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetViewDDLResponseBody> body{};

  GetViewDDLResponse() {}

  explicit GetViewDDLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetViewDDLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetViewDDLResponseBody>(model1);
      }
    }
  }


  virtual ~GetViewDDLResponse() = default;
};
class GetViewObjectsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> filterOwner{};
  shared_ptr<string> filterViewName{};
  shared_ptr<string> filterViewType{};
  shared_ptr<string> orderBy{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> schemaName{};

  GetViewObjectsRequest() {}

  explicit GetViewObjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (filterOwner) {
      res["FilterOwner"] = boost::any(*filterOwner);
    }
    if (filterViewName) {
      res["FilterViewName"] = boost::any(*filterViewName);
    }
    if (filterViewType) {
      res["FilterViewType"] = boost::any(*filterViewType);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("FilterOwner") != m.end() && !m["FilterOwner"].empty()) {
      filterOwner = make_shared<string>(boost::any_cast<string>(m["FilterOwner"]));
    }
    if (m.find("FilterViewName") != m.end() && !m["FilterViewName"].empty()) {
      filterViewName = make_shared<string>(boost::any_cast<string>(m["FilterViewName"]));
    }
    if (m.find("FilterViewType") != m.end() && !m["FilterViewType"].empty()) {
      filterViewType = make_shared<string>(boost::any_cast<string>(m["FilterViewType"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
  }


  virtual ~GetViewObjectsRequest() = default;
};
class GetViewObjectsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<TableSummaryModel>> tableSummaryModels{};
  shared_ptr<long> totalCount{};

  GetViewObjectsResponseBodyData() {}

  explicit GetViewObjectsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (tableSummaryModels) {
      vector<boost::any> temp1;
      for(auto item1:*tableSummaryModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableSummaryModels"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TableSummaryModels") != m.end() && !m["TableSummaryModels"].empty()) {
      if (typeid(vector<boost::any>) == m["TableSummaryModels"].type()) {
        vector<TableSummaryModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableSummaryModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TableSummaryModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableSummaryModels = make_shared<vector<TableSummaryModel>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetViewObjectsResponseBodyData() = default;
};
class GetViewObjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetViewObjectsResponseBodyData> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  GetViewObjectsResponseBody() {}

  explicit GetViewObjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetViewObjectsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetViewObjectsResponseBodyData>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetViewObjectsResponseBody() = default;
};
class GetViewObjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetViewObjectsResponseBody> body{};

  GetViewObjectsResponse() {}

  explicit GetViewObjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetViewObjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetViewObjectsResponseBody>(model1);
      }
    }
  }


  virtual ~GetViewObjectsResponse() = default;
};
class KillSparkAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  KillSparkAppRequest() {}

  explicit KillSparkAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~KillSparkAppRequest() = default;
};
class KillSparkAppResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> message{};
  shared_ptr<string> state{};

  KillSparkAppResponseBodyData() {}

  explicit KillSparkAppResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~KillSparkAppResponseBodyData() = default;
};
class KillSparkAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<KillSparkAppResponseBodyData> data{};
  shared_ptr<string> requestId{};

  KillSparkAppResponseBody() {}

  explicit KillSparkAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        KillSparkAppResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<KillSparkAppResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~KillSparkAppResponseBody() = default;
};
class KillSparkAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<KillSparkAppResponseBody> body{};

  KillSparkAppResponse() {}

  explicit KillSparkAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        KillSparkAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<KillSparkAppResponseBody>(model1);
      }
    }
  }


  virtual ~KillSparkAppResponse() = default;
};
class KillSparkLogAnalyzeTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> taskId{};

  KillSparkLogAnalyzeTaskRequest() {}

  explicit KillSparkLogAnalyzeTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~KillSparkLogAnalyzeTaskRequest() = default;
};
class KillSparkLogAnalyzeTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<SparkAnalyzeLogTask> data{};
  shared_ptr<string> requestId{};

  KillSparkLogAnalyzeTaskResponseBody() {}

  explicit KillSparkLogAnalyzeTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SparkAnalyzeLogTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SparkAnalyzeLogTask>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~KillSparkLogAnalyzeTaskResponseBody() = default;
};
class KillSparkLogAnalyzeTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<KillSparkLogAnalyzeTaskResponseBody> body{};

  KillSparkLogAnalyzeTaskResponse() {}

  explicit KillSparkLogAnalyzeTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        KillSparkLogAnalyzeTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<KillSparkLogAnalyzeTaskResponseBody>(model1);
      }
    }
  }


  virtual ~KillSparkLogAnalyzeTaskResponse() = default;
};
class KillSparkSQLEngineRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> resourceGroupName{};

  KillSparkSQLEngineRequest() {}

  explicit KillSparkSQLEngineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
  }


  virtual ~KillSparkSQLEngineRequest() = default;
};
class KillSparkSQLEngineResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  KillSparkSQLEngineResponseBody() {}

  explicit KillSparkSQLEngineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~KillSparkSQLEngineResponseBody() = default;
};
class KillSparkSQLEngineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<KillSparkSQLEngineResponseBody> body{};

  KillSparkSQLEngineResponse() {}

  explicit KillSparkSQLEngineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        KillSparkSQLEngineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<KillSparkSQLEngineResponseBody>(model1);
      }
    }
  }


  virtual ~KillSparkSQLEngineResponse() = default;
};
class ListSparkAppAttemptsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListSparkAppAttemptsRequest() {}

  explicit ListSparkAppAttemptsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListSparkAppAttemptsRequest() = default;
};
class ListSparkAppAttemptsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SparkAttemptInfo>> attemptInfoList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListSparkAppAttemptsResponseBodyData() {}

  explicit ListSparkAppAttemptsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attemptInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*attemptInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AttemptInfoList"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttemptInfoList") != m.end() && !m["AttemptInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["AttemptInfoList"].type()) {
        vector<SparkAttemptInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AttemptInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SparkAttemptInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attemptInfoList = make_shared<vector<SparkAttemptInfo>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListSparkAppAttemptsResponseBodyData() = default;
};
class ListSparkAppAttemptsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListSparkAppAttemptsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListSparkAppAttemptsResponseBody() {}

  explicit ListSparkAppAttemptsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListSparkAppAttemptsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListSparkAppAttemptsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListSparkAppAttemptsResponseBody() = default;
};
class ListSparkAppAttemptsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSparkAppAttemptsResponseBody> body{};

  ListSparkAppAttemptsResponse() {}

  explicit ListSparkAppAttemptsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSparkAppAttemptsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSparkAppAttemptsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSparkAppAttemptsResponse() = default;
};
class ListSparkAppsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupName{};

  ListSparkAppsRequest() {}

  explicit ListSparkAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
  }


  virtual ~ListSparkAppsRequest() = default;
};
class ListSparkAppsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SparkAppInfo>> appInfoList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListSparkAppsResponseBodyData() {}

  explicit ListSparkAppsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*appInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppInfoList"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInfoList") != m.end() && !m["AppInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["AppInfoList"].type()) {
        vector<SparkAppInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SparkAppInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appInfoList = make_shared<vector<SparkAppInfo>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListSparkAppsResponseBodyData() = default;
};
class ListSparkAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListSparkAppsResponseBodyData> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListSparkAppsResponseBody() {}

  explicit ListSparkAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListSparkAppsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListSparkAppsResponseBodyData>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListSparkAppsResponseBody() = default;
};
class ListSparkAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSparkAppsResponseBody> body{};

  ListSparkAppsResponse() {}

  explicit ListSparkAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSparkAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSparkAppsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSparkAppsResponse() = default;
};
class ListSparkLogAnalyzeTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListSparkLogAnalyzeTasksRequest() {}

  explicit ListSparkLogAnalyzeTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListSparkLogAnalyzeTasksRequest() = default;
};
class ListSparkLogAnalyzeTasksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<SparkAnalyzeLogTask>> taskList{};
  shared_ptr<long> totalCount{};

  ListSparkLogAnalyzeTasksResponseBodyData() {}

  explicit ListSparkLogAnalyzeTasksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (taskList) {
      vector<boost::any> temp1;
      for(auto item1:*taskList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TaskList") != m.end() && !m["TaskList"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskList"].type()) {
        vector<SparkAnalyzeLogTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SparkAnalyzeLogTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskList = make_shared<vector<SparkAnalyzeLogTask>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListSparkLogAnalyzeTasksResponseBodyData() = default;
};
class ListSparkLogAnalyzeTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListSparkLogAnalyzeTasksResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListSparkLogAnalyzeTasksResponseBody() {}

  explicit ListSparkLogAnalyzeTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListSparkLogAnalyzeTasksResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListSparkLogAnalyzeTasksResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListSparkLogAnalyzeTasksResponseBody() = default;
};
class ListSparkLogAnalyzeTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSparkLogAnalyzeTasksResponseBody> body{};

  ListSparkLogAnalyzeTasksResponse() {}

  explicit ListSparkLogAnalyzeTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSparkLogAnalyzeTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSparkLogAnalyzeTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListSparkLogAnalyzeTasksResponse() = default;
};
class ListSparkTemplateFileIdsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};

  ListSparkTemplateFileIdsRequest() {}

  explicit ListSparkTemplateFileIdsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~ListSparkTemplateFileIdsRequest() = default;
};
class ListSparkTemplateFileIdsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<long>> data{};
  shared_ptr<string> requestId{};

  ListSparkTemplateFileIdsResponseBody() {}

  explicit ListSparkTemplateFileIdsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      data = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListSparkTemplateFileIdsResponseBody() = default;
};
class ListSparkTemplateFileIdsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSparkTemplateFileIdsResponseBody> body{};

  ListSparkTemplateFileIdsResponse() {}

  explicit ListSparkTemplateFileIdsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSparkTemplateFileIdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSparkTemplateFileIdsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSparkTemplateFileIdsResponse() = default;
};
class ModifyAccountDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> DBClusterId{};

  ModifyAccountDescriptionRequest() {}

  explicit ModifyAccountDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~ModifyAccountDescriptionRequest() = default;
};
class ModifyAccountDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAccountDescriptionResponseBody() {}

  explicit ModifyAccountDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyAccountDescriptionResponseBody() = default;
};
class ModifyAccountDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAccountDescriptionResponseBody> body{};

  ModifyAccountDescriptionResponse() {}

  explicit ModifyAccountDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAccountDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAccountDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAccountDescriptionResponse() = default;
};
class ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject : public Darabonba::Model {
public:
  shared_ptr<string> column{};
  shared_ptr<string> database{};
  shared_ptr<string> table{};

  ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject() {}

  explicit ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (column) {
      res["Column"] = boost::any(*column);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Column") != m.end() && !m["Column"].empty()) {
      column = make_shared<string>(boost::any_cast<string>(m["Column"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
  }


  virtual ~ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject() = default;
};
class ModifyAccountPrivilegesRequestAccountPrivileges : public Darabonba::Model {
public:
  shared_ptr<ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject> privilegeObject{};
  shared_ptr<string> privilegeType{};
  shared_ptr<vector<string>> privileges{};

  ModifyAccountPrivilegesRequestAccountPrivileges() {}

  explicit ModifyAccountPrivilegesRequestAccountPrivileges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (privilegeObject) {
      res["PrivilegeObject"] = privilegeObject ? boost::any(privilegeObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (privilegeType) {
      res["PrivilegeType"] = boost::any(*privilegeType);
    }
    if (privileges) {
      res["Privileges"] = boost::any(*privileges);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrivilegeObject") != m.end() && !m["PrivilegeObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["PrivilegeObject"].type()) {
        ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PrivilegeObject"]));
        privilegeObject = make_shared<ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject>(model1);
      }
    }
    if (m.find("PrivilegeType") != m.end() && !m["PrivilegeType"].empty()) {
      privilegeType = make_shared<string>(boost::any_cast<string>(m["PrivilegeType"]));
    }
    if (m.find("Privileges") != m.end() && !m["Privileges"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Privileges"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Privileges"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      privileges = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyAccountPrivilegesRequestAccountPrivileges() = default;
};
class ModifyAccountPrivilegesRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<vector<ModifyAccountPrivilegesRequestAccountPrivileges>> accountPrivileges{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};

  ModifyAccountPrivilegesRequest() {}

  explicit ModifyAccountPrivilegesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPrivileges) {
      vector<boost::any> temp1;
      for(auto item1:*accountPrivileges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccountPrivileges"] = boost::any(temp1);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPrivileges") != m.end() && !m["AccountPrivileges"].empty()) {
      if (typeid(vector<boost::any>) == m["AccountPrivileges"].type()) {
        vector<ModifyAccountPrivilegesRequestAccountPrivileges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccountPrivileges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyAccountPrivilegesRequestAccountPrivileges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accountPrivileges = make_shared<vector<ModifyAccountPrivilegesRequestAccountPrivileges>>(expect1);
      }
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyAccountPrivilegesRequest() = default;
};
class ModifyAccountPrivilegesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPrivilegesShrink{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};

  ModifyAccountPrivilegesShrinkRequest() {}

  explicit ModifyAccountPrivilegesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPrivilegesShrink) {
      res["AccountPrivileges"] = boost::any(*accountPrivilegesShrink);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPrivileges") != m.end() && !m["AccountPrivileges"].empty()) {
      accountPrivilegesShrink = make_shared<string>(boost::any_cast<string>(m["AccountPrivileges"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyAccountPrivilegesShrinkRequest() = default;
};
class ModifyAccountPrivilegesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAccountPrivilegesResponseBody() {}

  explicit ModifyAccountPrivilegesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyAccountPrivilegesResponseBody() = default;
};
class ModifyAccountPrivilegesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAccountPrivilegesResponseBody> body{};

  ModifyAccountPrivilegesResponse() {}

  explicit ModifyAccountPrivilegesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAccountPrivilegesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAccountPrivilegesResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAccountPrivilegesResponse() = default;
};
class ModifyAuditLogConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditLogStatus{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyAuditLogConfigRequest() {}

  explicit ModifyAuditLogConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditLogStatus) {
      res["AuditLogStatus"] = boost::any(*auditLogStatus);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditLogStatus") != m.end() && !m["AuditLogStatus"].empty()) {
      auditLogStatus = make_shared<string>(boost::any_cast<string>(m["AuditLogStatus"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyAuditLogConfigRequest() = default;
};
class ModifyAuditLogConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> updateSucceed{};

  ModifyAuditLogConfigResponseBody() {}

  explicit ModifyAuditLogConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (updateSucceed) {
      res["UpdateSucceed"] = boost::any(*updateSucceed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UpdateSucceed") != m.end() && !m["UpdateSucceed"].empty()) {
      updateSucceed = make_shared<bool>(boost::any_cast<bool>(m["UpdateSucceed"]));
    }
  }


  virtual ~ModifyAuditLogConfigResponseBody() = default;
};
class ModifyAuditLogConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAuditLogConfigResponseBody> body{};

  ModifyAuditLogConfigResponse() {}

  explicit ModifyAuditLogConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAuditLogConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAuditLogConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAuditLogConfigResponse() = default;
};
class ModifyClusterAccessWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterIPArrayAttribute{};
  shared_ptr<string> DBClusterIPArrayName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> modifyMode{};
  shared_ptr<string> securityIps{};

  ModifyClusterAccessWhiteListRequest() {}

  explicit ModifyClusterAccessWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterIPArrayAttribute) {
      res["DBClusterIPArrayAttribute"] = boost::any(*DBClusterIPArrayAttribute);
    }
    if (DBClusterIPArrayName) {
      res["DBClusterIPArrayName"] = boost::any(*DBClusterIPArrayName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (modifyMode) {
      res["ModifyMode"] = boost::any(*modifyMode);
    }
    if (securityIps) {
      res["SecurityIps"] = boost::any(*securityIps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterIPArrayAttribute") != m.end() && !m["DBClusterIPArrayAttribute"].empty()) {
      DBClusterIPArrayAttribute = make_shared<string>(boost::any_cast<string>(m["DBClusterIPArrayAttribute"]));
    }
    if (m.find("DBClusterIPArrayName") != m.end() && !m["DBClusterIPArrayName"].empty()) {
      DBClusterIPArrayName = make_shared<string>(boost::any_cast<string>(m["DBClusterIPArrayName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ModifyMode") != m.end() && !m["ModifyMode"].empty()) {
      modifyMode = make_shared<string>(boost::any_cast<string>(m["ModifyMode"]));
    }
    if (m.find("SecurityIps") != m.end() && !m["SecurityIps"].empty()) {
      securityIps = make_shared<string>(boost::any_cast<string>(m["SecurityIps"]));
    }
  }


  virtual ~ModifyClusterAccessWhiteListRequest() = default;
};
class ModifyClusterAccessWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> taskId{};

  ModifyClusterAccessWhiteListResponseBody() {}

  explicit ModifyClusterAccessWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~ModifyClusterAccessWhiteListResponseBody() = default;
};
class ModifyClusterAccessWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyClusterAccessWhiteListResponseBody> body{};

  ModifyClusterAccessWhiteListResponse() {}

  explicit ModifyClusterAccessWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyClusterAccessWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyClusterAccessWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyClusterAccessWhiteListResponse() = default;
};
class ModifyClusterConnectionStringRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionStringPrefix{};
  shared_ptr<string> currentConnectionString{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<long> port{};

  ModifyClusterConnectionStringRequest() {}

  explicit ModifyClusterConnectionStringRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionStringPrefix) {
      res["ConnectionStringPrefix"] = boost::any(*connectionStringPrefix);
    }
    if (currentConnectionString) {
      res["CurrentConnectionString"] = boost::any(*currentConnectionString);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionStringPrefix") != m.end() && !m["ConnectionStringPrefix"].empty()) {
      connectionStringPrefix = make_shared<string>(boost::any_cast<string>(m["ConnectionStringPrefix"]));
    }
    if (m.find("CurrentConnectionString") != m.end() && !m["CurrentConnectionString"].empty()) {
      currentConnectionString = make_shared<string>(boost::any_cast<string>(m["CurrentConnectionString"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~ModifyClusterConnectionStringRequest() = default;
};
class ModifyClusterConnectionStringResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyClusterConnectionStringResponseBody() {}

  explicit ModifyClusterConnectionStringResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyClusterConnectionStringResponseBody() = default;
};
class ModifyClusterConnectionStringResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyClusterConnectionStringResponseBody> body{};

  ModifyClusterConnectionStringResponse() {}

  explicit ModifyClusterConnectionStringResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyClusterConnectionStringResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyClusterConnectionStringResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyClusterConnectionStringResponse() = default;
};
class ModifyDBClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> computeResource{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<bool> enableDefaultResourcePool{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> storageResource{};

  ModifyDBClusterRequest() {}

  explicit ModifyDBClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (computeResource) {
      res["ComputeResource"] = boost::any(*computeResource);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (enableDefaultResourcePool) {
      res["EnableDefaultResourcePool"] = boost::any(*enableDefaultResourcePool);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (storageResource) {
      res["StorageResource"] = boost::any(*storageResource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComputeResource") != m.end() && !m["ComputeResource"].empty()) {
      computeResource = make_shared<string>(boost::any_cast<string>(m["ComputeResource"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EnableDefaultResourcePool") != m.end() && !m["EnableDefaultResourcePool"].empty()) {
      enableDefaultResourcePool = make_shared<bool>(boost::any_cast<bool>(m["EnableDefaultResourcePool"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("StorageResource") != m.end() && !m["StorageResource"].empty()) {
      storageResource = make_shared<string>(boost::any_cast<string>(m["StorageResource"]));
    }
  }


  virtual ~ModifyDBClusterRequest() = default;
};
class ModifyDBClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  ModifyDBClusterResponseBody() {}

  explicit ModifyDBClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBClusterResponseBody() = default;
};
class ModifyDBClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBClusterResponseBody> body{};

  ModifyDBClusterResponse() {}

  explicit ModifyDBClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterResponse() = default;
};
class ModifyDBClusterDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterId{};

  ModifyDBClusterDescriptionRequest() {}

  explicit ModifyDBClusterDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~ModifyDBClusterDescriptionRequest() = default;
};
class ModifyDBClusterDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBClusterDescriptionResponseBody() {}

  explicit ModifyDBClusterDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBClusterDescriptionResponseBody() = default;
};
class ModifyDBClusterDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBClusterDescriptionResponseBody> body{};

  ModifyDBClusterDescriptionResponse() {}

  explicit ModifyDBClusterDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBClusterDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterDescriptionResponse() = default;
};
class ModifyDBClusterMaintainTimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> maintainTime{};

  ModifyDBClusterMaintainTimeRequest() {}

  explicit ModifyDBClusterMaintainTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (maintainTime) {
      res["MaintainTime"] = boost::any(*maintainTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("MaintainTime") != m.end() && !m["MaintainTime"].empty()) {
      maintainTime = make_shared<string>(boost::any_cast<string>(m["MaintainTime"]));
    }
  }


  virtual ~ModifyDBClusterMaintainTimeRequest() = default;
};
class ModifyDBClusterMaintainTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBClusterMaintainTimeResponseBody() {}

  explicit ModifyDBClusterMaintainTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBClusterMaintainTimeResponseBody() = default;
};
class ModifyDBClusterMaintainTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBClusterMaintainTimeResponseBody> body{};

  ModifyDBClusterMaintainTimeResponse() {}

  explicit ModifyDBClusterMaintainTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBClusterMaintainTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterMaintainTimeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterMaintainTimeResponse() = default;
};
class ModifyDBResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterMode{};
  shared_ptr<string> clusterSizeResource{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupType{};
  shared_ptr<long> maxClusterCount{};
  shared_ptr<string> maxComputeResource{};
  shared_ptr<long> minClusterCount{};
  shared_ptr<string> minComputeResource{};

  ModifyDBResourceGroupRequest() {}

  explicit ModifyDBResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterMode) {
      res["ClusterMode"] = boost::any(*clusterMode);
    }
    if (clusterSizeResource) {
      res["ClusterSizeResource"] = boost::any(*clusterSizeResource);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupType) {
      res["GroupType"] = boost::any(*groupType);
    }
    if (maxClusterCount) {
      res["MaxClusterCount"] = boost::any(*maxClusterCount);
    }
    if (maxComputeResource) {
      res["MaxComputeResource"] = boost::any(*maxComputeResource);
    }
    if (minClusterCount) {
      res["MinClusterCount"] = boost::any(*minClusterCount);
    }
    if (minComputeResource) {
      res["MinComputeResource"] = boost::any(*minComputeResource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterMode") != m.end() && !m["ClusterMode"].empty()) {
      clusterMode = make_shared<string>(boost::any_cast<string>(m["ClusterMode"]));
    }
    if (m.find("ClusterSizeResource") != m.end() && !m["ClusterSizeResource"].empty()) {
      clusterSizeResource = make_shared<string>(boost::any_cast<string>(m["ClusterSizeResource"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupType") != m.end() && !m["GroupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["GroupType"]));
    }
    if (m.find("MaxClusterCount") != m.end() && !m["MaxClusterCount"].empty()) {
      maxClusterCount = make_shared<long>(boost::any_cast<long>(m["MaxClusterCount"]));
    }
    if (m.find("MaxComputeResource") != m.end() && !m["MaxComputeResource"].empty()) {
      maxComputeResource = make_shared<string>(boost::any_cast<string>(m["MaxComputeResource"]));
    }
    if (m.find("MinClusterCount") != m.end() && !m["MinClusterCount"].empty()) {
      minClusterCount = make_shared<long>(boost::any_cast<long>(m["MinClusterCount"]));
    }
    if (m.find("MinComputeResource") != m.end() && !m["MinComputeResource"].empty()) {
      minComputeResource = make_shared<string>(boost::any_cast<string>(m["MinComputeResource"]));
    }
  }


  virtual ~ModifyDBResourceGroupRequest() = default;
};
class ModifyDBResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBResourceGroupResponseBody() {}

  explicit ModifyDBResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBResourceGroupResponseBody() = default;
};
class ModifyDBResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBResourceGroupResponseBody> body{};

  ModifyDBResourceGroupResponse() {}

  explicit ModifyDBResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBResourceGroupResponse() = default;
};
class ModifyElasticPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> cronExpression{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> elasticPlanName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> targetSize{};

  ModifyElasticPlanRequest() {}

  explicit ModifyElasticPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cronExpression) {
      res["CronExpression"] = boost::any(*cronExpression);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (elasticPlanName) {
      res["ElasticPlanName"] = boost::any(*elasticPlanName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (targetSize) {
      res["TargetSize"] = boost::any(*targetSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CronExpression") != m.end() && !m["CronExpression"].empty()) {
      cronExpression = make_shared<string>(boost::any_cast<string>(m["CronExpression"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ElasticPlanName") != m.end() && !m["ElasticPlanName"].empty()) {
      elasticPlanName = make_shared<string>(boost::any_cast<string>(m["ElasticPlanName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TargetSize") != m.end() && !m["TargetSize"].empty()) {
      targetSize = make_shared<string>(boost::any_cast<string>(m["TargetSize"]));
    }
  }


  virtual ~ModifyElasticPlanRequest() = default;
};
class ModifyElasticPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyElasticPlanResponseBody() {}

  explicit ModifyElasticPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyElasticPlanResponseBody() = default;
};
class ModifyElasticPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyElasticPlanResponseBody> body{};

  ModifyElasticPlanResponse() {}

  explicit ModifyElasticPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyElasticPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyElasticPlanResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyElasticPlanResponse() = default;
};
class PreloadSparkAppMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  PreloadSparkAppMetricsRequest() {}

  explicit PreloadSparkAppMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~PreloadSparkAppMetricsRequest() = default;
};
class PreloadSparkAppMetricsResponseBodyDataScanMetrics : public Darabonba::Model {
public:
  shared_ptr<long> outputRowsCount{};
  shared_ptr<long> totalReadFileSizeInByte{};

  PreloadSparkAppMetricsResponseBodyDataScanMetrics() {}

  explicit PreloadSparkAppMetricsResponseBodyDataScanMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outputRowsCount) {
      res["OutputRowsCount"] = boost::any(*outputRowsCount);
    }
    if (totalReadFileSizeInByte) {
      res["TotalReadFileSizeInByte"] = boost::any(*totalReadFileSizeInByte);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutputRowsCount") != m.end() && !m["OutputRowsCount"].empty()) {
      outputRowsCount = make_shared<long>(boost::any_cast<long>(m["OutputRowsCount"]));
    }
    if (m.find("TotalReadFileSizeInByte") != m.end() && !m["TotalReadFileSizeInByte"].empty()) {
      totalReadFileSizeInByte = make_shared<long>(boost::any_cast<long>(m["TotalReadFileSizeInByte"]));
    }
  }


  virtual ~PreloadSparkAppMetricsResponseBodyDataScanMetrics() = default;
};
class PreloadSparkAppMetricsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> attemptId{};
  shared_ptr<string> eventLogPath{};
  shared_ptr<bool> finished{};
  shared_ptr<PreloadSparkAppMetricsResponseBodyDataScanMetrics> scanMetrics{};

  PreloadSparkAppMetricsResponseBodyData() {}

  explicit PreloadSparkAppMetricsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (attemptId) {
      res["AttemptId"] = boost::any(*attemptId);
    }
    if (eventLogPath) {
      res["EventLogPath"] = boost::any(*eventLogPath);
    }
    if (finished) {
      res["Finished"] = boost::any(*finished);
    }
    if (scanMetrics) {
      res["ScanMetrics"] = scanMetrics ? boost::any(scanMetrics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AttemptId") != m.end() && !m["AttemptId"].empty()) {
      attemptId = make_shared<string>(boost::any_cast<string>(m["AttemptId"]));
    }
    if (m.find("EventLogPath") != m.end() && !m["EventLogPath"].empty()) {
      eventLogPath = make_shared<string>(boost::any_cast<string>(m["EventLogPath"]));
    }
    if (m.find("Finished") != m.end() && !m["Finished"].empty()) {
      finished = make_shared<bool>(boost::any_cast<bool>(m["Finished"]));
    }
    if (m.find("ScanMetrics") != m.end() && !m["ScanMetrics"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScanMetrics"].type()) {
        PreloadSparkAppMetricsResponseBodyDataScanMetrics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScanMetrics"]));
        scanMetrics = make_shared<PreloadSparkAppMetricsResponseBodyDataScanMetrics>(model1);
      }
    }
  }


  virtual ~PreloadSparkAppMetricsResponseBodyData() = default;
};
class PreloadSparkAppMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<PreloadSparkAppMetricsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  PreloadSparkAppMetricsResponseBody() {}

  explicit PreloadSparkAppMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        PreloadSparkAppMetricsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PreloadSparkAppMetricsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PreloadSparkAppMetricsResponseBody() = default;
};
class PreloadSparkAppMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PreloadSparkAppMetricsResponseBody> body{};

  PreloadSparkAppMetricsResponse() {}

  explicit PreloadSparkAppMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PreloadSparkAppMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PreloadSparkAppMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~PreloadSparkAppMetricsResponse() = default;
};
class ReleaseClusterPublicConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};

  ReleaseClusterPublicConnectionRequest() {}

  explicit ReleaseClusterPublicConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~ReleaseClusterPublicConnectionRequest() = default;
};
class ReleaseClusterPublicConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleaseClusterPublicConnectionResponseBody() {}

  explicit ReleaseClusterPublicConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReleaseClusterPublicConnectionResponseBody() = default;
};
class ReleaseClusterPublicConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseClusterPublicConnectionResponseBody> body{};

  ReleaseClusterPublicConnectionResponse() {}

  explicit ReleaseClusterPublicConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReleaseClusterPublicConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseClusterPublicConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseClusterPublicConnectionResponse() = default;
};
class RenameSparkTemplateFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  RenameSparkTemplateFileRequest() {}

  explicit RenameSparkTemplateFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~RenameSparkTemplateFileRequest() = default;
};
class RenameSparkTemplateFileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> succeeded{};

  RenameSparkTemplateFileResponseBodyData() {}

  explicit RenameSparkTemplateFileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (succeeded) {
      res["Succeeded"] = boost::any(*succeeded);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Succeeded") != m.end() && !m["Succeeded"].empty()) {
      succeeded = make_shared<bool>(boost::any_cast<bool>(m["Succeeded"]));
    }
  }


  virtual ~RenameSparkTemplateFileResponseBodyData() = default;
};
class RenameSparkTemplateFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<RenameSparkTemplateFileResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RenameSparkTemplateFileResponseBody() {}

  explicit RenameSparkTemplateFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RenameSparkTemplateFileResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RenameSparkTemplateFileResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RenameSparkTemplateFileResponseBody() = default;
};
class RenameSparkTemplateFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenameSparkTemplateFileResponseBody> body{};

  RenameSparkTemplateFileResponse() {}

  explicit RenameSparkTemplateFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RenameSparkTemplateFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenameSparkTemplateFileResponseBody>(model1);
      }
    }
  }


  virtual ~RenameSparkTemplateFileResponse() = default;
};
class ResetAccountPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> DBClusterId{};

  ResetAccountPasswordRequest() {}

  explicit ResetAccountPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~ResetAccountPasswordRequest() = default;
};
class ResetAccountPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetAccountPasswordResponseBody() {}

  explicit ResetAccountPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ResetAccountPasswordResponseBody() = default;
};
class ResetAccountPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetAccountPasswordResponseBody> body{};

  ResetAccountPasswordResponse() {}

  explicit ResetAccountPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResetAccountPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetAccountPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ResetAccountPasswordResponse() = default;
};
class SetSparkAppLogRootPathRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ossLogPath{};
  shared_ptr<bool> useDefaultOss{};

  SetSparkAppLogRootPathRequest() {}

  explicit SetSparkAppLogRootPathRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ossLogPath) {
      res["OssLogPath"] = boost::any(*ossLogPath);
    }
    if (useDefaultOss) {
      res["UseDefaultOss"] = boost::any(*useDefaultOss);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OssLogPath") != m.end() && !m["OssLogPath"].empty()) {
      ossLogPath = make_shared<string>(boost::any_cast<string>(m["OssLogPath"]));
    }
    if (m.find("UseDefaultOss") != m.end() && !m["UseDefaultOss"].empty()) {
      useDefaultOss = make_shared<bool>(boost::any_cast<bool>(m["UseDefaultOss"]));
    }
  }


  virtual ~SetSparkAppLogRootPathRequest() = default;
};
class SetSparkAppLogRootPathResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> defaultLogPath{};
  shared_ptr<bool> isLogPathExists{};
  shared_ptr<string> modifiedTimestamp{};
  shared_ptr<string> modifiedUid{};
  shared_ptr<string> recordedLogPath{};

  SetSparkAppLogRootPathResponseBodyData() {}

  explicit SetSparkAppLogRootPathResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultLogPath) {
      res["DefaultLogPath"] = boost::any(*defaultLogPath);
    }
    if (isLogPathExists) {
      res["IsLogPathExists"] = boost::any(*isLogPathExists);
    }
    if (modifiedTimestamp) {
      res["ModifiedTimestamp"] = boost::any(*modifiedTimestamp);
    }
    if (modifiedUid) {
      res["ModifiedUid"] = boost::any(*modifiedUid);
    }
    if (recordedLogPath) {
      res["RecordedLogPath"] = boost::any(*recordedLogPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultLogPath") != m.end() && !m["DefaultLogPath"].empty()) {
      defaultLogPath = make_shared<string>(boost::any_cast<string>(m["DefaultLogPath"]));
    }
    if (m.find("IsLogPathExists") != m.end() && !m["IsLogPathExists"].empty()) {
      isLogPathExists = make_shared<bool>(boost::any_cast<bool>(m["IsLogPathExists"]));
    }
    if (m.find("ModifiedTimestamp") != m.end() && !m["ModifiedTimestamp"].empty()) {
      modifiedTimestamp = make_shared<string>(boost::any_cast<string>(m["ModifiedTimestamp"]));
    }
    if (m.find("ModifiedUid") != m.end() && !m["ModifiedUid"].empty()) {
      modifiedUid = make_shared<string>(boost::any_cast<string>(m["ModifiedUid"]));
    }
    if (m.find("RecordedLogPath") != m.end() && !m["RecordedLogPath"].empty()) {
      recordedLogPath = make_shared<string>(boost::any_cast<string>(m["RecordedLogPath"]));
    }
  }


  virtual ~SetSparkAppLogRootPathResponseBodyData() = default;
};
class SetSparkAppLogRootPathResponseBody : public Darabonba::Model {
public:
  shared_ptr<SetSparkAppLogRootPathResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SetSparkAppLogRootPathResponseBody() {}

  explicit SetSparkAppLogRootPathResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SetSparkAppLogRootPathResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SetSparkAppLogRootPathResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetSparkAppLogRootPathResponseBody() = default;
};
class SetSparkAppLogRootPathResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetSparkAppLogRootPathResponseBody> body{};

  SetSparkAppLogRootPathResponse() {}

  explicit SetSparkAppLogRootPathResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetSparkAppLogRootPathResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetSparkAppLogRootPathResponseBody>(model1);
      }
    }
  }


  virtual ~SetSparkAppLogRootPathResponse() = default;
};
class StartSparkSQLEngineRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> jars{};
  shared_ptr<long> maxExecutor{};
  shared_ptr<long> minExecutor{};
  shared_ptr<string> resourceGroupName{};
  shared_ptr<long> slotNum{};

  StartSparkSQLEngineRequest() {}

  explicit StartSparkSQLEngineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (jars) {
      res["Jars"] = boost::any(*jars);
    }
    if (maxExecutor) {
      res["MaxExecutor"] = boost::any(*maxExecutor);
    }
    if (minExecutor) {
      res["MinExecutor"] = boost::any(*minExecutor);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    if (slotNum) {
      res["SlotNum"] = boost::any(*slotNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Jars") != m.end() && !m["Jars"].empty()) {
      jars = make_shared<string>(boost::any_cast<string>(m["Jars"]));
    }
    if (m.find("MaxExecutor") != m.end() && !m["MaxExecutor"].empty()) {
      maxExecutor = make_shared<long>(boost::any_cast<long>(m["MaxExecutor"]));
    }
    if (m.find("MinExecutor") != m.end() && !m["MinExecutor"].empty()) {
      minExecutor = make_shared<long>(boost::any_cast<long>(m["MinExecutor"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
    if (m.find("SlotNum") != m.end() && !m["SlotNum"].empty()) {
      slotNum = make_shared<long>(boost::any_cast<long>(m["SlotNum"]));
    }
  }


  virtual ~StartSparkSQLEngineRequest() = default;
};
class StartSparkSQLEngineResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> state{};

  StartSparkSQLEngineResponseBodyData() {}

  explicit StartSparkSQLEngineResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~StartSparkSQLEngineResponseBodyData() = default;
};
class StartSparkSQLEngineResponseBody : public Darabonba::Model {
public:
  shared_ptr<StartSparkSQLEngineResponseBodyData> data{};
  shared_ptr<string> requestId{};

  StartSparkSQLEngineResponseBody() {}

  explicit StartSparkSQLEngineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        StartSparkSQLEngineResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<StartSparkSQLEngineResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartSparkSQLEngineResponseBody() = default;
};
class StartSparkSQLEngineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartSparkSQLEngineResponseBody> body{};

  StartSparkSQLEngineResponse() {}

  explicit StartSparkSQLEngineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartSparkSQLEngineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartSparkSQLEngineResponseBody>(model1);
      }
    }
  }


  virtual ~StartSparkSQLEngineResponse() = default;
};
class SubmitSparkAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentSource{};
  shared_ptr<string> agentVersion{};
  shared_ptr<string> appName{};
  shared_ptr<string> appType{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> data{};
  shared_ptr<string> resourceGroupName{};
  shared_ptr<long> templateFileId{};

  SubmitSparkAppRequest() {}

  explicit SubmitSparkAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentSource) {
      res["AgentSource"] = boost::any(*agentSource);
    }
    if (agentVersion) {
      res["AgentVersion"] = boost::any(*agentVersion);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    if (templateFileId) {
      res["TemplateFileId"] = boost::any(*templateFileId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentSource") != m.end() && !m["AgentSource"].empty()) {
      agentSource = make_shared<string>(boost::any_cast<string>(m["AgentSource"]));
    }
    if (m.find("AgentVersion") != m.end() && !m["AgentVersion"].empty()) {
      agentVersion = make_shared<string>(boost::any_cast<string>(m["AgentVersion"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
    if (m.find("TemplateFileId") != m.end() && !m["TemplateFileId"].empty()) {
      templateFileId = make_shared<long>(boost::any_cast<long>(m["TemplateFileId"]));
    }
  }


  virtual ~SubmitSparkAppRequest() = default;
};
class SubmitSparkAppResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> message{};
  shared_ptr<string> state{};

  SubmitSparkAppResponseBodyData() {}

  explicit SubmitSparkAppResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~SubmitSparkAppResponseBodyData() = default;
};
class SubmitSparkAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<SubmitSparkAppResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SubmitSparkAppResponseBody() {}

  explicit SubmitSparkAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitSparkAppResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitSparkAppResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitSparkAppResponseBody() = default;
};
class SubmitSparkAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitSparkAppResponseBody> body{};

  SubmitSparkAppResponse() {}

  explicit SubmitSparkAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitSparkAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitSparkAppResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitSparkAppResponse() = default;
};
class SubmitSparkLogAnalyzeTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  SubmitSparkLogAnalyzeTaskRequest() {}

  explicit SubmitSparkLogAnalyzeTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~SubmitSparkLogAnalyzeTaskRequest() = default;
};
class SubmitSparkLogAnalyzeTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<SparkAnalyzeLogTask> data{};
  shared_ptr<string> requestId{};

  SubmitSparkLogAnalyzeTaskResponseBody() {}

  explicit SubmitSparkLogAnalyzeTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SparkAnalyzeLogTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SparkAnalyzeLogTask>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitSparkLogAnalyzeTaskResponseBody() = default;
};
class SubmitSparkLogAnalyzeTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitSparkLogAnalyzeTaskResponseBody> body{};

  SubmitSparkLogAnalyzeTaskResponse() {}

  explicit SubmitSparkLogAnalyzeTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitSparkLogAnalyzeTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitSparkLogAnalyzeTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitSparkLogAnalyzeTaskResponse() = default;
};
class UnbindAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> DBClusterId{};

  UnbindAccountRequest() {}

  explicit UnbindAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~UnbindAccountRequest() = default;
};
class UnbindAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnbindAccountResponseBody() {}

  explicit UnbindAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UnbindAccountResponseBody() = default;
};
class UnbindAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindAccountResponseBody> body{};

  UnbindAccountResponse() {}

  explicit UnbindAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UnbindAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindAccountResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindAccountResponse() = default;
};
class UnbindDBResourceGroupWithUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupUser{};

  UnbindDBResourceGroupWithUserRequest() {}

  explicit UnbindDBResourceGroupWithUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupUser) {
      res["GroupUser"] = boost::any(*groupUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupUser") != m.end() && !m["GroupUser"].empty()) {
      groupUser = make_shared<string>(boost::any_cast<string>(m["GroupUser"]));
    }
  }


  virtual ~UnbindDBResourceGroupWithUserRequest() = default;
};
class UnbindDBResourceGroupWithUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnbindDBResourceGroupWithUserResponseBody() {}

  explicit UnbindDBResourceGroupWithUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UnbindDBResourceGroupWithUserResponseBody() = default;
};
class UnbindDBResourceGroupWithUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindDBResourceGroupWithUserResponseBody> body{};

  UnbindDBResourceGroupWithUserResponse() {}

  explicit UnbindDBResourceGroupWithUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UnbindDBResourceGroupWithUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindDBResourceGroupWithUserResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindDBResourceGroupWithUserResponse() = default;
};
class UpdateSparkTemplateFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<long> id{};
  shared_ptr<string> resourceGroupName{};

  UpdateSparkTemplateFileRequest() {}

  explicit UpdateSparkTemplateFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
  }


  virtual ~UpdateSparkTemplateFileRequest() = default;
};
class UpdateSparkTemplateFileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> succeeded{};

  UpdateSparkTemplateFileResponseBodyData() {}

  explicit UpdateSparkTemplateFileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (succeeded) {
      res["Succeeded"] = boost::any(*succeeded);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Succeeded") != m.end() && !m["Succeeded"].empty()) {
      succeeded = make_shared<bool>(boost::any_cast<bool>(m["Succeeded"]));
    }
  }


  virtual ~UpdateSparkTemplateFileResponseBodyData() = default;
};
class UpdateSparkTemplateFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateSparkTemplateFileResponseBodyData> data{};
  shared_ptr<string> requestId{};

  UpdateSparkTemplateFileResponseBody() {}

  explicit UpdateSparkTemplateFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateSparkTemplateFileResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateSparkTemplateFileResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateSparkTemplateFileResponseBody() = default;
};
class UpdateSparkTemplateFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSparkTemplateFileResponseBody> body{};

  UpdateSparkTemplateFileResponse() {}

  explicit UpdateSparkTemplateFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateSparkTemplateFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSparkTemplateFileResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSparkTemplateFileResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  AllocateClusterPublicConnectionResponse allocateClusterPublicConnectionWithOptions(shared_ptr<AllocateClusterPublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllocateClusterPublicConnectionResponse allocateClusterPublicConnection(shared_ptr<AllocateClusterPublicConnectionRequest> request);
  AttachUserENIResponse attachUserENIWithOptions(shared_ptr<AttachUserENIRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachUserENIResponse attachUserENI(shared_ptr<AttachUserENIRequest> request);
  BindAccountResponse bindAccountWithOptions(shared_ptr<BindAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindAccountResponse bindAccount(shared_ptr<BindAccountRequest> request);
  BindDBResourceGroupWithUserResponse bindDBResourceGroupWithUserWithOptions(shared_ptr<BindDBResourceGroupWithUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindDBResourceGroupWithUserResponse bindDBResourceGroupWithUser(shared_ptr<BindDBResourceGroupWithUserRequest> request);
  CheckBindRamUserResponse checkBindRamUserWithOptions(shared_ptr<CheckBindRamUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckBindRamUserResponse checkBindRamUser(shared_ptr<CheckBindRamUserRequest> request);
  CheckSampleDataSetResponse checkSampleDataSetWithOptions(shared_ptr<CheckSampleDataSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckSampleDataSetResponse checkSampleDataSet(shared_ptr<CheckSampleDataSetRequest> request);
  CreateAccountResponse createAccountWithOptions(shared_ptr<CreateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccountResponse createAccount(shared_ptr<CreateAccountRequest> request);
  CreateDBClusterResponse createDBClusterWithOptions(shared_ptr<CreateDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBClusterResponse createDBCluster(shared_ptr<CreateDBClusterRequest> request);
  CreateDBResourceGroupResponse createDBResourceGroupWithOptions(shared_ptr<CreateDBResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBResourceGroupResponse createDBResourceGroup(shared_ptr<CreateDBResourceGroupRequest> request);
  CreateElasticPlanResponse createElasticPlanWithOptions(shared_ptr<CreateElasticPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateElasticPlanResponse createElasticPlan(shared_ptr<CreateElasticPlanRequest> request);
  CreateOssSubDirectoryResponse createOssSubDirectoryWithOptions(shared_ptr<CreateOssSubDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOssSubDirectoryResponse createOssSubDirectory(shared_ptr<CreateOssSubDirectoryRequest> request);
  CreateSparkTemplateResponse createSparkTemplateWithOptions(shared_ptr<CreateSparkTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSparkTemplateResponse createSparkTemplate(shared_ptr<CreateSparkTemplateRequest> request);
  DeleteAccountResponse deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccountResponse deleteAccount(shared_ptr<DeleteAccountRequest> request);
  DeleteDBClusterResponse deleteDBClusterWithOptions(shared_ptr<DeleteDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBClusterResponse deleteDBCluster(shared_ptr<DeleteDBClusterRequest> request);
  DeleteDBResourceGroupResponse deleteDBResourceGroupWithOptions(shared_ptr<DeleteDBResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBResourceGroupResponse deleteDBResourceGroup(shared_ptr<DeleteDBResourceGroupRequest> request);
  DeleteElasticPlanResponse deleteElasticPlanWithOptions(shared_ptr<DeleteElasticPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteElasticPlanResponse deleteElasticPlan(shared_ptr<DeleteElasticPlanRequest> request);
  DeleteProcessInstanceResponse deleteProcessInstanceWithOptions(shared_ptr<DeleteProcessInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProcessInstanceResponse deleteProcessInstance(shared_ptr<DeleteProcessInstanceRequest> request);
  DeleteSparkTemplateResponse deleteSparkTemplateWithOptions(shared_ptr<DeleteSparkTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSparkTemplateResponse deleteSparkTemplate(shared_ptr<DeleteSparkTemplateRequest> request);
  DeleteSparkTemplateFileResponse deleteSparkTemplateFileWithOptions(shared_ptr<DeleteSparkTemplateFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSparkTemplateFileResponse deleteSparkTemplateFile(shared_ptr<DeleteSparkTemplateFileRequest> request);
  DescribeAccountAllPrivilegesResponse describeAccountAllPrivilegesWithOptions(shared_ptr<DescribeAccountAllPrivilegesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccountAllPrivilegesResponse describeAccountAllPrivileges(shared_ptr<DescribeAccountAllPrivilegesRequest> request);
  DescribeAccountPrivilegeObjectsResponse describeAccountPrivilegeObjectsWithOptions(shared_ptr<DescribeAccountPrivilegeObjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccountPrivilegeObjectsResponse describeAccountPrivilegeObjects(shared_ptr<DescribeAccountPrivilegeObjectsRequest> request);
  DescribeAccountPrivilegesResponse describeAccountPrivilegesWithOptions(shared_ptr<DescribeAccountPrivilegesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccountPrivilegesResponse describeAccountPrivileges(shared_ptr<DescribeAccountPrivilegesRequest> request);
  DescribeAccountsResponse describeAccountsWithOptions(shared_ptr<DescribeAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccountsResponse describeAccounts(shared_ptr<DescribeAccountsRequest> request);
  DescribeAdbMySqlColumnsResponse describeAdbMySqlColumnsWithOptions(shared_ptr<DescribeAdbMySqlColumnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAdbMySqlColumnsResponse describeAdbMySqlColumns(shared_ptr<DescribeAdbMySqlColumnsRequest> request);
  DescribeAdbMySqlSchemasResponse describeAdbMySqlSchemasWithOptions(shared_ptr<DescribeAdbMySqlSchemasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAdbMySqlSchemasResponse describeAdbMySqlSchemas(shared_ptr<DescribeAdbMySqlSchemasRequest> request);
  DescribeAdbMySqlTablesResponse describeAdbMySqlTablesWithOptions(shared_ptr<DescribeAdbMySqlTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAdbMySqlTablesResponse describeAdbMySqlTables(shared_ptr<DescribeAdbMySqlTablesRequest> request);
  DescribeAllDataSourceResponse describeAllDataSourceWithOptions(shared_ptr<DescribeAllDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAllDataSourceResponse describeAllDataSource(shared_ptr<DescribeAllDataSourceRequest> request);
  DescribeApsActionLogsResponse describeApsActionLogsWithOptions(shared_ptr<DescribeApsActionLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApsActionLogsResponse describeApsActionLogs(shared_ptr<DescribeApsActionLogsRequest> request);
  DescribeApsResourceGroupsResponse describeApsResourceGroupsWithOptions(shared_ptr<DescribeApsResourceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApsResourceGroupsResponse describeApsResourceGroups(shared_ptr<DescribeApsResourceGroupsRequest> request);
  DescribeAuditLogRecordsResponse describeAuditLogRecordsWithOptions(shared_ptr<DescribeAuditLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAuditLogRecordsResponse describeAuditLogRecords(shared_ptr<DescribeAuditLogRecordsRequest> request);
  DescribeClusterAccessWhiteListResponse describeClusterAccessWhiteListWithOptions(shared_ptr<DescribeClusterAccessWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterAccessWhiteListResponse describeClusterAccessWhiteList(shared_ptr<DescribeClusterAccessWhiteListRequest> request);
  DescribeClusterNetInfoResponse describeClusterNetInfoWithOptions(shared_ptr<DescribeClusterNetInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterNetInfoResponse describeClusterNetInfo(shared_ptr<DescribeClusterNetInfoRequest> request);
  DescribeColumnsResponse describeColumnsWithOptions(shared_ptr<DescribeColumnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeColumnsResponse describeColumns(shared_ptr<DescribeColumnsRequest> request);
  DescribeDBClusterAttributeResponse describeDBClusterAttributeWithOptions(shared_ptr<DescribeDBClusterAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterAttributeResponse describeDBClusterAttribute(shared_ptr<DescribeDBClusterAttributeRequest> request);
  DescribeDBClusterHealthStatusResponse describeDBClusterHealthStatusWithOptions(shared_ptr<DescribeDBClusterHealthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterHealthStatusResponse describeDBClusterHealthStatus(shared_ptr<DescribeDBClusterHealthStatusRequest> request);
  DescribeDBClusterPerformanceResponse describeDBClusterPerformanceWithOptions(shared_ptr<DescribeDBClusterPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterPerformanceResponse describeDBClusterPerformance(shared_ptr<DescribeDBClusterPerformanceRequest> request);
  DescribeDBClusterStatusResponse describeDBClusterStatusWithOptions(shared_ptr<DescribeDBClusterStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterStatusResponse describeDBClusterStatus(shared_ptr<DescribeDBClusterStatusRequest> request);
  DescribeDBClustersResponse describeDBClustersWithOptions(shared_ptr<DescribeDBClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClustersResponse describeDBClusters(shared_ptr<DescribeDBClustersRequest> request);
  DescribeDBResourceGroupResponse describeDBResourceGroupWithOptions(shared_ptr<DescribeDBResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBResourceGroupResponse describeDBResourceGroup(shared_ptr<DescribeDBResourceGroupRequest> request);
  DescribeDiagnosisDimensionsResponse describeDiagnosisDimensionsWithOptions(shared_ptr<DescribeDiagnosisDimensionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDiagnosisDimensionsResponse describeDiagnosisDimensions(shared_ptr<DescribeDiagnosisDimensionsRequest> request);
  DescribeDiagnosisRecordsResponse describeDiagnosisRecordsWithOptions(shared_ptr<DescribeDiagnosisRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDiagnosisRecordsResponse describeDiagnosisRecords(shared_ptr<DescribeDiagnosisRecordsRequest> request);
  DescribeDiagnosisSQLInfoResponse describeDiagnosisSQLInfoWithOptions(shared_ptr<DescribeDiagnosisSQLInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDiagnosisSQLInfoResponse describeDiagnosisSQLInfo(shared_ptr<DescribeDiagnosisSQLInfoRequest> request);
  DescribeDownloadRecordsResponse describeDownloadRecordsWithOptions(shared_ptr<DescribeDownloadRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDownloadRecordsResponse describeDownloadRecords(shared_ptr<DescribeDownloadRecordsRequest> request);
  DescribeElasticPlanAttributeResponse describeElasticPlanAttributeWithOptions(shared_ptr<DescribeElasticPlanAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeElasticPlanAttributeResponse describeElasticPlanAttribute(shared_ptr<DescribeElasticPlanAttributeRequest> request);
  DescribeElasticPlanJobsResponse describeElasticPlanJobsWithOptions(shared_ptr<DescribeElasticPlanJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeElasticPlanJobsResponse describeElasticPlanJobs(shared_ptr<DescribeElasticPlanJobsRequest> request);
  DescribeElasticPlanSpecificationsResponse describeElasticPlanSpecificationsWithOptions(shared_ptr<DescribeElasticPlanSpecificationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeElasticPlanSpecificationsResponse describeElasticPlanSpecifications(shared_ptr<DescribeElasticPlanSpecificationsRequest> request);
  DescribeElasticPlansResponse describeElasticPlansWithOptions(shared_ptr<DescribeElasticPlansRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeElasticPlansResponse describeElasticPlans(shared_ptr<DescribeElasticPlansRequest> request);
  DescribeEnabledPrivilegesResponse describeEnabledPrivilegesWithOptions(shared_ptr<DescribeEnabledPrivilegesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEnabledPrivilegesResponse describeEnabledPrivileges(shared_ptr<DescribeEnabledPrivilegesRequest> request);
  DescribePatternPerformanceResponse describePatternPerformanceWithOptions(shared_ptr<DescribePatternPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePatternPerformanceResponse describePatternPerformance(shared_ptr<DescribePatternPerformanceRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeSQLPatternsResponse describeSQLPatternsWithOptions(shared_ptr<DescribeSQLPatternsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSQLPatternsResponse describeSQLPatterns(shared_ptr<DescribeSQLPatternsRequest> request);
  DescribeSchemasResponse describeSchemasWithOptions(shared_ptr<DescribeSchemasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSchemasResponse describeSchemas(shared_ptr<DescribeSchemasRequest> request);
  DescribeSparkCodeLogResponse describeSparkCodeLogWithOptions(shared_ptr<DescribeSparkCodeLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSparkCodeLogResponse describeSparkCodeLog(shared_ptr<DescribeSparkCodeLogRequest> request);
  DescribeSparkCodeOutputResponse describeSparkCodeOutputWithOptions(shared_ptr<DescribeSparkCodeOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSparkCodeOutputResponse describeSparkCodeOutput(shared_ptr<DescribeSparkCodeOutputRequest> request);
  DescribeSparkCodeWebUiResponse describeSparkCodeWebUiWithOptions(shared_ptr<DescribeSparkCodeWebUiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSparkCodeWebUiResponse describeSparkCodeWebUi(shared_ptr<DescribeSparkCodeWebUiRequest> request);
  DescribeSqlPatternResponse describeSqlPatternWithOptions(shared_ptr<DescribeSqlPatternRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSqlPatternResponse describeSqlPattern(shared_ptr<DescribeSqlPatternRequest> request);
  DescribeTableAccessCountResponse describeTableAccessCountWithOptions(shared_ptr<DescribeTableAccessCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTableAccessCountResponse describeTableAccessCount(shared_ptr<DescribeTableAccessCountRequest> request);
  DescribeTablesResponse describeTablesWithOptions(shared_ptr<DescribeTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTablesResponse describeTables(shared_ptr<DescribeTablesRequest> request);
  DescribeUserQuotaResponse describeUserQuotaWithOptions(shared_ptr<DescribeUserQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserQuotaResponse describeUserQuota(shared_ptr<DescribeUserQuotaRequest> request);
  DetachUserENIResponse detachUserENIWithOptions(shared_ptr<DetachUserENIRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachUserENIResponse detachUserENI(shared_ptr<DetachUserENIRequest> request);
  DisableElasticPlanResponse disableElasticPlanWithOptions(shared_ptr<DisableElasticPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableElasticPlanResponse disableElasticPlan(shared_ptr<DisableElasticPlanRequest> request);
  DownloadDiagnosisRecordsResponse downloadDiagnosisRecordsWithOptions(shared_ptr<DownloadDiagnosisRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DownloadDiagnosisRecordsResponse downloadDiagnosisRecords(shared_ptr<DownloadDiagnosisRecordsRequest> request);
  EnableElasticPlanResponse enableElasticPlanWithOptions(shared_ptr<EnableElasticPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableElasticPlanResponse enableElasticPlan(shared_ptr<EnableElasticPlanRequest> request);
  ExistRunningSQLEngineResponse existRunningSQLEngineWithOptions(shared_ptr<ExistRunningSQLEngineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExistRunningSQLEngineResponse existRunningSQLEngine(shared_ptr<ExistRunningSQLEngineRequest> request);
  GetDatabaseObjectsResponse getDatabaseObjectsWithOptions(shared_ptr<GetDatabaseObjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDatabaseObjectsResponse getDatabaseObjects(shared_ptr<GetDatabaseObjectsRequest> request);
  GetSparkAppAttemptLogResponse getSparkAppAttemptLogWithOptions(shared_ptr<GetSparkAppAttemptLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSparkAppAttemptLogResponse getSparkAppAttemptLog(shared_ptr<GetSparkAppAttemptLogRequest> request);
  GetSparkAppInfoResponse getSparkAppInfoWithOptions(shared_ptr<GetSparkAppInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSparkAppInfoResponse getSparkAppInfo(shared_ptr<GetSparkAppInfoRequest> request);
  GetSparkAppLogResponse getSparkAppLogWithOptions(shared_ptr<GetSparkAppLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSparkAppLogResponse getSparkAppLog(shared_ptr<GetSparkAppLogRequest> request);
  GetSparkAppMetricsResponse getSparkAppMetricsWithOptions(shared_ptr<GetSparkAppMetricsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSparkAppMetricsResponse getSparkAppMetrics(shared_ptr<GetSparkAppMetricsRequest> request);
  GetSparkAppStateResponse getSparkAppStateWithOptions(shared_ptr<GetSparkAppStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSparkAppStateResponse getSparkAppState(shared_ptr<GetSparkAppStateRequest> request);
  GetSparkAppWebUiAddressResponse getSparkAppWebUiAddressWithOptions(shared_ptr<GetSparkAppWebUiAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSparkAppWebUiAddressResponse getSparkAppWebUiAddress(shared_ptr<GetSparkAppWebUiAddressRequest> request);
  GetSparkConfigLogPathResponse getSparkConfigLogPathWithOptions(shared_ptr<GetSparkConfigLogPathRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSparkConfigLogPathResponse getSparkConfigLogPath(shared_ptr<GetSparkConfigLogPathRequest> request);
  GetSparkDefinitionsResponse getSparkDefinitionsWithOptions(shared_ptr<GetSparkDefinitionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSparkDefinitionsResponse getSparkDefinitions(shared_ptr<GetSparkDefinitionsRequest> request);
  GetSparkLogAnalyzeTaskResponse getSparkLogAnalyzeTaskWithOptions(shared_ptr<GetSparkLogAnalyzeTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSparkLogAnalyzeTaskResponse getSparkLogAnalyzeTask(shared_ptr<GetSparkLogAnalyzeTaskRequest> request);
  GetSparkSQLEngineStateResponse getSparkSQLEngineStateWithOptions(shared_ptr<GetSparkSQLEngineStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSparkSQLEngineStateResponse getSparkSQLEngineState(shared_ptr<GetSparkSQLEngineStateRequest> request);
  GetSparkTemplateFileContentResponse getSparkTemplateFileContentWithOptions(shared_ptr<GetSparkTemplateFileContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSparkTemplateFileContentResponse getSparkTemplateFileContent(shared_ptr<GetSparkTemplateFileContentRequest> request);
  GetSparkTemplateFolderTreeResponse getSparkTemplateFolderTreeWithOptions(shared_ptr<GetSparkTemplateFolderTreeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSparkTemplateFolderTreeResponse getSparkTemplateFolderTree(shared_ptr<GetSparkTemplateFolderTreeRequest> request);
  GetSparkTemplateFullTreeResponse getSparkTemplateFullTreeWithOptions(shared_ptr<GetSparkTemplateFullTreeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSparkTemplateFullTreeResponse getSparkTemplateFullTree(shared_ptr<GetSparkTemplateFullTreeRequest> request);
  GetTableResponse getTableWithOptions(shared_ptr<GetTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTableResponse getTable(shared_ptr<GetTableRequest> request);
  GetTableColumnsResponse getTableColumnsWithOptions(shared_ptr<GetTableColumnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTableColumnsResponse getTableColumns(shared_ptr<GetTableColumnsRequest> request);
  GetTableDDLResponse getTableDDLWithOptions(shared_ptr<GetTableDDLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTableDDLResponse getTableDDL(shared_ptr<GetTableDDLRequest> request);
  GetTableObjectsResponse getTableObjectsWithOptions(shared_ptr<GetTableObjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTableObjectsResponse getTableObjects(shared_ptr<GetTableObjectsRequest> request);
  GetViewDDLResponse getViewDDLWithOptions(shared_ptr<GetViewDDLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetViewDDLResponse getViewDDL(shared_ptr<GetViewDDLRequest> request);
  GetViewObjectsResponse getViewObjectsWithOptions(shared_ptr<GetViewObjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetViewObjectsResponse getViewObjects(shared_ptr<GetViewObjectsRequest> request);
  KillSparkAppResponse killSparkAppWithOptions(shared_ptr<KillSparkAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  KillSparkAppResponse killSparkApp(shared_ptr<KillSparkAppRequest> request);
  KillSparkLogAnalyzeTaskResponse killSparkLogAnalyzeTaskWithOptions(shared_ptr<KillSparkLogAnalyzeTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  KillSparkLogAnalyzeTaskResponse killSparkLogAnalyzeTask(shared_ptr<KillSparkLogAnalyzeTaskRequest> request);
  KillSparkSQLEngineResponse killSparkSQLEngineWithOptions(shared_ptr<KillSparkSQLEngineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  KillSparkSQLEngineResponse killSparkSQLEngine(shared_ptr<KillSparkSQLEngineRequest> request);
  ListSparkAppAttemptsResponse listSparkAppAttemptsWithOptions(shared_ptr<ListSparkAppAttemptsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSparkAppAttemptsResponse listSparkAppAttempts(shared_ptr<ListSparkAppAttemptsRequest> request);
  ListSparkAppsResponse listSparkAppsWithOptions(shared_ptr<ListSparkAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSparkAppsResponse listSparkApps(shared_ptr<ListSparkAppsRequest> request);
  ListSparkLogAnalyzeTasksResponse listSparkLogAnalyzeTasksWithOptions(shared_ptr<ListSparkLogAnalyzeTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSparkLogAnalyzeTasksResponse listSparkLogAnalyzeTasks(shared_ptr<ListSparkLogAnalyzeTasksRequest> request);
  ListSparkTemplateFileIdsResponse listSparkTemplateFileIdsWithOptions(shared_ptr<ListSparkTemplateFileIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSparkTemplateFileIdsResponse listSparkTemplateFileIds(shared_ptr<ListSparkTemplateFileIdsRequest> request);
  ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccountDescriptionResponse modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request);
  ModifyAccountPrivilegesResponse modifyAccountPrivilegesWithOptions(shared_ptr<ModifyAccountPrivilegesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccountPrivilegesResponse modifyAccountPrivileges(shared_ptr<ModifyAccountPrivilegesRequest> request);
  ModifyAuditLogConfigResponse modifyAuditLogConfigWithOptions(shared_ptr<ModifyAuditLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAuditLogConfigResponse modifyAuditLogConfig(shared_ptr<ModifyAuditLogConfigRequest> request);
  ModifyClusterAccessWhiteListResponse modifyClusterAccessWhiteListWithOptions(shared_ptr<ModifyClusterAccessWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyClusterAccessWhiteListResponse modifyClusterAccessWhiteList(shared_ptr<ModifyClusterAccessWhiteListRequest> request);
  ModifyClusterConnectionStringResponse modifyClusterConnectionStringWithOptions(shared_ptr<ModifyClusterConnectionStringRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyClusterConnectionStringResponse modifyClusterConnectionString(shared_ptr<ModifyClusterConnectionStringRequest> request);
  ModifyDBClusterResponse modifyDBClusterWithOptions(shared_ptr<ModifyDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterResponse modifyDBCluster(shared_ptr<ModifyDBClusterRequest> request);
  ModifyDBClusterDescriptionResponse modifyDBClusterDescriptionWithOptions(shared_ptr<ModifyDBClusterDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterDescriptionResponse modifyDBClusterDescription(shared_ptr<ModifyDBClusterDescriptionRequest> request);
  ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTimeWithOptions(shared_ptr<ModifyDBClusterMaintainTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTime(shared_ptr<ModifyDBClusterMaintainTimeRequest> request);
  ModifyDBResourceGroupResponse modifyDBResourceGroupWithOptions(shared_ptr<ModifyDBResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBResourceGroupResponse modifyDBResourceGroup(shared_ptr<ModifyDBResourceGroupRequest> request);
  ModifyElasticPlanResponse modifyElasticPlanWithOptions(shared_ptr<ModifyElasticPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyElasticPlanResponse modifyElasticPlan(shared_ptr<ModifyElasticPlanRequest> request);
  PreloadSparkAppMetricsResponse preloadSparkAppMetricsWithOptions(shared_ptr<PreloadSparkAppMetricsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PreloadSparkAppMetricsResponse preloadSparkAppMetrics(shared_ptr<PreloadSparkAppMetricsRequest> request);
  ReleaseClusterPublicConnectionResponse releaseClusterPublicConnectionWithOptions(shared_ptr<ReleaseClusterPublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseClusterPublicConnectionResponse releaseClusterPublicConnection(shared_ptr<ReleaseClusterPublicConnectionRequest> request);
  RenameSparkTemplateFileResponse renameSparkTemplateFileWithOptions(shared_ptr<RenameSparkTemplateFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenameSparkTemplateFileResponse renameSparkTemplateFile(shared_ptr<RenameSparkTemplateFileRequest> request);
  ResetAccountPasswordResponse resetAccountPasswordWithOptions(shared_ptr<ResetAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetAccountPasswordResponse resetAccountPassword(shared_ptr<ResetAccountPasswordRequest> request);
  SetSparkAppLogRootPathResponse setSparkAppLogRootPathWithOptions(shared_ptr<SetSparkAppLogRootPathRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetSparkAppLogRootPathResponse setSparkAppLogRootPath(shared_ptr<SetSparkAppLogRootPathRequest> request);
  StartSparkSQLEngineResponse startSparkSQLEngineWithOptions(shared_ptr<StartSparkSQLEngineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartSparkSQLEngineResponse startSparkSQLEngine(shared_ptr<StartSparkSQLEngineRequest> request);
  SubmitSparkAppResponse submitSparkAppWithOptions(shared_ptr<SubmitSparkAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitSparkAppResponse submitSparkApp(shared_ptr<SubmitSparkAppRequest> request);
  SubmitSparkLogAnalyzeTaskResponse submitSparkLogAnalyzeTaskWithOptions(shared_ptr<SubmitSparkLogAnalyzeTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitSparkLogAnalyzeTaskResponse submitSparkLogAnalyzeTask(shared_ptr<SubmitSparkLogAnalyzeTaskRequest> request);
  UnbindAccountResponse unbindAccountWithOptions(shared_ptr<UnbindAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindAccountResponse unbindAccount(shared_ptr<UnbindAccountRequest> request);
  UnbindDBResourceGroupWithUserResponse unbindDBResourceGroupWithUserWithOptions(shared_ptr<UnbindDBResourceGroupWithUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindDBResourceGroupWithUserResponse unbindDBResourceGroupWithUser(shared_ptr<UnbindDBResourceGroupWithUserRequest> request);
  UpdateSparkTemplateFileResponse updateSparkTemplateFileWithOptions(shared_ptr<UpdateSparkTemplateFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSparkTemplateFileResponse updateSparkTemplateFile(shared_ptr<UpdateSparkTemplateFileRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Adb20211201

#endif
