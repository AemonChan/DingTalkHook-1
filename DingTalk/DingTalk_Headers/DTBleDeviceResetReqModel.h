//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSData;

@interface DTBleDeviceResetReqModel : Marshal
{
    _Bool _enableEncrypt;
    long long _type;
    long long _cipherType;
    NSData *_ciphertext;
}

@property(copy, nonatomic) NSData *ciphertext; // @synthesize ciphertext=_ciphertext;
@property(nonatomic) long long cipherType; // @synthesize cipherType=_cipherType;
@property(nonatomic) _Bool enableEncrypt; // @synthesize enableEncrypt=_enableEncrypt;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
