//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface CMStack : NSObject
{
    NSMutableArray *_objects;
}

@property(readonly, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (id)peek;
- (id)pop;
- (void)push:(id)arg1;
- (id)init;

@end

