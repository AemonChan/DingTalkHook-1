//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBRestSendService : NSObject
{
}

+ (id)shareInstance;
- (id)sendLogWithUrl:(id)arg1 PageName:(id)arg2 eventId:(int)arg3 arg1:(id)arg4 arg2:(id)arg5 arg3:(id)arg6 args:(id)arg7;
- (void)sendLogAsync:(id)arg1 eventId:(int)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 args:(id)arg6;
- (_Bool)sendLogSync:(id)arg1 eventId:(int)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 args:(id)arg6;
- (id)obtainConfiguration;
- (_Bool)configBasicParamWithTBConfiguration:(id)arg1;

@end

