//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTConferenceWindowServiceProtocol-Protocol.h"

@class DTBusinessConferenceViewController, NSString, UIButton, UIWindow;

@interface DTConferenceWindowServiceIMP : NSObject <DTConferenceWindowServiceProtocol>
{
    _Bool _hasInit;
    _Bool _hasInitVideoConference;
    UIWindow *_conferenceWindow;
    DTBusinessConferenceViewController *_conferenceVC;
    UIButton *_conferenceBtn;
    UIButton *_videoConferenceBtn;
    double _keyboardHeight;
    UIWindow *_window;
}

@property(nonatomic) __weak UIWindow *window; // @synthesize window=_window;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) UIButton *videoConferenceBtn; // @synthesize videoConferenceBtn=_videoConferenceBtn;
@property(retain, nonatomic) UIButton *conferenceBtn; // @synthesize conferenceBtn=_conferenceBtn;
@property(nonatomic) _Bool hasInitVideoConference; // @synthesize hasInitVideoConference=_hasInitVideoConference;
@property(nonatomic) _Bool hasInit; // @synthesize hasInit=_hasInit;
@property(retain, nonatomic) DTBusinessConferenceViewController *conferenceVC; // @synthesize conferenceVC=_conferenceVC;
@property(retain, nonatomic) UIWindow *conferenceWindow; // @synthesize conferenceWindow=_conferenceWindow;
- (void).cxx_destruct;
- (void)rearrangeConferenceBtnWithKeyboardChange:(id)arg1;
- (void)pan:(id)arg1;
- (void)enterVideoConference;
- (void)enterConferenceView;
- (void)exitConferenceView;
- (void)languageChanged:(id)arg1;
- (void)onNetworkStatusChanged:(id)arg1;
- (void)conferenceInComing:(id)arg1;
- (void)showVideoWindow:(_Bool)arg1;
- (void)startDetectCellPhoneNet;
- (_Bool)shouldShowWarnAlert;
- (void)stopConferenceWindowService;
- (void)becomeActive;
- (void)startConferenceWindowService;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)hide:(CDUnknownBlockType)arg1;
- (void)hideAll:(CDUnknownBlockType)arg1;
- (void)show:(unsigned long long)arg1 from:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hideVideoConference:(CDUnknownBlockType)arg1;
- (void)showVideoConference:(CDUnknownBlockType)arg1;
- (void)setupVideoConference;
- (void)setup;
- (void)unloadNotifications;
- (void)loadNotifications;
- (void)loadData;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

