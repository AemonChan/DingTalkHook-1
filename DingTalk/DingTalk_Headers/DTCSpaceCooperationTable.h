//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "DTCSpaceCoorperationDataSourceDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTBizConversation, DTCSpaceCoorperationDataSource, DTDentryChooserConfig, DTOrganization, NSString;
@protocol DTCSpaceCooperationTableDelegate;

@interface DTCSpaceCooperationTable : UITableView <DTCSpaceCoorperationDataSourceDelegate, UITableViewDataSource, UITableViewDelegate>
{
    id <DTCSpaceCooperationTableDelegate> _cooperationTableDelegate;
    DTCSpaceCoorperationDataSource *_coorperationDataSource;
    NSString *_token;
    DTDentryChooserConfig *_chooserConfig;
    DTBizConversation *_conversationChoosedIn;
    DTOrganization *_defaultOrganization;
    CDUnknownBlockType _CSpaceCoorperationGotoBlock;
}

@property(copy, nonatomic) CDUnknownBlockType CSpaceCoorperationGotoBlock; // @synthesize CSpaceCoorperationGotoBlock=_CSpaceCoorperationGotoBlock;
@property(retain, nonatomic) DTOrganization *defaultOrganization; // @synthesize defaultOrganization=_defaultOrganization;
@property(retain, nonatomic) DTBizConversation *conversationChoosedIn; // @synthesize conversationChoosedIn=_conversationChoosedIn;
@property(retain, nonatomic) DTDentryChooserConfig *chooserConfig; // @synthesize chooserConfig=_chooserConfig;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) DTCSpaceCoorperationDataSource *coorperationDataSource; // @synthesize coorperationDataSource=_coorperationDataSource;
@property(nonatomic) __weak id <DTCSpaceCooperationTableDelegate> cooperationTableDelegate; // @synthesize cooperationTableDelegate=_cooperationTableDelegate;
- (void).cxx_destruct;
- (void)didHideBarSort:(_Bool)arg1;
- (void)didReloadIndexPaths:(id)arg1;
- (void)didLoadSectionDataSuccess:(unsigned long long)arg1;
- (void)didLoadSectionDataFailed:(unsigned long long)arg1 forReason:(id)arg2;
- (void)didUpdateItemsWithInsert:(id)arg1 andDelete:(id)arg2;
- (void)didLoadOrganizationInfoSection:(unsigned long long)arg1;
- (void)didLoadSharedSpaces;
- (void)toggleOrganizationSpacesExpandedClick:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)setCellStyle:(id)arg1 enable:(_Bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

