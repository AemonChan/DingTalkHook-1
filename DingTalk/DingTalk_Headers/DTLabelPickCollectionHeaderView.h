//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UIImageView, UILabel;

@interface DTLabelPickCollectionHeaderView : UICollectionReusableView
{
    UIImageView *_topLine;
    UIImageView *_imageView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *topLine; // @synthesize topLine=_topLine;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configWithLabelGroup:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

