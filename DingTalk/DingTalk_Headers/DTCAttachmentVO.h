//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface DTCAttachmentVO : NSObject
{
    NSString *_name;
    NSString *_size;
    NSString *_filePath;
    NSURL *_contentURL;
    long long _fileType;
    long long _status;
    unsigned long long _totalByte;
    unsigned long long _downloadedByte;
}

@property(nonatomic) unsigned long long downloadedByte; // @synthesize downloadedByte=_downloadedByte;
@property(nonatomic) unsigned long long totalByte; // @synthesize totalByte=_totalByte;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long fileType; // @synthesize fileType=_fileType;
@property(retain, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSString *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1;

@end

