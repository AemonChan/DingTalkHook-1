//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, YYThreadSafeDictionary;
@protocol DTSmartBleFilterHandlerDelegate;

@interface DTSmartBleFilterHandler : NSObject
{
    _Bool _isStarted;
    long long _bleDevType;
    id <DTSmartBleFilterHandlerDelegate> _delegate;
    YYThreadSafeDictionary *_entityModelDic;
    NSMutableArray *_bleFilterBlocks;
    double _lastRefreshTime;
}

@property(nonatomic) double lastRefreshTime; // @synthesize lastRefreshTime=_lastRefreshTime;
@property(retain, nonatomic) NSMutableArray *bleFilterBlocks; // @synthesize bleFilterBlocks=_bleFilterBlocks;
@property(retain, nonatomic) YYThreadSafeDictionary *entityModelDic; // @synthesize entityModelDic=_entityModelDic;
@property _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(nonatomic) __weak id <DTSmartBleFilterHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long bleDevType; // @synthesize bleDevType=_bleDevType;
- (void).cxx_destruct;
- (void)_refreshExpiredSignalIfNeed;
- (void)didRemoveBleSignalNtf:(id)arg1;
- (void)didDiscoverBleSignalNtf:(id)arg1;
- (_Bool)doFilter:(id)arg1;
- (void)stopListen;
- (id)listenKey;
- (void)startListen;
- (id)bleDevTypeString;
- (void)removeBleFilterBlock:(CDUnknownBlockType)arg1;
- (void)addBleFilterBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
