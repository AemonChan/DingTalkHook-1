//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface DTSettingCacheContext : NSObject
{
    NSMutableDictionary *_context;
}

+ (id)shareContext;
@property(retain, nonatomic) NSMutableDictionary *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)calcFinalKey:(id)arg1 key:(id)arg2;
- (void)setDtSettingValue:(id)arg1 forModule:(id)arg2 key:(id)arg3 cacheSaveType:(long long)arg4;
- (void)setDtSettingValue:(id)arg1 forModule:(id)arg2 key:(id)arg3;
- (id)dtSettingValueForModule:(id)arg1 key:(id)arg2 cacheSaveType:(long long)arg3;
- (id)dtSettingValueForModule:(id)arg1 key:(id)arg2;
- (void)clearMemory;
- (id)init;

@end

