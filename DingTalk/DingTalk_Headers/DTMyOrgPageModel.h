//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTMyOrgPageModel : Marshal
{
    _Bool _isAdmin;
    NSString *_corpId;
    NSString *_orgName;
    NSString *_logo;
    NSString *_url;
    NSNumber *_authLevel;
    NSString *_logoUrl;
    NSNumber *_orgId;
    NSString *_token;
}

@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSNumber *orgId; // @synthesize orgId=_orgId;
@property(copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(nonatomic) _Bool isAdmin; // @synthesize isAdmin=_isAdmin;
@property(retain, nonatomic) NSNumber *authLevel; // @synthesize authLevel=_authLevel;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *orgName; // @synthesize orgName=_orgName;
@property(copy, nonatomic) NSString *corpId; // @synthesize corpId=_corpId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

