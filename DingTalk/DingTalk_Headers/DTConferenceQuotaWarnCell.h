//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class DTConferenceQuotaWarnModel, UIButton, UIImageView, UILabel;
@protocol DTConferenceQuotaWarnDelegate;

@interface DTConferenceQuotaWarnCell : UITableViewCell
{
    id <DTConferenceQuotaWarnDelegate> _delegate;
    DTConferenceQuotaWarnModel *_quotaWarnModel;
    UILabel *_warnInfoLabel;
    UIImageView *_warnIcon;
    UIButton *_closeBtn;
}

@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIImageView *warnIcon; // @synthesize warnIcon=_warnIcon;
@property(retain, nonatomic) UILabel *warnInfoLabel; // @synthesize warnInfoLabel=_warnInfoLabel;
@property(retain, nonatomic) DTConferenceQuotaWarnModel *quotaWarnModel; // @synthesize quotaWarnModel=_quotaWarnModel;
@property(nonatomic) __weak id <DTConferenceQuotaWarnDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)refreshContentWithModel:(id)arg1;
- (void)warnCloseBtnPressed:(id)arg1;
- (void)loadCompoment;
- (id)init;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
