//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface DTMutableActionView : UIView
{
    NSMutableArray *_itemViews;
}

@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)clickActionButton:(id)arg1;
- (id)itemBindedOnCtrl:(id)arg1;
- (void)bindUserInfo:(id)arg1 toCtrl:(id)arg2;
- (id)createTextButton:(id)arg1;
- (id)createTextLabel:(id)arg1;
- (id)createItem:(id)arg1;
- (void)layoutSubviews;
- (void)configWithItems:(id)arg1;
- (void)dealloc;

@end

