//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTChannelOrgModel, NSArray;

@interface DTChannelOrgPageSimpleModel : Marshal
{
    DTChannelOrgModel *_channelOrgModel;
    NSArray *_businessList;
    NSArray *_productTitleList;
}

@property(copy, nonatomic) NSArray *productTitleList; // @synthesize productTitleList=_productTitleList;
@property(copy, nonatomic) NSArray *businessList; // @synthesize businessList=_businessList;
@property(retain, nonatomic) DTChannelOrgModel *channelOrgModel; // @synthesize channelOrgModel=_channelOrgModel;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
