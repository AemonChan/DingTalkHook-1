//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAPluginBase.h"

@class DTWebPersistence;

@interface DTLAPUtilLocalStorage : LAPluginBase
{
    DTWebPersistence *_webPersistence;
}

+ (id)pluginExactName;
@property(retain, nonatomic) DTWebPersistence *webPersistence; // @synthesize webPersistence=_webPersistence;
- (void).cxx_destruct;
- (void)removeItem:(id)arg1 to:(id)arg2;
- (void)__exported__removeItem:(id)arg1 to:(id)arg2;
- (void)setItem:(id)arg1 to:(id)arg2;
- (void)__exported__setItem:(id)arg1 to:(id)arg2;
- (void)getItem:(id)arg1 to:(id)arg2;
- (void)__exported__getItem:(id)arg1 to:(id)arg2;
- (void)disposePlugin;
- (void)pluginInitialize;

@end
