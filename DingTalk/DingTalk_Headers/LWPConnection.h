//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LWPStreamDelegate-Protocol.h"

@class LWPQueue, LWPStream, NSDate, NSMutableDictionary, NSString;
@protocol LWPConnectionDelegate;

@interface LWPConnection : NSObject <LWPStreamDelegate>
{
    LWPQueue *_workQueue;
    LWPStream *_stream;
    NSString *_authRequestMid;
    double _authStartTime;
    _Bool _isFirstMessage;
    int _connectFailCount;
    double _lastBrokenTime;
    double _reconnectSuspendTime;
    _Bool _isReuseConnected;
    int _status;
    int _priorityLevel;
    id <LWPConnectionDelegate> _delegate;
    unsigned long long _mode;
    long long _subMode;
    NSString *_connectionId;
    NSString *_uniqueSid;
    NSString *_serverUrl;
    NSString *_vhost;
    double _autoDisconnectTime;
    NSDate *_authedDate;
    double _lastRecvDataTime;
    double _lastSendDataTime;
    double _lastRecvBigDataTime;
    double _lastSendBigDataTime;
    double _receiveTryLaterTime;
    CDUnknownBlockType _authBlock;
    NSMutableDictionary *_reqMap;
}

@property(retain, nonatomic) NSMutableDictionary *reqMap; // @synthesize reqMap=_reqMap;
@property(copy, nonatomic) CDUnknownBlockType authBlock; // @synthesize authBlock=_authBlock;
@property(nonatomic) double receiveTryLaterTime; // @synthesize receiveTryLaterTime=_receiveTryLaterTime;
@property(nonatomic) double lastSendBigDataTime; // @synthesize lastSendBigDataTime=_lastSendBigDataTime;
@property(nonatomic) double lastRecvBigDataTime; // @synthesize lastRecvBigDataTime=_lastRecvBigDataTime;
@property(nonatomic) double lastSendDataTime; // @synthesize lastSendDataTime=_lastSendDataTime;
@property(nonatomic) double lastRecvDataTime; // @synthesize lastRecvDataTime=_lastRecvDataTime;
@property(nonatomic) _Bool isReuseConnected; // @synthesize isReuseConnected=_isReuseConnected;
@property(retain, nonatomic) NSDate *authedDate; // @synthesize authedDate=_authedDate;
@property(nonatomic) int priorityLevel; // @synthesize priorityLevel=_priorityLevel;
@property(nonatomic) double autoDisconnectTime; // @synthesize autoDisconnectTime=_autoDisconnectTime;
@property(copy, nonatomic) NSString *vhost; // @synthesize vhost=_vhost;
@property(copy, nonatomic) NSString *serverUrl; // @synthesize serverUrl=_serverUrl;
@property(copy, nonatomic) NSString *uniqueSid; // @synthesize uniqueSid=_uniqueSid;
@property(readonly, nonatomic) NSString *connectionId; // @synthesize connectionId=_connectionId;
@property int status; // @synthesize status=_status;
@property(nonatomic) long long subMode; // @synthesize subMode=_subMode;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <LWPConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)recordAuthTimeWithConnectType:(unsigned long long)arg1 error:(id)arg2;
- (void)recordConnectTime:(id)arg1 error:(id)arg2 connectType:(int)arg3;
- (id)connectReusltName:(int)arg1;
- (id)connectionType;
- (id)nameForMode:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isConnected;
- (double)getKeepAliveInterval;
- (void)lwpstreamDidSending:(id)arg1 message:(id)arg2 bytes:(int)arg3;
- (void)lwpstreamDidReceivedMessage:(id)arg1 message:(id)arg2;
- (void)lwpstreamDidReceived:(id)arg1 bytes:(int)arg2;
- (void)lwpstreamDidBroken:(id)arg1;
- (void)lwpstreamDidFailConnect:(id)arg1 error:(id)arg2;
- (void)lwpstream:(id)arg1 didUpdateSessionContext:(id)arg2;
- (void)lwpstreamDidConnected:(id)arg1 context:(id)arg2 sessionReuse:(_Bool)arg3;
- (void)lwpstream:(id)arg1 triggerHandshakeEvent:(int)arg2;
- (void)enterAuthStatus;
- (void)resetConnection;
- (void)_processTimeout;
- (void)autoDisconnectIfNeed;
- (void)process;
- (void)handleAuthResponse:(id)arg1 error:(id)arg2;
- (void)updateTryLaterTime;
- (void)sendAuthWithToken:(id)arg1 header:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)outMsg:(id)arg1;
- (long long)runningReqCount;
- (_Bool)isBusy:(int *)arg1 unsentBuffSize:(long long *)arg2;
- (void)inMsg:(id)arg1;
- (long long)unsentBuffSize;
- (void)sendMessage:(id)arg1 message:(id)arg2;
- (void)willSendMessage:(id)arg1;
- (void)disconnect;
- (void)connect;
- (void)connectIfNeccessary;
- (void)_tryConnect;
- (void)reconnectIfNeccessary;
- (void)reconnectQuickly;
@property(readonly, copy) NSString *description;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

