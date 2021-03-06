//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTAvatarView, DTContactSectionHeaderModel, DTIconView, UIImageView, UILabel;

@interface DTContactSectionHeaderView : UIView
{
    UIView *_topLine;
    UIView *_bottomLine;
    DTAvatarView *_logoImageView;
    UILabel *_titleLabel;
    UIImageView *_safeImageView;
    UIImageView *_statusImageView;
    DTIconView *_rightIconView;
    DTIconView *_rightTitleView;
    DTContactSectionHeaderModel *_sectionModel;
}

@property(retain, nonatomic) DTContactSectionHeaderModel *sectionModel; // @synthesize sectionModel=_sectionModel;
@property(retain, nonatomic) DTIconView *rightTitleView; // @synthesize rightTitleView=_rightTitleView;
@property(retain, nonatomic) DTIconView *rightIconView; // @synthesize rightIconView=_rightIconView;
@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(retain, nonatomic) UIImageView *safeImageView; // @synthesize safeImageView=_safeImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DTAvatarView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
- (void).cxx_destruct;
- (void)didSectionSelected;
- (void)rightButtonPressed:(id)arg1;
- (void)configWithSectionModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

