//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PMBaseMessage.h"

@class NSDictionary;

@interface PMBaseCountMsg : PMBaseMessage
{
    NSDictionary *_expression;
}

@property(retain, nonatomic) NSDictionary *expression; // @synthesize expression=_expression;
- (void).cxx_destruct;
- (long long)fromProtocolItem:(id)arg1;
- (id)toProtocolItem;

@end
