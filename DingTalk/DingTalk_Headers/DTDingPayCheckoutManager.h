//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTDingPayNetworkService;

@interface DTDingPayCheckoutManager : NSObject
{
    DTDingPayNetworkService *_networkService;
}

+ (id)sharedInstance;
@property(retain, nonatomic) DTDingPayNetworkService *networkService; // @synthesize networkService=_networkService;
- (void).cxx_destruct;
- (void)queryBalanceWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)payOrder:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)showCheckoutWithTitle:(id)arg1 amount:(id)arg2 generateOrderBlock:(CDUnknownBlockType)arg3 closeBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end
