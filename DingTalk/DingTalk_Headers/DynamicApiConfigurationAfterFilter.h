//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AfterFilter-Protocol.h"

@class NSString;

@interface DynamicApiConfigurationAfterFilter : NSObject <AfterFilter>
{
}

- (void)resolveApiDynamicConfiguration:(id)arg1;
- (void)handle:(id)arg1 response:(id)arg2 result:(id)arg3;
- (id)getName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

