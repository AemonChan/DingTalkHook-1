//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTIndustryGroupStatModel : Marshal
{
    NSString *_encryptCid;
    NSNumber *_orgCount;
    NSNumber *_bossCount;
    NSNumber *_industryCount;
    NSNumber *_activeUserCount;
    NSNumber *_industryUserCount;
}

@property(retain, nonatomic) NSNumber *industryUserCount; // @synthesize industryUserCount=_industryUserCount;
@property(retain, nonatomic) NSNumber *activeUserCount; // @synthesize activeUserCount=_activeUserCount;
@property(retain, nonatomic) NSNumber *industryCount; // @synthesize industryCount=_industryCount;
@property(retain, nonatomic) NSNumber *bossCount; // @synthesize bossCount=_bossCount;
@property(retain, nonatomic) NSNumber *orgCount; // @synthesize orgCount=_orgCount;
@property(copy, nonatomic) NSString *encryptCid; // @synthesize encryptCid=_encryptCid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

