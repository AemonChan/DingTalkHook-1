//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class NSArray, NSString, UIButton, UILabel, UIView, YYLabel;

@interface DTFeatureGuideController : DTTableViewController
{
    YYLabel *_titleLabel;
    UIView *_footerView;
    UIButton *_tryButton;
    UILabel *_bottomTipLabel;
    NSString *_headerTitle;
    NSArray *_tipItems;
    NSString *_startTitle;
    NSString *_bottomTip;
    CDUnknownBlockType _startClicked;
    UIView *_effectBackgroundView;
}

@property(retain, nonatomic) UIView *effectBackgroundView; // @synthesize effectBackgroundView=_effectBackgroundView;
@property(copy, nonatomic) CDUnknownBlockType startClicked; // @synthesize startClicked=_startClicked;
@property(copy, nonatomic) NSString *bottomTip; // @synthesize bottomTip=_bottomTip;
@property(copy, nonatomic) NSString *startTitle; // @synthesize startTitle=_startTitle;
@property(copy, nonatomic) NSArray *tipItems; // @synthesize tipItems=_tipItems;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (void)showInViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillLayoutSubviews;
- (void)layoutContentView;
- (void)onStartClick:(id)arg1;
- (void)setupFooterView;
- (id)cellItemWithImage:(id)arg1 title:(id)arg2 subTitle:(id)arg3;
- (void)setupTableDataSource;
- (void)updateScrollEnabled;
- (double)displayContentWidth;
- (id)tableHeaderView;
- (void)setupBlurViewInView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) UIButton *startButton;

@end
