//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTVideoSeekingView, UIButton;

@interface DTMoviePlayerFooterView : UIView
{
    _Bool _isPlaying;
    _Bool _hasPlayPauseControl;
    UIButton *_playPauseButton;
    DTVideoSeekingView *_seekingView;
    CDUnknownBlockType _applyChangePlaying;
    UIView *_maskingView;
}

@property(retain, nonatomic) UIView *maskingView; // @synthesize maskingView=_maskingView;
@property(copy, nonatomic) CDUnknownBlockType applyChangePlaying; // @synthesize applyChangePlaying=_applyChangePlaying;
@property(nonatomic) _Bool hasPlayPauseControl; // @synthesize hasPlayPauseControl=_hasPlayPauseControl;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) DTVideoSeekingView *seekingView; // @synthesize seekingView=_seekingView;
@property(retain, nonatomic) UIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
- (void).cxx_destruct;
- (void)didPlayAction:(id)arg1;
- (void)updatePlayButtonImage;
- (void)layoutSubviews;
- (void)setPlayPauseButtonVisible:(_Bool)arg1;
- (void)setupFooterView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
