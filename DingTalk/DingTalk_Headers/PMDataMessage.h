//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PMInfoMessage.h"

@class NSData;

@interface PMDataMessage : PMInfoMessage
{
    NSData *_data;
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)fromDictionary:(id)arg1;
- (id)toDictionary;
- (void)fromMKTInfoMessage:(id)arg1;

@end
