//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactPickConversationHandler.h"

@class DTCMail;

@interface DTContactPickConversationInMailHandler : DTContactPickConversationHandler
{
    _Bool _existDTUser;
    DTCMail *_mail;
}

@property(nonatomic) _Bool existDTUser; // @synthesize existDTUser=_existDTUser;
@property(retain, nonatomic) DTCMail *mail; // @synthesize mail=_mail;
- (void).cxx_destruct;
- (void)createNewConversation;
- (void)handleChoosedMailReceiver:(id)arg1 msgSenderEmail:(id)arg2;
- (void)selectMailReceiver;
- (id)filterMailRelatedConvSectionFromRecentContactSection:(id)arg1;
- (void)loadDataSource;

@end
