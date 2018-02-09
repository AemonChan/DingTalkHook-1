//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPITask.h"

@class DTCFolder, NSString;

@interface BLBatchSetReadTask : BLBaseAPITask
{
    _Bool _setRead;
    _Bool _needFixRemain;
    DTCFolder *_folder;
    NSString *_folderId;
    long long _folderType;
    long long _batchSize;
    long long _totalRemain;
    long long _currentRemain;
}

+ (id)excludeCopyProperties;
+ (id)excludeProperties;
@property(nonatomic) _Bool needFixRemain; // @synthesize needFixRemain=_needFixRemain;
@property(nonatomic) long long currentRemain; // @synthesize currentRemain=_currentRemain;
@property(nonatomic) long long totalRemain; // @synthesize totalRemain=_totalRemain;
@property(nonatomic) long long batchSize; // @synthesize batchSize=_batchSize;
@property(nonatomic) _Bool setRead; // @synthesize setRead=_setRead;
@property(nonatomic) long long folderType; // @synthesize folderType=_folderType;
@property(copy, nonatomic) NSString *folderId; // @synthesize folderId=_folderId;
- (void).cxx_destruct;
- (void)doNext;
- (void)process;
- (id)init;
@property(retain, nonatomic) DTCFolder *folder; // @synthesize folder=_folder;

@end
