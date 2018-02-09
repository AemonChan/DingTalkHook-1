//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "JSONCollectionType-Protocol.h"

@class NSString;

@interface DTConferenceHistoryJsonModel : NSObject <JSONCollectionType>
{
    NSString *_callType;
    NSString *_recordId;
    NSString *_callerId;
    NSString *_beginTime;
    NSString *_lastTime;
    NSString *_status;
    NSString *_targetNicks;
    NSString *_targetUids;
    NSString *_targetNumber;
    NSString *_targetTitle;
    NSString *_sessionId;
    NSString *_dingId;
    NSString *_orgId;
    NSString *_callerNumber;
    NSString *_isCallerFixline;
    NSString *_isExternal;
    NSString *_isColleague;
    NSString *_dingSIMCard;
    NSString *_avatarMediaId;
}

@property(copy, nonatomic) NSString *avatarMediaId; // @synthesize avatarMediaId=_avatarMediaId;
@property(copy, nonatomic) NSString *dingSIMCard; // @synthesize dingSIMCard=_dingSIMCard;
@property(copy, nonatomic) NSString *isColleague; // @synthesize isColleague=_isColleague;
@property(copy, nonatomic) NSString *isExternal; // @synthesize isExternal=_isExternal;
@property(copy, nonatomic) NSString *isCallerFixline; // @synthesize isCallerFixline=_isCallerFixline;
@property(copy, nonatomic) NSString *callerNumber; // @synthesize callerNumber=_callerNumber;
@property(copy, nonatomic) NSString *orgId; // @synthesize orgId=_orgId;
@property(copy, nonatomic) NSString *dingId; // @synthesize dingId=_dingId;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *targetTitle; // @synthesize targetTitle=_targetTitle;
@property(copy, nonatomic) NSString *targetNumber; // @synthesize targetNumber=_targetNumber;
@property(copy, nonatomic) NSString *targetUids; // @synthesize targetUids=_targetUids;
@property(copy, nonatomic) NSString *targetNicks; // @synthesize targetNicks=_targetNicks;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *lastTime; // @synthesize lastTime=_lastTime;
@property(copy, nonatomic) NSString *beginTime; // @synthesize beginTime=_beginTime;
@property(copy, nonatomic) NSString *callerId; // @synthesize callerId=_callerId;
@property(copy, nonatomic) NSString *recordId; // @synthesize recordId=_recordId;
@property(copy, nonatomic) NSString *callType; // @synthesize callType=_callType;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
