//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAPluginBase.h"

@interface DTLAPBizContactManage : LAPluginBase
{
}

+ (id)pluginExactName;
- (void)queryManageContactTmpCode:(id)arg1 data:(id)arg2 corpId:(id)arg3 agentId:(id)arg4 response:(id)arg5;
- (void)notifyUserAndueryTmpCode:(id)arg1 data:(id)arg2 corpId:(id)arg3 agentId:(id)arg4 confirmText:(id)arg5 confirmTitle:(id)arg6 response:(id)arg7;
- (void)manageContactAlert:(id)arg1 to:(id)arg2;
- (void)__exported__manageContactAlert:(id)arg1 to:(id)arg2;

@end

