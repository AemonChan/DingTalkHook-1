//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTMessageAlertMode : NSObject
{
    NSString *_title;
    NSString *_msg;
    NSString *_url;
}

+ (id)jsonStringWithMessageAlertModel:(id)arg1;
+ (id)buildWithJsonDict:(id)arg1;
+ (id)buildWithJsonString:(id)arg1;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
