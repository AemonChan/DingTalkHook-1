//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCell.h"

@class DTDingDetailCreateSubTasksCellItem, DTSwitchButton;

@interface DTDingDetailCreateSubTasksCell : DTBaseCell
{
    DTSwitchButton *_createSubTasksButton;
    DTDingDetailCreateSubTasksCellItem *_cellItem;
}

@property(retain, nonatomic) DTDingDetailCreateSubTasksCellItem *cellItem; // @synthesize cellItem=_cellItem;
@property(retain, nonatomic) DTSwitchButton *createSubTasksButton; // @synthesize createSubTasksButton=_createSubTasksButton;
- (void).cxx_destruct;
- (void)configCellWithItem:(id)arg1;
- (void)layoutSubViewsForCell;
- (id)initWithCellItem:(id)arg1;

@end
