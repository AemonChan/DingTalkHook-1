//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTMessageBubbleAttachmentCView.h"

@class DTSwitchButton, NSMutableArray, UIImageView, UILabel;

@interface DTMessageBubbleAttachmentCOAView : DTMessageBubbleAttachmentCView
{
    NSMutableArray *_formLabels;
    UILabel *_richLabel;
    UIImageView *_bgImageView;
    DTSwitchButton *_readButton;
}

+ (double)calculateFooterHeightWithCMode:(id)arg1 actionModel:(id)arg2 constraints:(struct CGSize)arg3;
+ (struct CGSize)sizeThatFitsWithCMode:(id)arg1 actionModel:(id)arg2 constraints:(struct CGSize)arg3;
@property(retain, nonatomic) DTSwitchButton *readButton; // @synthesize readButton=_readButton;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UILabel *richLabel; // @synthesize richLabel=_richLabel;
@property(retain, nonatomic) NSMutableArray *formLabels; // @synthesize formLabels=_formLabels;
- (void).cxx_destruct;
- (id)formLabelAtIndex:(unsigned long long)arg1;
- (void)refrushFooterActionWithActionMode:(id)arg1 contentHeight:(double)arg2;
- (void)refrushUIWithCMode:(id)arg1 actionModel:(id)arg2;
- (double)refrushReadButton:(id)arg1 actionModel:(id)arg2 totalHeight:(double)arg3;
- (void)resetUIComponent:(_Bool)arg1;
- (double)refrushFormUIWithMode:(id)arg1 contentHeight:(double)arg2;
- (void)setBgImageWithActionModel:(id)arg1;

@end
