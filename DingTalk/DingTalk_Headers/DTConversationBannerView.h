//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTConversationBannerBadgeView, UIImageView, UILabel;

@interface DTConversationBannerView : UIView
{
    CDUnknownBlockType _bannerViewTappedCallback;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    DTConversationBannerBadgeView *_badgeView;
    UIImageView *_rightImageView;
}

+ (double)bannerHeight;
@property(nonatomic) __weak UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(nonatomic) __weak DTConversationBannerBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) __weak UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType bannerViewTappedCallback; // @synthesize bannerViewTappedCallback=_bannerViewTappedCallback;
- (void).cxx_destruct;
- (void)startShakeAnimation;
- (void)bannerViewTapped;
- (void)reloadWithTitle:(id)arg1 iconURL:(id)arg2 subTitle:(id)arg3 badgeText:(id)arg4 backgroundImageURL:(id)arg5 colors:(id)arg6;
- (void)setupView;
- (void)awakeFromNib;

@end
