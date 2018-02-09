//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage, UIView;

@interface DTActionMenuItem : NSObject
{
    CDUnknownBlockType _didTapBlock;
    NSString *_title;
    UIImage *_image;
    UIView *_customView;
    long long _tag;
}

+ (id)itemWithCustomView:(id)arg1;
+ (id)itemWithImage:(id)arg1 tapBlock:(CDUnknownBlockType)arg2;
+ (id)itemWithTitle:(id)arg1 tapBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType didTapBlock; // @synthesize didTapBlock=_didTapBlock;
- (void).cxx_destruct;
- (void)didTabActionButton:(id)arg1;
- (id)buttonWithTitle:(id)arg1 image:(id)arg2;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @dynamic highlighted;
@property(nonatomic, getter=isSelected) _Bool selected; // @dynamic selected;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @dynamic enabled;
- (_Bool)isControlCustomView;

@end
