//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSMutableArray;

@interface DTPhotoTableViewCell : UITableViewCell
{
    NSArray *_items;
    unsigned long long _maxColumn;
    CDUnknownBlockType _tapAction;
    NSMutableArray *_imageViewArray;
}

+ (double)cellHeight:(unsigned long long)arg1 lastRow:(_Bool)arg2;
@property(retain, nonatomic) NSMutableArray *imageViewArray; // @synthesize imageViewArray=_imageViewArray;
@property(copy, nonatomic) CDUnknownBlockType tapAction; // @synthesize tapAction=_tapAction;
@property(nonatomic) unsigned long long maxColumn; // @synthesize maxColumn=_maxColumn;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)cellDoubleTapped:(id)arg1;
- (void)cellTapped:(id)arg1;
- (void)configImageView:(id)arg1 item:(id)arg2;
- (void)setItems:(id)arg1 tapAction:(CDUnknownBlockType)arg2 withMaxcolumn:(unsigned long long)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
