//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCellItem.h"

@class NSString, UIImage;

@interface DTPickTimeCellItem : DTBaseCellItem
{
    NSString *_leftTitle;
    NSString *_leftSubTitle;
    NSString *_leftContentTitle;
    CDUnknownBlockType _leftDidSelectedBlock;
    CDUnknownBlockType _rightDidSelectedBlock;
    NSString *_rightTitle;
    NSString *_rightSubTitle;
    NSString *_rightContentTitle;
    UIImage *_middleImage;
}

@property(retain, nonatomic) UIImage *middleImage; // @synthesize middleImage=_middleImage;
@property(copy, nonatomic) NSString *rightContentTitle; // @synthesize rightContentTitle=_rightContentTitle;
@property(copy, nonatomic) NSString *rightSubTitle; // @synthesize rightSubTitle=_rightSubTitle;
@property(copy, nonatomic) NSString *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(copy, nonatomic) CDUnknownBlockType rightDidSelectedBlock; // @synthesize rightDidSelectedBlock=_rightDidSelectedBlock;
@property(copy, nonatomic) CDUnknownBlockType leftDidSelectedBlock; // @synthesize leftDidSelectedBlock=_leftDidSelectedBlock;
@property(copy, nonatomic) NSString *leftContentTitle; // @synthesize leftContentTitle=_leftContentTitle;
@property(copy, nonatomic) NSString *leftSubTitle; // @synthesize leftSubTitle=_leftSubTitle;
@property(copy, nonatomic) NSString *leftTitle; // @synthesize leftTitle=_leftTitle;
- (void).cxx_destruct;
- (id)reuseIdentifier;
- (id)cellForItem;
- (double)heightForCell;

@end
