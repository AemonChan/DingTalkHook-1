//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTCallManageCardBottomModel, DTCallManageCardMiddleModel, DTCallManageCardTopModel, NSNumber, NSString;

@interface DTCallManageCardModel : Marshal
{
    _Bool _changeOrgSwitch;
    DTCallManageCardTopModel *_topModel;
    DTCallManageCardMiddleModel *_middleModel;
    DTCallManageCardBottomModel *_bottomModel;
    NSNumber *_cardOrgId;
    NSString *_changeOrgText;
    long long _cardType;
}

@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(copy, nonatomic) NSString *changeOrgText; // @synthesize changeOrgText=_changeOrgText;
@property(nonatomic) _Bool changeOrgSwitch; // @synthesize changeOrgSwitch=_changeOrgSwitch;
@property(retain, nonatomic) NSNumber *cardOrgId; // @synthesize cardOrgId=_cardOrgId;
@property(retain, nonatomic) DTCallManageCardBottomModel *bottomModel; // @synthesize bottomModel=_bottomModel;
@property(retain, nonatomic) DTCallManageCardMiddleModel *middleModel; // @synthesize middleModel=_middleModel;
@property(retain, nonatomic) DTCallManageCardTopModel *topModel; // @synthesize topModel=_topModel;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
