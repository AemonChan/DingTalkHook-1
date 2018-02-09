//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BLSpaceEntry, DTBizCSpaceInfo, NSAttributedString, NSString;

@interface DTCSpaceMainModel : NSObject
{
    _Bool _redHot;
    _Bool _redNew;
    NSString *_iconName;
    NSString *_name;
    NSString *_brief;
    NSAttributedString *_orgInfo;
    BLSpaceEntry *_spaceEntry;
    DTBizCSpaceInfo *_spaceInfo;
    unsigned long long _type;
    NSString *_folderId;
    NSString *_jumpURL;
    NSString *_comment;
}

@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(copy, nonatomic) NSString *jumpURL; // @synthesize jumpURL=_jumpURL;
@property(nonatomic) _Bool redNew; // @synthesize redNew=_redNew;
@property(copy, nonatomic) NSString *folderId; // @synthesize folderId=_folderId;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) DTBizCSpaceInfo *spaceInfo; // @synthesize spaceInfo=_spaceInfo;
@property(retain, nonatomic) BLSpaceEntry *spaceEntry; // @synthesize spaceEntry=_spaceEntry;
@property(nonatomic) _Bool redHot; // @synthesize redHot=_redHot;
@property(copy, nonatomic) NSAttributedString *orgInfo; // @synthesize orgInfo=_orgInfo;
@property(copy, nonatomic) NSString *brief; // @synthesize brief=_brief;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (void).cxx_destruct;

@end
