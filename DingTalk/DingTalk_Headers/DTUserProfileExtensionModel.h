//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTFriendRequestModel, DTOrgRelationModel, DTUserOverageModel, DTUserPermissionModel, DTUserProfileModel, NSArray;

@interface DTUserProfileExtensionModel : Marshal
{
    _Bool _allowChangeDingTalkId;
    _Bool _isEmailComplete;
    _Bool _partial;
    DTUserProfileModel *_userProfileModel;
    NSArray *_orgEmployees;
    DTUserPermissionModel *_userPermissionModel;
    DTFriendRequestModel *_friendRequestModel;
    DTUserOverageModel *_userOverageModel;
    NSArray *_crmContacts;
    NSArray *_crmContactsV2;
    DTOrgRelationModel *_relationModel;
}

@property(nonatomic) _Bool partial; // @synthesize partial=_partial;
@property(retain, nonatomic) DTOrgRelationModel *relationModel; // @synthesize relationModel=_relationModel;
@property(copy, nonatomic) NSArray *crmContactsV2; // @synthesize crmContactsV2=_crmContactsV2;
@property(copy, nonatomic) NSArray *crmContacts; // @synthesize crmContacts=_crmContacts;
@property(nonatomic) _Bool isEmailComplete; // @synthesize isEmailComplete=_isEmailComplete;
@property(nonatomic) _Bool allowChangeDingTalkId; // @synthesize allowChangeDingTalkId=_allowChangeDingTalkId;
@property(retain, nonatomic) DTUserOverageModel *userOverageModel; // @synthesize userOverageModel=_userOverageModel;
@property(retain, nonatomic) DTFriendRequestModel *friendRequestModel; // @synthesize friendRequestModel=_friendRequestModel;
@property(retain, nonatomic) DTUserPermissionModel *userPermissionModel; // @synthesize userPermissionModel=_userPermissionModel;
@property(copy, nonatomic) NSArray *orgEmployees; // @synthesize orgEmployees=_orgEmployees;
@property(retain, nonatomic) DTUserProfileModel *userProfileModel; // @synthesize userProfileModel=_userProfileModel;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

