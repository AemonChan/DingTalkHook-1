//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTRedEnvelopRecordModel, NSString, OpenDatabase;

@protocol DTRedEnvelopServicePersistenceProtocol <NSObject>
@property(retain, nonatomic) OpenDatabase *dbConnection;
- (unsigned long long)unsendRedEnvelopRecordCount;
- (void)updateRedEnvelopRecordConfirmedBefore:(long long)arg1;
- (DTRedEnvelopRecordModel *)redEnvelopRecordWithBusinessId:(NSString *)arg1;
- (_Bool)saveRedEnvelopRecord:(DTRedEnvelopRecordModel *)arg1;
@end

