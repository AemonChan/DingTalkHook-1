//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTCellItem.h"

@class NSArray;

@interface DTDingSelectedMemberItem : DTCellItem
{
    NSArray *_avatarModels;
}

+ (id)itemForDingSelectedMemberWithTitle:(id)arg1 comment:(id)arg2 avatars:(id)arg3 cellDidSelectedBlock:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) NSArray *avatarModels; // @synthesize avatarModels=_avatarModels;
- (void).cxx_destruct;
- (id)reuseIdentifier;
- (id)cellForItem;

@end
