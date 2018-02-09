//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTOrgPermissionModel, NSArray, NSNumber, NSString;

@interface DTOrgNodeItemModelList : Marshal
{
    _Bool _hasMore;
    NSArray *_values;
    NSNumber *_totalCount;
    NSNumber *_offset;
    NSNumber *_size;
    NSNumber *_orgId;
    DTOrgPermissionModel *_permission;
    NSNumber *_nextCursor;
    NSString *_logMap;
}

@property(copy, nonatomic) NSString *logMap; // @synthesize logMap=_logMap;
@property(retain, nonatomic) NSNumber *nextCursor; // @synthesize nextCursor=_nextCursor;
@property(retain, nonatomic) DTOrgPermissionModel *permission; // @synthesize permission=_permission;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSNumber *orgId; // @synthesize orgId=_orgId;
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSNumber *totalCount; // @synthesize totalCount=_totalCount;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
