//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AMapSearchAPI, NSString;
@protocol AMapSearchDelegate;

@protocol DTLocationSearchServiceProtocol <NSObject>
@property(nonatomic) __weak id <AMapSearchDelegate> delegate;
@property(readonly, nonatomic) AMapSearchAPI *aMapSearchAPI;
@property(nonatomic) _Bool disableForeign;
- (void)searchPOIsWithKeywords:(NSString *)arg1 city:(NSString *)arg2 cityLimit:(long long)arg3 offset:(unsigned long long)arg4 page:(unsigned long long)arg5 rLatitude:(double)arg6 rLongitude:(double)arg7;
- (void)searchPOIsWithLatitude:(double)arg1 longitude:(double)arg2 keywords:(NSString *)arg3 radius:(double)arg4 offset:(unsigned long long)arg5 page:(unsigned long long)arg6;
- (void)searchReGoecodeWithLatitude:(double)arg1 longitude:(double)arg2;
@end
