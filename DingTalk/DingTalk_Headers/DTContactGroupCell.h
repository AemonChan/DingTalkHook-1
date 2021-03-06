//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactTableViewCell.h"

@class UIImageView;

@interface DTContactGroupCell : DTContactTableViewCell
{
    UIImageView *_topIconView;
    UIImageView *_safeIconView;
}

+ (double)calculateCellHeight:(id)arg1 cellWidth:(double)arg2;
+ (double)maxNameWidth;
@property(retain, nonatomic) UIImageView *safeIconView; // @synthesize safeIconView=_safeIconView;
@property(retain, nonatomic) UIImageView *topIconView; // @synthesize topIconView=_topIconView;
- (void).cxx_destruct;
- (void)userNameLabelTextDidChange:(id)arg1 change:(id)arg2;
- (void)configCellRightIconStyle:(id)arg1;
- (void)configCellWithContactItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithCellStyle:(unsigned long long)arg1 reuseIdentifier:(id)arg2;

@end

