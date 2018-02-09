//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DTRedEnvelopTransitionViewProtocol-Protocol.h"

@class DTAmountLabel, DTAvatarView, DTGoodTimeRedEnvelopTransitionViewItem, DTSegmentBorderLabel, UIButton, UIImageView, UILabel, UITapGestureRecognizer;

@interface DTGoodTimeRedEnvelopTransitionView : UIView <DTRedEnvelopTransitionViewProtocol>
{
    DTGoodTimeRedEnvelopTransitionViewItem *_item;
    UIImageView *_bgImageView;
    DTAvatarView *_avatarView;
    UILabel *_sourceNameLabel;
    UIButton *_startRemindButton;
    DTAmountLabel *_amountLabel;
    UILabel *_congratulationsLabel;
    DTSegmentBorderLabel *_predictionLabel;
    UIImageView *_pickCountdownImageView;
    DTSegmentBorderLabel *_pickCountdownLabel;
    UIButton *_packupButton;
    UIImageView *_packupArrow;
    UITapGestureRecognizer *_tapGesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIImageView *packupArrow; // @synthesize packupArrow=_packupArrow;
@property(retain, nonatomic) UIButton *packupButton; // @synthesize packupButton=_packupButton;
@property(retain, nonatomic) DTSegmentBorderLabel *pickCountdownLabel; // @synthesize pickCountdownLabel=_pickCountdownLabel;
@property(retain, nonatomic) UIImageView *pickCountdownImageView; // @synthesize pickCountdownImageView=_pickCountdownImageView;
@property(retain, nonatomic) DTSegmentBorderLabel *predictionLabel; // @synthesize predictionLabel=_predictionLabel;
@property(retain, nonatomic) UILabel *congratulationsLabel; // @synthesize congratulationsLabel=_congratulationsLabel;
@property(retain, nonatomic) DTAmountLabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UIButton *startRemindButton; // @synthesize startRemindButton=_startRemindButton;
@property(retain, nonatomic) UILabel *sourceNameLabel; // @synthesize sourceNameLabel=_sourceNameLabel;
@property(retain, nonatomic) DTAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) DTGoodTimeRedEnvelopTransitionViewItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)tap;
- (void)packup;
- (void)remind;
- (void)configWithItem:(id)arg1;
- (void)prepareForReuse;
- (void)refreshCountdown;
- (void)refreshPickCountdown;
- (void)refreshReadyCountdown;
- (void)updateCountDownNotification:(id)arg1;
- (void)addObservers;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
