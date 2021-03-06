//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WKAttachment.h"

@class NSArray, NSData, NSDictionary, NSString;

@interface WKAttachmentAudio : WKAttachment
{
    _Bool _isStream;
    NSString *_mediaId;
    long long _duration;
    NSArray *_volumns;
    NSString *_audioAuthMediaId;
    NSString *_audioAuthCode;
    NSDictionary *_extension;
    NSString *_audioUrl;
    NSData *_data;
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *audioUrl; // @synthesize audioUrl=_audioUrl;
@property(retain, nonatomic) NSDictionary *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSString *audioAuthCode; // @synthesize audioAuthCode=_audioAuthCode;
@property(copy, nonatomic) NSString *audioAuthMediaId; // @synthesize audioAuthMediaId=_audioAuthMediaId;
@property(nonatomic) _Bool isStream; // @synthesize isStream=_isStream;
@property(retain, nonatomic) NSArray *volumns; // @synthesize volumns=_volumns;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

