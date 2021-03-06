//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTSpaceServiceProtocol-Protocol.h"

@class NSString;

@interface DTSpaceServiceImpl : NSObject <DTSpaceServiceProtocol>
{
}

- (_Bool)isOnlineEditDocWithSpaceMode:(id)arg1 isDocReadOnly:(_Bool)arg2 isNormalConversation:(_Bool)arg3;
- (void)saveOnlineDoc:(long long)arg1 fileId:(id)arg2 convId:(id)arg3 success:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)createOnlineDoc:(long long)arg1 fileId:(id)arg2 convId:(id)arg3 mid:(long long)arg4 success:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (_Bool)showCollectFileEntry:(unsigned long long)arg1;
- (id)createCollectFilePageWithConversationId:(id)arg1;
- (id)convertErrorTypeToErrorMsg:(unsigned long long)arg1;
- (void)checkSpaceMessages:(id)arg1 canBeTransmittedToConversation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)canBeSave:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)sendCSpaceUTWithUTValue:(id)arg1 fromStr:(id)arg2 toProperty:(id)arg3;
- (id)generateName:(id)arg1 withSize:(long long)arg2 withExtsion:(id)arg3;
- (_Bool)isShowSpaceImageBubble:(id)arg1;
- (_Bool)isShowSpaceVideoBubble:(id)arg1;
- (void)transferSpaceMode:(id)arg1 toConversation:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)transferSpaceMode:(id)arg1 toSpaceId:(id)arg2 showLoading:(_Bool)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)createDentryPageFromMode:(id)arg1 msgRelatedExtension:(id)arg2 withExtraInfo:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)createDentryPageFromMode:(id)arg1 withExtraInfo:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)saveToDentryWithOrgId:(long long)arg1 fileUrl:(id)arg2 fileName:(id)arg3 fromVC:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)saveToDentryWithDefaultTarget:(long long)arg1 fileUrl:(id)arg2 fileName:(id)arg3 spaceMode:(id)arg4 mailID:(id)arg5 attachment:(id)arg6 fromConversation:(id)arg7 fromVC:(id)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (id)newSpaceModelWithJsonDict:(id)arg1;
- (id)newSpaceModel;
- (void)batchSaveConversationImagesToSpaceWithMessages:(id)arg1 targetSpaceId:(long long)arg2 targetFolderId:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (id)uploadFileToTempSpaceWithFileName:(id)arg1 fileData:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (id)downloadFileWithSpaceId:(long long)arg1 dentryId:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

