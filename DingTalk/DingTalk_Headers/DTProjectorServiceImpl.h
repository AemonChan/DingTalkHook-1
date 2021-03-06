//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTProjectorModuleServiceProtocol-Protocol.h"

@class NSString;

@interface DTProjectorServiceImpl : NSObject <DTProjectorModuleServiceProtocol>
{
}

+ (id)createLocalAirplayFAQViewController;
+ (id)defaultProjectorName;
+ (_Bool)firstShowGuideAlert;
+ (void)setFirstShowGuideAlert:(_Bool)arg1;
+ (void)showGuideAlertWithImage:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4;
+ (void)jumpProjectorOrgnizationCreationViewController;
+ (id)createSettingModelWithDeviceActiveModel:(id)arg1 IPAddress:(id)arg2 port:(unsigned int)arg3;
+ (id)newSmartDeviceOrgSettingViewControllerWithSettingModel:(id)arg1 deviceTypeCode:(id)arg2;
+ (void)socketActiveWithDeviceID:(id)arg1 activeCode:(id)arg2 IPAddress:(id)arg3 port:(unsigned int)arg4 beginCallback:(CDUnknownBlockType)arg5 completionCallback:(CDUnknownBlockType)arg6;
+ (id)keyForReceivedRemoteDeviceStatusPush;
+ (id)keyForReceivedLocalDeviceIPPush;
+ (id)leboSDKAuthorizeKey;
+ (id)window;
+ (_Bool)currentViewControllerIsConversationListController;
+ (_Bool)isProjectingFunctionEnabled;
+ (_Bool)isProjectingEntranceEnabled;
+ (id)pinyinWithString:(id)arg1;
+ (id)currentSelectedNavigation;
+ (id)currentViewController;
+ (long long)currentUID;
+ (id)allOrganizations;
+ (id)localIP;
+ (id)deserializeLastestSelectedDeviceIds;
+ (void)serializeLatestDeviceId:(id)arg1;
+ (id)deserializeProjectorConnectionModel;
+ (void)serializeProjectorConnectionModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

