//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class NSString;

@interface DTBizDentryOperationModel : OpenModel <OpenModelProtocol>
{
    _Bool _isEncrypt;
    _Bool _priority;
    long long _operationId;
    NSString *_fileId;
    long long _orgId;
    NSString *_name;
    NSString *_path;
    long long _spaceId;
    long long _type;
    long long _length;
    long long _createTime;
    long long _modifyTime;
    NSString *_contentType;
    long long _operationTime;
    long long _categoryId;
    long long _appId;
}

+ (unsigned long long)currentNewestVersion;
+ (_Bool)upgradeTableToVersion:(unsigned long long)arg1 MDHandler:(id)arg2;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
+ (id)convertFromIDL:(id)arg1;
@property(nonatomic) _Bool priority; // @synthesize priority=_priority;
@property(nonatomic) long long appId; // @synthesize appId=_appId;
@property(nonatomic) _Bool isEncrypt; // @synthesize isEncrypt=_isEncrypt;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
@property(nonatomic) long long operationTime; // @synthesize operationTime=_operationTime;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long modifyTime; // @synthesize modifyTime=_modifyTime;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long length; // @synthesize length=_length;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long spaceId; // @synthesize spaceId=_spaceId;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
@property(copy, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(nonatomic) long long operationId; // @synthesize operationId=_operationId;
- (void).cxx_destruct;
- (_Bool)isImageCanPreview;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

