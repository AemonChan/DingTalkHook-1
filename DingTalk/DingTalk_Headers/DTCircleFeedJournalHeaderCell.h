//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTCircleFeedBaseCell.h"

@class DTAutoLayoutLabel, MASConstraint, UIImageView, UILabel;

@interface DTCircleFeedJournalHeaderCell : DTCircleFeedBaseCell
{
    UILabel *_journalTemplateNameLabel;
    DTAutoLayoutLabel *_journalTitleLabel;
    UILabel *_journalCreatedAtLabel;
    UIImageView *_iconImageView;
    UIImageView *_coverImageView;
    UIImageView *_backgroundImageView;
    MASConstraint *_wrapperBottomToCreatedAtLabelConstraint;
    MASConstraint *_wrapperBottomToCoverImageViewConstraint;
    MASConstraint *_journalTitleLabelTopConstraint;
    MASConstraint *_journalTitleLabelTopTemplateNameLabelConstraint;
}

@property(retain, nonatomic) MASConstraint *journalTitleLabelTopTemplateNameLabelConstraint; // @synthesize journalTitleLabelTopTemplateNameLabelConstraint=_journalTitleLabelTopTemplateNameLabelConstraint;
@property(retain, nonatomic) MASConstraint *journalTitleLabelTopConstraint; // @synthesize journalTitleLabelTopConstraint=_journalTitleLabelTopConstraint;
@property(retain, nonatomic) MASConstraint *wrapperBottomToCoverImageViewConstraint; // @synthesize wrapperBottomToCoverImageViewConstraint=_wrapperBottomToCoverImageViewConstraint;
@property(retain, nonatomic) MASConstraint *wrapperBottomToCreatedAtLabelConstraint; // @synthesize wrapperBottomToCreatedAtLabelConstraint=_wrapperBottomToCreatedAtLabelConstraint;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *journalCreatedAtLabel; // @synthesize journalCreatedAtLabel=_journalCreatedAtLabel;
@property(retain, nonatomic) DTAutoLayoutLabel *journalTitleLabel; // @synthesize journalTitleLabel=_journalTitleLabel;
@property(retain, nonatomic) UILabel *journalTemplateNameLabel; // @synthesize journalTemplateNameLabel=_journalTemplateNameLabel;
- (void).cxx_destruct;
- (void)setCellInfo:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
