//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface DTGlobalSearchResultsSection : NSObject
{
    _Bool _isSections;
    NSString *_title;
    long long _identifier;
    NSArray *_results;
}

+ (id)sectionWithTitle:(id)arg1 identifier:(long long)arg2 results:(id)arg3;
+ (id)section;
@property(nonatomic) _Bool isSections; // @synthesize isSections=_isSections;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
