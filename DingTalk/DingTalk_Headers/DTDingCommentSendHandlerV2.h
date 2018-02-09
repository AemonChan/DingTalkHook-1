//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTDingCommentHandler.h"

@interface DTDingCommentSendHandlerV2 : DTDingCommentHandler
{
    _Bool _isSending;
}

@property(nonatomic) _Bool isSending; // @synthesize isSending=_isSending;
- (_Bool)isAlreadyInDatasource:(id)arg1;
- (id)generalAttachment:(id)arg1;
- (void)uploadImageWithPath:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)startUploadWithImageData:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)startUploadWithImage:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)sendDingComment:(id)arg1;
- (void)sendAttachmentExtra:(id)arg1;
- (void)sendImageWithPath:(id)arg1 originalImage:(id)arg2 imageSize:(long long)arg3 orientation:(long long)arg4;
- (void)sendImageData:(id)arg1 imageSize:(unsigned long long)arg2;
- (void)sendImage:(id)arg1 isOriginal:(_Bool)arg2;
- (void)sendTextMessage:(id)arg1 resend:(_Bool)arg2;

@end
