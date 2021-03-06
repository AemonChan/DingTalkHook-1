//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTShareMegCardDelegate-Protocol.h"

@class NSArray, NSString;

@interface DTConversationPicker : NSObject <DTShareMegCardDelegate>
{
    unsigned long long _pickerType;
    NSArray *_selectedConversations;
    NSString *_inputNotes;
    _Bool _isMultiSelect;
    NSString *_bizType;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _completeBlock;
    NSString *_sendText;
    NSArray *_atOpenIds;
}

+ (id)xpnModelInConversation:(id)arg1;
+ (void)delaySendExtraTextMessage:(id)arg1 toConversations:(id)arg2;
+ (void)initPickerPool;
+ (void)presentPickerAndSendText:(id)arg1 openIds:(id)arg2 bizType:(id)arg3 cancelBlock:(CDUnknownBlockType)arg4 completeBlock:(CDUnknownBlockType)arg5;
+ (void)presentPickerWithCancelBlock:(CDUnknownBlockType)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)dismissVC;
- (void)sendShareInfoToConversation:(id)arg1;
- (void)presentShareCardView;
- (void)dismissLoadingInView:(id)arg1;
- (void)showLoadingInView:(id)arg1 message:(id)arg2 delay:(double)arg3;
- (void)batchCreateConversations:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkConversations:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlePickedConversations:(id)arg1 keys:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handlePickedContacts:(id)arg1 keys:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handlePickedContactInfo:(id)arg1 contactKeys:(id)arg2 conversationInfo:(id)arg3 conversationKeys:(id)arg4;
- (void)presentMutablePickerInContainer:(id)arg1;
- (void)presentSinglePickerInContainer:(id)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

