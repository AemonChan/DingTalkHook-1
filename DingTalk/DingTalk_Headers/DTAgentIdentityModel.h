//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSString;

@interface DTAgentIdentityModel : Marshal
{
    NSString *_password;
    NSString *_oauthToken;
    NSString *_refreshToken;
    NSString *_clientId;
}

@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(copy, nonatomic) NSString *oauthToken; // @synthesize oauthToken=_oauthToken;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
