//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTAlphaDataServiceProtocol-Protocol.h"

@class NSMutableSet, NSString, OpenMDHandler;

@interface DTAlphaDataServiceIMP : NSObject <DTAlphaDataServiceProtocol>
{
    NSMutableSet *_meshResultBlockSet;
    OpenMDHandler *_alphaHandler;
}

@property(retain, nonatomic) OpenMDHandler *alphaHandler; // @synthesize alphaHandler=_alphaHandler;
@property(retain, nonatomic) NSMutableSet *meshResultBlockSet; // @synthesize meshResultBlockSet=_meshResultBlockSet;
- (void).cxx_destruct;
- (void)removeObserverAlphaBlock:(CDUnknownBlockType)arg1;
- (void)addObserverAlphaNetworkResultBlock:(CDUnknownBlockType)arg1;
- (void)receiveMeshReulst:(id)arg1;
- (_Bool)deleteAllAlphaInfos;
- (_Bool)deleteAlphaInfoModel:(id)arg1;
- (id)loadAlphaInfosWithCorpId:(id)arg1;
- (_Bool)saveAlphaInfoModel:(id)arg1;
- (void)cleanUp;
- (void)deleteAlphaPWDWithCorpId:(id)arg1;
- (void)updateAlphaPWD:(id)arg1 corpId:(id)arg2;
- (id)getAlphaPwdWithCorpId:(id)arg1;
- (id)getAllSsids;
- (id)getAllSsidInfos;
- (id)getSsids:(id)arg1;
- (id)getSsidInfos:(id)arg1;
- (void)deleteSSIDArray:(id)arg1 corpId:(id)arg2;
- (void)deleteSSID:(id)arg1 corpId:(id)arg2;
- (void)updateSSID:(id)arg1 oldSSID:(id)arg2 corpId:(id)arg3;
- (void)addSSIDArray:(id)arg1 corpId:(id)arg2 pwd:(id)arg3;
- (void)addSSID:(id)arg1 corpId:(id)arg2 pwd:(id)arg3;
- (void)updatePskModel:(id)arg1 corpId:(id)arg2;
- (void)updateModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
