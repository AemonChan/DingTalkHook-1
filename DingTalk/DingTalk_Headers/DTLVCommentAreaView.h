//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DTLiveLikeButtonDelegate-Protocol.h"
#import "DTMessageToolBarFaceViewDelegate-Protocol.h"
#import "HPGrowingTextViewDelegate-Protocol.h"
#import "LVCommentAreaViewProtocol-Protocol.h"

@class DTLVCommentAreaTextView, DTLiveLikeButton, NSString;
@protocol LVCommentAreaViewDelegate;

@interface DTLVCommentAreaView : UIView <LVCommentAreaViewProtocol, HPGrowingTextViewDelegate, DTMessageToolBarFaceViewDelegate, DTLiveLikeButtonDelegate>
{
    NSString *_cid;
    id <LVCommentAreaViewDelegate> _lv_delegate;
    DTLVCommentAreaTextView *_inputView;
    DTLiveLikeButton *_likeButton;
}

@property(retain, nonatomic) DTLiveLikeButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) DTLVCommentAreaTextView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) __weak id <LVCommentAreaViewDelegate> lv_delegate; // @synthesize lv_delegate=_lv_delegate;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (void)likeButton:(id)arg1 sendModel:(id)arg2;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (_Bool)growingTextViewShouldBeginEditing:(id)arg1;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (void)lv_setReturnKeyType:(long long)arg1;
- (void)lv_setPlaceholder:(id)arg1;
- (_Bool)isFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

