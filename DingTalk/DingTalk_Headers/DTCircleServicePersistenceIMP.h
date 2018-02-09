//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTCircleServicePersistenceProtocol-Protocol.h"

@class NSString, OpenDatabase, OpenMDHandler;

@interface DTCircleServicePersistenceIMP : NSObject <DTCircleServicePersistenceProtocol>
{
    OpenDatabase *_dbConnection;
    OpenMDHandler *_mainPostHandler;
    OpenMDHandler *_personalPostHandler;
    OpenMDHandler *_otherPostHandler;
    OpenMDHandler *_commentHandler;
    OpenMDHandler *_noticeHandler;
}

@property(retain, nonatomic) OpenMDHandler *noticeHandler; // @synthesize noticeHandler=_noticeHandler;
@property(retain, nonatomic) OpenMDHandler *commentHandler; // @synthesize commentHandler=_commentHandler;
@property(retain, nonatomic) OpenMDHandler *otherPostHandler; // @synthesize otherPostHandler=_otherPostHandler;
@property(retain, nonatomic) OpenMDHandler *personalPostHandler; // @synthesize personalPostHandler=_personalPostHandler;
@property(retain, nonatomic) OpenMDHandler *mainPostHandler; // @synthesize mainPostHandler=_mainPostHandler;
@property(retain, nonatomic) OpenDatabase *dbConnection; // @synthesize dbConnection=_dbConnection;
- (void).cxx_destruct;
- (id)handlersWithTargetTable:(unsigned long long)arg1;
- (_Bool)readRedDotBeforeCreateAt:(long long)arg1;
- (_Bool)readNoticeBeforeCreateAt:(long long)arg1;
- (_Bool)saveNoticeList:(id)arg1;
- (void)updateCommentFromLocalPostId:(long long)arg1 toPostId:(long long)arg2;
- (id)getFailPostList;
- (void)updatePostId:(long long)arg1 status:(unsigned long long)arg2;
- (void)readNoticeLocally;
- (id)getNoticeWithCursor:(long long)arg1 count:(int)arg2;
- (int)getNoticeUnreadCount;
- (void)deleteCommentWithCommentId:(long long)arg1;
- (void)deleteAllCommentWithPostId:(long long)arg1;
- (void)deleteCommentWithPostId:(long long)arg1;
- (id)getCommentWithCommentId:(long long)arg1;
- (id)getCommentListWithPostId:(long long)arg1;
- (void)saveCommentList:(id)arg1;
- (void)saveComment:(id)arg1;
- (id)getPersonPostListWithStartTime:(long long)arg1 endTime:(long long)arg2 uid:(long long)arg3;
- (id)getMainPostListWithStartTime:(long long)arg1 endTime:(long long)arg2;
- (id)getPersonPostListWithCursor:(long long)arg1 count:(int)arg2 uid:(long long)arg3;
- (id)getMainPostListWithCursor:(long long)arg1 count:(int)arg2;
- (id)getPost:(long long)arg1 targetTable:(unsigned long long)arg2;
- (void)clearAllPersonalPostWithUid:(long long)arg1;
- (void)clearAllMainPost;
- (void)deletePost:(long long)arg1 targetTable:(unsigned long long)arg2;
- (void)savePostList:(id)arg1 targetTable:(unsigned long long)arg2;
- (void)savePost:(id)arg1 targetTable:(unsigned long long)arg2;
- (void)clearDbConnection;
- (void)resetDbConnection:(id)arg1;
- (id)initWithDbConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
