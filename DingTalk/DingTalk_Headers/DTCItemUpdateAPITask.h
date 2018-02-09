//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPITask.h"

@class NSArray, NSMutableArray;

@interface DTCItemUpdateAPITask : BLBaseAPITask
{
    NSArray *_localChanges;
    NSMutableArray *_localChangesParams;
    long long _updateType;
}

@property(nonatomic) long long updateType; // @synthesize updateType=_updateType;
@property(retain, nonatomic) NSMutableArray *localChangesParams; // @synthesize localChangesParams=_localChangesParams;
@property(retain, nonatomic) NSArray *localChanges; // @synthesize localChanges=_localChanges;
- (void).cxx_destruct;
- (void)handleTargetObject:(id)arg1;
- (id)itemUpdateHandler;
- (void)handleSuccessResponse:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)process;
- (id)init;

@end
