//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTBizConversation, DTBizRedEnvelopClusterPickingStatus, NSArray, NSString, UIImage;

@interface DTRedEnvelopPickDetailViewItem : NSObject
{
    _Bool _isBindAliPay;
    DTBizConversation *_conversation;
    DTBizRedEnvelopClusterPickingStatus *_pickingStatus;
    UIImage *_themeImage;
    NSArray *_thankTips;
    CDUnknownBlockType _thankTipTapBlock;
    CDUnknownBlockType _showDetailTapBlock;
    CDUnknownBlockType _showMyWalletBlock;
    NSString *_saySomethingTitle;
    NSString *_showDetailTitle;
}

+ (id)buildWithConversation:(id)arg1 pickingStatus:(id)arg2 themeImage:(id)arg3 isBindAliPay:(_Bool)arg4 thankTips:(id)arg5;
@property(copy, nonatomic) NSString *showDetailTitle; // @synthesize showDetailTitle=_showDetailTitle;
@property(copy, nonatomic) NSString *saySomethingTitle; // @synthesize saySomethingTitle=_saySomethingTitle;
@property(copy, nonatomic) CDUnknownBlockType showMyWalletBlock; // @synthesize showMyWalletBlock=_showMyWalletBlock;
@property(copy, nonatomic) CDUnknownBlockType showDetailTapBlock; // @synthesize showDetailTapBlock=_showDetailTapBlock;
@property(copy, nonatomic) CDUnknownBlockType thankTipTapBlock; // @synthesize thankTipTapBlock=_thankTipTapBlock;
@property(copy, nonatomic) NSArray *thankTips; // @synthesize thankTips=_thankTips;
@property(nonatomic) _Bool isBindAliPay; // @synthesize isBindAliPay=_isBindAliPay;
@property(retain, nonatomic) UIImage *themeImage; // @synthesize themeImage=_themeImage;
@property(retain, nonatomic) DTBizRedEnvelopClusterPickingStatus *pickingStatus; // @synthesize pickingStatus=_pickingStatus;
@property(retain, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;

@end

