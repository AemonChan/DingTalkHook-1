//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTBizTopicEmotionModel, LWEmotionView, UITouch;

@protocol LWEmotionViewDelegate <NSObject>

@optional
- (void)emotionGIFSearchButtonPressed;
- (void)emotionFavoriteAddPressedEmotionView;
- (void)emotionSettingButtonPressedEmotionView;
- (void)emotionSearchButtonPressedEmotionView;
- (void)emotionAddButtonPressedEmotionView;
- (void)emotionSendButtonPressedEmotionView:(LWEmotionView *)arg1;
- (void)emotionDeleteButtonPressed;
- (void)emotionDidHighlighted:(long long)arg1 emotionView:(LWEmotionView *)arg2 touch:(UITouch *)arg3;
- (void)emotionDidPicked:(long long)arg1 emotionView:(LWEmotionView *)arg2;
- (void)emotionGIFStickerStoreDidOpen;
- (void)emotionGIFStickerDidPicked:(DTBizTopicEmotionModel *)arg1;
@end

