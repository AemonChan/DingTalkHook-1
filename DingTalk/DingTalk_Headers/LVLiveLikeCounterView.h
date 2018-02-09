//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UILabel;

@interface LVLiveLikeCounterView : UIView
{
    UIView *_likeBackView;
    UILabel *_likeCountLabel;
    long long _currentLikeCounter;
    CAGradientLayer *_gradient;
}

@property(retain, nonatomic) CAGradientLayer *gradient; // @synthesize gradient=_gradient;
@property(nonatomic) long long currentLikeCounter; // @synthesize currentLikeCounter=_currentLikeCounter;
@property(retain, nonatomic) UILabel *likeCountLabel; // @synthesize likeCountLabel=_likeCountLabel;
@property(retain, nonatomic) UIView *likeBackView; // @synthesize likeBackView=_likeBackView;
- (void).cxx_destruct;
- (void)increaseLikeCounter;
- (id)formatLikeCount:(long long)arg1;
- (void)showLikeCount;
- (void)setHost;
- (void)refreshWithData:(id)arg1;
- (void)updateLayoutConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
