//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIDocumentInteractionController;

@interface DTCMailFileAttachmentPreviewer : NSObject
{
    UIDocumentInteractionController *_docInteraction;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UIDocumentInteractionController *docInteraction; // @synthesize docInteraction=_docInteraction;
- (void).cxx_destruct;
- (void)openInOtherApp:(id)arg1 fromViewController:(id)arg2;
- (void)openByAttachmentVC:(id)arg1 mailID:(id)arg2 fromViewController:(id)arg3 withDelegate:(id)arg4;
- (void)viewFileAttachment:(id)arg1 mailId:(id)arg2 fromViewController:(id)arg3 withRouteDelegate:(id)arg4;

@end

