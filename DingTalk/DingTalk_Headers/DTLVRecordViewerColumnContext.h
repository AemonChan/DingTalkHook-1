//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTColumnItemContext.h"

@class NSString;

@interface DTLVRecordViewerColumnContext : DTColumnItemContext
{
    long long _columnType;
    NSString *_cid;
    NSString *_liveUuid;
}

@property(copy, nonatomic) NSString *liveUuid; // @synthesize liveUuid=_liveUuid;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(nonatomic) long long columnType; // @synthesize columnType=_columnType;
- (void).cxx_destruct;
- (void)loadViewerInfos:(id)arg1 isMore:(_Bool)arg2;
- (void)requestWithCompletion:(CDUnknownBlockType)arg1 isMore:(_Bool)arg2;
- (id)init;

@end
