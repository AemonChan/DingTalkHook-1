//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSString;

@interface DTManageContactAlertModel : Marshal
{
    _Bool _needConfirm;
    NSString *_confirmText;
    NSString *_confirmTitle;
}

@property(copy, nonatomic) NSString *confirmTitle; // @synthesize confirmTitle=_confirmTitle;
@property(copy, nonatomic) NSString *confirmText; // @synthesize confirmText=_confirmText;
@property(nonatomic) _Bool needConfirm; // @synthesize needConfirm=_needConfirm;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

