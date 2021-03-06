//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class NSArray, NSString;

@interface DTBizDentryCategoryModel : OpenModel <OpenModelProtocol>
{
    long long _categoryId;
    long long _groupId;
    NSString *_groupName;
    long long _orgId;
    long long _operatorId;
    NSString *_operatorName;
    long long _operation;
    long long _operationTime;
    long long _fileCount;
}

+ (unsigned long long)currentNewestVersion;
+ (_Bool)upgradeTableToVersion:(unsigned long long)arg1 MDHandler:(id)arg2;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
+ (id)convertFromIDL:(id)arg1;
@property(nonatomic) long long fileCount; // @synthesize fileCount=_fileCount;
@property(nonatomic) long long operationTime; // @synthesize operationTime=_operationTime;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
@property(copy, nonatomic) NSString *operatorName; // @synthesize operatorName=_operatorName;
@property(nonatomic) long long operatorId; // @synthesize operatorId=_operatorId;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;
@property(nonatomic) _Bool isCheckGroupName;
@property(nonatomic) long long lastFileCount;
@property(nonatomic) double cellHeight;
@property(retain, nonatomic) NSArray *fileList;
- (id)findAllImageTypeOperationsWithSelectedOperationModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

