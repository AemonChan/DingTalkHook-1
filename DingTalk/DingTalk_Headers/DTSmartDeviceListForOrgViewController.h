//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTOrganization, NSArray;

@interface DTSmartDeviceListForOrgViewController : DTTableViewController
{
    DTOrganization *_org;
    NSArray *_dataSouce;
}

@property(copy, nonatomic) NSArray *dataSouce; // @synthesize dataSouce=_dataSouce;
@property(retain, nonatomic) DTOrganization *org; // @synthesize org=_org;
- (void).cxx_destruct;
- (void)userVisibleSmartDeviceWithOrgId:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)loadDataSourceFromServer;
- (void)openWebViewWithUrlString:(id)arg1;
- (void)loadDataSource;
- (void)loadComponent;
- (void)viewDidLoad;

@end
