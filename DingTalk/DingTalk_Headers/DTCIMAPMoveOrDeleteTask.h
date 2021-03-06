//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPITask.h"

@class DTCFolder, DTIMAPAccount, NSArray;

@interface DTCIMAPMoveOrDeleteTask : BLBaseAPITask
{
    NSArray *_mails;
    DTCFolder *_folder;
    DTCFolder *_destFolder;
    long long _itemAction;
    DTIMAPAccount *_imapAccount;
}

@property(retain, nonatomic) DTIMAPAccount *imapAccount; // @synthesize imapAccount=_imapAccount;
@property(nonatomic) long long itemAction; // @synthesize itemAction=_itemAction;
@property(retain, nonatomic) DTCFolder *destFolder; // @synthesize destFolder=_destFolder;
@property(retain, nonatomic) DTCFolder *folder; // @synthesize folder=_folder;
@property(retain, nonatomic) NSArray *mails; // @synthesize mails=_mails;
- (void).cxx_destruct;
- (unsigned long long)canRetryWithError:(id)arg1;
- (void)processMove;
- (void)processSetReadOrFlagStatus;
- (void)processDelete;
- (void)process;
- (void)dealloc;

@end

