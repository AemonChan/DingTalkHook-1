//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NSTimer, UIButton, UILabel;

@interface DTDentryAudioPlayView : UIView
{
    _Bool _isOrder;
    NSString *_audioFilePath;
    CDUnknownBlockType _playAudioFailedBlock;
    CDUnknownBlockType _playAudioFinishedBlock;
    UIButton *_playBtn;
    UILabel *_timeLabel;
    long long _status;
    NSTimer *_timer;
    double _totalDuration;
    double _currentDuration;
}

@property(nonatomic) double currentDuration; // @synthesize currentDuration=_currentDuration;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(nonatomic) _Bool isOrder; // @synthesize isOrder=_isOrder;
@property(copy, nonatomic) CDUnknownBlockType playAudioFinishedBlock; // @synthesize playAudioFinishedBlock=_playAudioFinishedBlock;
@property(copy, nonatomic) CDUnknownBlockType playAudioFailedBlock; // @synthesize playAudioFailedBlock=_playAudioFailedBlock;
@property(readonly, copy, nonatomic) NSString *audioFilePath; // @synthesize audioFilePath=_audioFilePath;
- (void).cxx_destruct;
- (void)updateTimeLabel;
- (void)updateTimeLabelWithDuration:(double)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)changeBtnTypeWith:(long long)arg1;
- (void)playBtnDidClicked:(id)arg1;
- (void)startPlayer;
- (void)loadSubviews;
- (void)resetPlayer:(id)arg1;
- (id)initWithAudioFilePath:(id)arg1;
- (void)didMoveToSuperview;
- (void)stopPlayer;
- (void)dealloc;

@end
