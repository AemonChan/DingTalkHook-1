//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTDingDriveSelectableCell.h"

@class UIImageView, UILabel;

@interface DTDingDriveDepartmentCell : DTDingDriveSelectableCell
{
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UIImageView *_lockImageView;
}

@property(retain, nonatomic) UIImageView *lockImageView; // @synthesize lockImageView=_lockImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)configCellWithItem:(id)arg1;
- (void)addSubViewForCustomCell;

@end

