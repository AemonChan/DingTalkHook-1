//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTATMonitorBeaconModel : Marshal
{
    _Bool _requireLocation;
    NSString *_uuid;
    NSNumber *_major;
    NSNumber *_minor;
    NSString *_atContext;
}

@property(nonatomic) _Bool requireLocation; // @synthesize requireLocation=_requireLocation;
@property(copy, nonatomic) NSString *atContext; // @synthesize atContext=_atContext;
@property(retain, nonatomic) NSNumber *minor; // @synthesize minor=_minor;
@property(retain, nonatomic) NSNumber *major; // @synthesize major=_major;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
