//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactPickSearchHandler.h"

@class DTLoadMoreController, DTSectionItem, NSDictionary, NSOrderedSet, NSString;

@interface DTContactPickListSearchHandler : DTContactPickSearchHandler
{
    _Bool _noMoreAlias;
    _Bool _noMoreUsualContact;
    _Bool _noMoreFriend;
    _Bool _noMoreLocalColleague;
    _Bool _noMoreMobileContact;
    _Bool _noMoreColleague;
    DTSectionItem *_externalSectionItem;
    DTSectionItem *_sectionItem;
    NSOrderedSet *_validUidSet;
    NSDictionary *_index;
    NSDictionary *_externalIndex;
    NSString *_searchText;
    DTLoadMoreController *_loadMoreController;
    long long _startForMoreAlias;
    long long _startForMoreUsualContact;
    long long _startForMoreFriend;
    long long _startForMoreLocalColleague;
    long long _startForMoreMobileContact;
    long long _startForMoreColleague;
}

+ (id)joinAttibutedMobileName:(id)arg1 andNick:(id)arg2;
@property(nonatomic) long long startForMoreColleague; // @synthesize startForMoreColleague=_startForMoreColleague;
@property(nonatomic) long long startForMoreMobileContact; // @synthesize startForMoreMobileContact=_startForMoreMobileContact;
@property(nonatomic) long long startForMoreLocalColleague; // @synthesize startForMoreLocalColleague=_startForMoreLocalColleague;
@property(nonatomic) long long startForMoreFriend; // @synthesize startForMoreFriend=_startForMoreFriend;
@property(nonatomic) long long startForMoreUsualContact; // @synthesize startForMoreUsualContact=_startForMoreUsualContact;
@property(nonatomic) long long startForMoreAlias; // @synthesize startForMoreAlias=_startForMoreAlias;
@property(nonatomic) _Bool noMoreColleague; // @synthesize noMoreColleague=_noMoreColleague;
@property(nonatomic) _Bool noMoreMobileContact; // @synthesize noMoreMobileContact=_noMoreMobileContact;
@property(nonatomic) _Bool noMoreLocalColleague; // @synthesize noMoreLocalColleague=_noMoreLocalColleague;
@property(nonatomic) _Bool noMoreFriend; // @synthesize noMoreFriend=_noMoreFriend;
@property(nonatomic) _Bool noMoreUsualContact; // @synthesize noMoreUsualContact=_noMoreUsualContact;
@property(nonatomic) _Bool noMoreAlias; // @synthesize noMoreAlias=_noMoreAlias;
@property(retain, nonatomic) DTLoadMoreController *loadMoreController; // @synthesize loadMoreController=_loadMoreController;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(copy, nonatomic) NSDictionary *externalIndex; // @synthesize externalIndex=_externalIndex;
@property(copy, nonatomic) NSDictionary *index; // @synthesize index=_index;
@property(copy, nonatomic) NSOrderedSet *validUidSet; // @synthesize validUidSet=_validUidSet;
@property(retain, nonatomic) DTSectionItem *sectionItem; // @synthesize sectionItem=_sectionItem;
@property(retain, nonatomic) DTSectionItem *externalSectionItem; // @synthesize externalSectionItem=_externalSectionItem;
- (void).cxx_destruct;
- (void)updateCellItemWithIdentifier:(id)arg1 isSelect:(_Bool)arg2;
- (void)personHasUnselected:(id)arg1;
- (void)personHasSelected:(id)arg1;
- (id)joinedDepartsNameWithDeparts:(id)arg1 andTitle:(id)arg2;
- (id)fullMobileWithMobile:(id)arg1 countryCode:(id)arg2;
- (id)identifierWithMobileContact:(id)arg1 item:(id)arg2;
- (id)avatarModelWithMobielContact:(id)arg1;
- (id)identifierWithExternalContact:(id)arg1 item:(id)arg2;
- (id)identifierWithEnterpriseCard:(id)arg1 item:(id)arg2;
- (id)avatarModelWithEnterpriseCard:(id)arg1;
- (id)identifierWithContact:(id)arg1 item:(id)arg2;
- (id)avatarModelWithContact:(id)arg1;
- (void)persionSearchCell:(id)arg1 didSelectWithItem:(id)arg2 identifier:(id)arg3;
- (void)persionSearchCell:(id)arg1 didSelectWithItem:(id)arg2;
- (id)showsEnterpriseCardResults:(id)arg1 searchText:(id)arg2;
- (id)showsMobileContacts:(id)arg1 searchText:(id)arg2;
- (id)showsFriends:(id)arg1 searchText:(id)arg2;
- (id)showUsualContacts:(id)arg1 searchText:(id)arg2;
- (id)showsAliasContacts:(id)arg1 searchText:(id)arg2;
- (void)colleagueListWithSearchText:(id)arg1 datasource:(id)arg2 validUidSet:(id)arg3 originalCount:(unsigned long long)arg4 complete:(CDUnknownBlockType)arg5;
- (void)userListWithSearchText:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)dt_searchUserWithSearchText:(id)arg1 offset:(long long)arg2 size:(long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)uidsOfEnterpriseCards:(id)arg1;
- (id)uidsOfUsualContacts:(id)arg1;
- (id)uidsOfContacts:(id)arg1;
- (id)createCellItemsWithPersons:(id)arg1;
- (void)searchExternalContactWithSearchText:(id)arg1;
- (void)searchUserWithSearchText:(id)arg1 offset:(long long)arg2 size:(long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)beginLoadMoreController:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)searchText:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (_Bool)isSearchRequestExpireWithSearchText:(id)arg1;
- (id)emptyViewForViewController:(id)arg1;
- (_Bool)shouldShowEmptyView:(id)arg1;
- (id)loadModelControllerForSearchView:(id)arg1;
- (id)dataSourceForSearchViewController:(id)arg1;
- (void)searchViewWillDestory:(id)arg1;
- (void)searchViewWillShow:(id)arg1;

@end
