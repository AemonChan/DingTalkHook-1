//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIButton, UIImageView, UILabel;

@interface DTSearchConditionHeaderView : UIControl
{
    UIImageView *_bottomLine;
    UIButton *_conditionIcon;
    UIButton *_conditionTitle;
    UILabel *_conditionDetailLabel;
    UIButton *_condictionFoldIndictor;
}

@property(retain, nonatomic) UIButton *condictionFoldIndictor; // @synthesize condictionFoldIndictor=_condictionFoldIndictor;
@property(retain, nonatomic) UILabel *conditionDetailLabel; // @synthesize conditionDetailLabel=_conditionDetailLabel;
@property(retain, nonatomic) UIButton *conditionTitle; // @synthesize conditionTitle=_conditionTitle;
@property(retain, nonatomic) UIButton *conditionIcon; // @synthesize conditionIcon=_conditionIcon;
@property(retain, nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)init;

@end
