//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTContactPickRegisterDelegate-Protocol.h"
#import "DTContactPickSelectedDelegate-Protocol.h"
#import "NSCopying-Protocol.h"

@class DTContactPickModel, NSArray, NSDictionary, NSString, UINavigationController;
@protocol DTContactPickNavigationHandlerDelegate, DTContactPickNavigationHandlerStateDelegate;

@interface DTContactPickNavigationHandler : NSObject <DTContactPickSelectedDelegate, DTContactPickRegisterDelegate, NSCopying>
{
    _Bool _isContactInfoUpdated;
    _Bool _isDeptInfoUpdated;
    _Bool _isConversationInfoUpdated;
    id <DTContactPickNavigationHandlerDelegate> _delegate;
    id <DTContactPickNavigationHandlerStateDelegate> _stateDelegate;
    DTContactPickModel *_pickModel;
    UINavigationController *_pickViewController;
    CDUnknownBlockType _customConfirmBlock;
    CDUnknownBlockType _customCancelBlock;
    NSArray *_observers;
    unsigned long long _selectedType;
    NSDictionary *_interalSelectedDepts;
    NSDictionary *_interalSelectedPersons;
    NSDictionary *_interalSelectedConversations;
    NSDictionary *_interalRequiredDepts;
    NSDictionary *_interalRequiredPersons;
    NSDictionary *_interalRequiredConversations;
    NSDictionary *_interalDisableDepts;
    NSDictionary *_interalDisablePersons;
    NSDictionary *_interalDisableConversations;
    NSDictionary *_internalDeptsSelectedMembers;
    unsigned long long _totalPersonCount;
    unsigned long long _totalDepartsCount;
    unsigned long long _totalConversationsCount;
    unsigned long long _requiredPersonCount;
}

@property(nonatomic) _Bool isConversationInfoUpdated; // @synthesize isConversationInfoUpdated=_isConversationInfoUpdated;
@property(nonatomic) _Bool isDeptInfoUpdated; // @synthesize isDeptInfoUpdated=_isDeptInfoUpdated;
@property(nonatomic) _Bool isContactInfoUpdated; // @synthesize isContactInfoUpdated=_isContactInfoUpdated;
@property(nonatomic) unsigned long long requiredPersonCount; // @synthesize requiredPersonCount=_requiredPersonCount;
@property(nonatomic) unsigned long long totalConversationsCount; // @synthesize totalConversationsCount=_totalConversationsCount;
@property(nonatomic) unsigned long long totalDepartsCount; // @synthesize totalDepartsCount=_totalDepartsCount;
@property(nonatomic) unsigned long long totalPersonCount; // @synthesize totalPersonCount=_totalPersonCount;
@property(copy, nonatomic) NSDictionary *internalDeptsSelectedMembers; // @synthesize internalDeptsSelectedMembers=_internalDeptsSelectedMembers;
@property(copy, nonatomic) NSDictionary *interalDisableConversations; // @synthesize interalDisableConversations=_interalDisableConversations;
@property(copy, nonatomic) NSDictionary *interalDisablePersons; // @synthesize interalDisablePersons=_interalDisablePersons;
@property(copy, nonatomic) NSDictionary *interalDisableDepts; // @synthesize interalDisableDepts=_interalDisableDepts;
@property(copy, nonatomic) NSDictionary *interalRequiredConversations; // @synthesize interalRequiredConversations=_interalRequiredConversations;
@property(copy, nonatomic) NSDictionary *interalRequiredPersons; // @synthesize interalRequiredPersons=_interalRequiredPersons;
@property(copy, nonatomic) NSDictionary *interalRequiredDepts; // @synthesize interalRequiredDepts=_interalRequiredDepts;
@property(copy, nonatomic) NSDictionary *interalSelectedConversations; // @synthesize interalSelectedConversations=_interalSelectedConversations;
@property(copy, nonatomic) NSDictionary *interalSelectedPersons; // @synthesize interalSelectedPersons=_interalSelectedPersons;
@property(copy, nonatomic) NSDictionary *interalSelectedDepts; // @synthesize interalSelectedDepts=_interalSelectedDepts;
@property(nonatomic) unsigned long long selectedType; // @synthesize selectedType=_selectedType;
@property(copy, nonatomic) NSArray *observers; // @synthesize observers=_observers;
@property(copy, nonatomic) CDUnknownBlockType customCancelBlock; // @synthesize customCancelBlock=_customCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType customConfirmBlock; // @synthesize customConfirmBlock=_customConfirmBlock;
@property(nonatomic) __weak UINavigationController *pickViewController; // @synthesize pickViewController=_pickViewController;
@property(retain, nonatomic) DTContactPickModel *pickModel; // @synthesize pickModel=_pickModel;
@property(nonatomic) __weak id <DTContactPickNavigationHandlerStateDelegate> stateDelegate; // @synthesize stateDelegate=_stateDelegate;
@property(nonatomic) __weak id <DTContactPickNavigationHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateConversationInfo;
- (void)updateDepartmentInfo;
- (void)updatePersonInfo;
- (void)updateStatusView;
- (void)closeButtonPressed;
- (void)backButtonPressed;
- (void)conversationHasUnselected:(id)arg1;
- (void)conversationHasSelected:(id)arg1;
- (void)personHasUnselected:(id)arg1;
- (void)personHasSelected:(id)arg1;
- (void)personsHasUnselected:(id)arg1;
- (void)personsHasSelected:(id)arg1;
- (void)departmentsHasUnselected:(id)arg1;
- (void)departmentsHasSelected:(id)arg1;
- (void)departmentHasUnselected:(id)arg1;
- (void)departmentHasSelected:(id)arg1;
- (unsigned long long)departmentSelectedMemberCount:(id)arg1;
- (void)addPickObserver:(id)arg1;
- (_Bool)isConversationRequired:(id)arg1;
- (_Bool)isConversationDisable:(id)arg1;
- (_Bool)isConversationSelected:(id)arg1;
- (_Bool)isDepartmentRequired:(id)arg1;
- (_Bool)isDepartmentDisable:(id)arg1;
- (_Bool)isDepartmentSelected:(id)arg1;
- (_Bool)isPersonHidden:(id)arg1;
- (_Bool)isPersonRequired:(id)arg1;
- (_Bool)isPersonDisable:(id)arg1;
- (_Bool)isPersonSelected:(id)arg1;
- (void)switchPickSelectedType:(unsigned long long)arg1;
- (unsigned long long)pickSelectedType;
- (void)removePickObserver:(id)arg1;
- (id)requiredConversations;
- (id)disableConversations;
- (id)selectedConversations;
- (id)allSelectedConversations;
- (id)requiredDepts;
- (id)disableDepts;
- (id)selectedDepts;
- (id)allSelectedDepts;
- (id)disablePersons;
- (id)requiredPersons;
- (id)selectedPersons;
- (id)allSelectedPersons;
- (void)pickDidCancel;
- (void)memberFromDepartmentWithSuccessBlock:(CDUnknownBlockType)arg1;
- (void)createUidForPersonIfNeedWithSuccessBlock:(CDUnknownBlockType)arg1;
- (void)dealConversationAndPerson;
- (void)dealPersonsOnly;
- (void)cleanAllSelectedData;
- (void)pickDidFinish;
@property(readonly, nonatomic) _Bool isDataUpdated;
- (void)updatePickNavigationController:(id)arg1;
- (void)addSelectedMemberCountForParentDeptsWithPersons:(id)arg1;
- (void)minusSelectedMemberCountForParentDeptsWithPersons:(id)arg1;
- (void)addSelectedMemberCountForParentDeptsWithDepts:(id)arg1;
- (void)minusSelectedMemberCountForParentDeptsWithDepts:(id)arg1;
- (void)removeSelectedDept:(id)arg1;
- (_Bool)addSelectedDept:(id)arg1;
- (void)removeSelectedPerson:(id)arg1;
- (_Bool)addSelectedPerson:(id)arg1;
- (void)removeSelectedConversation:(id)arg1;
- (_Bool)addSelectedConversation:(id)arg1;
- (unsigned long long)selectedAndRequireConversationCount;
- (unsigned long long)selectedAndRequiredDepartmentCount;
- (unsigned long long)selectedAndRequiredPersonCount;
- (unsigned long long)requiredPersonsCount;
- (unsigned long long)selectedPersonsCount;
- (unsigned long long)selectedDeptmentsCount;
- (unsigned long long)selectedConversationCount;
- (void)closePickIfOverLimit;
- (id)initWithPickViewController:(id)arg1 pickModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

