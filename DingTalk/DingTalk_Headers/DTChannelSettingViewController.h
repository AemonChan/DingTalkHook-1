//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTButton, UIButton, UIView;

@interface DTChannelSettingViewController : DTTableViewController
{
    long long _orgId;
    UIView *_tableViewFooterView;
    UIButton *_footerButton;
    DTButton *_inviteButton;
}

@property(retain, nonatomic) DTButton *inviteButton; // @synthesize inviteButton=_inviteButton;
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) UIView *tableViewFooterView; // @synthesize tableViewFooterView=_tableViewFooterView;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
- (void).cxx_destruct;
- (void)sendInvitationWithUids:(id)arg1;
- (void)openWhatsChannel;
- (void)openPersonListWithMode:(unsigned long long)arg1;
- (id)invitePageURL;
- (void)inviteWithH5Page;
- (void)inviteWithExternalContact;
- (void)inviteButtonPressed:(id)arg1;
- (void)previewChannelAction:(id)arg1;
- (void)popBack:(id)arg1;
- (void)configFollowedSectionHeader:(id)arg1;
- (void)updateSelfAddSeitchStatus:(_Bool)arg1 result:(CDUnknownBlockType)arg2;
- (void)querySelfAddSwitchStatus:(CDUnknownBlockType)arg1;
- (void)loadSettingSections;
- (void)loadComponents;
- (void)viewDidLoad;

@end

