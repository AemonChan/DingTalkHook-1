//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface DTMessageBubbleAttachmentMarkdownItem : NSObject
{
    NSString *_markdownString;
    NSString *_identifier;
    NSDictionary *_atList;
    NSDictionary *_authMediaMap;
    NSString *_cId;
    long long _mId;
}

+ (id)buildWithMessage:(id)arg1;
@property(nonatomic) long long mId; // @synthesize mId=_mId;
@property(copy, nonatomic) NSString *cId; // @synthesize cId=_cId;
@property(copy, nonatomic) NSDictionary *authMediaMap; // @synthesize authMediaMap=_authMediaMap;
@property(copy, nonatomic) NSDictionary *atList; // @synthesize atList=_atList;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *markdownString; // @synthesize markdownString=_markdownString;
- (void).cxx_destruct;

@end
