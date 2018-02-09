//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTDingLinkModel, NSDictionary, NSNumber, NSString;

@interface DTDingAttachmentModel : Marshal
{
    _Bool _isCSpaceCopy;
    NSNumber *_type;
    NSString *_mediaId;
    NSNumber *_duration;
    NSNumber *_size;
    NSString *_fileName;
    NSString *_detailType;
    NSDictionary *_extension;
    DTDingLinkModel *_linkContent;
    NSNumber *_modelTypeInTopic;
    NSString *_fileSpaceId;
    NSString *_authMediaId;
    NSString *_authCode;
}

@property(copy, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(copy, nonatomic) NSString *authMediaId; // @synthesize authMediaId=_authMediaId;
@property(nonatomic) _Bool isCSpaceCopy; // @synthesize isCSpaceCopy=_isCSpaceCopy;
@property(copy, nonatomic) NSString *fileSpaceId; // @synthesize fileSpaceId=_fileSpaceId;
@property(retain, nonatomic) NSNumber *modelTypeInTopic; // @synthesize modelTypeInTopic=_modelTypeInTopic;
@property(retain, nonatomic) DTDingLinkModel *linkContent; // @synthesize linkContent=_linkContent;
@property(copy, nonatomic) NSDictionary *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSString *detailType; // @synthesize detailType=_detailType;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
