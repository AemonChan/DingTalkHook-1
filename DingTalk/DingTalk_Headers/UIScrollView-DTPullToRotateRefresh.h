//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSNumber;

@interface UIScrollView (DTPullToRotateRefresh)
@property(retain, nonatomic) NSNumber *dtPullToRefreshIsLeft;
@property(retain, nonatomic) NSNumber *dtPullToRefreshIsSetup;
- (void)setDtPullToRefreshGenerator:(id)arg1;
- (void)setDtPullToRefreshLastState:(id)arg1;
- (void)setDtPullToRefreshDisplayLink:(id)arg1;
- (void)setDtPullToRefreshAnimationView:(id)arg1;
- (void)setDtPullToRefreshTitleLabel:(id)arg1;
- (id)dtPullToRefreshGenerator;
- (id)dtPullToRefreshLastState;
- (id)dtPullToRefreshDisplayLink;
- (id)dtPullToRefreshAnimationView;
- (id)dtPullToRefreshTitleLabel;
- (void)updateLoadingAnimation:(id)arg1;
- (void)handleLoadingAnimation;
- (void)handlePullDownWithOffset:(struct CGPoint)arg1;
- (void)dtPullToRefresh_didScroll:(struct CGPoint)arg1;
- (void)dt_removeRefeshView;
- (void)dt_setAnimationViewHidden:(_Bool)arg1;
- (void)dt_stopRotateAnimatingWithAnimate:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (void)dt_stopRotateAnimatingWithAnimate:(_Bool)arg1;
- (void)dt_configRotateRefreshWithAnimation:(id)arg1 actionHandler:(CDUnknownBlockType)arg2 stateChangeHandler:(CDUnknownBlockType)arg3;
- (void)dt_addRotateRefreshWithPrepare:(CDUnknownBlockType)arg1 actionHandler:(CDUnknownBlockType)arg2 stateChangeHandler:(CDUnknownBlockType)arg3;
- (void)dt_addRotateRefreshWithPrepare:(CDUnknownBlockType)arg1 actionHandler:(CDUnknownBlockType)arg2;
- (void)dt_triggerRotatePullToRefresh;
@end

