//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APBAuthEngine, NSMutableDictionary, NSString, UIActivityIndicatorView, UIViewController, ZimRemoteLog;
@protocol ZimVerifyFactorDelegate;

@interface ZimVerifyFactor : NSObject
{
    id <ZimVerifyFactorDelegate> _delegate;
    NSString *_zimId;
    NSMutableDictionary *_extInfo;
    APBAuthEngine *_bioAuthEngine;
    UIViewController *_rootVC;
    UIActivityIndicatorView *_progressView;
    ZimRemoteLog *_monitor;
}

@property(retain, nonatomic) ZimRemoteLog *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) UIActivityIndicatorView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIViewController *rootVC; // @synthesize rootVC=_rootVC;
@property(retain, nonatomic) APBAuthEngine *bioAuthEngine; // @synthesize bioAuthEngine=_bioAuthEngine;
@property(retain, nonatomic) NSMutableDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(copy, nonatomic) NSString *zimId; // @synthesize zimId=_zimId;
@property(nonatomic) __weak id <ZimVerifyFactorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)dictFromJsonStr:(id)arg1;
- (id)dictionaryToJson:(id)arg1;
- (void)addResult:(_Bool)arg1 reason:(id)arg2 onResultDict:(id)arg3;
- (void)quitVerifyWith:(id)arg1;
- (void)quitBioAuthEngineWithblock:(CDUnknownBlockType)arg1;
- (void)quitVerifyWithReason:(id)arg1 andResponse:(unsigned long long)arg2;
- (void)validatewithoutcallback;
- (void)validate;
- (void)startBioAuthVerifywithProtocol:(id)arg1 andExtInfo:(id)arg2;
- (void)startStandardVerify;
- (id)initWithZimId:(id)arg1 andExtInfo:(id)arg2;

@end
