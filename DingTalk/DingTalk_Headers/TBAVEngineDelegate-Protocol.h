//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol TBAVEngineDelegate <NSObject>
- (void)liveStateChanged:(long long)arg1;

@optional
- (void)networkStateChanged:(long long)arg1;
- (void)rtmpStatusChanged:(int)arg1 withData:(unsigned long long)arg2;
- (void)encodeStatusChanged:(int)arg1 withData:(unsigned long long)arg2;
- (void)captureStatusChanged:(int)arg1 withData:(unsigned long long)arg2;
@end

