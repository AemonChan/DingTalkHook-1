//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTWorkPageNavigator, NSString;

@protocol DTWorkPageNavigatorDelegate <NSObject>

@optional
- (_Bool)pageNavigator:(DTWorkPageNavigator *)arg1 tipMicroAPPWithAppID:(NSString *)arg2 tips:(NSString *)arg3;
- (_Bool)pageNavigator:(DTWorkPageNavigator *)arg1 openMicroAPPWithAppID:(NSString *)arg2 agentId:(NSString *)arg3 ddParams:(NSString *)arg4;
- (_Bool)pageNavigator:(DTWorkPageNavigator *)arg1 openAppSuiteWithGroupID:(NSString *)arg2 ddParams:(NSString *)arg3;
@end

