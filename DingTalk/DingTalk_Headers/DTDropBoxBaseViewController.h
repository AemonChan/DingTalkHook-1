//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTDropBoxActionProtocol-Protocol.h"
#import "DTLoadMoreDelegate-Protocol.h"
#import "DTTableViewHandlerDelegate-Protocol.h"

@class DTDropBoxListViewHandler, DTDropBoxView, DTLoadMoreController, DTNavigationIconTitleView, DTOneBoxGuideView, DTTableViewDataSource, NSString;

@interface DTDropBoxBaseViewController : DTViewController <DTLoadMoreDelegate, DTTableViewHandlerDelegate, DTDropBoxActionProtocol>
{
    _Bool _needShowNewGuide;
    _Bool _needLoadMore;
    _Bool _isDropBoxNeedAutoResizeHeight;
    DTNavigationIconTitleView *_titleView;
    double _dropBoxHeight;
    double _dropBoxHeaderViewMaxHeight;
    double _dropBoxDefaultBottomOriginY;
    DTTableViewDataSource *_listViewDataSource;
    NSString *_guideTitle;
    DTLoadMoreController *_dropBoxLoadMoreController;
    DTDropBoxView *_dropBoxView;
    DTDropBoxListViewHandler *_listViewHandler;
    DTOneBoxGuideView *_guideView;
}

+ (double)guideViewMaxWidth;
@property(retain, nonatomic) DTOneBoxGuideView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) DTDropBoxListViewHandler *listViewHandler; // @synthesize listViewHandler=_listViewHandler;
@property(retain, nonatomic) DTDropBoxView *dropBoxView; // @synthesize dropBoxView=_dropBoxView;
@property(nonatomic) _Bool isDropBoxNeedAutoResizeHeight; // @synthesize isDropBoxNeedAutoResizeHeight=_isDropBoxNeedAutoResizeHeight;
@property(retain, nonatomic) DTLoadMoreController *dropBoxLoadMoreController; // @synthesize dropBoxLoadMoreController=_dropBoxLoadMoreController;
@property(nonatomic) _Bool needLoadMore; // @synthesize needLoadMore=_needLoadMore;
@property(copy, nonatomic) NSString *guideTitle; // @synthesize guideTitle=_guideTitle;
@property(nonatomic) _Bool needShowNewGuide; // @synthesize needShowNewGuide=_needShowNewGuide;
@property(retain, nonatomic) DTTableViewDataSource *listViewDataSource; // @synthesize listViewDataSource=_listViewDataSource;
@property(readonly, nonatomic) double dropBoxDefaultBottomOriginY; // @synthesize dropBoxDefaultBottomOriginY=_dropBoxDefaultBottomOriginY;
@property(nonatomic) double dropBoxHeaderViewMaxHeight; // @synthesize dropBoxHeaderViewMaxHeight=_dropBoxHeaderViewMaxHeight;
@property(nonatomic) double dropBoxHeight; // @synthesize dropBoxHeight=_dropBoxHeight;
@property(retain, nonatomic) DTNavigationIconTitleView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillLayoutSubviews;
- (void)tableViewDidScroll:(id)arg1;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (void)loadMoreData;
- (void)beginDrop;
- (id)dropBoxListView;
- (_Bool)isLoadedDropBox;
- (_Bool)isGuideShowed;
- (void)setDropBoxBgColor:(id)arg1 titleColor:(id)arg2;
- (void)dropBoxScrollPosition:(double)arg1;
- (void)changeDropBoxHeight:(double)arg1;
- (void)updateDropBoxAutoResizeHeight;
- (id)initializeLoadMoreController;
- (void)setDropBoxHeaderViewTitle:(id)arg1 subTitle:(id)arg2 icon:(id)arg3;
- (void)pan:(id)arg1;
- (void)tap:(id)arg1;
- (void)setDropBoxHeaderView:(id)arg1;
- (void)dismissGuideView;
- (void)showGuideViewIfNeed;
- (void)dropboxDidClose;
- (void)dropboxDidOpen;
- (void)dropboxIsOpened;
- (void)closeDropBox;
- (void)showDropBox;
- (void)removeDropBox;
- (void)addDropBox;
- (id)getDropBoxView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (void)_initialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

