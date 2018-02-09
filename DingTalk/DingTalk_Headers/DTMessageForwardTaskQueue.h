//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSRecursiveLock;

@interface DTMessageForwardTaskQueue : NSObject
{
    NSOperationQueue *_queue;
    NSMutableDictionary *_taskTable;
    NSMutableDictionary *_callbackTable;
    long long _taskIndex;
    NSRecursiveLock *_lock;
}

+ (void)setGlobalTaskQueue:(id)arg1;
+ (id)globalTaskQueue;
- (void).cxx_destruct;
- (void)doCallbackOnTaskSetDidFinish:(CDUnknownBlockType)arg1 succeed:(_Bool)arg2;
- (void)didFinishWithMessage:(id)arg1 succeed:(_Bool)arg2;
- (void)didSendMessage:(id)arg1 succeed:(_Bool)arg2;
- (void)didSendMessageFailed:(id)arg1;
- (void)didSendMessageSucced:(id)arg1;
- (void)notityDidFinishTask:(id)arg1;
- (void)addTasks:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeMessageSendingObserver;
- (void)addMessageSendingObserver;
- (void)dealloc;
- (id)init;

@end
