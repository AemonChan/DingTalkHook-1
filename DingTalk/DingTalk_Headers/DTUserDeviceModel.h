//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSString;

@interface DTUserDeviceModel : Marshal
{
    NSString *_wifiMac;
    NSString *_umidToken;
}

@property(copy, nonatomic) NSString *umidToken; // @synthesize umidToken=_umidToken;
@property(copy, nonatomic) NSString *wifiMac; // @synthesize wifiMac=_wifiMac;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

