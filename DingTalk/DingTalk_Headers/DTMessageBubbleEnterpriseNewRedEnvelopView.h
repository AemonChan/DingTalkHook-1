//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTImageView, UIImageView, UILabel;

@interface DTMessageBubbleEnterpriseNewRedEnvelopView : UIView
{
    UIImageView *_ribbonIcon;
    DTImageView *_logoIcon;
    UILabel *_congratsLabel;
    UILabel *_receiversLabel;
    UILabel *_footerLabel;
    UIView *_pickedCoverView;
}

+ (struct CGSize)sizeThatFitsWithCMode:(id)arg1 constraints:(struct CGSize)arg2;
@property(retain, nonatomic) UIView *pickedCoverView; // @synthesize pickedCoverView=_pickedCoverView;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UILabel *receiversLabel; // @synthesize receiversLabel=_receiversLabel;
@property(retain, nonatomic) UILabel *congratsLabel; // @synthesize congratsLabel=_congratsLabel;
@property(retain, nonatomic) DTImageView *logoIcon; // @synthesize logoIcon=_logoIcon;
@property(retain, nonatomic) UIImageView *ribbonIcon; // @synthesize ribbonIcon=_ribbonIcon;
- (void).cxx_destruct;
- (void)refrushUIWithMode:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
