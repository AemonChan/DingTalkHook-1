//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCell.h"

@class DTLabelContainer, DTLabelGroupCellItem, UIImageView, UILabel;

@interface DTLabelGroupCell : DTBaseCell
{
    DTLabelGroupCellItem *_cellItem;
    UILabel *_titleLable;
    DTLabelContainer *_labelContainer;
    UIImageView *_indicator;
}

@property(retain, nonatomic) UIImageView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) DTLabelContainer *labelContainer; // @synthesize labelContainer=_labelContainer;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) DTLabelGroupCellItem *cellItem; // @synthesize cellItem=_cellItem;
- (void).cxx_destruct;
- (void)layoutSubViewsForCell;
- (void)configCellWithItem:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end
