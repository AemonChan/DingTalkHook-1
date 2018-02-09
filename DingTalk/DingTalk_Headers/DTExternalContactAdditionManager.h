//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTNameCardManager, UIAlertController, UIViewController;

@interface DTExternalContactAdditionManager : NSObject
{
    UIViewController *_vc;
    DTNameCardManager *_nameCardManager;
    UIAlertController *_alertController;
}

+ (id)externalContactFromNameCard:(id)arg1;
@property(nonatomic) __weak UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) DTNameCardManager *nameCardManager; // @synthesize nameCardManager=_nameCardManager;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
- (void).cxx_destruct;
- (void)openWebViewWithURL:(id)arg1;
- (void)batchAddExtContactsWithOrgId:(long long)arg1 extContacts:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)addExternalContactOrgId:(long long)arg1 externalContact:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)addExternalContactFromNameCardOrgId:(long long)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)addExternalContactFromMobileOrgId:(long long)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)addExternalContactOrgId:(long long)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)willRotateNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end
