//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

#import "DTMyOrgInfoHeaderViewDelegate-Protocol.h"

@class DTApTerminalModel, DTEnterpriseCard, DTMyOrgInfoHeaderView, DTSWUserSummaryModel, NSString;

@interface DTMyOrgInfoViewController : DTTableViewController <DTMyOrgInfoHeaderViewDelegate>
{
    DTEnterpriseCard *_enterpriseCard;
    DTMyOrgInfoHeaderView *_headerView;
    long long _superManagerUid;
    NSString *_managerName;
    DTApTerminalModel *_model;
    DTSWUserSummaryModel *_swUserSummary;
}

@property(retain, nonatomic) DTSWUserSummaryModel *swUserSummary; // @synthesize swUserSummary=_swUserSummary;
@property(retain, nonatomic) DTApTerminalModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *managerName; // @synthesize managerName=_managerName;
@property(nonatomic) long long superManagerUid; // @synthesize superManagerUid=_superManagerUid;
@property(retain, nonatomic) DTMyOrgInfoHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) DTEnterpriseCard *enterpriseCard; // @synthesize enterpriseCard=_enterpriseCard;
- (void).cxx_destruct;
- (void)openWebViewWithUrlString:(id)arg1;
- (void)dingIndexBtnPressed;
- (void)orgManagerLabelPressed;
- (void)orgManageBtnPressed;
- (id)hrmInfoSection;
- (id)personalInfoSection;
- (id)cellItemWithTitle:(id)arg1 content:(id)arg2;
- (void)popBack;
- (void)loadDataSource;
- (void)ayncLoadExtDatas:(CDUnknownBlockType)arg1;
- (void)loadComponents;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

