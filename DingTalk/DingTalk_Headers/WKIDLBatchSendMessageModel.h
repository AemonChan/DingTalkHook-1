//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSDictionary, NSNumber, NSString, WKIDLContentModel, WKIDLXpnPushModel;

@interface WKIDLBatchSendMessageModel : Marshal
{
    NSString *_uuid;
    NSNumber *_type;
    NSNumber *_creatorType;
    WKIDLContentModel *_content;
    NSNumber *_tag;
    NSDictionary *_extension;
    NSString *_nickName;
    WKIDLXpnPushModel *_xpnModel;
}

@property(retain, nonatomic) WKIDLXpnPushModel *xpnModel; // @synthesize xpnModel=_xpnModel;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSDictionary *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSNumber *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) WKIDLContentModel *content; // @synthesize content=_content;
@property(retain, nonatomic) NSNumber *creatorType; // @synthesize creatorType=_creatorType;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
