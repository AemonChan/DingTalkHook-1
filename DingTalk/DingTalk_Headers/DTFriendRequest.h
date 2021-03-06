//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTFriendRequest-Protocol.h"

@class DTContact, NSString;

@interface DTFriendRequest : NSObject <DTFriendRequest>
{
    _Bool _isShowMobile;
    long long _uid;
    DTContact *_contact;
    unsigned long long _status;
    unsigned long long _source;
    NSString *_remark;
    NSString *_mobile;
    NSString *_stateCode;
    NSString *_keyword;
    unsigned long long _mobileSource;
}

@property(nonatomic) unsigned long long mobileSource; // @synthesize mobileSource=_mobileSource;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) NSString *stateCode; // @synthesize stateCode=_stateCode;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(nonatomic) _Bool isShowMobile; // @synthesize isShowMobile=_isShowMobile;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) DTContact *contact; // @synthesize contact=_contact;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

