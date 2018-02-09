//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

#import "LVLiveDetailProtocol-Protocol.h"

@class DTLiveInfoModel, DTLiveStatistics, NSString;

@interface DTLiveDetailModel : Marshal <LVLiveDetailProtocol>
{
    DTLiveInfoModel *_liveInfo;
    DTLiveStatistics *_statistics;
}

@property(retain, nonatomic) DTLiveStatistics *statistics; // @synthesize statistics=_statistics;
@property(retain, nonatomic) DTLiveInfoModel *liveInfo; // @synthesize liveInfo=_liveInfo;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
