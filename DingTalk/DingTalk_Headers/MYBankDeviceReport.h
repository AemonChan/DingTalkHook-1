//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MYBankDeviceReport : NSObject
{
}

+ (long long)getAssEnvBy:(int)arg1;
+ (id)getAccessSubtype;
+ (id)verifyStringNotnil:(id)arg1;
+ (void)reportDeviceInfo:(id)arg1 apdidToken:(id)arg2 staticData:(id)arg3 dynamicData:(id)arg4;
+ (void)getDeviceInfo:(id)arg1;
+ (void)initDeviceTokenWithEnvironment:(int)arg1 WithFinishBlock:(CDUnknownBlockType)arg2;
+ (id)apdidToken;
+ (id)umidToken;

@end
