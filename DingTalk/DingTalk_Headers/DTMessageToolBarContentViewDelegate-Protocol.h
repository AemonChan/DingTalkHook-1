//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTMessageToolBarAudioViewDelegate-Protocol.h"
#import "DTMessageToolBarCamaraViewDelegate-Protocol.h"
#import "DTMessageToolBarFaceViewDelegate-Protocol.h"

@class DTLongPressGestureRecognizer, DTMessageToolBarContentView, NSDictionary, NSString;

@protocol DTMessageToolBarContentViewDelegate <DTMessageToolBarAudioViewDelegate, DTMessageToolBarCamaraViewDelegate, DTMessageToolBarFaceViewDelegate>

@optional
- (void)didApplyChangeInputMode;
- (void)didLongPressQuickLikeButton:(DTLongPressGestureRecognizer *)arg1;
- (void)didTapQuickLikeButton;
- (void)didPressedSwitchButtonOnToolBarContentView:(DTMessageToolBarContentView *)arg1;
- (void)toolBarContentViewSendText:(NSString *)arg1;
- (void)messageToolBar:(DTMessageToolBarContentView *)arg1 userAction:(unsigned long long)arg2 userInfo:(NSDictionary *)arg3;
@end
