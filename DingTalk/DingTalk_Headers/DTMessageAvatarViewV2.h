//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTAvatarImageView, DTMessagesAvatarViewItem;
@protocol DTMessageAvatarViewDelegate;

@interface DTMessageAvatarViewV2 : UIView
{
    id <DTMessageAvatarViewDelegate> _delegate;
    DTMessagesAvatarViewItem *_item;
    DTAvatarImageView *_avatarImageView;
}

@property(retain, nonatomic) DTAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) DTMessagesAvatarViewItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <DTMessageAvatarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)contactUpdateNotification:(id)arg1;
- (void)configWithItem:(id)arg1;
- (void)showWithAvatarModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)longPress:(id)arg1;
- (void)tap;
- (void)configureAvatarView;
- (void)dealloc;

@end
