//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOIPConferenceDatasource-Protocol.h"
#import "VOIPConferenceDelegate-Protocol.h"

@class DTConfVoipInfoExtensionModel, NSNumber, NSString;

@protocol DTSingleCallVoIPServiceProtocol <VOIPConferenceDelegate, VOIPConferenceDatasource>
@property(readonly, copy, nonatomic) NSString *currentCallId;
@property(readonly, nonatomic) unsigned long long currentState;
@property(readonly, nonatomic) _Bool voIPHandFree;
@property(nonatomic, getter=isVoIPConnect) _Bool voIPConnect;
@property(nonatomic, getter=isVoIPCalling) _Bool voipCalling;
@property(copy, nonatomic) CDUnknownBlockType voIPConferenceMemberStateHandle;
@property(copy, nonatomic) CDUnknownBlockType singleCallVoIPWarnHandle;
@property(copy, nonatomic) CDUnknownBlockType singleCallVoIPLowVolumeHandle;
@property(copy, nonatomic) CDUnknownBlockType singleCallVoIPDurationHandle;
@property(copy, nonatomic) CDUnknownBlockType singleCallVoIPEventHandle;
- (void)checkEndCallKitIfNeed;
- (void)checkDeviceMircoPhonePermissionWithBlock:(void (^)(_Bool))arg1;
- (_Bool)isVaildWithCallId:(NSString *)arg1;
- (void)bindCallKit;
- (void)startPlayOnPhoneAlert;
- (void)startPlayNotconnectedAlert;
- (void)startPlayBusyAlert;
- (void)startPlayHangupAlert;
- (void)stopPlayIncommingAlert;
- (void)startPlayIncommingAlert:(unsigned long long)arg1;
- (NSString *)getVoIPHangupCause:(NSString *)arg1;
- (void)receiveVoIPConference:(long long)arg1 model:(id)arg2;
- (void)pullVoIPConferenceMembersWithInfoModel:(DTConfVoipInfoExtensionModel *)arg1 successBlock:(void (^)(DTConfPullListModel *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)unMuteAllVoIPConferenceWithInfoModel:(DTConfVoipInfoExtensionModel *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)muteAllVoIPConferenceWithInfoModel:(DTConfVoipInfoExtensionModel *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)unMuteVoIPConferenceMember:(NSNumber *)arg1 infoModel:(DTConfVoipInfoExtensionModel *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)muteVoIPConferenceMember:(NSNumber *)arg1 infoModel:(DTConfVoipInfoExtensionModel *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)kickOutVoIPConferenceMember:(NSNumber *)arg1 infoModel:(DTConfVoipInfoExtensionModel *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)addVoIPConferenceMember:(NSNumber *)arg1 infoModel:(DTConfVoipInfoExtensionModel *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)handFree:(_Bool)arg1;
- (void)micMute:(_Bool)arg1;
- (void)receiveVoIPSignalCancel:(NSString *)arg1;
- (void)receiveVoIPSignalMsgFromAPN:(NSString *)arg1;
- (void)acceptVoIPCall:(NSString *)arg1 fromAPP:(_Bool)arg2;
- (void)stopVoIPCall:(NSString *)arg1 type:(long long)arg2 errorCode:(long long)arg3;
- (void)startVoIPCall:(NSString *)arg1 calleeName:(NSString *)arg2 voipUUid:(NSString *)arg3 toPSTN:(_Bool)arg4 fromPhone:(NSString *)arg5 toPhone:(NSString *)arg6 effectiveCallerId:(NSString *)arg7 userToUser:(NSString *)arg8 type:(long long)arg9 bizType:(unsigned long long)arg10 userToUserInfo:(DTConfVoipInfoExtensionModel *)arg11 checkMicroBlock:(void (^)(_Bool))arg12;
- (void)startVoIPCall:(NSString *)arg1 calleeName:(NSString *)arg2 voipUUid:(NSString *)arg3 toPSTN:(_Bool)arg4 fromPhone:(NSString *)arg5 toPhone:(NSString *)arg6 effectiveCallerId:(NSString *)arg7 userToUser:(NSString *)arg8 checkMicroBlock:(void (^)(_Bool))arg9;
- (void)startVoIPCall:(NSString *)arg1 voipUUid:(NSString *)arg2 toPSTN:(_Bool)arg3 fromPhone:(NSString *)arg4 toPhone:(NSString *)arg5 effectiveCallerId:(NSString *)arg6 userToUser:(NSString *)arg7 checkMicroBlock:(void (^)(_Bool))arg8;
- (void)enableRelayTester:(_Bool)arg1;
- (void)destoryVoIP;
- (void)setupVoIP;
@end
