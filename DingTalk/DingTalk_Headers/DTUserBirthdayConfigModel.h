//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSDate;

@interface DTUserBirthdayConfigModel : Marshal
{
    _Bool _isSetBirthday;
    _Bool _birthdayRemind;
    NSDate *_birthday;
}

@property(retain, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(nonatomic) _Bool birthdayRemind; // @synthesize birthdayRemind=_birthdayRemind;
@property(nonatomic) _Bool isSetBirthday; // @synthesize isSetBirthday=_isSetBirthday;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

