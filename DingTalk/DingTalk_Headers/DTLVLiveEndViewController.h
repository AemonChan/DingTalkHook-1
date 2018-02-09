//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "LVPlayLiveEndViewDelegate-Protocol.h"
#import "LVStreamLiveEndViewDelegate-Protocol.h"

@class DTLVLiveEndView, DTLVLiveEndViewParam, DTLVPlayLiveEndView, NSString, UIImage, UIImageView, UIView;

@interface DTLVLiveEndViewController : DTViewController <LVStreamLiveEndViewDelegate, LVPlayLiveEndViewDelegate>
{
    _Bool _reservedNavBarHidden;
    DTLVLiveEndViewParam *_param;
    UIImageView *_bgView;
    DTLVLiveEndView *_liveEndInfoView;
    DTLVPlayLiveEndView *_playLiveEndView;
    UIView *_infoView;
    UIImage *_reservedNavBarBgImg;
    long long _reservedStatusBarStyle;
}

@property(nonatomic) long long reservedStatusBarStyle; // @synthesize reservedStatusBarStyle=_reservedStatusBarStyle;
@property(nonatomic) _Bool reservedNavBarHidden; // @synthesize reservedNavBarHidden=_reservedNavBarHidden;
@property(retain, nonatomic) UIImage *reservedNavBarBgImg; // @synthesize reservedNavBarBgImg=_reservedNavBarBgImg;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) DTLVPlayLiveEndView *playLiveEndView; // @synthesize playLiveEndView=_playLiveEndView;
@property(retain, nonatomic) DTLVLiveEndView *liveEndInfoView; // @synthesize liveEndInfoView=_liveEndInfoView;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) DTLVLiveEndViewParam *param; // @synthesize param=_param;
- (void).cxx_destruct;
- (void)replayBtnClick;
- (void)detailBtnClick;
- (void)backBtnClick;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)recoverGlobalUIStatusAnimated:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
