//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface DTSystemGestureMonitor : NSObject
{
    NSArray *_backupGestureWrappers;
}

+ (void)restoreSystemGestureRecognizers;
+ (void)disableSystemGestureRecognizersFromView:(id)arg1;
+ (id)findUpperGestureRecognizerFromView:(id)arg1;
+ (id)sharedSystemGestureMonitor;
- (void).cxx_destruct;
- (void)restore;
- (void)store:(id)arg1;

@end

