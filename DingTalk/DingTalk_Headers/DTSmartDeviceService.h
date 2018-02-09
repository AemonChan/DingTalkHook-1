//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTSmartDeviceServiceProtocol-Protocol.h"

@class DTSmartCorpDevicePersistenceIMP, DTSmartDeviceNearInfo, DTSmartDeviceNetworkIMP, DTSmartDevicePersistenceIMP, NSCache, NSString;

@interface DTSmartDeviceService : NSObject <DTSmartDeviceServiceProtocol>
{
    _Bool _isSyncing;
    DTSmartDeviceNetworkIMP *_networkIMP;
    DTSmartDevicePersistenceIMP *_devicePersistenceIMP;
    DTSmartCorpDevicePersistenceIMP *_corpDevicePersistenceIMP;
    NSCache *_deviceCacheMap;
    DTSmartDeviceNearInfo *_nearInfo;
    double _lastSyncDeviceInfoListTime;
    long long _lastUid;
}

+ (id)createServiceIMP;
+ (id)defaultServiceIMP;
@property(nonatomic) long long lastUid; // @synthesize lastUid=_lastUid;
@property(nonatomic) double lastSyncDeviceInfoListTime; // @synthesize lastSyncDeviceInfoListTime=_lastSyncDeviceInfoListTime;
@property(nonatomic) _Bool isSyncing; // @synthesize isSyncing=_isSyncing;
@property(retain, nonatomic) DTSmartDeviceNearInfo *nearInfo; // @synthesize nearInfo=_nearInfo;
@property(retain, nonatomic) NSCache *deviceCacheMap; // @synthesize deviceCacheMap=_deviceCacheMap;
@property(retain, nonatomic) DTSmartCorpDevicePersistenceIMP *corpDevicePersistenceIMP; // @synthesize corpDevicePersistenceIMP=_corpDevicePersistenceIMP;
@property(retain, nonatomic) DTSmartDevicePersistenceIMP *devicePersistenceIMP; // @synthesize devicePersistenceIMP=_devicePersistenceIMP;
@property(retain, nonatomic) DTSmartDeviceNetworkIMP *networkIMP; // @synthesize networkIMP=_networkIMP;
- (void).cxx_destruct;
- (void)startSyncDeviceInfoList;
- (void)onSignLogout:(id)arg1;
- (void)onSignLoggedIn:(id)arg1;
- (id)convertAtmInfoModel2CorpDeviceModel:(id)arg1;
- (id)batchConvertAtmInfoModelList:(id)arg1;
- (_Bool)saveBatchSmartDeviceInfo:(id)arg1;
- (_Bool)saveBatchAtmInfoModel:(id)arg1;
- (_Bool)overwriteBatchAtmInfoModels:(id)arg1;
- (unsigned long long)deviceCount;
- (id)loadAllDevices;
- (id)loadDevicesByDeviceUids:(id)arg1;
- (id)loadDevicesByCorpIds:(id)arg1;
- (id)loadCorpDevice:(id)arg1 devId:(id)arg2;
- (void)getDeviceEndorsement:(id)arg1 devTypeCode:(id)arg2 devId:(id)arg3 major:(id)arg4 minor:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (_Bool)updateSmartDeviceInfo:(id)arg1 deviceUid:(id)arg2 devId:(id)arg3 devServiceId:(id)arg4;
- (void)getDeviceSecret:(id)arg1 devId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)getDeviceLiteAppUrl:(id)arg1 deviceId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)unbindDevice:(id)arg1 deviceType:(id)arg2 sn:(id)arg3 deviceUid:(id)arg4 finishBlock:(CDUnknownBlockType)arg5;
- (void)bindWithSettingDeviceModel:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (id)getDeviceInfo:(id)arg1 deviceId:(id)arg2 devTypeCode:(id)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (void)getApTerminalInfo:(long long)arg1 uid:(long long)arg2 callback:(CDUnknownBlockType)arg3;
- (void)callRemote:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)loadLastSyncListTime;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
