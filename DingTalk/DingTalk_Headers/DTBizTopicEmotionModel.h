//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTBizTopicEmotionModel : NSObject
{
    long long _emotionId;
    long long _topicId;
    long long _sort;
    NSString *_source;
    NSString *_authMediaId;
    NSString *_authMediaCode;
    NSString *_mediaId;
    NSString *_name;
}

+ (id)buildWithIDLModel:(id)arg1;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(copy, nonatomic) NSString *authMediaCode; // @synthesize authMediaCode=_authMediaCode;
@property(copy, nonatomic) NSString *authMediaId; // @synthesize authMediaId=_authMediaId;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) long long sort; // @synthesize sort=_sort;
@property(nonatomic) long long topicId; // @synthesize topicId=_topicId;
@property(nonatomic) long long emotionId; // @synthesize emotionId=_emotionId;
- (void).cxx_destruct;

@end
